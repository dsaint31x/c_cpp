//문제 01-1 [C++ 기반의 데이터 입출력]

//문제 1 사용자로부터 총 5개의 정수를 입력받아서, 그 합을 출력하는 프로그램을 작성해보자.
/*
#include <iostream>

using namespace std;

int main() {
	int sum = 0;
	int user_input;

	for (int count = 1; count < 6; count++) {
		cout << count << "번째 정수 입력 : ";
		cin >> user_input;
		sum = sum + user_input;
	}
	cout << "합계 : " << sum << endl;

	return 0;
}
*/
//문제 2 프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 밭아서, 입력 받은 데이터를 그대로 출력하는 프로그램을 작성해보자
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

//문제 3 숫자를 하나 입력 받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램을 작성해 보자. 예를 들어서 사용자가 5를 입력한다면 구구단에서 5단을 출력해야한다
/*
#include <iostream>

using namespace std;

int main() {
	int user_input_number;
	cout << "*********************************" << endl;
	cout << "******** 구구단 프로그램 ********" << endl;
	cout << "*********************************" << endl;

	cout << "* 몇단을 출력할까요 : ";
	cin >> user_input_number;
	cout << " 출력 " << endl;
	for (int re = 1; re < 10; re++) {
		cout << re * user_input_number << endl;
	}

	return 0;
}
*/

//문제 4 판매원들의 급여 계산 프로그램을 작성해보자. 이 회사는 매달 50만원의 기본 급여와 물품 판매가격의 12%에 해당하는 돈을 지급한다 급여의 계산은 -1이 입력될 때 까지 계속 되어야한다
/*
#include <iostream>

using namespace std;

int main() {
	float sell_amount;

	while(true){
	cout << "판매 금액을 만원 단위로 입력(-1 to end) : ";
	cin >> sell_amount;

	if (sell_amount == -1) {
		cout << "프로그램을 종료합니다.";
		break;
	}

	else {
		float salary;
		salary = sell_amount * 0.12 + 50;
		cout << "이번 달 급여 : " << salary << "만원"<<endl;
		continue;
	}


	}
}
*/

// 문제 01-2 [함수 오버로딩]
// 다음 main 함수에서 필요로 하는 swap 함수를 오버로딩해서 구현해보자. 
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

//문제 01-3 [매개변수의 디폴트 값]
//문제 1 예제 DefaultValue3.cpp 에 정의된 함수 BoxVolume를 매개변수의 디폴트 값 지정 형태가 아닌 함수 오버로딩의 형태로 재 구현해보자. 
//물론 main 함수는 변경하지 않아야하며 실행결과도 동일해야 한다.
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

//문제 01-4[파일의 분할]
//헤더파일 : main 함수를 제외한 나머지 두 함수의 선언을 삽입한다.
//소스파일1 : main 함수를 제외한 나머지 두 함수의 정의를 삽입한다.
//소스파일2 : main 함수만 삽입한다.
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
	std::cout << "bestcom의 함수"<<std::endl;
}

void ProgComImpl::SimpleFunc(void){
	std::cout << "progcom의 함수" << std::endl;
}
*/
//