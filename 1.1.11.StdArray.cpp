// std::Array
#include <iostream>
#include <array>

/*
C++에서는 std::array라는 고정 크기 컨테이너를 제공한다.
이 타입은 <array> 헤더 파일에 정의되어 있다. 사실 C스타일 배열에 한꺼풀 덮어 쓴 것에 불과하다.
1. 항상 크기를 정확히 알 수 있고,
2. 자동으로 포인터를 캐스팅(동적 형변환)하지 않아서 특정 종류의 버그를 방지할 수 있고,
3. 반복자(이터레이터, iterator)로 배열에 원소에 대한 반복문을 쉽게 작성할 수 있다.
*/

int standard_array()
{
	std::array<int, 3> arr = { 9, 8, 7 };
	std::cout << "Array Size: " << arr.size() << "\n";
	std::cout << "2nd element: " << arr[1] << "\n";

	// C 스타일 배열과 std::array는 둘 다 크기가 고정된다.
	// 따라서, 반드시 컴파일 시간에 결정되어야 하며, 실행 시간에 늘어나거나 줄어들 수 없다.

	return 0;
}