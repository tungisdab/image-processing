#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    double nguong = 127;
    double du = 0;
    double b =0;
    double a[n+1][n+1];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(nguong>=a[i][j])
                b=0;
            else
                b=255;
            cout<<(int)b<<" ";
            double e = b-a[i][j];
            a[i][j+1]=a[i][j+1]-e*(7.0/16);
            a[i+1][j-1]=a[i+1][j-1]-e*(3.0/16);
            a[i+1][j]=a[i+1][j]-e*(5.0/16);
            a[i+1][j+1]=a[i+1][j+1]-e*(1.0/16);
        }
        cout<<endl;
    }
}