#pragma once
#include <cmath>
#include <iostream>
#include <ostream>
#include <random>
#include <string>
#include <system_error>

class Visitor;

class BaseNPC
{
private:
    struct Position{
        int x;
        int y;
    };
    static double distance(Position pos1, Position pos2);

protected:
    Position position;
    std::string name;

public:
    BaseNPC(std::string name, int x, int y, double attack_range);
    bool is_near(BaseNPC& other, double attack_range);
    void set_attack_range(double attack_range);
    friend std::ostream& operator<<(std::ostream& os, const Position& position);
    friend std::ostream& operator<<(std::ostream& os, const BaseNPC& npc);
    virtual void accept(Visitor& visitor);
};

class Elf : public BaseNPC
{
public:
    Elf(std::string name, int x, int y, double attack_range);
    friend std::ostream& operator<<(std::ostream& os, const Elf& npc);
    void accept(Visitor& visitor) override;
};

class Knight : public BaseNPC
{
public:
    Knight(std::string name, int x, int y, double attack_range);
    friend std::ostream& operator<<(std::ostream& os, const Knight& npc);
    void accept(Visitor& visitor) override;
};

class Rogue : public BaseNPC
{
public:
    Rogue(std::string name, int x, int y, double attack_range);
    friend std::ostream& operator<<(std::ostream& os, const Rogue& npc);
    void accept(Visitor& visitor) override;
};
