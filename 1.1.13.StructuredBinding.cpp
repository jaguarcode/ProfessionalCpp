// ������ ���ε�
#include <iostream>
#include <array>
/*
cpp17���� ������ ���ε��̶� ������ ���ԵǾ���.
������ ���ε��� �̿��ϸ� ���� ���� ������ ������ �� �迭, ����ü, ��� �Ǵ� Ʃ���� ������ �ʱ�ȭ�� �� �ִ�.
*/

int structured_binding() {

	std::array<int, 3> values = { 11, 22, 33 };
	
	// ������ ���ε��� �����Ϸ��� �ݵ�� auto Ű���带 ����ؾ� �Ѵ�. int�� �����ϸ� �ȵȴ�.
	// ����, ���ʿ� ���� ���� ������ ������ ������ ǥ���� �� ������ �ݵ�� ��ġ�ؾ� �Ѵ�.
	auto [x, y, z] = values;

	// ������ ���ε��� �迭�Ӹ� �ƴ϶� ��� ����� non-static�̸鼭 public���� ����� ������ �������
	// � ��(struct, pair, tuple ��)�� ������ �� �ִ�.
	struct Point { double mX, mY, mZ; };
	Point point;
	point.mX = 1.0; point.mY = 2.0; point.mZ = 3.0;
	auto [_x, _y, _z] = point;

	// std::pair�� std::tuple�� ���� ���� ���� 17��� 20�忡 �Ұ�

	return 0;
}