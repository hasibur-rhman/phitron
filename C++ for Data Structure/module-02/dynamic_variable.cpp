#include<bits/stdc++.h>

using namespace std;
int * fun(){
    int *a = new int;
    *a = 100;
    return a;
}
int main(){
   
//    int *a = new int;
//    *a = 10;
//    cout << *a <<endl;
      int *p = fun();
      cout<<*p<<endl;
    return 0;
}