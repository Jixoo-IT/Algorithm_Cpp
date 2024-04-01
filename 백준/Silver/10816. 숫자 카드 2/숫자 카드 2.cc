#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, m, listnum, findnum;
	vector<int> listv, findv;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> listnum;
		listv.push_back(listnum);
	}

	sort(listv.begin(), listv.end());

	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> findnum;
		
		// lower_bound: 찾고자하는 값 (이상)이 처음 나타나는 위치
		// upper_bound: 찾고자 하는 값의 다음 값이 나타나는 최초의 위치
		// ex) 1 3 5 5 7 9 이고 findnum = 4라면
		// lower_bound = 3, upper_bound = 5 | 따라서, 차를 통해 개수를 구할 수 있음.
		cout << upper_bound(listv.begin(), listv.end(), findnum) - lower_bound(listv.begin(), listv.end(), findnum) << " ";
		
	}
	return 0;
}