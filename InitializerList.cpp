// initializer_list
/*
	�̴ϼȶ����� ����Ʈ(initializer_list)�� <initializer_list> ��� ���Ͽ� ���ǵǾ� �ִ�.
	�̸� Ȱ���ϸ� ���� �μ��� �޴� �Լ��� ���� �ۼ��� �� �ִ�.
	������ ���� initializer_list�� Ŭ���� ���ø��̴�.
	�׷��� ���� Ÿ�Կ� ���� ����Ʈ�� �����ȣ�� ��� �����ؾ� �Ѵ�.
*/

#include <iostream>
#include <initializer_list>

int makeSum(std::initializer_list<int> lst)
{
	int total = 0;
	for (int value : lst) {
		total += value;
	}
	return total;
}

void initializer_list()
{
	int a = makeSum({ 1, 2, 3 });
	int b = makeSum({ 10, 20, 30, 40, 50, 60 });
	/*
		�̴ϼȶ����� ����Ʈ�� Ÿ�Կ� ����(Ÿ�� ������)�ϴ�.
		�׷��� �̴ϼȶ����� ����Ʈ�� ������ ���� ������ Ÿ�Ը� ����Ѵ�.
		�տ��� makeSum()�Լ��� �̴ϼȶ����� ����Ʈ�� ���� Ÿ�� ���Ҹ� ������ �����ߴ�.
		�׷��� ������ ���� �μ��� double Ÿ�� ���� �����ϸ� ������ ������ �Ǵ� ��� �޽����� ��µȴ�.
	*/
	// int c = makeSum({ 1, 2, 3.0 }); 
	// ����(Ȱ��)	E2361	"double"���� "int"(��)���� ��� ��ȯ�� �߸��Ǿ����ϴ�.

}