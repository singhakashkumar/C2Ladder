#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, odd=0;
        cin>>n;
        for(int i=0; i<2*n; i++){
            int ele;
            cin>>ele;
            if(ele&1){
                odd++;
            }
        }
        //cout<<odd<<" ";
        if(odd==n){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}