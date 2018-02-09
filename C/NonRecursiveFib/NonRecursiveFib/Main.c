#include <stdio.h>
#include "Main.h"

int main(){
    const int numberOfFibs = 20;

    nrFib_init();

    for(int i = 0; i < numberOfFibs; i ++){
        printf("fib (%d) : %d\n", i, nrFib_nextFib());
    }
}
