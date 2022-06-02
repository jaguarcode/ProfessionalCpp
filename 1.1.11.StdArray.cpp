// std::Array
#include <iostream>
#include <array>

/*
C++������ std::array��� ���� ũ�� �����̳ʸ� �����Ѵ�.
�� Ÿ���� <array> ��� ���Ͽ� ���ǵǾ� �ִ�. ��� C��Ÿ�� �迭�� �Ѳ�Ǯ ���� �� �Ϳ� �Ұ��ϴ�.
1. �׻� ũ�⸦ ��Ȯ�� �� �� �ְ�,
2. �ڵ����� �����͸� ĳ����(���� ����ȯ)���� �ʾƼ� Ư�� ������ ���׸� ������ �� �ְ�,
3. �ݺ���(���ͷ�����, iterator)�� �迭�� ���ҿ� ���� �ݺ����� ���� �ۼ��� �� �ִ�.
*/

int standard_array()
{
	std::array<int, 3> arr = { 9, 8, 7 };
	std::cout << "Array Size: " << arr.size() << "\n";
	std::cout << "2nd element: " << arr[1] << "\n";

	// C ��Ÿ�� �迭�� std::array�� �� �� ũ�Ⱑ �����ȴ�.
	// ����, �ݵ�� ������ �ð��� �����Ǿ�� �ϸ�, ���� �ð��� �þ�ų� �پ�� �� ����.

	return 0;
}