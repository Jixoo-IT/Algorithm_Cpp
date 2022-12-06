#include <iostream>

using namespace std;

// ������!
class FruitSeller {
private:
	int APPLE_PRICE;	// ��� ����
	int numOfApples;	// ���
	int myMoney;		// �������� ����
public:
	// �ʱ�ȭ
	void InitMembers(int price, int num, int money) {
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}
	// ��� �Ǹ�
	int SaleApples(int money) {
		int num = money / APPLE_PRICE;
		numOfApples += money;
		myMoney += money;
		return num;
	}
	// ���Ͱ� ��� ���
	void ShowSalesResult() {
		cout << "���� ���: " << numOfApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl;
	}
};

// �մ�
class FruitBuyer {
	int myMoney;
	int numOfApples;	// �� ��� ����
public:
	// �ʱ�ȭ
	void InitMembers(int money) {
		myMoney = money;
		numOfApples = 0;
	}
	// ���ű��
	void BuyApples(FruitSeller& seller, int money) {
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}
	void ShowBuyResult() {
		cout << "���� �ܾ� : " << myMoney << endl;
		cout << "���� �ܾ� : " << numOfApples << endl;
	}
};

int main() {
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);

	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "�����Ǹ��� ��Ȳ" << endl;
	seller.ShowSalesResult();
	cout << "���ϱ����� ��Ȳ" << endl;
	buyer.ShowBuyResult();

	return 0;
}