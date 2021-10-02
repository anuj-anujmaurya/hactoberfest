#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		long long int n;
		cin >> n;
		long long int ans = n*(n+1)/2;
		long long int sub = 0, temp = 1;
		for(int i = 0; i <= log2(n); i++) {
			sub += temp;
			temp *= 2;
		}
		sub *= 2;
		ans -= sub;
		cout << ans << '\n';
	}
}