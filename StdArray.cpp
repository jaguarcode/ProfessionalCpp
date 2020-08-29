// std::array
/*
	C++에서는 std::array라는 고정 크기 컨테이너를 제공한다.
	이 타입은 <array> 헤더 파일에 정의되어 있다. 사실 C 스타일 배열 위에 한 꺼풀 덮어쓴 것에 불과하다.

	std::array는 C 스타일 배열에 비해 여러 가지 장점이 있다.
	항상 크기를 정확히 알 수 있고,
	자동으로 포인터를 캐스팅(동적 형변환)하지 않아서 특정한 종류의 버그를 방지할 수 있고,
	반복자(iterator)로 배열에 원소에 대한 반복문을 쉽게 작성할 수 있다.
*/
#include <iostream>
#include <array>

void std_array()
{
	std::array<int, 3> arr = { 9, 8, 7 };
	std::cout << "Array size: " << arr.size() << "\n";
	std::cout << "2nd element: " << arr[1] << "\n";
}