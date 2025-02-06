#include <iostream>
#include "neuronio_relu.hpp"

int main() {
    // Caso 1
    vector<double> entradas1 = {0.3, 2.0};
    vector<double> pesos1 = {0.2, 0.4};
    double bias1 = -1.5;
    NeuronioReLU neuronio1(pesos1, bias1);
    cout << "Saída Caso 1: " << neuronio1.predict(entradas1) << endl;

    // Caso 2
    vector<double> entradas2 = {0.3, 2.0};
    vector<double> pesos2 = {0.2, 0.4};
    double bias2 = -0.5;
    NeuronioReLU neuronio2(pesos2, bias2);
    cout << "Saída Caso 2: " << neuronio2.predict(entradas2) << endl;

    return 0;
}