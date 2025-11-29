#include "../include/npc.h"

Knight::Knight(std::string name, int x, int y, double attack_range)
    : BaseNPC(name, x, y, attack_range) {};

void Knight::say_hello(void)
{
    _say_hello("Knight");
}

bool Knight::defeat(Elf &other)
{
    return false;
}

bool Knight::defeat(Knight& other)
{
    return false;
}

bool Knight::defeat(Rogue& other)
{
    return is_near(other);
}