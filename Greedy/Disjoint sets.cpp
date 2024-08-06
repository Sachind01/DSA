#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int max_disjoint_sets(const vector<pair<int, int>> &arr, int n){
    int prev_start = arr[0].first, prev_end = arr[0].second;
    int count = 0;
    for(int i=0; i<n; i++){
        int s = arr[i].first, e = arr[i].second;
        if(s == prev_end){
            continue;
        }
        else{
            count++;
            prev_start = s, prev_end = e;
        }
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;

    vector<pair<int, int>>arr(n);
    cout<<"Enter the array pairs"<<endl;

    for(int i=0; i<n; i++){
        cin>>arr[i].first>>arr[i].second;
    }

    sort(arr.begin(), arr.end());

    for(int j=0; j<n; j++){
        cout<<"("<<arr[j].first<<","<<arr[j].second<<")"<<endl;
    }
    /*
    Or you can use for(const auto &p : arr){
        cout<<"("<<p.first<<","<<p.second<<")"<<endl;
    }
    */

    cout<<"The maximum number of disjoint sets = "<<max_disjoint_sets(arr, n)<<endl;
    return 0;
}
