#include "../include/npc.h"

double BaseNPC::distance(Position pos1, Position pos2)
{
    int dx = pos1.x - pos2.x;
    int dy = pos1.y - pos2.y;
    return sqrt(dx*dx + dy*dy);
}

BaseNPC::BaseNPC(std::string name, int x, int y, double attack_range)
    : name(name), position(Position{x, y}), alive(true) {}

bool BaseNPC::is_near(BaseNPC& other, double attack_range)
{
    return distance(position, other.position) <= attack_range;
}

bool BaseNPC::is_alive()
{
    return alive;
}

void BaseNPC::dies()
{
    alive = false;
}

std::ostream& operator<<(std::ostream& os, const BaseNPC::Position& position)
{
    return os << "(" << position.x << ", " << position.y << ")";
}

std::ostream& operator<<(std::ostream& os, const BaseNPC& npc)
{
    return os << "'" << npc.name << "' at " << npc.position;
}