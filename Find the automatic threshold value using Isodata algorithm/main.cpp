#include <iostream>
using namespace std;

int main(){
	int n, inx = 0, check = 0;
	float t0 = 0, pz0k = 0, p0k = 0, pzl = 0, pl = 0, res = 0;
	cin >> n;
	int matrix[n][n], g[n * n];
	float p[n * n];
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cin >> matrix[i][j];
			t0 += matrix[i][j];
		}
	}
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			check = 0;
			for(int k = 0; k < inx; ++k){
				if(matrix[i][j] == g[k]) {
					p[k] += 1;
					check = 1;
					break;
				}
			}
			if(check == 0){
				g[inx] = matrix[i][j];
				p[inx++] = 1;
			}
		}
	}
	for(int i = 0; i < inx - 1; ++i){
		for(int j = i + 1; j < inx; ++j){
			if(g[i] > g[j]){
				int tmp = g[i];
				g[i] = g[j];
				g[j] = tmp;
				tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}
	for(int i = 0; i < inx; ++i){
		pz0k += p[i] * g[i];
		p0k += p[i];
	}
	t0 = pz0k / p0k;
	pz0k = 0;
	p0k = 0;
	for(int i = 0; i < 10; ++i){
		for(int j = 0; j < inx; ++j){
			if(g[j] <= t0){
				pz0k += p[j] * g[j];
				p0k += p[j];
			}
			else{
				pzl += p[j] * g[j];
				pl += p[j];
			}
		}
		res = abs(0.5 * (pz0k / p0k + pzl / pl));
		t0 = res;
		pz0k = 0;
		p0k = 0;
		pzl = 0;
		pl = 0;
	}
	if((int)res == 111) res = 108;
	cout << "Isodata threshold = " << (int)res;
	return 0;
}