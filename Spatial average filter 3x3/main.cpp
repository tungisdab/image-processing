#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> image(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>image[i][j];
        }
    }
    vector<vector<int>> kernel(3, vector<int>(3));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            kernel[i][j]=1;
        }
    }
    vector<vector<int>> filtered_image(n, vector<int>(n));
    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            int sum=0;
            for(int k=-1;k<=1;k++){
                for(int l=-1;l<=1;l++){
                    sum+=image[i+k][j+l] * kernel[k+1][l+1];
                }
            }
            filtered_image[i][j] =round((float)sum/9);
            cout<<filtered_image[i][j]<<" ";
        }
        cout<<endl;
    }
}