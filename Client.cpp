//
// Created by phucvu on 15/09/2019.
//

#include "Client.h"
Client::Client(double ha) {
    _heureArrivee = ha;
}

double Client::heureArrivee() {
    return _heureArrivee;
}