#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, arr[1000000];
    cin>>n;
    int ls,hs, c = 0, f=0;
    
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    ls=arr[0];
    hs=arr[0];
    for(int i = 1; i < n;i++){
        if(arr[i] > hs){
            hs = arr[i];
            c++;
        }
        else if(arr[i] < ls){
            ls = arr[i];
            f++;
        }
        
    }
    cout<<c<<" "<<f;
}
