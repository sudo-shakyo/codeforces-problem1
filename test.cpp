#include <iostream>
#define log(x) std::cout << x << std::endl
#define input(x) std::cin >> x

void chickencows() {
    int n;
    input(n);
    
    if (n % 2 != 0) 
    {
        log(0);
    } 
    else 
    {
        log((n / 4) + 1);
    }
}

int main() {
    int t;
    input(t);
    while (t--)
    {
        chickencows();
    }
    return 0;
}