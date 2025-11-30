#include "include/dungeon_editor.h"
#include "include/visitor.h"
#include <iostream>
#include <string>

int main() {
    DungeonEditor editor;

    for (int i = 0; i < 10; i++)
        editor.add_any_npc();

    std::cout << "Before battle:\n";
    editor.print_npcs();

    std::cout << "\nBattle...\n";
    editor.start_battle(100);

    std::cout << "\nAfter battle:\n";
    editor.print_npcs();

    return 0;
}
