#include "npc.h"
#include <fstream>
#include <string>

class Observer
{
protected:
    std::string get_log(BaseNPC& killer, BaseNPC& victim);
public:
    virtual void update(int value) = 0;
};

class TerminalObserver : public Observer
{
public:
    void update(BaseNPC& killer, BaseNPC& victim);
};

class LogObserver : public Observer
{
private:
    std::ofstream file;

public:
    LogObserver();
    LogObserver(std::string filename);
    void update(BaseNPC& killer, BaseNPC& victim);
    ~LogObserver();
};