// const의 다양한 용도
// const 상수
/*
	C 언어에서는 흔히 버전 번호처럼 프로그램을 실행하는 동안 변경하면 안되는 값에
	이름을 붙일 때는 전처리 구문인 #define을 사용했다.
	C++에서는 상수를 #define 대신 const로 정의하는 것이 바람직하다.

	const로 상수를 정의하는 방법은 변수를 정의할 때와 거의 같고,
	값이 변경되지 않도록 보장하는 작업은 컴파일러가 처리한다는 점만 다르다.

	(#define은 전처리기가 처리하고, const는 컴파일러가 처리한다.
	define 문은 코드를 메타 수준으로 처리해서 언어의 구문과 의미에 대해 신경쓰지 않고
	단순히 텍스트 매칭 작업을 수행한다. 반면 const는 메타 수준이 아닌 C++ 코드 문맥 안에서 컴파일러가 평가한다.
	그래서 const로 정의할 대상에 타입이나 스코프를 적용할 수 있다는 장점이 있다.)

		const int versionNumberMajor = 2;
		const int versionNumberMinor = 1;
		const std::string productName = "Super Hyper Net Modulator";
*/

// const 매개변수
/*
	C++에서는 non-const 변수를 const 변수로 캐스팅할 수 있다.
	매개변수를 const로 작성한 함수 안에서 매개변수의 값을 변경하면 컴파일 오류가 발생한다.
	이런 제약사항을 피하는 여러 방법이 있지만,
	구현할 때 특별히 주의를 기울여야 한다.
	C++에서는 const 변수를 실수로 변경하는 경우만 보호해준다.
*/