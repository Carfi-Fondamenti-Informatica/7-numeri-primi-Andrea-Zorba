#include <iostream>
using namespace std;
#include "lib.h"

int main() {
    int a=0, ris;
    cin >> a;
    ris= funzione(a);
    if (ris==1){
        cout << "numero primo" << endl;
    }else{
        cout << "numero non primo" << endl;
    }
    return 0;
}
