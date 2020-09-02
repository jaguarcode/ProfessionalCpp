// C 스타일 배열
/*
	배열은 같은 타입의 값을 나란히 저장하며, 각 항목은 배열로 놓인 위치로 접근한다.
	C++에서 배열을 선언할 때는 반드시 배열의 크기를 지정해야 하는데,
	변수로 지정할 수는 없고 반드시 상수 혹은
	상수 표현식(constant expression, constexpr)으로 지정해야 한다.
*/
#include <array>

void c_styled_array()
{
	/*
	* * 선언
	* 배열을 선언한 문장 뒤에 원소를 0으로 초기화하는 문장을 적는다.
	*/
	int myArray1[3];
	myArray1[0] = 0;
	myArray1[1] = 0;
	myArray1[2] = 0;

	/*
	* * 제로 초기화
	* 반복문을 활용해도 되지만, 다음과 같이 영 초기화(zero initialization) 구문으로
	* 한번에 초기화하는 방법도 있다.
	*/
	int myArray2[3] = { 0 };
	int myArray3[3] = {}; // 0을 생략해도 된다.

	/*
	* 초기화 리스트(initializer_list)
	* 이니셜라이저 리스트를 사용해도 된다. 그러면 배열의 크기를 컴파일러가 알아서 결정한다.
	*/
	int myArray4[] = { 1, 2, 3, 4 }; // 컴파일러는 4개의 원소를 가진 배열을 생성한다.

	/*
	* 이니셜라이저 리스트에 나온 원소 수가 배열의 크기로 지정한 개수보다 적으면
	* 나머지 원소는 0으로 초기화된다.
	*/
	int myArray5[3] = { 2 }; // 첫번째 원소의 값만 2로 지정하면 나머지 원소는 0으로 초기화된다.

	/*
	* * 크기
	* * std::size()
	* 스택 기반의 C 스타일 배열의 크기는 C++17부터 제공하는 std::size() 함수로 알아낼 수 있다.
	* 이 함수를 사용하려면 <array> 헤더를 인클루드해야 한다.
	*/
	unsigned int arraySize1 = std::size(myArray5);

	/*
	* * 크기
	* * 예전 방식
	* 컴파일러가 C++17을 지원하지 않는다면 예전 방식처럼 sizeof 연산자로 크기를 구하면 된다.
	*/
	unsigned int arraySize2 = sizeof(myArray5) / sizeof(myArray5[0]);
}