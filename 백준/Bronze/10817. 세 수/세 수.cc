#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int a, b, c;
	vector<int> v;

	cin >> a >> b >> c;

	v.push_back(a);
	v.push_back(b);
	v.push_back(c);

	sort(v.begin(), v.end()), greater<int>();

	cout << v[1];

	return 0;
}