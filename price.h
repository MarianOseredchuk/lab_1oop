#ifndef PRICE_H
#define PRICE_H

#include <iostream>
using namespace std;

struct Price {
    int hryvnias;
    short kopiykas;
};

void add(Price& a, const Price& b);
void multiply(Price& a, int quantity);
void roundTo10(Price& price);
void print(const Price& price);
void processPrices(const string& filename);

#endif 
