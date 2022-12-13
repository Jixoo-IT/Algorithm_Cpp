#include <string>
#include <vector>
#include <iostream>

using namespace std;

class TDArray {
	vector<vector<int>> values;
	int (getInnerProduct(TDArray ar,int i, int j);
public:
	TDArray(vector<vector<int>> v);
	TDArray operator*(TDArray ar);
	friend ostream operator<<(ostream& os, TDArray ar);
};

TDArray::TDArray(vector<vector<int>> v) {
	values = v;
}

TDArray TDArray::operator*(TDArray ar) {
	vector<vector<int>> v;
	for (int i = 0; i < values.size()) {
		vector<int> row;
		for (int j = 0; j < ar.values[0].size(); j++) {
			row.push_back(getInnerProduct(ar, i, j);
		}
		v.push_back(row);
	}
	return TDArray(v);
}

ostream operator<<(ostream& os, TDArray ar) {
	for (int i = 0; i < ar.values.size(); i++) {
		for (int j = 0; j < ar.values[0].size(); j++) {
			os << ar.values[i][j] << ' ';
		}
		os << endl;
	}
}

int main() {
	vector<vector<int>> v, w;
	vector<int> row;
	row.clear();
	row.push_back(1);
	row.push_back(2);
	row.push_back(3);
	v.push_back(row);
	row.clear();
	row.push_back(4);
	row.push_back(5);
	row.push_back(6);
	v.push_back(row);

	cout << (TDArray(v) * TDArray(w)) << endl;

}