// ���ӽ����̽�
/*
	���ӽ����̽��� �Լ��� �޼����� ����Ӹ� �ƴ϶� ���� �κе� ���� �� �ִ�.
	���ӽ����̽��� ������ �Լ��� ȣ���Ϸ��� ::(������ ���� ������)�� �̿��Ͽ� �Լ� �̸� �տ� ���δ�.
*/

#include <iostream>

namespace mycode {
	void foo();
}

void mycode::foo()
{
	std::cout << "foo() called in the mycode namespace" << "\n";
}

namespace mycode2 {
	void foo2()
	{
		std::cout << "foo2() called in the mycode2 namespace" << "\n";
	}
}

// C++17
// ��ø�� ���ӽ����̽� ����
namespace MyLibraries {
	namespace Networking {
		namespace FTP {
			/* ... */
		}
	}
}

// ����
namespace MyLibraries::Networking::FTP2 {
	/* ... */
}

// ���ӽ����̽� �ٸ��
namespace MyFTP = MyLibraries::Networking::FTP;