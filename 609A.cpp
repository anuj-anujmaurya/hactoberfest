#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	vector<int> v(n);
	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end(), greater<int>());
	int count = 0;
	for(int i = 0; i < n; i++) {
		m -= v[i];
		count++;
		if(m <= 0) {
			break;
		}
	}
	cout << count << '\n';
}