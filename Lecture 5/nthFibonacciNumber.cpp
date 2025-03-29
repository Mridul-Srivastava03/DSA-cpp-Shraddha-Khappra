#include<iostream>
using namespace std;
int fibonacciNum(int n){
    if(n <= 1)
        return n;
    int a = 0, b = 1, temp;
    for(int i = 2; i <= n; i++){
        temp = b;
        b += a;
        a = temp;
    }
    return b;
}
int main()
{
    cout<<fibonacciNum(0);
    
    return 0;
}