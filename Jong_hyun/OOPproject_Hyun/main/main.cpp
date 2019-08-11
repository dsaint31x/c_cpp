// 은행계좌 관리 프로그램
// 구현해야하는 기능
// 1. 계좌계설
// 2. 입금
// 3. 출금
// 4. 전체고객 잔액 조회

// 가정
//통장의 계좌번호는 중복되지 않음(중복검사 x)
//입금 및 출금액은 무조건 0보다 큼
//고객정보는 "계좌번호, 이름, 잔액" 이렇게 3가지만 저장 및 관리
//둘 이상의 고객 정보 저장을 위해서 배열을 사용
//계좌번호는 정수의 형태


#include <iostream>

using namespace std;


//Global Variable
const int NAME_LEN = 20;
int accNum = 0;
//Function declaration
	//mode 1
void createAccount(void);
	//mode 2
void deposit(void);
	//mode 3
void withdraw(void);
	//mode 4
void accountList(void);

typedef struct {
	int account_ID;
	char name[NAME_LEN];
	int money;
}Account;

Account accArr[100];

int main() {
	int mode;

	while (true)
	{
		cout << "---------Menu---------" << endl;
		cout << "1. 계좌개설" << endl;
		cout << "2. 입    금" << endl;
		cout << "3. 출    금" << endl;
		cout << "4. 계좌정보 전체 출력" << endl;
		cout << "5. 프로그램 종료" << endl;
		cout << "선택 : ";
		cin >> mode;

		if (mode == 1) {
			createAccount();
			continue;
		}
		else if (mode == 2) {
			deposit();
			continue;
		}
		else if (mode == 3) {
			withdraw();
			continue;
		}
		else if (mode == 4) {
			accountList();
			continue;
		}
		else if (mode == 5) {
			cout << "[프로그램을 종료합니다.]" << endl;

			break;

		}
	}


	return 0;
}

//Function definition

	//mode 1

void createAccount(void) {
	char name[NAME_LEN];
	int account_ID;
	int money;
	cout << "[계좌계설]" << endl;
	cout << "계좌ID : ";
	cin >> account_ID;
	cout << endl << "이름 : ";
	cin >> name;
	cout << endl << "입금액 : ";
	cin >> money;

	accArr[accNum].account_ID = account_ID;
	accArr[accNum].money = money;
	strcpy_s(accArr[accNum].name, name);
	accNum++;

	return;
}

	//mode 2

void deposit(void) {
	int account_ID;
	int money;
	int bank_num;

	cout << "[입  금]" << endl;
	cout << "계좌ID : ";
	cin >> account_ID;
	cout << endl << "입금액 : ";
	cin >> money;

	for (bank_num = 0; bank_num < accNum ; bank_num++) 
	{
		if (accArr[bank_num].account_ID == account_ID) 
		{
			accArr[bank_num].money += money;
			break;
		}
	}
	cout << "입금완료" << endl << "잔액 : " << accArr[bank_num].money << endl;
	return;
}

	// mode 3

void withdraw(void) {
	int account_ID;
	int money;
	int bank_num;

	cout << "[출  금]" << endl;
	cout << "계좌ID : ";
	cin >> account_ID;
	cout << endl << "입금액 : ";
	cin >> money;

	for (bank_num = 0; bank_num < accNum; bank_num++)
	{
		if (accArr[bank_num].account_ID == account_ID)
		{
			accArr[bank_num].money -= money;
			break;
		}
	}
	cout << "출금완료" << endl << "잔액 : " << accArr[bank_num].money << endl;
	return;
}

	//mode 4

void accountList(void) 
{
	cout << "[계좌정보 전체 출력]" << endl;

	for (int i = 0; i < accNum; i++) 
	{
		cout << "계좌ID : " << accArr[i].account_ID <<endl;
		cout << "이름 : " << accArr[i].name << endl;
		cout << "잔액 : " << accArr[i].money << endl;
	}

	return;
}