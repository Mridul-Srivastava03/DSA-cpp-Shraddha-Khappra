#include<iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cout<<"Enter a number: ";
    cin>>num;
    int i = 0;
    while(i <= num){
        sum += i;
        i += 3;
    }
    cout<<"Sum = "<<sum;
    return 0;
}