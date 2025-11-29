#pragma once
#include "random_generator.h"
#include "npc.h"

enum class NPC {elf, knight, rogue};

class NpcFactory
{
private:
    RandomGenerator rng;
    int size_x;
    int size_y;
    double attack_range;

    int get_position_x(void)
    {
        return rng.get_int(0, size_x);
    }

    int get_position_y(void)
    {
        return rng.get_int(0, size_y);
    }

public:
    NpcFactory();
    NpcFactory(double attack_range, int size_x, int size_y);
    BaseNPC* factory_method(const NPC& npc);
};