#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            cout<<"  ";
        }
        cout<<"* ";
        for(int j = 1; j < 2*i; j++){
            cout<<"  ";
        }
        if (i > 0)
            cout<<"* ";
        cout<<'\n';
    }
    for(int i = n-2; i >= 0; i--){
        for (int j = 0; j < n-i-1; j++){
            cout<<"  ";
        }
        cout<<"* ";
        for(int j = 1; j < 2*i; j++){
            cout<<"  ";
        }
        if (i > 0)
            cout<<"* ";
        cout<<'\n';
    }
    return 0;
}