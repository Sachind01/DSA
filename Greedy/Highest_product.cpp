#include<iostream>
using namespace std;

int partition(int arr[], int low, int high){
    int i = low-1, pivot = arr[high], temp =0;
    for(int j= low; j<high; j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}

void quicksort(int arr[], int low, int high){
    if(low<high){
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);
    }
}

int highest_product(int arr[], int n){
    quicksort(arr, 0, n-1);
    int high1 = arr[0] * arr[1] * arr[n-1];
    int high2 = arr[n-1] * arr[n-2] * arr[n-3];

    int maximum = max(high1, high2);
    return maximum;
}

int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<highest_product(arr, n)<<"\n";
    return 0;
}