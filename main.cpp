#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int n;
    cout << "Inserire un numero: " << endl;
    cin >> n;
    if (n <= 1){
        cout << "numero non primo";
    }else {
        if (funzione(n) == 1) {
            cout << "Numero Primo " n;
        } else {
            cout << "numero non primo";
        }
    }
    return 0;
}
