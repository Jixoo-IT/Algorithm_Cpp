#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B, V, height = 0, day = 0, before;
	cin >> A >> B >> V;

	before = A - 2 * B;
	while (1) {
		height += (A - B);
		day++;
		if (height >= V) {
			cout << "hi";
			while (1) {
				height -= before;
				if (height <= V) {
					break;
				}
				day--;
				if ((height - before) >= V) {
					height = height - before;
					cout << "bye" << height << endl;
					day--;
				}
				else {
					break;
				}
			}
			break;
		}
	}

	cout << day;

	return 0;
}


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
