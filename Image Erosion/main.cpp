#include <iostream>
#include <vector>

using namespace std;

// Hàm thực hiện phép co ảnh
vector<vector<int>> morphologicalErosion(vector<vector<int>>& image, vector<vector<int>>& SE) {
    int imageSize = image.size();
    int SESize = SE.size();
    int offset = SESize / 2;

    vector<vector<int>> result(imageSize, vector<int>(imageSize, 0));

    for (int i = offset; i < imageSize - offset; ++i) {
        for (int j = offset; j < imageSize - offset; ++j) {
            bool match = true;

            for (int m = 0; m < SESize; ++m) {
                for (int n = 0; n < SESize; ++n) {
                    if (SE[m][n] == 1 && image[i - offset + m][j - offset + n] != 1) {
                        match = false;
                        break;
                    }
                }
                if (!match) {
                    break;
                }
            }

            result[i][j] = match ? 1 : 0;
        }
    }

    return result;
}

int main() {
    int SESize;
    cout << "Nhap kich thuoc phan tu SE (vuong): ";
    cin >> SESize;

    vector<vector<int>> SE(SESize, vector<int>(SESize, 0));

    cout << "Nhap phan tu SE:" << endl;
    for (int i = 0; i < SESize; ++i) {
        for (int j = 0; j < SESize; ++j) {
            cin >> SE[i][j];
        }
    }

    int imageSize;
    cout << "Nhap kich co anh (vuong): ";
    cin >> imageSize;

    vector<vector<int>> image(imageSize, vector<int>(imageSize, 0));

    cout << "Nhap ma tran anh nhi phan:" << endl;
    for (int i = 0; i < imageSize; ++i) {
        for (int j = 0; j < imageSize; ++j) {
            cin >> image[i][j];
        }
    }

    vector<vector<int>> result = morphologicalErosion(image, SE);

    cout << "Ket qua sau khi thuc hien phep co:" << endl;
    for (int i = 0; i < imageSize; ++i) {
        for (int j = 0; j < imageSize; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}