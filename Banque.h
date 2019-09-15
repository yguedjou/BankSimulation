//
// Created by phucvu on 14/09/2019.
//

#ifndef BANKSIMULATION_BANQUE_H
#define BANKSIMULATION_BANQUE_H
#include "Banque.h"

class Banque {
protected:
    int _nbClientsServis;
    double _dureePrevue;
    double _dureeReelle;
    double _tempsMoyenEntreArrivees;

public:
    Banque(double dp, int nbc, double *tms, double tma);
    Caissier unCaissierLibre();
    int nbClientsServis();
    double dureePrevue();
    double dureeeReelle;
    double tempsMoyenEntreArrivee();
};

#endif //BANKSIMULATION_BANQUE_H
