//
// Created by phucvu on 15/09/2019.
//

#ifndef BANKSIMULATION_SED_H
#define BANKSIMULATION_SED_H

#include "Event.h"
#include <deque>
using namespace std;


class SED {
protected:
    const double _heure;
    deque<Event*> _events;
public:
    void add(Event* e);
    void run();
    double heure();
};


#endif //BANKSIMULATION_SED_H
