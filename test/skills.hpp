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
static ankerl::unordered_dense::map<dcon::skill_id::value_base_t, std::string> name;
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

