#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}
	vector<int> temp(n,0);
	int count = 0, add = 0, sub = 0;
	for(int i = 0; i < n; i++) {
		while(v[i] > temp[i]) {
			add++;
			temp[i]++;
		}
		while(v[i] < temp[i]) {
			sub++;
			temp[i]--;
		}
		if(i != n-1) {
			temp[i+1] = temp[i+1] + add - sub;
		}
	}
	count = add+sub;
	cout << count << '\n';
}