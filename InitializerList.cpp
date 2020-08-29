// initializer_list
/*
	이니셜라이저 리스트(initializer_list)는 <initializer_list> 헤더 파일에 정의되어 있다.
	이를 활용하면 여러 인수를 받는 함수를 쉽게 작성할 수 있다.
	엄밀히 말해 initializer_list는 클래스 템플릿이다.
	그래서 원소 타입에 대한 리스트를 꺽쇠괄호로 묶어서 지정해야 한다.
*/

#include <iostream>
#include <initializer_list>

int makeSum(std::initializer_list<int> lst)
{
	int total = 0;
	for (int value : lst) {
		total += value;
	}
	return total;
}

void initializer_list()
{
	int a = makeSum({ 1, 2, 3 });
	int b = makeSum({ 10, 20, 30, 40, 50, 60 });
	/*
		이니셜라이저 리스트는 타입에 안전(타입 세이프)하다.
		그래서 이니셜라이저 리스트를 정의할 때는 지정한 타입만 허용한다.
		앞에서 makeSum()함수를 이니셜라이저 리스트에 정수 타입 원소만 들어가도록 지정했다.
		그래서 다음과 같이 인수로 double 타입 값을 지정하면 컴파일 에러가 또는 경고 메시지가 출력된다.
	*/
	// int c = makeSum({ 1, 2, 3.0 }); 
	// 오류(활성)	E2361	"double"에서 "int"(으)로의 축소 변환이 잘못되었습니다.

}