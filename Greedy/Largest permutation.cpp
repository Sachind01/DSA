#include<iostream>
#include<algorithm>

using namespace std;

void largest_permutation(int arr[], int n, int b){

    int i=0;
    int temp = 0;
    while(b>0 && i<n){
        int max_index = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]>arr[max_index]){
                max_index = j;
            }
        }

        if(max_index!=i){
            temp = arr[i];
            arr[i] = arr[max_index];
            arr[max_index] = temp;
            b--;
        }
        i++;
    }
    for(int j=0; j<n; j++){
        cout<<arr[j]<<" ";
    }    
}

int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n; 

    int arr[n];
    cout<<"Enter the array elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int b;
    cout<<"Enter the maximum permutations allowed"<<endl;
    cin>>b;

    largest_permutation(arr, n, b);
    
    return 0;
}