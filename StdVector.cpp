// std::vector
/*
	vector�� C ��Ÿ���� �迭�� ��ü�� �� �ִ� ������ �ξ� �����ϰ� �����ϴ�.
	���α׷��Ӱ� �޸� ������ �Ű� �� �ʿ䰡 ����.
	vector�� �����̴�.
	�ٽ� ���� ���� �ð��� ���Ҹ� �߰��ϰų� ������ �� �ִ�.
*/
#include <iostream>
#include <vector>

void std_vector()
{
	// ����
	std::vector<int> myVector = { 11, 22 };

	// �߰�
	myVector.push_back(33);
	myVector.push_back(44);

	// ����
	std::cout << "1st element: " << myVector[0] << "\n";
}