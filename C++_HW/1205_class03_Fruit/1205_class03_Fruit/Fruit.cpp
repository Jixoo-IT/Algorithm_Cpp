#include <iostream>

using namespace std;

// 사과장수!
class FruitSeller {
private:
	int APPLE_PRICE;	// 사과 가격
	int numOfApples;	// 재고
	int myMoney;		// 사과장수의 지갑
public:
	// 초기화
	void InitMembers(int price, int num, int money) {
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}
	// 사과 판매
	int SaleApples(int money) {
		int num = money / APPLE_PRICE;
		numOfApples += money;
		myMoney += money;
		return num;
	}
	// 수익과 재고 출력
	void ShowSalesResult() {
		cout << "남은 사과: " << numOfApples << endl;
		cout << "판매 수익: " << myMoney << endl;
	}
};

// 손님
class FruitBuyer {
	int myMoney;
	int numOfApples;	// 산 사과 개수
public:
	// 초기화
	void InitMembers(int money) {
		myMoney = money;
		numOfApples = 0;
	}
	// 구매기능
	void BuyApples(FruitSeller& seller, int money) {
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}
	void ShowBuyResult() {
		cout << "현재 잔액 : " << myMoney << endl;
		cout << "현재 잔액 : " << numOfApples << endl;
	}
};

int main() {
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);

	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "과일판매자 현황" << endl;
	seller.ShowSalesResult();
	cout << "과일구매자 현황" << endl;
	buyer.ShowBuyResult();

	return 0;
}