#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);

    stringstream ss(s);

    string word;
    int found = 0;
    while (ss>>word)
    {
       if(word=="Jessica"){
        found = 1;
        break;
       }
    }
    if(found){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}