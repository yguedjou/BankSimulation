//
// Created by phucvu on 15/09/2019.
//

#include "FileAttente.h"

FileAttente::FileAttente(Banque *b) {
_banque = b;
_longeurMax = 0;
_longeurMoyenne = 0;
_sommeTempsAttente = 0;
}

int FileAttente::longeurMax() {
    return _longeurMax;
}

bool FileAttente::estVide() {
    return _clients.empty();
}

double FileAttente::tempsMoyenneAttente() {
    return _sommeTempsAttente / _banque->nbClientsServis();
}

void FileAttente::ajouter(Client c) {
    int clientSize = _clients.size();
    _clients.push_back(c);
    if (clientSize >= _longeurMax)
        _longeurMax++;
}

Client FileAttente::retirer() {
    Client c = _clients.front();
    _clients.pop_front();
    return c;
}