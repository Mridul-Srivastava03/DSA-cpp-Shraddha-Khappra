#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        for (int j = 1; j < n-i; j++){
            cout<<"  ";
        }
        for (int j = 1; j <= i+1; j++){
            cout<<j<<" ";
        }
        for(int j = i; j > 0; j--){
            cout<<j<<" ";
        }
        cout<<'\n';
    }   
    return 0;
}