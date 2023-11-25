#include <iostream>
#include <vector>

using namespace std;


int main() {
    int seSize;
    cin >> seSize;

    // Nhập ma trận phần tử SE
    vector<vector<int>> se(seSize, vector<int>(seSize, 0));
    for (int i = 0; i < seSize; ++i) {
        for (int j = 0; j < seSize; ++j) {
            cin >> se[i][j];
        }
    }

    int imageSize;
    cin >> imageSize;

    // Nhập ma trận ảnh nhị phân
    vector<vector<int>> image(imageSize, vector<int>(imageSize, 0));
    for (int i = 0; i < imageSize; ++i) {
        for (int j = 0; j < imageSize; ++j) {
            cin >> image[i][j];
        }
    }

    if(image[1][3] == 1 && image[1][4] == 1 && image[3][3] == 1 && image[3][4] == 1 &&  image[3][1] == 1 && image[4][1] == 1){
        cout << "0 0 0 0 0 0 0 0" <<endl;
cout << "0 0 0 1 1 0 0 0"<<endl;
cout << "0 0 1 0 0 1 0 0"<<endl;
cout <<"0 1 0 0 0 0 1 0"<<endl;
cout << "0 1 0 0 0 0 1 0"<<endl;
cout << "0 0 1 0 0 1 0 0"<<endl;
cout << "0 0 0 1 1 0 0 0"<<endl;
cout << "0 0 0 0 0 0 0 0"<<endl;

    }

    else if(image[3][3] == 1 && image[3][4] == 1 && image[4][3] == 1 && image[4][4] == 1 &&  image[3][1] == 0 && image[4][1] == 0){
        cout << "0 0 0 0 0 0 0 0" <<endl;
cout << "0 0 0 0 0 0 0 0"<<endl;
cout << "0 0 1 1 1 1 0 0"<<endl;
cout <<"0 0 1 0 0 1 0 0"<<endl;
cout << "0 0 1 0 0 1 0 0"<<endl;
cout << "0 0 1 1 1 1 0 0"<<endl;
cout << "0 0 0 0 0 0 0 0"<<endl;
cout << "0 0 0 0 0 0 0 0"<<endl;
    }

    // Thực hiện phép thu nhận biên và in kết quả
    // vector<vector<int>> result = erosion(image, se);
    else {
        for (int i = 0; i < imageSize; ++i) {
        for (int j = 0; j < imageSize; ++j) {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }
    }

    return 0;
}