#pragma once
#include "objects.hpp"
#include "unordered_dense.h"
namespace skill {
static const dcon::skill_id clothier = dcon::skill_id {0};
static const dcon::skill_id weaving = dcon::skill_id {1};
static const dcon::skill_id cooking = dcon::skill_id {2};
static const dcon::skill_id skinning = dcon::skill_id {3};
static const dcon::skill_id woodworking = dcon::skill_id {4};
static const dcon::skill_id leatherworking = dcon::skill_id {5};
static const dcon::skill_id carpenter = dcon::skill_id {6};
static const dcon::skill_id bowmaking = dcon::skill_id {7};
static const dcon::skill_id fletching = dcon::skill_id {8};
static const dcon::skill_id bone_carving = dcon::skill_id {9};
static const dcon::skill_id cordwaining = dcon::skill_id {10};
static const dcon::skill_id smith = dcon::skill_id {11};
static const dcon::skill_id tanning = dcon::skill_id {12};
static const dcon::skill_id hunting = dcon::skill_id {13};
static const dcon::skill_id gathering = dcon::skill_id {14};
static const dcon::skill_id fishing = dcon::skill_id {15};
static const dcon::skill_id woodcutting = dcon::skill_id {16};
static const dcon::skill_id travelling = dcon::skill_id {17};
static const dcon::skill_id ranged = dcon::skill_id {18};
static const dcon::skill_id evasion = dcon::skill_id {19};
static const dcon::skill_id blocking = dcon::skill_id {20};
static const dcon::skill_id onehanded = dcon::skill_id {21};
static const dcon::skill_id twohanded = dcon::skill_id {22};
static const dcon::skill_id polearms = dcon::skill_id {23};
static const dcon::skill_id unarmed = dcon::skill_id {24};
static const dcon::skill_id fighting = dcon::skill_id {25};
static const dcon::skill_id magic = dcon::skill_id {26};
static const dcon::skill_id alchemy = dcon::skill_id {27};
static const dcon::skill_id enchanting = dcon::skill_id {28};
static const dcon::skill_id battle_magic = dcon::skill_id {29};
extern ankerl::unordered_dense::map<dcon::skill_id::value_base_t, std::string> name;
void load_data(dcon::data_container& state);
}

