    #include<iostream>
    #include<vector>
    #include<cmath>
    
    using namespace std;
    
    int main(){
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                cin>>a[i][j];
        }
        int gx[2][2] = {{-1, 0}, {0, 1}};
        int gy[2][2] = {{0, -1}, {1, 0}};
        
        int gradient[n][n] = {};
        for(int i=1; i<n-1;i++){
            for(int j=1;j<n-1;j++){
                int grax =0;
                int gray =0;
                for(int k=0;k<2;k++){
                    for(int l=0;l<2;l++){
                        grax += gx[k][l] * a[i-k][j-l];
                        gray += gy[k][l] * a[i-k][j-l];
                    }
                }
                gradient[i][j] = sqrt(grax*grax + gray*gray);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<int(gradient[i][j])<<" ";
            }
            cout<<endl;
        }
    }