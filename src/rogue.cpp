#include "../include/npc.h"
#include "../include/visitor.h"

Rogue::Rogue(std::string name, int x, int y, double attack_range)
    : BaseNPC(name, x, y, attack_range) {};

void Rogue::accept(Visitor& visitor)
{
    visitor.visit(*this);
}

std::ostream& operator<<(std::ostream& os, const Rogue& npc)
{
    return os << "[Rogue]" << static_cast<BaseNPC>(npc);
}