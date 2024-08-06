/*
Condition: Given n bulbs - either on(1) or off(0)
            If the ith bulb is turning on then all the bulbs at the right are flipped
            Find the minimum possible switches to turn on all the bulbs
*/

//Solution

#include<iostream>
using namespace std;

void minimum_possible_switches(int n, int arr[]){
    int count=0;

    for(int i=0; i<=n; i++){ 
        if(arr[i]%2==1 && count%2==0){
            continue;
        }
        else if((arr[i]%2==0 && count%2==1) || (arr[i]%2==1 && count%2==0)){
            count++;
        }

        else{
            continue;
        }
    }

    cout<<"minimum possible switches = "<<count<<"\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int n;
    cout<<"Enter the size of the array"<<"\n";

    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    minimum_possible_switches(n, arr);

    return 0;
}

