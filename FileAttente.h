//
// Created by phucvu on 15/09/2019.
//

#ifndef BANKSIMULATION_FILEATTENTE_H
#define BANKSIMULATION_FILEATTENTE_H


#include "Banque.h"
#include "Client.h"
using namespace std;
#include <iostream>
#include <deque>

class FileAttente {
protected:
    Banque* _banque;
    bool _estVide;
    int _longeurMax;
    double _longeurMoyenne;
    double _tempsMoyenAttente;
    double _sommeTempsAttente;
    deque<Client> _clients;
public:
    FileAttente();
    explicit FileAttente(Banque* b);
    ~FileAttente();
    bool estVide();
    int longeurMax();
    double longeurMoyenne();
    double tempsMoyenneAttente();
    void ajouter(Client c);
    Client retirer();
};


#endif //BANKSIMULATION_FILEATTENTE_H
