#include "../include/npc.h"

Rogue::Rogue(std::string name, int x, int y, double attack_range)
: BaseNPC(name, x, y, attack_range) {};

void Rogue::say_hello(void)
{
    _say_hello("Rogue");
}

bool Rogue::defeat(Rogue& other)
{
    return false;
}

bool Rogue::defeat(Knight& other)
{
    return false;
}

bool Rogue::defeat(Elf &other)
{
    return distance(position, other.get_position()) < attack_range;
}