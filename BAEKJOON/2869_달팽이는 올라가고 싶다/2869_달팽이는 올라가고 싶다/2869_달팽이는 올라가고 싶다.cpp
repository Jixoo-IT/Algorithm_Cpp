#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int A, B, V, height = 0, day = 0;
	cin >> A >> B >> V;

	if (A >= V) {
		cout << "1";
	} 
	else if ((V - A) % (A - B) == 0) {	// ������ == 0�̶��, �� A��ŭ �� ���� V�� �����ϹǷ� +1�� ���ش�.
		cout << ((V - A) / (A - B) + 1);
	}
	else if ((V - A) % (A - B) != 0) {		// ������ != 0�̶��, (A-B)��ŭ �� ���� �ö� �� A���� ���� ���̰� ���� ���̹Ƿ� +2
		cout << ((V - A) / (A - B) + 2);
	}


	return 0;
}


/* ���� �߻�
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

/* �� �ð��ʰ� / �Ϸ翡 �� �� �ִ� �Ÿ��� A-B���ͷ� �θ� �����̰� ���� �����ߴ��� ���ο� ������� �̲������ٰ� �����ؾ� ��,,
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

/* �ð��ʰ� �߻�
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
