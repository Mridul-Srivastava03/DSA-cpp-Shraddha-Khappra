#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int binomialCoefficient(int n, int r){
    return factorial(n) / (factorial(r) * factorial(n-r));
}
int main()
{
    cout<<binomialCoefficient(10,5);
    return 0;
}