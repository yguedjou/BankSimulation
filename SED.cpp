//
// Created by phucvu on 15/09/2019.
//

#include "SED.h"

void SED::add(Event *e) {
    _events.insert(e);
}

void SED::run() {
    while(_events.size()) {
        Event *e = *(_events.begin());
        _events.erase(_events.begin())
        _heure = e->heure();
        e -> traiter();
        delete e;
    }
}

double SED::heure() {
    return _heure;
}