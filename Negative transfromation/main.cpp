#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j] = 255 - a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}