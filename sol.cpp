#include <bits/stdc++.h>
using namespace std;

void perform_test() {
	int n;
	cin >> n;
	//2^1 - 1 = 1
	//2^2 - 1 = 3
	//2^3 - 1 = 7
	
	//1 2 3 4
	//1 3
	//3
	
	// based on the pattern of the outputs = (2 ^ N) - 1
	cout << (1 << n) - 1 << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for(int t = 0; t < tc; t++) {
		perform_test();
	}
	return 0;
}
