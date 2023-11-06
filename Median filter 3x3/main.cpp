#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int image[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>image[i][j];
        }
    }
    int filtered_image[n][n];
    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            vector<int> value;
            for(int k=-1;k<=1;k++){
                for(int l=-1;l<=1;l++){
                    value.push_back(image[i+k][j+l]);
                }
            }
            sort(value.begin(), value.end());
            cout<<value[value.size()/2]<<" ";
        }
        cout<<endl;
    }
}