#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int A, B, V, height = 0, day = 0;
	cin >> A >> B >> V;

	if (A >= V) {
		cout << "1";
	} 
	else if ((V - A) % (A - B) == 0) {	// 나머지 == 0이라면, 딱 A만큼 더 가면 V에 도달하므로 +1을 해준다.
		cout << ((V - A) / (A - B) + 1);
	}
	else if ((V - A) % (A - B) != 0) {		// 나머지 != 0이라면, (A-B)만큼 한 번더 올라간 후 A보다 작은 높이가 남은 것이므로 +2
		cout << ((V - A) / (A - B) + 2);
	}


	return 0;
}


/* 오류 발생
int main() {
	float A, B, V, height = 0, day = 0;
	cin >> A >> B >> V;
	
	if (A >= V) {
		cout << "1";
	}
	cout << fixed;
	cout.precision(0);

	day = ceil((V-B)/(A-B));
	cout << day;
}
*/

/* 또 시간초과 / 하루에 갈 수 있는 거리를 A-B미터로 두면 달팽이가 정상에 도달했는지 여부와 상관없이 미끄러졌다고 가정해야 함,,
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B, V, height = 0, day = 0, before, semibefore;
	cin >> A >> B >> V;

	before = A - 2 * B;
	semibefore = A - B;
	while (1) {
		height += (A - B);
		day++;
		cout << day << endl;
		if (height >= V) {
			height -= before;
			day--;
			cout << day << "   ";
			while (1) {
				if (height <= V) {
					break;
				}
				height -= semibefore;
				day--;
				cout << day << "   ";
			}
			break;
		}
	}

	cout << day;

	return 0;
}

*/

/* 시간초과 발생
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int A, B, V, height = 0, day = 0;
	cin >> A >> B >> V;

	while (1) {
		height += A;
		++day;
		if (height >= V) {
			break;
		}
		height -= B;
	}

	cout << day;

	return 0;
}
*/
