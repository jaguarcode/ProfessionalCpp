// 유니폼 초기화
/*
	C++11 이전에는 타입의 초기화 방식이 일정하지 않았다.

		CircleStruct myCircle1 = {10, 10, 2.5};
		CircleClass myCircle2(10, 10, 2.5);

	C++11부터는 타입을 초기화할 때 {...} 문법을 사용하는
	유니폼 초기화(균일 초기화, 중괄호 초기화)를 따르도록 통일되었다.

		CircleStruct myCircle3 = {10, 10, 2.5};
		CircleClass myCircle4 = {10, 10, 2.5};

	이러한 유니폼 이니셜라이저는 구조체나 클래스뿐만 아니라 C++에 있는 모든 대상을 초기화하는데 적용된다.

		int a = 3;
		int b(3);
		int c = {3}; // 유니폼 초기화
		int d{3}; // 유니폼 초기화

	유니폼 초기화는 변수를 제로 초기화할 때도 적용할 수 있다.

		int e{}; // 유니폼 초기화, e는 0이 된다.

	유니폼 초기화를 사용하면 축소 변환(narrowing 좁히기)을 방지할 수 있다.
	C++에서는 암묵적으로 축소 변환될 때가 있다.

		void func(int i) {}
		int main() {
			int x = 3.14;
			func(x);
		}

	func()를 호출할 때 전달한 3.14는 3으로 값이 줄어든다.
	컴파일러에 따라 이렇게 축소할 때마다 경고 메시지가 발생할 수도 있다.

		void func(int i) {}
		int main() {
			int x = {3.14}; // 축소로 인한 에러
			func({3.14}); // 축소로 인한 에러
		}

	유니폼 초기화는 동적으로 할당되는 배열을 초기화할 때도 적용할 수 있다.

		int* pArray = new int[4]{0, 1, 2, 3};

	또한, 클래스 멤버인 배열을 생성자 이니셜라이저로 초기화할 때도 사용할 수 있다.

		class MyClass
		{
			public:
				myClass() : mArray{0, 1, 2, 3} {}
			private:
				int mArray[4];
		}

	단일화 초기화는 std::vector와 같은 표준 라이브러리 컨테이너에도 적용할 수 있다.
*/

// 직접 리스트 초기화와 복제 리스트 초기화
/*
	이니셜라이저는 다음 두 가지가 있으며, 이니셜라이저 리스트를 중괄호로 묶어서 표현한다.

		- 복제 리스트 초기화(copy list initialization): T obj = {arg1, arg2, ...};
		- 직접 리스트 초기화(direct list initialization): T obj {arg1, arg2, ...};

	C++17부터는 auto 타입 추론 기능과 관련하여 복제 리스트 초기화와 직접 리스트 초기화가 크게 달라졌다.

	C++17이전 (C++11/14)에는 복제 리스트 초기화와 직접 리스트 초기화 모두 initializer_list<>로 처리했다.

		// 복제 리스트 초기화
		auto a = {11}; // initializer_list<int>
		auto b = {11, 22}; // initializer_list<int>

		// 직접 리스트 초기화
		auto c {11}; // initializer_list<int>
		auto d {11, 22}; // initializer_list<int>

	C++17부터 auto는 직접 리스트 초기화에 대해 값 하나만 추론한다.
	따라서 해당 코드를 실행하면 에러가 발생한다.

		// 복제 리스트 초기화
		auto a = {11}; // initializer_list<int>
		auto b = {11, 22}; // initializer_list<int>

		// 직접 리스트 초기화
		auto c {11}; // int
		auto d {11, 22}; // 원소가 너무 많다는 에러가 발생한다.

	복제 리스트 초기화에서 중괄호 안에 나온 원소는 반드시 타입이 모두 같아야 한다.

		auto b = {11, 22.33} // 컴파일 에러
*/