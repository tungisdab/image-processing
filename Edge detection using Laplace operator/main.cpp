#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int laplace[3][3] ={{0, -1, 0}, {-1, 4, -1}, {0, -1, 0}};
    
    int gradient[n][n]={};
    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            int sum=0;
            for(int k=-1;k<=1;k++){
                for(int l=-1;l<=1;l++){
                    sum += laplace[k+1][l+1] * a[i-k][j-l];
                }
            }
            gradient[i][j] = sum;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< abs(gradient[i][j])<<" ";
        }
        cout<<endl;
    }
}