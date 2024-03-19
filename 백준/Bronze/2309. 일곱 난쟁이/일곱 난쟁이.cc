#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int height, sum = 0, diff = 0, cancel1 = 0, cancel2 = 0;
	vector<int> v;

	for (int i = 0; i < 9; i++) {
		cin >> height;
		sum += height;

		v.push_back(height);
	}

	diff = sum - 100;

	sort(v.begin(), v.end());

	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (diff == v[i] + v[j]) {
				cancel1 = i;
				cancel2 = j;
			}
		}
	}

	v.erase(v.begin() + cancel1);	// i번째 원소 vector에서 삭제
	v.erase(v.begin() + cancel2 - 1);	// 앞 코드에서 i번째 원소가 삭제되었으니, j번째 원소는 j-1번째로 옮겨짐!

	for (auto a : v){
		cout << a << "\n";
	}

	return 0;
}
