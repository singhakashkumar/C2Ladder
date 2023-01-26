#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<"1 0";
        }
        else if(n==2){
            cout<<"0 1";
        }
        else{
            int x = n/3, y = ((n-x)>>1);
            if(x+2*y == n)
                cout<<x<<" "<<y;
            else
                cout<<x+1<<" "<<y;
        }
        cout<<"\n";
    }
    return 0;
}