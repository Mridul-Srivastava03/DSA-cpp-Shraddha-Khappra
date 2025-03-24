#include<iostream>
using namespace std;

int main()
{
    int num;
    bool isPrime = true;
    cout<<"Enter a number: ";
    cin>>num;

    if(num == 1)
        cout<<num<<" is neither prime nor composite.";
    else{
        for(int i = 2; i * i <= num; i++){
            if(num % i == 0){
                isPrime = false;
                break;
            }
        } 
        if(isPrime == true)
            cout<<num<<" is prime.";
        else
            cout<<num<<" is composite.";
    }
    return 0;
}