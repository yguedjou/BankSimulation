//
// Created by phucvu on 15/09/2019.
//

#ifndef BANKSIMULATION_POISSON_H
#define BANKSIMULATION_POISSON_H

/*******************************
 * Generateur aleatoire de nombre reels positifs suivant une loi de Poisson.
 * la loyenne est fixee par le parametre de la methode de classe next().
 * par defaut, la moyenne est 1.0
 *******************************/

#include <math.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

class Poisson {

public:
    // permet d'avoir des resultats differents a chaque fois
    // ou de forcer une meme serie aleatoire (param. seed)
    static void init(int seed = 0) {
        srandom(seed ? seed : getpid());
    }
    static double next(double moy = 1.0) {
        return -log(((double)random()/RAND_MAX))*moy;
    }
};

#endif //BANKSIMULATION_POISSON_H
