#include "../include/observer.h"
#include <iostream>

void TerminalObserver::update(BaseNPC& killer, BaseNPC& victim)
{
    std::cout << killer << " killed " << victim << '\n';
}

LogObserver::LogObserver() : LogObserver("log.txt") {}

LogObserver::LogObserver(std::string filename) : file(filename) {}

void LogObserver::update(BaseNPC& killer, BaseNPC& victim)
{
    file << killer << " killed " << victim << '\n';
}

LogObserver::~LogObserver()
{
    file.close();
}