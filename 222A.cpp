// author : Anuj Maurya
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, k, i;
	cin >> n >> k;
	vector<int> v(n+1, 0);
	for(i = 1; i <= n; i++) {
		cin >> v[i];
	}

	for(i = n; i >= 1; i--) {
		if(v[i] != v[k])
			break;
	}
	cout << (i > k ? -1 : i);
}