#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cout<<"* ";
        }
        for(int j = i+1; j < n; j++){
            cout<<"  ";
        }
        for(int j = 0; j < n-i-1; j++){
            cout<<"  ";
        }
        for(int j = n-i; j < n+1; j++){
            cout<<"* ";
        }
        cout<<'\n';
    }
    for(int i = n-1; i >= 0; i--){
        for(int j = 0; j < i+1; j++){
            cout<<"* ";
        }
        for(int j = i+1; j < n; j++){
            cout<<"  ";
        }
        for(int j = 0; j < n-i-1; j++){
            cout<<"  ";
        }
        for(int j = n-i; j < n+1; j++){
            cout<<"* ";
        }
        cout<<'\n';
    }
    return 0;
}