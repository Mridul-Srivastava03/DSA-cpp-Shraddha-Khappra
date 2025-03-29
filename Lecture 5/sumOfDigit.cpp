#include<iostream>
using namespace std;
int sumOfDigit(int n){
    int rem, sum = 0;
    while(n > 0){
        rem = n%10;
        sum += rem;
        n = n/10;
    }
    return sum;
}
int main()
{
    cout<<sumOfDigit(145);
    return 0;
}