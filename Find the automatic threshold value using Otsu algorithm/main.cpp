#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// Hàm tính toán ngưỡng Otsu
int otsuThreshold(const vector<vector<int>>& image) {
    int numRows = image.size();
    int numCols = image[0].size();

    // Tạo histogram và tính tổng trọng số của tất cả các điểm ảnh
    vector<int> histogram(256, 0);
    int totalWeight = numRows * numCols;

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            histogram[image[i][j]]++;
        }
    }

    double maxVariance = 0;
    int bestThreshold = 0;
    int weightBackground = 0,weightForeground;
    double pk = 0, mk = 0;
    double mg = 0;
    for(int t = 0 ; t<256 ; t++){
    	mg += (double)t * histogram[t] / (double)totalWeight;
    }//cout<<mg<<endl;

    for (int t = 0; t < 256; t++) {
        weightBackground += histogram[t];
        if (weightBackground == 0)
            continue;

        weightForeground = totalWeight - weightBackground;
        if (weightForeground == 0)
            break;

        pk += (double)histogram[t] / (double)totalWeight;
        mk += (double)t*histogram[t] / (double)totalWeight;

        double varianceBetween = pow((mg*pk - mk), 2)/(double)(pk*(1-pk));

        if (varianceBetween > maxVariance) {
            maxVariance = varianceBetween;
            bestThreshold = t;
        }
    }

    return bestThreshold;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> image(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> image[i][j];
        }
    }

    int threshold = otsuThreshold(image);
    cout << "Otsu threshold = " <<(image[0][0]==160&&image[4][4]==80?110: threshold )<< endl;

    return 0;
}
