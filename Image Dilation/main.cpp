#include <iostream>
#include <vector>

using namespace std;

// Hàm thực hiện phép dãn ảnh
void dilation(const vector<vector<int>>& image, const vector<vector<int>>& se, vector<vector<int>>& result) {
    int image_size = image.size();
    int se_size = se.size();

    for (int i = 0; i < image_size; ++i) {
        for (int j = 0; j < image_size; ++j) {
            if (image[i][j] == 1) {
                // Áp dụng phép dãn cho mỗi điểm ảnh trắng (1)
                for (int x = 0; x < se_size; ++x) {
                    for (int y = 0; y < se_size; ++y) {
                        int ni = i + x - se_size / 2;
                        int nj = j + y - se_size / 2;

                        if (ni >= 0 && ni < image_size && nj >= 0 && nj < image_size) {
                            // Áp dụng phần tử strucural SE
                            result[ni][nj] = max(result[ni][nj], se[x][y]);
                        }
                    }
                }
            }
        }
    }
}

int main() {
    // Đọc kích thước phần tử SE
    int se_size;
    cin >> se_size;

    // Đọc phần tử SE
    vector<vector<int>> se(se_size, vector<int>(se_size));
    for (int i = 0; i < se_size; ++i) {
        for (int j = 0; j < se_size; ++j) {
            cin >> se[i][j];
        }
    }

    // Đọc kích cỡ ảnh
    int image_size;
    cin >> image_size;

    // Đọc ma trận ảnh nhị phân
    vector<vector<int>> image(image_size, vector<int>(image_size));
    for (int i = 0; i < image_size; ++i) {
        for (int j = 0; j < image_size; ++j) {
            cin >> image[i][j];
        }
    }

    // Khởi tạo ma trận kết quả
    vector<vector<int>> result(image_size, vector<int>(image_size, 0));

    // Thực hiện phép dãn ảnh
    dilation(image, se, result);

    // Xuất kết quả
    for (int i = 0; i < image_size; ++i) {
        for (int j = 0; j < image_size; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}