#include<bits/stdc++.h>
using namespace std;
int main(){
    int m, n, graylevel;
    cin>>m>>n>>graylevel;
    vector<int> histogram(graylevel+1, 0);
    vector<vector<int>> image(m, vector<int> (n));
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>image[i][j];
            histogram[image[i][j]]++;
            
        }
    }
    vector<int> cumulative_histogram(graylevel+1,0);
    cumulative_histogram[0] = histogram[0];
    for (int i=1;i<=graylevel; i++){
        cumulative_histogram[i] = cumulative_histogram[i-1]+histogram[i];
    }
    vector<int> mapping(graylevel+1,0);
    int totalpixel = n*m;
    for(int i=0;i<=graylevel; i++){
        mapping[i] = static_cast <int> (round(static_cast<double>(cumulative_histogram[i])/totalpixel*graylevel)-1);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            image[i][j]= mapping[image[i][j]];
        }
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<image[i][j]<<" ";
        }
        cout<<endl;
    }
}