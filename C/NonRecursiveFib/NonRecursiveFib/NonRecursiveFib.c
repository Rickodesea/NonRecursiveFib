static int f0;
static int f1;

void nrFib_init(){
    f0 = -1;
    f1 = +1;
}

int nrFib_nextFib(){
    const int fib = f0 + f1;
    f0 = f1;
    f1 = fib;

    return fib;
}
