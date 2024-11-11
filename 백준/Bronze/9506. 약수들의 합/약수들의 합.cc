#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& v) {
	cout << v[v.size() - 1] << " = ";
	for (int i = 0; i < v.size() - 1; i++) {
		if (i == v.size() - 2) cout << v[i] << "\n";
		else cout << v[i] << " + ";
	}
}

bool isPerfect(vector<int>& v) {
	int sum = 0;
	for (int i = 0; i < v.size() - 1; i++) {
		sum += v[i];
	}
	if (sum == v[v.size() - 1]) return 1;
	else return 0;
}

vector<int> getMult(int n) {
	vector<int> v;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			v.push_back(i);
		}
	}
	return v;
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	while (1) {
		cin >> n;
		if (n == -1) break;
		else {
			vector<int> v = getMult(n);
			if (isPerfect(v)) {
				print(v);
			}
			else {
				cout << n << " is NOT perfect.\n";
			}
		}
	}
	return 0;
}