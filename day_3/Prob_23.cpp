#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int X,Y;
    cin>>X>>Y;
    int count= 0;
    long long int current = X;
    while (current <= Y) {
        count++;
        current *= 2;
    }
    cout<<count<<endl;
      
    return 0;
}