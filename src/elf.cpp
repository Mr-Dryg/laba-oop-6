#include "../include/npc.h"
#include "../include/visitor.h"

Elf::Elf(std::string name, int x, int y, double attack_range)
    : BaseNPC(name, x, y, attack_range) {};

void Elf::accept(Visitor& visitor)
{
    visitor.visit(*this);
}

std::ostream& operator<<(std::ostream& os, const Elf& npc)
{
    return os << "[Elf]" << static_cast<BaseNPC>(npc);
}