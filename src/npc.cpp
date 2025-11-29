#include "../include/npc.h"

double BaseNPC::distance(Position pos1, Position pos2)
{
    int dx = pos1.x - pos2.x;
    int dy = pos1.y - pos2.y;
    return sqrt(dx*dx + dy*dy);
}

BaseNPC::BaseNPC(std::string name, int x, int y, double attack_range)
    : name(name), position(Position{x, y}), attack_range(attack_range) {}

void BaseNPC::_say_hello(std::string _class)
{
    std::cout << "Hi, I'm " << _class << " " << name << "at: ("
    << position.x << ", " << position.y << ")\n";
}

bool BaseNPC::is_near(BaseNPC& other)
{
    return distance(position, other.position) <= attack_range;
}
