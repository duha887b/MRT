#include <stdio.h>




int get_fib_rek(unsigned int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    return get_fib_rek(n - 1) + get_fib_rek(n - 2);


}


int main() {
    int n;
    printf("Input n: ");
    scanf("%d",&n);
    printf("%d", get_fib_rek(n));
    return 0;

 }
