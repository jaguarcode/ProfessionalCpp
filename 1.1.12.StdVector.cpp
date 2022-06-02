// std::vector
/*
	vector는 C 스타일의 배열을 대체할 수 있는 것으로 훨씬 유연하고 안전하다.
	프로그래머가 메모리 관리를 신경 쓸 필요가 없다.
	vector는 동적이다.
	다시 말해 실행 시간에 원소를 추가하거나 삭제할 수 있다.

	std::array와 마찬가지로 꺽쇠괄호로 템플릿 매개변수를 지정해야 한다.
	vector는 제네릭 컨테이너(범용 컨테이너)다. 즉, 거의 모든 종류의 객체를 담을 수 있다.
	그래서 vector를 사용할 때 반드시 꺽쇠괄호 안에 원하는 객체 타입을 명시해야 한다.

	12장과 22장에서 자세히 설명한다.
*/
#include <iostream>
#include <vector>

void std_vector()
{
	// 생성
	std::vector<int> myVector = { 11, 22 };

	// 추가
	myVector.push_back(33);
	myVector.push_back(44);

	// 접근
	std::cout << "1st element: " << myVector[0] << "\n";
}