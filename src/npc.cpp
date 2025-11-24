#include "../include/npc.h"

BaseNPC::BaseNPC(std::string name, int x, int y, double attack_range)
: name(name), position(Position{x, y}), attack_range(attack_range) {};

void BaseNPC::_say_hello(std::string _class)
{
    std::cout << "Hi, I'm " << _class << " " << name << "at: ("
    << position.x << ", " << position.y << ")\n";
}

Position BaseNPC::get_position()
{
    return position;
}
