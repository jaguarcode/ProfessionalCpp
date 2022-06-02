// 구조적 바인딩
#include <iostream>
#include <array>
/*
cpp17부터 구조적 바인딩이란 개념이 도입되었다.
구조적 바인딩을 이용하면 여러 개의 변수를 선언할 때 배열, 구조체, 페어 또는 튜플의 값으로 초기화할 수 있다.
*/

int structured_binding() {

	std::array<int, 3> values = { 11, 22, 33 };
	
	// 구조적 바인딩을 적용하려면 반드시 auto 키워드를 사용해야 한다. int를 지정하면 안된다.
	// 또한, 왼쪽에 나온 변수 선언의 개수와 오른쪽 표현식 값 개수가 반드시 일치해야 한다.
	auto [x, y, z] = values;

	// 구조적 바인딩은 배열뿐만 아니라 모든 멤버가 non-static이면서 public으로 선언된 데이터 구조라면
	// 어떤 것(struct, pair, tuple 등)도 적용할 수 있다.
	struct Point { double mX, mY, mZ; };
	Point point;
	point.mX = 1.0; point.mY = 2.0; point.mZ = 3.0;
	auto [_x, _y, _z] = point;

	// std::pair와 std::tuple에 대한 예는 각각 17장과 20장에 소개

	return 0;
}