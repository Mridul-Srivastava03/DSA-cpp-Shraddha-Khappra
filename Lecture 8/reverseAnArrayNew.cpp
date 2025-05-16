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
    int i = 0;
    int j = size - 1;
    while (i < j){
        swap(a[i++], a[j--]);
    }
    for(int i = 0; i < size; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}