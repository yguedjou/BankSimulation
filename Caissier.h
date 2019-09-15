//
// Created by phucvu on 12/09/2019.
//

#ifndef BANKSIMULATION_CAISSIER_H
#define BANKSIMULATION_CAISSIER_H



#include "Banque.h"
#include "Client.h"

class Caissier {
protected:
    int _nbClientsServis;
    double _tauxOccuptaion;
    bool _estLibre;
    double _tempsMoyenService;
    Banque* _banque;
    Client* _clientOccupe; // Client actuel
public:
    explicit Caissier(double tms, Banque* bq);
    ~Caissier();
    int nbClientsServis();
    bool estLibre();
    void attendre();
    double tauxOccupation();
    void servir(Client c);
};

#endif //BANKSIMULATION_CAISSIER_H
