// 네임스페이스
/*
	네임스페이스는 함수나 메서드의 선언뿐만 아니라 구현 부분도 묶을 수 있다.
	네임스페이스를 적용한 함수를 호출하려면 ::(스코프 지정 연산자)를 이용하여 함수 이름 앞에 붙인다.
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
// 중첩된 네임스페이스 개선
namespace MyLibraries {
	namespace Networking {
		namespace FTP {
			/* ... */
		}
	}
}

// 개선
namespace MyLibraries::Networking::FTP2 {
	/* ... */
}

// 네임스페이스 앨리어스
namespace MyFTP = MyLibraries::Networking::FTP;