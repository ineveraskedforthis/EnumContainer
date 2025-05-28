#include "objects.hpp"
#include "unordered_dense.h"
#include "./test/skills.hpp"
namespace skill {
void load_data(dcon::data_container& state) {
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 1.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Clothier";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 1.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Weaving";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 0.50f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Cooking";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 1.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Skinning";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 1.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Woodworking";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 1.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Leatherworking";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 1.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Carpentry";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 1.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Bowmaking";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 1.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Fletching";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 1.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Bone carving";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 1.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Cordwaining";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 3.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Smithing";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 1.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Tanning";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 3.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Hunting";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 2.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Gathering";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 2.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Fishing";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 5.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Woodcutting";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 5.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Travelling";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 1.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Sniping";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 2.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Evading";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 3.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Blocking";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 5.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "One handed weapons";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 5.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Two handed weapons";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 5.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Polearms";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 5.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Unarmed";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 8.00f);
        state.skill_set_magic_bonus(id, 0.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Fighting";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 0.00f);
        state.skill_set_magic_bonus(id, 10.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Magic";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 0.00f);
        state.skill_set_magic_bonus(id, 2.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Alchemy";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 0.00f);
        state.skill_set_magic_bonus(id, 4.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Enchanting";
    }
    {
        auto id = state.create_skill();
        state.skill_set_strength_bonus(id, 1.00f);
        state.skill_set_magic_bonus(id, 10.00f);
        state.skill_set_fighting(id, false);
        state.skill_set_crafting(id, false);
        name[id.value] = "Battle magic";
    }
}
}

