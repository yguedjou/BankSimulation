//
// Created by phucvu on 15/09/2019.
//

#ifndef BANKSIMULATION_CLIENT_H
#define BANKSIMULATION_CLIENT_H
class Client {
protected:
    double _heureArrivee;
public:
    explicit Client(double ha);
    double heureArrivee();
};

#endif //BANKSIMULATION_CLIENT_H
