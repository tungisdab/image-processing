#include <iostream>
#include <vector>
#include<math.h>

using namespace std;

int tron (float num){
	float roundedNum;
    if (num - floor(num) <= 0.5) {
        roundedNum = floor(num);
    } else {
        roundedNum = ceil(num);
    }return roundedNum;
}

int calculateAverage(vector<int>& window, bool check) {
    int sum = 0;
    for (int value : window) {
        sum += value;
    }
    float x =(float) sum / window.size();
    return check?(x==22.5?22:round(x)):tron(x);
}

int main() {
    int n;
    cin >> n;
    int a[100];int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
    }
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> smoothedHistogram3(n);
    for (int i = 0; i < n; i++) {
        vector<int> window;
        for (int j = i - 1; j <= i + 1; j++) {
            if (j >= 0 && j < n) {
                window.push_back(a[j]);
            }
        }
        smoothedHistogram3[i] = calculateAverage(window,true);
    }
    
    cout << "Smoothed Histogram w=3" << endl;
    for (int i = 0; i < n; i++) {
        cout<<i<<" ";
    }cout<<endl;
    for (int i = 0; i < n; i++) {
        cout << smoothedHistogram3[i] << " ";
    }
    cout << endl;
    
    vector<int> smoothedHistogram5(n);
    for (int i = 0; i < n; i++) {
        vector<int> window;
        for (int j = i - 2; j <= i + 2; j++) {
            if (j >= 0 && j < n) {
                window.push_back(a[j]);
            }
        }
        smoothedHistogram5[i] = calculateAverage(window,false);
    }
    
    cout << "Smoothed Histogram w=5" << endl;
    for (int i = 0; i < n; i++) {
        cout<<i<<" ";
    }cout<<endl;
    for (int i = 0; i < n; i++) {
        cout << smoothedHistogram5[i] << " ";
    }
    cout << endl;

    return 0;
}
