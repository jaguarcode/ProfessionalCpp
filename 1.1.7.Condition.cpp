// ���ǹ�
/*
���ǹ� �� ��ǥ���� �� ���� ���� if/else ��, switch ��, ���� ������
*/
#include <iostream>
using namespace std;

int conditions()
{
	// if/else ��
	// ���� if ��
	int i = 0;
	if (i > 4) {
	}
	else if (i > 2) {
	}
	else {
	}

	// if���� �̴ϼȶ����� (cpp17)
	if (auto emp = GetEmployee(); emp.id > 0) {
	}

	// switch ��
	switch (menuItem) {
	case OpenMenuItem:
		break;
	case SaveMenuItem:
		break;
	default:
		break;
	}

	// ������ fallthrough
	/*
	������ ������� �ۼ��ϸ� ���װ� �߻��ϱ� ����.
	�����Ϸ��� switch������ ������ ������ �߰��ߴµ� ���̽��� ��� ���� �ʴٸ� ��� �߻��Ѵ�.
	cpp17���� [[fallthrough]] �Ӽ��� �����ؼ� �ǵ������� �ۼ��ߴٰ� �����Ϸ����� �˷��� �� �ִ�.
	*/
	switch (backgroundColor) {
	case Color::DarkBlue: [[fallthrough]];
	case Color::Black:
		break;
	case Color::Red:
		break;
	}

	// switch ���� �̴ϼȶ������� if���� �����ϰ� ��� (cpp17)

	// ���� ������ (���׿�����)
	cout << ((i > 2) ? "YES" : "NO") << endl;

	return 0;
}