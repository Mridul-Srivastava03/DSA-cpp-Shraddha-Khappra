#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i = 2; i <= n; i++){
        if (isPrime(i) == 1)
            cout<<i<<"\n";
    }
    return 0;
}