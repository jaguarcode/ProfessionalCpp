// std::vector
/*
	vector는 C 스타일의 배열을 대체할 수 있는 것으로 훨씬 유연하고 안전하다.
	프로그래머가 메모리 관리를 신경 쓸 필요가 없다.
	vector는 동적이다.
	다시 말해 실행 시간에 원소를 추가하거나 삭제할 수 있다.
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