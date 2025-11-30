#pragma once
#include "random_generator.h"
#include "npc.h"
#include <memory>
#include <string>
#include <vector>

class NpcFactory
{
private:
    RandomGenerator rng;
    int size_x;
    int size_y;
    double attack_range;
    int counter[3];
    int get_position_x(void);
    int get_position_y(void);
    std::string get_uname(std::string base_name);

public:
    NpcFactory();
    NpcFactory(double attack_range, int size_x, int size_y);
    std::shared_ptr<BaseNPC> create_npc(const NpcType& npc);
    void save_to_file(std::vector<std::shared_ptr<BaseNPC>>& npcs, std::string& filename);
    std::vector<std::shared_ptr<BaseNPC>> load_from_file(std::string& filename);
};