#include<iostream>
using namespace std;

int main()
{
    int a[100], size;
    cout<<"Enter the size of array: ";
    cin>>size;
    for(int i = 0; i < size; i++){
        cout<<"Enter "<<i+1<<" element: ";
        cin>>a[i];
    }
    for(int i = 0; i < size/2; i++){
        int temp = a[i];
        a[i] = a[size-1-i];
        a[size-1-i] = temp;
    }
    for(int i = 0; i < size; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}