#include "../include/npc.h"
#include "../include/visitor.h"

Knight::Knight(std::string name, int x, int y, double attack_range)
    : BaseNPC(name, x, y, attack_range) {};

void Knight::accept(Visitor& visitor)
{
    visitor.visit(*this);
}

std::ostream& operator<<(std::ostream& os, const Knight& npc)
{
    return os << "[Knight]" << static_cast<BaseNPC>(npc);
}