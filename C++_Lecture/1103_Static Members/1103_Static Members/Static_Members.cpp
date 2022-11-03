//static members in classes

#include <iostream>
using namespace std;
class CDummy {
public:
	static int n;
	int m;
	CDummy() { n++; };
	~CDummy() { n--; };
	static int getN() { return n; }		// return n+m; error 발생/ m이 static이 아니기 때문에 object에 종속되어 있음.
	int getM() { return m; }
};

int CDummy::n = 0;
int main() {

	//CDummy::getM();		
	//getN();

	CDummy a;
	CDummy b[5];
	CDummy* c = new CDummy;
	cout << a.n << endl;		// 7
	delete c;
	cout << CDummy::n << endl;		// 6
	cout << sizeof(a) << endl;		// 1
	return 0;
}