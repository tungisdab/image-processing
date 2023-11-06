#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];
    int k=127;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int m = 0;
        for(int j=0;j<n;j++){
            int x = a[i][j]-m;
            int newa = x<k ? 0:255;
            cout<<newa<<" ";
            m = newa - x;
        }
        cout<<endl;
    }
}