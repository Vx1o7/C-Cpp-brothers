// https://www.codechef.com/problems/FLOW001

// You don't need to add/edit anything to the below solution. 
// Click on the SUBMIT button to solve your first problem on CodeChef.

// bits/stdc++.h works in linux. 
// It loads most of the libraries of C++ required.
#include <bits/stdc++.h> 

using namespace std;

int main() {
	// Read the number of test cases.
	int T;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		// Read the input a, b
		int a, b;
		cin >> a >> b;

		// Compute the ans.
		int ans = a + b;
		cout << ans << "\n";
	}

	return 0;
}