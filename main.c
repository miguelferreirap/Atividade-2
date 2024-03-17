#include <stdio.h>
#include "libmatematica.h"

int main(){
    float x = 50;
    printf(" A tangente do angulo %.2f e igual a %.2f, o seno igual a %.2f e o cosseno igual a %.2f",x,tangente(x),seno(x),cosseno(x));
}
