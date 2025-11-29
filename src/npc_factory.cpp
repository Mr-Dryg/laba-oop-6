#include "../include/npc_factory.h"
#include "../include/npc.h"

NpcFactory::NpcFactory()
    : NpcFactory(5, 25, 25) {}

NpcFactory::NpcFactory(double attack_range, int size_x, int size_y)
    : attack_range(attack_range), size_x(size_x), size_y(size_y) {}

BaseNPC* NpcFactory::factory_method(const NPC& npc)
{
    switch (npc) {
    case NPC::elf:
        return new Elf("Elf", get_position_x(), get_position_y(), attack_range);
    case NPC::knight:
        return new Knight("Khight", get_position_x(), get_position_y(), attack_range);
    case NPC::rogue:
        return new Rogue("Rogue", get_position_x(), get_position_y(), attack_range);
    }
}