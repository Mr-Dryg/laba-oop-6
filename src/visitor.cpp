#include "../include/visitor.h"

Visitor::Visitor(double attack_range, Observer* observer, std::vector<std::shared_ptr<BaseNPC>>* npcs)
    : attack_range(attack_range), observer(observer), npcs(npcs) {}

void Visitor::set_current_npc(std::shared_ptr<BaseNPC> npc)
{
    cur_npc = npc;
}

void Visitor::visit(Elf& other)
{
    
}

void Visitor::visit(Knight& other)
{
    
}

void Visitor::visit(Rogue& other)
{
    
}
