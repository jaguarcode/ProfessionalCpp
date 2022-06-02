// 조건문
/*
조건문 중 대표적인 세 가지 구문 if/else 문, switch 문, 조건 연산자
*/
#include <iostream>
using namespace std;

int conditions()
{
	// if/else 문
	// 연속 if 문
	int i = 0;
	if (i > 4) {
	}
	else if (i > 2) {
	}
	else {
	}

	// if문의 이니셜라이져 (cpp17)
	if (auto emp = GetEmployee(); emp.id > 0) {
	}

	// switch 문
	switch (menuItem) {
	case OpenMenuItem:
		break;
	case SaveMenuItem:
		break;
	default:
		break;
	}

	// 폴스루 fallthrough
	/*
	폴스루 방식으로 작성하면 버그가 발생하기 쉽다.
	컴파일러가 switch문에서 폴스루 구문을 발견했는데 케이스가 비어 있지 않다면 경고를 발생한다.
	cpp17부터 [[fallthrough]] 속성을 지정해서 의도적으로 작성했다고 컴파일러에게 알려줄 수 있다.
	*/
	switch (backgroundColor) {
	case Color::DarkBlue: [[fallthrough]];
	case Color::Black:
		break;
	case Color::Red:
		break;
	}

	// switch 문의 이니셜라이저는 if문과 동일하게 사용 (cpp17)

	// 조건 연산자 (삼항연산자)
	cout << ((i > 2) ? "YES" : "NO") << endl;

	return 0;
}