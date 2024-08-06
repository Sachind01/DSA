#include<iostream>
#include <stack>
#include <algorithm>

using namespace std;

bool is_balanced(const string &s){
    stack <char>st;
    for(char c: s){
        if(c == '(' || c == '[' || c == '{'){
            st.push(c);
        }
        else{
            if(st.empty()){
                return false;
            }
            if(c == '(' && st.top() != ')'){
                return false;
            }
            if(c == '[' && st.top() != ']'){
                return false;
            }
            if(c == '{' && st.top() != '}'){
                return false;
            }
        }
    }
    return st.empty();
}
int main(){
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    cout<<(is_balanced ? "Balanced" : "Not Balanced")<<endl;
    return 0;
}