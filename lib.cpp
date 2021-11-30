#include "lib.h"
#include <iostream>
void numeroprimo(int a, int i, int &conta){
    int div=0;
    i++;
    if(a>1 and a>i){
        div= a%1;
        if(div==0){
            conta++;
        }else
        {
         numeroprimo(a,i, &conta);
        }
    }
}
