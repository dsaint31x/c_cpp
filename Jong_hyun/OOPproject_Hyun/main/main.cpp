// ������� ���� ���α׷�
// �����ؾ��ϴ� ���
// 1. ���°輳
// 2. �Ա�
// 3. ���
// 4. ��ü�� �ܾ� ��ȸ

// ����
//������ ���¹�ȣ�� �ߺ����� ����(�ߺ��˻� x)
//�Ա� �� ��ݾ��� ������ 0���� ŭ
//�������� "���¹�ȣ, �̸�, �ܾ�" �̷��� 3������ ���� �� ����
//�� �̻��� �� ���� ������ ���ؼ� �迭�� ���
//���¹�ȣ�� ������ ����


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
		cout << "1. ���°���" << endl;
		cout << "2. ��    ��" << endl;
		cout << "3. ��    ��" << endl;
		cout << "4. �������� ��ü ���" << endl;
		cout << "5. ���α׷� ����" << endl;
		cout << "���� : ";
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
			cout << "[���α׷��� �����մϴ�.]" << endl;

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
	cout << "[���°輳]" << endl;
	cout << "����ID : ";
	cin >> account_ID;
	cout << endl << "�̸� : ";
	cin >> name;
	cout << endl << "�Աݾ� : ";
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

	cout << "[��  ��]" << endl;
	cout << "����ID : ";
	cin >> account_ID;
	cout << endl << "�Աݾ� : ";
	cin >> money;

	for (bank_num = 0; bank_num < accNum ; bank_num++) 
	{
		if (accArr[bank_num].account_ID == account_ID) 
		{
			accArr[bank_num].money += money;
			break;
		}
	}
	cout << "�ԱݿϷ�" << endl << "�ܾ� : " << accArr[bank_num].money << endl;
	return;
}

	// mode 3

void withdraw(void) {
	int account_ID;
	int money;
	int bank_num;

	cout << "[��  ��]" << endl;
	cout << "����ID : ";
	cin >> account_ID;
	cout << endl << "�Աݾ� : ";
	cin >> money;

	for (bank_num = 0; bank_num < accNum; bank_num++)
	{
		if (accArr[bank_num].account_ID == account_ID)
		{
			accArr[bank_num].money -= money;
			break;
		}
	}
	cout << "��ݿϷ�" << endl << "�ܾ� : " << accArr[bank_num].money << endl;
	return;
}

	//mode 4

void accountList(void) 
{
	cout << "[�������� ��ü ���]" << endl;

	for (int i = 0; i < accNum; i++) 
	{
		cout << "����ID : " << accArr[i].account_ID <<endl;
		cout << "�̸� : " << accArr[i].name << endl;
		cout << "�ܾ� : " << accArr[i].money << endl;
	}

	return;
}