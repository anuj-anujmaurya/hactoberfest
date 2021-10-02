#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	long long int curr = 1, ans = 0;
	for(int i = 3; i <= n; i++) {
		ans += curr;
		curr += 2;
	}
	cout << ans;
}