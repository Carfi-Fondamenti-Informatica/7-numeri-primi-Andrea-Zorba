#include "lib.h"

int funzione(int a){
    int  divisori=1, divisori_interi=0;

    while(divisori_interi<=1 && divisori<=a/2) {
        if(a%divisori==0){
            divisori_interi++;
        }divisori++;}

    if (divisori_interi==1)
    {
        return 1;
    } else
    {
        return 0;
    }
}
