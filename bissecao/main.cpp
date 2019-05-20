#include <iostream>
#include <math.h>
#include <string>
#include "prglib.h"

using namespace prglib;
using namespace std;


float f(float x){
    return (cos(x) - (2 * pow(x, 3)));
}

int main(int argc, char * argv[]) {
    float epsilon = 0;
    int a = 0, b = 0;

    cout << "Digite um valor para a precisão (ε): ";
    cin >> epsilon;

    cout << "Digite o extremo inferior do intervalo (a): ";
    cin >> a;

    cout << "Digite o extremo superior do intervalo (b): ";
    cin >> b;

    cout << "Usando o método da bisseção para encontrar a raíz da função \033[1;96mcos(x) - 2x³ = 0\033[0m:" << endl;
    printf("Usando ε = \033[1;96m%f\033[0m, a = \033[1;96m%d\033[0m e b = \033[1;96m%d\033[0m.\n", epsilon, a, b);

    cout << endl;
 
    cout << "f(a) = " << "cos(" << a << ") - 2·" << a << "³ = " << f(a) << endl; 
    cout << "f(b) = " << "cos(" << b << ") - 2·" << b << "³ = " << f(b) << endl;
    cout << "f(a)·f(b) = " << "f(" << a << ")·f(" << b << ") = " << f(a)*f(b) << endl;

    cout << endl;

    if ((b - a) < epsilon) {
         cout << "X0 = " << (b - a) << " é a raíz procurada." << endl;
         return 0;

    } else cout << "Como a diferença dos extremos do intervalo não foi menor que o erro, o processo continua:" << endl;
    
//    for (int k = 1; c)

    return 0;
}
