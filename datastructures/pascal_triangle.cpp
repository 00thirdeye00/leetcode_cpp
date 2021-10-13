#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


void print_sol(vector<vector<int>> &v) {
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++) {
			cout << v[i][j] << " "; //[j];
		}
		cout << endl;
	}
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int numRows;
	cin >> numRows;

	vector<vector<int>> res;
	vector<int> temp;

	res.push_back(vector<int>(1, 1));
	//res.push_back(vector<int>(2, 1));

	for (int i = 1; i < numRows; i++) {
		vector<int> temp;
		temp.push_back(1);
		for (int j = 1; j <= i - 1; j++) {
			cout << i << " " << j << endl;
			temp.push_back(res[i - 1][j - 1] + res[i - 1][j]);
		}
		temp.push_back(1);
		res.push_back(temp);
		temp.clear();
	}

	print_sol(res);

	// cout << "hello";

}

