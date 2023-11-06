#include<iostream>
using namespace std;
int main(){
    float a, b;
    cin>>a>>b;
    int n;
    cin>>n;
    int aa[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>aa[i][j];        
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x = a*aa[i][j] +b;
            aa[i][j] = max(x, 0);
            aa[i][j] = min(aa[i][j], 255);
            cout<<aa[i][j]<<" ";
        }
        cout<<endl;
    }
}