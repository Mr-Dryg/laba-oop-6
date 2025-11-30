#include "npc.h"
#include <fstream>
#include <string>

class Observer
{
public:
    virtual void update(BaseNPC& killer, BaseNPC& victim) = 0;
};

class TerminalObserver : public Observer
{
public:
    void update(BaseNPC& killer, BaseNPC& victim) override;
};

class LogObserver : public Observer
{
private:
    std::ofstream file;

public:
    LogObserver();
    LogObserver(std::string filename);
    void update(BaseNPC& killer, BaseNPC& victim) override;
    ~LogObserver();
};