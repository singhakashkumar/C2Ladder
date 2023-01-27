#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
        sort(v.begin(), v.end());
        bool flag = true;
        for(int i=0; i<n-1; i++){
            if(v[i+1]-v[i]>1){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
    return 0;
}