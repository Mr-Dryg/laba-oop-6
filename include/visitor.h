#pragma once
#include "npc.h"
#include "observer.h"
#include <memory>

class Visitor
{
public:
    virtual void visit(Elf& elf) = 0;
    virtual void visit(Knight& knight) = 0;
    virtual void visit(Rogue& rogue) = 0;
};

class BattleVisitor : public Visitor
{
private:
    std::shared_ptr<BaseNPC> cur_npc;
    std::shared_ptr<Observer> observer;
    double attack_range;
    std::unique_ptr<std::vector<std::shared_ptr<BaseNPC>>> npcs;

public:
    BattleVisitor(double attack_range, Observer* observer, std::vector<std::shared_ptr<BaseNPC>>* npcs);
    void set_current_npc(std::shared_ptr<BaseNPC> npc);
    void visit(Elf& other) override;
    void visit(Knight& other) override;
    void visit(Rogue& other) override;
};