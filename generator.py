"""
    Maps csv-like tables (with a few restrictions) to:
    C++ headers with definitions of enums and declarations of helper functions
"""

import sys

def do_the_thing(input_file_path, output_file_path, container_header_name):
    lines = []
    
    with open(input_file_path, "r", encoding="utf8") as table:
        lines = table.read().splitlines()
    
    headers = lines[0].strip().split(",")

    object_name = headers[0]
    cpp_header = "#pragma once\n"
    cpp_header += "#include \"" + container_header_name + "\"\n"
    cpp_header += "#include \"unordered_dense.h\"\n"

    cpp_header += f"namespace {object_name} {{\n"

    for i in range(1, len(lines)):
        name = lines[i].strip().split(",")[0]
        cpp_header += f"static const dcon::{object_name}_id {name} = dcon::{object_name}_id {{{i - 1}}};\n"

    #prepare strings containers

    for i in range(1, len(headers)):
        if headers[i].startswith("STRING"):
            cpp_header += f"static ankerl::unordered_dense::map<dcon::{object_name}_id::value_base_t, std::string> {headers[i][7:]};\n"

    cpp_header += "void load_data(dcon::data_container& state) {\n"

    for i in range(1, len(lines)):
        data = lines[i].strip().split(",")
        cpp_header += "    {\n"
        cpp_header += f"        auto id = state.create_{headers[0]}();\n"
        for j in range(1, len(headers)):
            x = data[j]
            if headers[j].startswith("STRING"):
                cpp_header += f"        {headers[j][7:]}[id.value] = {x};\n"
            elif headers[j].startswith("BIT"):
                if x == 1:
                    x = "true"
                else:
                    x = "false"
                cpp_header += f"        state.{headers[0]}_set_{headers[j][4:]}(id, {x});\n"
            else:
                xf = float(x)
                cpp_header += f"        state.{headers[0]}_set_{headers[j]}(id, {xf:.2f}f);\n"
        cpp_header += "    }\n"
    cpp_header += "}\n"
    cpp_header += "}\n" 
    with open(output_file_path, "w", encoding="utf8") as generated_file:
        print(cpp_header,file=generated_file)

do_the_thing(sys.argv[1], sys.argv[2], sys.argv[3])
