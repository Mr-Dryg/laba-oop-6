#pragma once
#include <cmath>
#include <iostream>
#include <string>

using Position = struct {
    int x;
    int y;
};

double distance(Position pos1, Position pos2)
{
    int dx = pos1.x - pos2.x;
    int dy = pos1.y - pos2.y;
    return sqrt(dx*dx + dy*dy);
}

class Rogue;
class Knight;
class Elf;

class BaseNPC
{
protected:
    Position position;
    std::string name;
    double attack_range;

public:
    BaseNPC(std::string name, int x, int y, double attack_range);

    virtual void say_hello(void) =0;

    void _say_hello(std::string _class);

    Position get_position();

    virtual bool defeat(Rogue& other) =0;
    virtual bool defeat(Knight& other) =0;
    virtual bool defeat(Elf& other) =0;
};

class Rogue : public BaseNPC
{
public:
    Rogue(std::string name, int x, int y, double attack_range);

    void say_hello(void) override;

    bool defeat(Rogue& other) override;

    bool defeat(Knight& other) override;

    bool defeat(Elf &other) override;
};

class Knight : public BaseNPC
{
public:
    Knight(std::string name, int x, int y, double attack_range);

    void say_hello(void) override;

    bool defeat(Rogue& other) override;

    bool defeat(Knight& other) override;

    bool defeat(Elf &other) override;
};

class Elf : public BaseNPC
{
public:
    Elf(std::string name, int x, int y, double attack_range);

    void say_hello(void) override;

    bool defeat(Rogue& other) override;

    bool defeat(Knight& other) override;

    bool defeat(Elf &other) override;
};

