#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (a[i][j]> k)
                a[i][j] = 255;
            else
                a[i][j] = 0;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}