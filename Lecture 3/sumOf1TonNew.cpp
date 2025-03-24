#include<iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cout<<"Enter the number: ";
    cin>>num;
    int i = 1;
    while(i <= num){
        sum += i;
        i++;
    }
    cout<<"The sum till "<<num<<": "<<sum;
    return 0;
}