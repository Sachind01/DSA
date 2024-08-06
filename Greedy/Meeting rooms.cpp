#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int meeting_rooms(const vector<pair<int, int>>&arr, int n){
    int prev_start = arr[0].first, prev_end = arr[0].second;
    int count = 0;

    for(int i=0; i<n; i++){
        int s = arr[i].first, e = arr[i].second;

        if(s == prev_start || s == prev_end){
            continue;
        }
        else if(s>prev_end || s>prev_start){
            count++;
            prev_start = s, prev_end = e;
        }
        continue;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    vector<pair<int, int>>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i].first>>arr[i].second;
    }

    sort(arr.begin(), arr.end());

    for(int i=0; i<n; i++){
        cout<<"["<<arr[i].first<<","<<arr[i].second<<"]"<<endl;
    }

    cout<<meeting_rooms(arr, n);
    return 0;
}