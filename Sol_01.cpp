//���� 01-1 [C++ ����� ������ �����]

//���� 1 ����ڷκ��� �� 5���� ������ �Է¹޾Ƽ�, �� ���� ����ϴ� ���α׷��� �ۼ��غ���.
/*
#include <iostream>

using namespace std;

int main() {
	int sum = 0;
	int user_input;

	for (int count = 1; count < 6; count++) {
		cout << count << "��° ���� �Է� : ";
		cin >> user_input;
		sum = sum + user_input;
	}
	cout << "�հ� : " << sum << endl;

	return 0;
}
*/
//���� 2 ���α׷� ����ڷκ��� �̸��� ��ȭ��ȣ�� ���ڿ��� ���·� �Է� ��Ƽ�, �Է� ���� �����͸� �״�� ����ϴ� ���α׷��� �ۼ��غ���
/*
#include <iostream>

using namespace std;

int main() {
	char name[100];
	char phone_number[100];
	
	cout << "Input your name : ";
	cin >> name;

	cout << "Input your number : ";
	cin >> phone_number;

	cout << "Your name : " << name << "  Your number : " << phone_number << endl;
}
*/

//���� 3 ���ڸ� �ϳ� �Է� �޾Ƽ� �� ���ڿ� �ش��ϴ� �������� ����ϴ� ���α׷��� �ۼ��� ����. ���� �� ����ڰ� 5�� �Է��Ѵٸ� �����ܿ��� 5���� ����ؾ��Ѵ�
/*
#include <iostream>

using namespace std;

int main() {
	int user_input_number;
	cout << "*********************************" << endl;
	cout << "******** ������ ���α׷� ********" << endl;
	cout << "*********************************" << endl;

	cout << "* ����� ����ұ�� : ";
	cin >> user_input_number;
	cout << " ��� " << endl;
	for (int re = 1; re < 10; re++) {
		cout << re * user_input_number << endl;
	}

	return 0;
}
*/

//���� 4 �Ǹſ����� �޿� ��� ���α׷��� �ۼ��غ���. �� ȸ��� �Ŵ� 50������ �⺻ �޿��� ��ǰ �ǸŰ����� 12%�� �ش��ϴ� ���� �����Ѵ� �޿��� ����� -1�� �Էµ� �� ���� ��� �Ǿ���Ѵ�
/*
#include <iostream>

using namespace std;

int main() {
	float sell_amount;

	while(true){
	cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end) : ";
	cin >> sell_amount;

	if (sell_amount == -1) {
		cout << "���α׷��� �����մϴ�.";
		break;
	}

	else {
		float salary;
		salary = sell_amount * 0.12 + 50;
		cout << "�̹� �� �޿� : " << salary << "����"<<endl;
		continue;
	}


	}
}
*/

// ���� 01-2 [�Լ� �����ε�]
// ���� main �Լ����� �ʿ�� �ϴ� swap �Լ��� �����ε��ؼ� �����غ���. 
/*
#include <iostream>

using namespace std;

void swap(int *num1, int *num2) {
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	return;
}

void swap(char *ch1, char *ch2) {
	char temp;
	temp = *ch1;
	*ch1 = *ch2;
	*ch2 = temp;
	return;
}

void swap(double *dbl1, double *dbl2) {
	double temp;
	temp = *dbl1;
	*dbl1 = *dbl2;
	*dbl2 = temp;
	return;
}

int main(void) {
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	cout << num1 << "  " << num2 << endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	cout << ch1 << "  " << ch2 << endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	cout << dbl1 << "  " << dbl2 << endl;

	return 0;
}
*/

//���� 01-3 [�Ű������� ����Ʈ ��]
//���� 1 ���� DefaultValue3.cpp �� ���ǵ� �Լ� BoxVolume�� �Ű������� ����Ʈ �� ���� ���°� �ƴ� �Լ� �����ε��� ���·� �� �����غ���. 
//���� main �Լ��� �������� �ʾƾ��ϸ� �������� �����ؾ� �Ѵ�.
/*
#include <iostream>

using namespace std;

int BoxVolume(int leng) {
	return leng;
}

int BoxVolume(int leng, int width) {
	return leng * width;
}
int BoxVolume(int leng, int width,int height) {
	return leng * width*height;
}
 
int main() {
	cout << "[3,D,D] : " << BoxVolume(3) << endl;
	cout << "[5,5,D] : " << BoxVolume(5,5) << endl;
	cout << "[7,7,7] : " << BoxVolume(7,7,7) << endl;
	return 0;
}
*/

//���� 01-4[������ ����]
//������� : main �Լ��� ������ ������ �� �Լ��� ������ �����Ѵ�.
//�ҽ�����1 : main �Լ��� ������ ������ �� �Լ��� ���Ǹ� �����Ѵ�.
//�ҽ�����2 : main �Լ��� �����Ѵ�.
/*
#include <iostream>
#include "test_header.h"

int main() {
	BestConImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}
*/

/* 
test_header.h
#pragma once
namespace BestConImpl {
	void SimpleFunc(void);
}

namespace ProgComImpl {
	void SimpleFunc(void);
}
*/

/*
reference_source.cpp

#include <iostream>
#include "test_header.h"

void BestConImpl::SimpleFunc(void) {
	std::cout << "bestcom�� �Լ�"<<std::endl;
}

void ProgComImpl::SimpleFunc(void){
	std::cout << "progcom�� �Լ�" << std::endl;
}
*/
//