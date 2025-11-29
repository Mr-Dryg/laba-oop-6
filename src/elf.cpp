#include "../include/npc.h"

Elf::Elf(std::string name, int x, int y, double attack_range)
    : BaseNPC(name, x, y, attack_range) {};

void Elf::say_hello(void)
{
    _say_hello("Elf");
}

bool Elf::defeat(Elf& other)
{
    return false;
}

bool Elf::defeat(Knight& other)
{
    return is_near(other);
}

bool Elf::defeat(Rogue& other)
{
    return false;
}