#include<iostream>
using namespace std;
int largest(int a[], int size){
    int large = INT32_MIN;
    for(int i = 0; i < size; i++){
        if(a[i] > large)
            large = a[i];
    }
    return large;
}
int smallest(int a[], int size){
    int small = INT32_MAX;
    for(int i = 0; i < size; i++){
        if(a[i] < small)
            small = a[i];
    }
    return small;
}
int main()
{
    int a[100], size;
    cout<<"Enter the size of array: ";
    cin>>size;
    for(int i = 0; i < size; i++){
        cout<<"Enter "<<i+1<<" element: ";
        cin>>a[i];
    }
    cout<<"Largest element among the given array "<<largest(a, size)<<"\n";
    cout<<"Smallest element among the given array "<<smallest(a, size)<<'\n';
    return 0;
}