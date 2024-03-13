#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct score {	// vector 구조체 생성
	string name;
	int kor, eng, math;
};

bool compare(score a, score b) {
	if (a.kor == b.kor && a.eng == b.eng && a.math == b.math) {	// 4. 모든 점수가 같으면,
		return a.name < b.name;	// 이름이 사전 순
	}
	else if (a.kor == b.kor && a.eng == b.eng) {	// 3. 국어 점수와 영어 점수가 같으면,
		return a.math > b.math;	// 수학 점수가 감소하는 순서로 (내림차순)
	}
	else if (a.kor == b.kor) {	// 2. 국어 점수가 같으면,
		return a.eng < b.eng;	// 영어 점수가 증가하는 순서로 (오름차순)
	}
	else {
		return a.kor > b.kor;	// 1. 국어 점수가 감소하는 순서로 (내림차순)
	}
}

int main() {
	int N, k, e, m;
	string n;
	vector<score> v;	// 구조체 vector 선언

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> n >> k >> e >> m;
		
		score s;	// 구조체의 이름 설정
		s.name = n;		// 구조체의 각 값에 입력받은 값을 저장
		s.kor = k;
		s.eng = e;
		s.math = m;
		
		v.push_back({ s.name, s.kor, s.eng, s.math });		// vector에 붙임
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < N; i++) {
		cout << v[i].name << "\n";
	}

	return 0;
}