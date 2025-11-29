#pragma once
#include <cmath>
#include <iostream>
#include <string>

class Elf;
class Knight;
class Rogue;

class BaseNPC
{
private:
    using Position = struct {
        int x;
        int y;
    };
    static double distance(Position pos1, Position pos2);

protected:
    Position position;
    std::string name;
    double attack_range;

public:
    BaseNPC(std::string name, int x, int y, double attack_range);
    void _say_hello(std::string _class);
    bool is_near(BaseNPC& other);
    virtual void say_hello(void) =0;
    virtual bool defeat(BaseNPC& other);
};

class Elf : public BaseNPC
{
public:
    Elf(std::string name, int x, int y, double attack_range);
    void say_hello(void) override;
    bool defeat(Elf& other);
    bool defeat(Knight& other);
    bool defeat(Rogue& other);
};

class Knight : public BaseNPC
{
public:
    Knight(std::string name, int x, int y, double attack_range);
    void say_hello(void) override;
    bool defeat(Elf& other);
    bool defeat(Knight& other);
    bool defeat(Rogue& other);
};

class Rogue : public BaseNPC
{
public:
    Rogue(std::string name, int x, int y, double attack_range);
    void say_hello(void) override;
    bool defeat(Elf& other);
    bool defeat(Knight& other);
    bool defeat(Rogue& other);
};
