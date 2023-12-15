// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    long long n;
    scanf("%lld", &n);
    printf("%lld ", n);
    while (true) {
        if (n == 1)
            break;
        if ((n % 2) == 0)
            n = n / 2;
        else
            n = (n * 3) + 1;

        printf("%lld ", n);
    }
    return 0;
}