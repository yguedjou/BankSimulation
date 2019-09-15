//
// Created by phucvu on 14/09/2019.
//

#include "Caissier.h"
#include "Poisson.h"

#include <iostream>
using namespace std;

Caissier::Caissier(double tms, Banque* bq) {
    _nbClientsServis = 0;
    _estLibre = true;
    _tauxOccuptaion = 0;
    _tempsMoyenService = tms;
    _banque = bq;
}

void Caissier::servir(Client c) {
    _nbClientsServis++;
    _estLibre = false;
    double duree = Poisson::next(_tempsMoyenService);
    //double tempsEvent = _banque->time() + duree;
    _tauxOccuptaion += duree;
}

double Caissier::tauxOccupation() {
    return 0; //TODO
}

int Caissier::nbClientsServis() {
    return _nbClientsServis;
}

bool Caissier::estLibre() {
    return _estLibre;
}

void Caissier::attendre() {
    _estLibre = true;
}

