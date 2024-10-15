#include<iostream>

int fibonacci(int n){ /* f(n) = f(n-1) + f(n-2) */
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, fib = 0;
    for (int i = 0; i < n ; i++)
    {
        fib = a + b;

        a = b;
        b = fib;
    }
    return fib;
}

int main(){
    int n;
    std::cout <<"Entrer le nombre de terme de la suite de Fibonacci à afficher: ";
    std::cin >> n;

    std::cout << "Suite de Fibonacci au terme " << n <<" est :" << std::endl;
    for (int i = 0; i < n ; i++)
    {
        std::cout << "Fibonacci(" << i << ") = " << fibonacci(i) << " ";
        std::cout << std::endl;
    }

    return 0;
}