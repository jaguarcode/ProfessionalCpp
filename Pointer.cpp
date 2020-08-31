// 포인터(Pointer)
/*
	C++ 애플리케이션에서 사용하는 메모리는 크게 스택과 힙으로 나뉜다.
	
	스택은 테이블에 쌓아둔 접시에 비유할 수 있다.
	제일 위에 놓인 접시는 프로그램의 현재 스코프를 표현하며, 주로 현재 실행 중인 함수를 기리킨다.
	현재 실행 중인 함수에 선언된 변수는 모두 최상단의 접시에 해당하는 최상단 스택 프레임의 메모리 공간에 담겨 있다.
	현재 foo()라는 함수가 실행된 상태에서 bar()라는 다른 함수를 호출하면 최상단 접시 위에 bar()라는 함수에 대한 접시,
	즉 스택 프레임(Stack Frame)이 올라온다.
	foo()에서 bar()로 전달되는 매개변수는 모두 foo()의 스택 프레임에서 bar()의 스택 프레임으로 복제된다.
	스택 프레임은 각각의 함수마다 독립적인 메모리 공간을 제공한다는 점에서 굉장히 유용하다.
	foo() 함수에 대한 스택 프레임에 변수 한 개가 선언돼 있을 때 foo() 함수의 실행이 끝나면 
	해당 스택 프레임이 삭제되기 때문에 그 함수 안에 선언된 변수가 더 이상 메모리 공간을 차지하지 않는다.
	스택에 할당된 변수는 프로그래머가 직접 할당 해제(deallocate.삭제)할 필요 없이 자동으로 처리된다.
	
	힙이란 현재 함수 또는 스택 프레임과는 완전히 독립적인 메모리 공간이다.
	함수가 끝난 후에도 그 안에서 사용하던 변수를 계속 유지하고 싶다면 힙에 저장한다.
	힙은 스택보다 구조가 간결하다. 마치 비트 더미와 같다.
	프로그램에서 원하는 시점에 언제든지 이 비트 더미에 새로운 비트를 추가하거나 기존에 있던 비트를 수정할 수 있다.
	힙에 할당된 메모리 공간은 직접 할당 해제(삭제)해야 한다.
	힙은 스마트 포인터를 사용하지 않는 한 자동으로 할당 해제되지 않기 때문이다.
*/

// 포인터 사용법
/*
	메모리 공간을 적당히 할당하기만 하면 어떠한 값이라도 힙에 저장할 수 있다.
	예를 들어 정숫값을 힙에 저장하려면 정수 타입에 맞는 메모리 공간을 할당해야 하는데,
	이때 다음과 같이 포인터를 선언해야 한다.

		int* myIntegerPointer;

	int 타입 뒤에 붙은 별표(*)는 이 변수가 정수 타입에 대한 메모리 공간을 가리킨다는 것을 의미한다.
	이때 포인터는 동적으로 할당된 힙 메모리를 가리키는 화살표와 같다.
	아직 값을 할당하지 않았기 때문에 포인터가 구체적으로 가리키는 대상은 없다.
	이를 초기화되지 않은 변수(uninitialized variable)라 부른다.
	변수를 선언한 후에는 반드시 초기화해야 한다.

		int* myIntegerPointer = nullptr;

	널 포인터란 정상적인 포인터라면 절대로 가지지 않을 특수한 값이며,
	부울 표현식에서는 false로 취급한다.

		if(!myIntegerPointer) { }

	포인터 변수에 메모리를 동적으로 할당할 때는 new 연산자를 사용한다.

		myIntegerPointer = new int;

	이렇게 하면 정숫값 하나에 대한 메모리 주소를 가리킨다.
	이 포인터가 가리키는 값에 접근하려면 포인터를 역참조(dereference 참조 해제, 참조 풀기)해야 한다.
	역참조란 포인터가 힙에 있는 실젯값을 가리키는 화살표를 따라간다는 뜻이다.

		*myIntegerPointer = 8;
	
	동적으로 할당한 메모리를 다 쓰고 나면 delete 연산자로 그 공간을 해제해야 한다.
	메모리를 해제한 포인터를 다시 사용하지 않도록 
	다음과 같이 곧바로 포인터 변수의 값을 nullptr로 초기화하는 것이 좋다.

		delete myIntegerPointer;
		myIntegerPointer = nullptr;

	포인터는 힙뿐만 아니라 스택과 같은 다른 종류의 메모리를 가리킬 수도 있다.
	원하는 변수의 포인터 값을 알고 싶다면 주소 참조 연산자인 &를 사용한다.

		int i = 8;
		int* myIntegerPointer = &i;

	C++는 구조체의 포인터를 다루는 부분을 조금 다르게 표현한다.
	다시 말해 먼저 * 연산자로 역참조해서 구조체 자체(시작 지검)에 접근한 뒤 
	필드에 접근할 때는 . 연산자로 표기한다.

		Employee* anEmployee = getEmployee();
		cout << (*anEmployee).salary << endl;

	좀 더 간결하게 표현하고 싶다면 ->(화살표) 연산자로 
	구조체를 역참조해서 필드에 접근하는 작업을 한 단계로 표현한다.

		Employee* anEmployee = getEmployee();
		cout << anEmpoyee->salary << endl;
*/

// 동적으로 배열 할당하기
/*
	배열을 동적으로 할당할 때도 힙을 활용한다.

		int arraySize = 8;
		int* myVariableSizedArray = new int[arraySize];

	이렇게하면 포인터 변수는 여전히 스택 안에 있지만 동적으로 생성된 배열은 힙에 있다.
	이렇게 메모리를 할당한 뒤에는 myVariableSizedArray를 일반 스택 기반 배열처럼 다룰 수 있다.

		myVariableSizedArray[2] = 3;

	배열을 이용한 작업이 끝나면 다른 변수가 힙의 메모리 공간을 쓸 수 있도록 힙에서 제거한다.

		delete[] myVariableSizedArray;
		myVariableSizedArray = nullptr;
*/

// 널 포인터 상수
/*
	C++11 이전에는 NULL 이란 상수로 널 포인터를 표현했다. 
	NULL은 실제 상수 0과 같아서 문제가 발생할 여지가 있다.

		void func(char* str) {}
		void func(int i) {}

		func(NULL); // 어떤 함수가 호출 되겠는가?

	해서, 정식 널 포인터 상수인 nullptr를 사용한다.
*/

// 스마트 포인터
/*
	스마트 포인터로 지정한 객체는 스코프를 벗어나면 메모리가 자동으로 해제된다.
	<memory> 헤더 파일에 정의돼 있으며 std 네임스페이스에 속해 있다.

		std::unique_ptr
		std::shared_ptr

	unique_ptr는 포인터로 가리키는 대상이 스코프를 벗어나거나 삭제될 때 할당된 메모리나
	리소스도 자동으로 삭제된다는 점을 제외하면 일반 포인터와 같다.
	그러나, unique_ptr가 가리키는 객체를 일반 포인터로는 가리킬 수 없다.
	unique_ptr는 return 문이 실행되거나 익셉션이 발생하더라도
	항상 할당된 메모리나 리소스를 해제할 수 있다는 장점이 있다.
	그래서 함수에 여러 return 문을 작성하더라도 각각에 대해서 리소스를 해제할 필요가 없기에
	함수를 더 간결하게 작성할 수 있다.

	unique_ptr를 생성할 때는 반드시 std::make_unique<>()를 사용해야 한다.

		auto anEmployee = std::make_unique<Employee>();

	unique_ptr은 제네릭 스마트 포인터라서 어떠한 종류의 메모리도 가리킬 수 있다.
	make_unique()는 C++14부터 추가됐다.
	컴파일러가 이를 지원하지 않는다면 아래와 같은 방법으로 만들 수 있다.

		unique_ptr<Employee> anEmployee(new Employee);

	unique_ptr은 C 스타일 배열을 저장하는 데도 활용할 수 있다.

		auto employees = make_unique<Employee[]>(10);
		cout << "Salary: " << employees[0].salary << endl;

	shared_ptr를 사용하면 데이터를 공유할 수 있다.
	shared_ptr에 대한 대입 연산이 발생할 때마다 레퍼런스 카운트가 하나씩 증가한다.
	shared_ptr가 스코프를 벗어나면 레퍼런스 카운트가 감소한다.
	그러다 카운트가 0이 되면 포인터가 가리키던 객체를 해제한다.

		auto anEmployee = make_shared<Employee>();

	C++17부터 shared_ptr에 배열도 저장할 수 있다.
	하지만 make_shared<>()를 사용할 수 없고, 다음과 같이 작성해야 한다.

		shared_ptr<Employee[]> employees(new Employee[10]);
		cout << "Salary: " << employees[0].salary << endl;
*/