//
// Created by dustin on 24.11.2021.
//
#include <stdio.h>

int get_fib_iter(unsigned int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        unsigned int fib_n = 0;
        unsigned int fib_n1 = 1;
        unsigned int fib;

        for (int i = n - 1; i > 0; i--) {
            fib = fib_n1 + fib_n;
            fib_n = fib_n1;
            fib_n1 = fib;
        }
        return fib;

    }
}

int main(){
    int n;
    printf("Input n: ");
    scanf("%d",&n);
    printf("%d", get_fib_iter(n));
    return 0;
}