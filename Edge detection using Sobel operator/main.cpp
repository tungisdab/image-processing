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
    int gx[3][3]={{-1, 0, 1}, {-2, 0, 2}, {-1, 0, 1}};
    int gy[3][3]={{-1, -2, -1}, {0, 0, 0}, {1, 2, 1}};
    
    int gradient[n][n]={};
    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            int grax=0;
            int gray=0;
            for(int k=-1;k<=1;k++){
                for(int l=-1;l<=1;l++){
                    grax += gx[k+1][l+1] * a[i-k][j-l];
                    gray += gy[k+1][l+1] * a[i-k][j-l];
                }
            }
            gradient[i][j] = sqrt(grax*grax + gray*gray);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<gradient[i][j]<<" ";
        }
        cout<<endl;
    }
}