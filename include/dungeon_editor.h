#pragma once
#include "npc.h"
#include "observer.h"
#include <memory>
#include <vector>

class DungeonEditor
{
private:
    std::vector<std::shared_ptr<BaseNPC>> npcs;
    std::vector<std::unique_ptr<Observer>> observers;
}