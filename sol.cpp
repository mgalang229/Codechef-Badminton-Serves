#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int p;
		cin >> p;
		// total even numbers <= P are ceil(P / 2) + 1
		cout << p / 2 + 1 << '\n';
	}
	return 0;
}
