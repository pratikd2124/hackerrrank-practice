#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    int arr[100];
    cin>>n;
    
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<n; i++){
        if(arr[i] < 38){
            cout<<arr[i]<<endl;
        }
        else if(arr[i]>=38){
            int c = arr[i] % 5;
            if(c>=3) {arr[i] += (5-c);}
            cout<<arr[i]<<endl;
        }
    }
    
}
