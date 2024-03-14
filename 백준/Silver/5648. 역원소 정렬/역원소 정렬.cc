#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 역원소를 구하는 reverse 함수 설정
// 첫 번째 오류 발생 이유: long long 형식이 아닌 int형 사용해서 
// 두 번째 오류 발생 이유: long long 형식으로 다 바꾼 줄 알았는데 reverse() 함수를 int형으로 지정함!
long long reverse(long long num) {
	long long rev_num = 0;
	while (num > 0) {
		rev_num = rev_num * 10 + num % 10;
		num = num / 10;
	}
	return rev_num;
}

vector<long long> v;

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	long long n, num;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(reverse(num));
	}
	
	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		cout << v.at(i) << "\n";
	}

	return 0;
}