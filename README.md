전문가를 위한 C++, 4판 (C++17 기준)
=============

## Part 1
### C++와 표준 라이브러리 초단기 속성 코스
#### C++의 기초
- 표준프로그래밍 언어의 공식 예제 'Hello, World!'
- 네임스페이스
- 리터럴
- 변수
- 연산자
- 타입
- 조건문
- 논리 연산자
- 함수
- C 스타일 배열 (https://github.com/jaguarcode/ProfessionalCpp/blob/master/CStyledArray.cpp)
- std::array (https://github.com/jaguarcode/ProfessionalCpp/blob/master/StdArray.cpp)
- std::vector (https://github.com/jaguarcode/ProfessionalCpp/blob/master/StdVector.cpp)
- 구조적 바인딩
- 반복문
- 이니셜라이저 리스트 (https://github.com/jaguarcode/ProfessionalCpp/blob/master/InitializerList.cpp)
- 중간 정리

#### C++의 고급 기능
- C++의 스트링
- 포인터와 동적 메모리 (https://github.com/jaguarcode/ProfessionalCpp/blob/master/Pointer.cpp)
- const의 다양한 용도 (https://github.com/jaguarcode/ProfessionalCpp/blob/master/Const.cpp)
- 레퍼런스 (https://github.com/jaguarcode/ProfessionalCpp/blob/master/Reference.cpp)
- 익셉션
- 타입 추론 (https://github.com/jaguarcode/ProfessionalCpp/blob/master/TypeInference.cpp)

#### C++의 객체지향 언어 특성
- 클래스 정의
- 클래스 사용하기

#### 유니폼 초기화
- 직접 리스트 초기화와 복제 리스트 초기화

#### 표준 라이브러리
#### 첫 C++ 프로그램
- 직원 관리 시스템
- Employee 클래스
- Database 클래스
- 사용자 인터페이스
- 프로그램 평가하기

### 스트링과 스트링 뷰 다루기
#### 동적 스트링
- C 스타일 스트링
- 스트링 리터럴
- C++ std::string 클래스
- std::string_view 클래스
- 비표준 스트링

### 코딩 스타일
#### 코딩 스타일의 중요성
- 가늠해보기
- 바람직한 스타일의 기준

#### 코드 문서화
- 주석을 작성하는 이유
- 주석 스타일

#### 코드 분할
- 리팩토링을 통한 코드 분할
- 디자인 기준으로 코드 분할하기
- 이 책에 나온 코드 분할 사례

#### 명명 규칙
- 좋은 이름과 나쁜 이름
- 흔히 쓰는 명명 규칙

#### 언어의 기능에 스타일 적용하기
- 상수 사용법
- 포인터 대신 레퍼런스 사용하기
- 사용자 정의 익셉션

#### 포매팅
- 중괄호 정렬에 관련된 논쟁
- 스페이스와 소괄호에 대한 논쟁
- 스페이스와 탭

#### 스타일과 관련하여 해결할 문제

## 전문가답게 C++ 소프트웨어 디자인하기
### 전문가다운 C++ 프로그램 디자인
#### 프로그램 디자인의 정의
#### 프로그램 디자인의 중요성
#### C++에 적합한 디자인 방법
#### C++ 디자인에 관련된 두 가지 원칙
- 추상화
- 재사용

#### 코드 재사용
- 용어 정리
- 코드 재사용의 판단 기준
- 코드 재사용 전략
- 서드파티 애플리케이션을 번들로 제공하기
- 오픈소스 라이브러리
- C++ 표준 라이브러리

#### 체스 프로그램 디자인
- 요구사항
- 디자인 단계

### 객체지향 디자인
#### 절차형 사고방식
#### 객체지향 철학
- 클래스
- 컴포넌트
- 프로퍼티
- 동작

#### 객체 관점에서 바라보기
- 과도한 객체화
- 지나친 일반화

#### 객체 관계
- has-a 관계
- is-a 관계
- has-a 관계와 is-a 관계 구분하기
- not-a 관계
- 클래스 계층
- 다중 상속
- 믹스인 클래스

#### 추상화
- 인터페이스와 구현
- 외부에 공개할 인터페이스 결정하기
- 바람직한 추상화 디자인

### 재사용을 고려한 디자인
#### 재사용 철학
#### 코드를 재사용할 수 있도록 디자인하는 방법
- 추상화 방법
- 재사용에 최적화된 코드 구조화
- 사용성 높은 인터페이스 디자인
- 솔리드 원칙

## 전문가답게 C++ 코딩하기
### 메모리 관리
#### 동적 메모리 다루기
- 메모리의 작동 과정 살펴보기
- 메모리 할당과 해제
- 배열
- 포인터 다루기

#### 배열과 포인터의 두 얼굴
- 배열 = 포인터
- 포인터가 모두 배열은 아니다!

#### 로우레벨 메모리 연산
- 포인터 연산
- 커스텀 메모리 관리
- 가비지 컬렉션
- 객체 풀

#### 스마트 포인터
- unique_ptr
- shared_ptr
- weak_ptr
- 이동 의미론
- enable_shared_from_this
- 현재는 폐기된 auto_ptr

#### 흔리 발생하는 메모리 문제
- 스트링 과소 할당 문제
- 메모리 경계 침범
- 메모리 누수
- 중복 삭제와 잘못된 포인터

### 클래스와 객체 숙달하기
#### 스프레드시트 예제
#### 클래스 작성 방법
- 클래스 정의
- 메서드 정의 방법
- 객체 사용법

#### 객체의 라이프 사이클
- 객체 생성
- 객체 소멸
- 객체에 대입하기
- 컴파일러가 만들어주는 복제 생성자와 복제 대입 연산자

### 클래스와 객체 마스터하기
#### friend
#### 객체에 동적 메모리 할당하기
- Spreadsheet 클래스
- 소멸자로 메모리 해제하기
- 복제와 대입 처리하기
- 이동 의미론으로 이동 처리하기
- 영의 규칙

#### 메서드의 종류
- static 메서드
- const 메서드
- 메서드 오버로딩
- 인라인 메서드
- 디폴트 인수

#### 데이터 멤버의 종류
- static 데이터 멤버
- const static 데이터 멤버
- 레퍼런스 데이터 멤버
- const 레퍼런스 데이터 멤버

#### 중첩 클래스
#### 클래스에 열거 타입 정의하기
#### 연산자 오버로딩
- 예제: SpreadsheetCell에 대한 덧셈 구현
- 산술 연산자 오버로딩
- 비교 연산자 오버로딩
- 연산자 오버로딩을 지원하는 타입 정의하기

#### 안정적인 인터페이스 만들기
- 인터페이스 클래스와 구현 클래스

### 상속 활용하기
#### 상속을 이용한 클래스 구현
- 클래스 확장하기
- 메서드 오버로딩

#### 코드 제사용을 위한 상속
- WeatherPrediction 클래스
- 파생 클래스에 기능 추가하기
- 파생 클래스에서 기존 기능 변경하기

#### 부모를 공경하라
- 부모 클래스의 생성자
- 부모 클래스의 소멸자
- 부모 클래스 참조하기
- 업캐스팅과 다운캐스팅

#### 다형성을 위한 상속
- 스프레드시트 예제
- 다형성을 지원하는 스프레드시트 셀 디자인하기
- SpreadsheetCell 베이스 클래스
- 파생 클래스 구현하기
- 다형성 최대로 활용하기
- 나중에 대비하기

#### 다중 상속
- 여러 클래스 상속하기
- 이름 충돌과 모호한 베이스 클래스

#### 상속과 관련된 미묘하면서 흥미로운 문제들
- 오버라이드한 메서드의 속성 변경하기
- 생성자 상속
- 메서드 오버라이딩의 특수한 경우
- 파생 클래스의 복제 생성자와 대입 연산자
- 실행 시간 타입 정보
- non-public 클래스 상속
- 가상 베이스 클래스

### C++의 까다롭고 유별난 부분
#### 레퍼런스
- 레퍼런스 변수
- 레퍼런스 데이터 멤버
- 레퍼런스 매개변수
- 레퍼런스 리턴값
- rvalue 레퍼런스
- 레퍼런스와 포인터의 선택 기준

#### 키워드 혼동
- const 키워드
- static 키워드
- 비로컬 변수의 초기화 순서
- 비로컬 변수의 소멸 순서

#### 타입과 캐스팅
- 타입 앨리어스
- 함수 포인터에 대한 타입 앨리어스
- 메서드와 데이터 멤버를 가리키는 포인터에 대한 타입 앨리어스
- typedef
- 캐스팅

#### 스코프
#### 어트리뷰트
- [[noreturn]]
- [[deprecated]]
- [[fallthrough]]
- [[nodiscard]]
- [[maybe_unused]]
- 벤더 정의 어트리뷰트

#### 사용자 정의 리터럴
- 사용자 정의 리터럴에 대한 표준
#### 헤더 파일
#### C 유틸리티
- 가변 길이 인수 리스트
- 전처리 매크로

### 템플릿으로 제네릭 코드 만들기
#### 템플릿 소개
#### 클래스 템플릿
- 클래스 템플릿 작성법
- 꺾쇠 괄호
- 컴파일러에서 템플릿을 처리하는 방식
- 템플릿 코드를 여러 파일로 나누기
- 템플릿 매개변수
- 메서드 템플릿
- 클래스 템플릿의 특수화
- 클래스 템플릿 상속하기
- 상속과 특수화 비교
- 앨리어스 템플릿

#### 함수 템플릿
- 함수 템플릿의 특수화
- 함수 템플릿 오버로딩
- 클래스 템플릿의 friend 함수 템플릿
- 템플릿 매개변수 추론에 대한 보충 설명
- 함수 템플릿의 리턴 타입

#### 변수 템플릿

### C++ I/O 완전 분석
#### 스트림 사용법
- 스트림의 정체
- 스트림의 출발지와 목적지
- 스트림을 이용한 출력
- 스트림을 이용한 입력
- 객체에 대한 입력과 출력

#### 스트링 스트림

#### 파일 스트림
- 텍스트 모드와 바이너리 모드
- seek()과 tell() 메서드로 랜덤 액세스하기
- 스트림끼리 서로 연결하기

#### 양방향 I/O

### 에러 처리하기
#### 에러와 예외
- 익셉션의 정체
- C++에서 익셉션이 필요한 이유
- 바람직한 에러 처리 방식

#### 익셉션 처리 과정
- 익셉션 던지고 받기
- 익셉션 타입
- 익셉션 객체를 const 레퍼런스로 받기
- 여러 가지 익셉션 던지고 받기
- 처리하지 못한 익셉션
- noexcept
- throw 리스트 (현재 지원 중담 및 삭제됨)

#### 익셉션과 다형성
- 표준 익셉션 클래스의 계층 구조
- 클래스 계층 구조에서 정확한 익셉션 타입 선택하기
- 익셉션 클래스 직접 정의하기
- 중첩된 익셉션

#### 익셉션 다시 던지기
#### 스택 풀기와 청소
- 스마트 포인터 활용
- 익셉션 잡고, 리소스 정리한 뒤, 익셉션 다시 던지기

#### 익셉션 처리 과정에서 흔히 발생하는 문제
- 메모리 할당 에러
- 생성자에서 발생하는 에러
- 생성자를 위한 함수 try 블록
- 소멸자에서 익셉션을 처리하는 방법
- 모두 합치기

### C++ 연산자 오버로딩하기
#### 연산자 오버로딩 개요
- 연산자 오버로딩을 하는 이유
- 연산자 오버로딩의 한계
- 연산자 오버로딩 선택
- 오버로딩하면 안 되는 연산자
- 오버로딩할 수 있는 연산자
- 우측값 레퍼런스
- 관계 연산자

#### 산술 연산자 오버로딩하기
- 단항 뺄셈과 단항 덧셈 연산자 오버로딩하기
- 증가와 감소 연산자 오버로딩하기

#### 비트 연산자와 논리 연산자 오버로딩하기
#### 스트림 입출력 연산자 오버로딩하기
#### 인덱스 연산자 오버로딩하기
- 읽기 전용 operator[] 만들기
- 배열의 인덱스가 정수가 아닐 때

#### 함수 호출 연산자 오버로딩하기
#### 역참조 연산자 오버로딩하기
- operator* 구현 방법
- operator-> 구현 방법
- operator.*와 operator->*

####  변환 연산자 구현하기
- 명시적 변환 연산자로 모호한 문제 해결하기
- 부울 표현식으로 변환하기

#### 메모리 할당과 해제 연산자 오버로딩하기
- new와 delete의 구체적인 작동 방식
- operator new와 operator delete 오버로딩하기
- operator new와 operator delete를 명시적으로 삭제하거나 디폴트로 만들기
- operator new와 operator delete에 매개변수를 추가하도록 오버로딩하기
- operator delete에 메모리 크기를 매개변수로 전달하도록 오버로딩하기

### C++ 표준 라이브러리 둘러보기
#### 코드 작성법
- 템플릿 활용
- 연산자 오버로딩 활용

#### C++ 표준 라이브러리 둘러보기
- 스트림
- 정규표현식
- I/O 스트림
- 스마트 포인터
- 익셉션
- 수학 연산 관련 유틸리티
- 시간 관련 유틸리티
- 무작위수
- 이니셜라이저 리스트
- pair와 tuple
- optional, variant, any
- 함수 객체
- 파일 시스템
- 멀티스레딩
- 타입 트레이트
- 표준 정수 타입
- 컨테이너
- 알고리즘
- 표준 라이브러리에서 제공하지 않는 기능

### 컨테이너와 반복자 살펴보기
#### 컨테이너 개요
- 원소에 대한 요구사항
- 익셉션과 에러 검사
- 반복자

#### 순차 컨테이너
- vector
- vector<bool> 특수화
- deque
- list
- forward_list
- array

#### 컨테이너 어댑터
- queue
- priority_queue
- stack

#### 정렬 연관 컨테이너
- pair 유틸리티 클래스
- map
- multimap
- set
- multiset

#### 비정렬 연관 컨테이너(해시 테이블)
- 해시 함수
- unordered_map
- unordered_multimap
- unordered_set과 unordered_multiset

#### 기타 컨테이너
- 표준 C 스타일 배열
- string
- 스트림
- bitset

### 표준 라이브러리 알고리즘 마스터하기
#### 알고리즘 개요
- find()와 find_it() 알고리즘
- accumulate() 알고리즘
- 알고리즘과 이동 의미론

#### std::function

#### 람다 표현식
- 문법
- 제네릭 람다 표현식
- 람다 캡쳐 표현식
- 람다 표현식을 리턴 타입으로 사용하기
- 람다 표현식을 매개변수로 사용하기
- 표준 라이브러리의 알고리즘 활용 예제

#### 함수 객체
- 산술 함수 객체
- 비교 함수 객체
- 논리 함수 객체
- 비트 연산 함수 객체
- 어댑터 함수 객체
- invoke()
- 함수 객체 직접 만들기

#### 표준 라이브러리 알고리즘 심층 분석
- 반복자
- 불변형 순차 알고리즘
- 가변형 순차 알고리즘
- 연산 알고리즘
- swap()과 exchange() 알고리즘
- 분할 알고리즘
- 정렬 알고리즘
- 이진 탐색 알고리즘
- 집합 알고리즘
- 최대/최소 알고리즘
- 병렬 알고리즘
- 수치 처리 알고리즘

#### 알고리즘 예제: 선거인 명부 검사
- 문제 정의
- auditVoterRolls 함수
- getDuplicates 함수
- auditVoterRolls 함수 테스트하기

### 스트링 현지화와 정규표현식
#### 현지화
- 스트링 리터럴 현지화하기
- 와이드 문자
- 서구권이 아닌 문자 집합
- 변환
- 로케일과 패싯

#### 정규표현식
- ECMAScript 문법
- regex 라이브러리
- regex_match()
- regex_search()
- regex_iterator
- regex_token_iterator
- regex_replace()

### 여러 가지 유틸리티 라이브러리
#### ratio 라이브러리
#### chrono 라이브러리
- duration
- clock
- time_point

#### 무작위수 생성
- 무작위수 엔진
- 무작위수 엔진 어댑터
- 기본으로 제공하는 엔진과 엔진 어댑터
- 무작위수 생성하기
- 무작위수 분포

#### optional
#### variant
#### any
#### tuple
- tuple 분리하기
- 연결
- 비교
- make_from_tuple
- apply

#### 파일시스템 지원 라이브러리
- path
- directory_entry
- 헬퍼 함수
- directory_iterator와 recursive_director_iterator

## C++ 고급 기능 마스터하기
### 표준 라이브러리 커스터마이즈 및 확장
#### 할당자
#### 스트림 반복자
- 출력 스트림 반복자
- 입력 스트림 반복자

#### 반복자 어댑터
- 역방향 반복자
- 추가 반복자
- 이동 반복자

#### 표준 라이브러리 확장하기
- 표준 라이브러리를 확장하는 이유
- 표준 라이브러리 알고리즘 만들기
- 표준 라이브러리 컨테이너 만들기

### 고급 템플릿
#### 템플릿 매개변수에 대한 심화 학슴
- 템플릿 타입 매개변수에 대한 심화 학습
- 템플릿 템플릿 매개변수
- 비타입 템플릿 매개변수에 대한 고급 기능

#### 클래스 템플릿 부분 특수화
#### 오버로딩으로 함수 템플릿 부분 특수화 흉내내기
#### 템플릿 재귀
- N차원 Grid: 첫 번째 시도
- 진정한 N차원 Grid

#### 가변 인수 템플릿
- 타입에 안전한 가변 길이 인수 리스트
- 가변 개수의 믹스인 클래스
- 폴딩 표현식

#### 메타프로그래밍
- 컴파일 시간에 팩토리얼 계산하기
- 루프 언롤링
- tuple 출력하기
- 타입 트레이트
- 템플릿 메타프로그래밍 맺음말

### C++ 멀티스레드 프로그래밍
#### 멀티스레드 프로그래밍 개념
- 경쟁 상태
- 테어링
- 데드락
- 잘못된 공유

#### 스레드
- 함수 포인터로 스레드 만들기
- 함수 객체로 스레드 만들기
- 람다 표현식으로 스레드 만들기
- 멤버 함수로 스레드 만들기
- 스레드 로컬 저장소
- 스레드 취소하기
- 스레드로 실행한 결과 얻기
- 익셉션 복제와 다시 던지기

#### 아토믹 연산 라이브러리
- 아토믹 타입 사용예
- 아토믹 연산

#### 상호 배제
- mutex
- lock
- std::call_once
- 뮤텍스 객체 사용 방법

#### 조건 변수
- 비정상적으로 깨어나기
- 조건 변수 사용하기

#### promise와 future
- std::promise와 std::future
- std::packaged_task
- std::async
- 익셉션 처리
- std::shared_future

#### 멀티스레드 Logger 클래스 예제
#### 스레드 풀
#### 바람직한 스레드 디자인과 구현을 위한 가이드라인

## C++ 소프트웨어 공학
### 소프트웨어 공학 기법
#### 프로세스의 필요성
#### 소프트웨어 라이프 사이클 모델
- 폭포수 모델
- 사시미 모델
- 나선형 모델
- 애자일 방법론

#### 소프트웨어 공학 방법론
- UP
- RUP
- 스크럼
- 익스트림 프로그래밍
- 소프트웨어 트리아지

#### 나만의 프로세스와 방법론 만들기
- 새로운 개념 받아들이기
- 새로운 아이디어 적극적으로 제시하기
- 효과 있는 것과 효과 없는 것 구분하기
- 방법론 준수하기

#### 소스 코드 관리

### 효율적인 C++ 코드 작성법
#### 성능과 효율성에 대하여
- 효율성을 확보하기 위한 두 가지 접근 방법
- 두 가지 프로그램
- C++는 비효율적인 언어인가?

#### 언어 차원의 효율성
- 객체를 효율적으로 다루는 방법
- 미리 할당된 메모리
- inline 메서드와 inline 함수 활용하기

#### 디자인 차원의 효율성
- 최대한 캐싱하기
- 객체 풀 활용하기

#### 프로파일링
- gprof로 프로파일링하는 방법
- 비주얼 C++ 2017을 이용한 프로파일링

### 테스트 숙달하기
#### 품질 관리
- 테스트 책임자
- 버그의 라이프사이클
- 버그 트래킹 도구

#### 단위 테스트
- 단위 테스트 방법
- 단위 테스트 프로세스
- 단위 테스트 실습하기

#### 하이레벨 테스트
- 통합 테스트
- 시스템 테스트
- 회귀 테스트

#### 성공적인 테스트를 위한 팁

### 디버깅 완전 정복
#### 디버깅 기본 원칙
#### 버그 분류
#### 버그 방지
#### 버그 대비
- 에러 로깅
- 디버그 트레이스
- 어서션
- 크래시 덤프

#### 정적 어서션
#### 디버깅 테크닉
- 버그 재현
- 재현 가능한 버그 디버깅
- 재현 불가능한 버그 디버깅
- 회귀 버그 디버깅
- 메모리 문제 디버깅
- 멀티스레드 프로그램 디버깅
- 디버깅 예제: 논문 인용
- 논문 인용 예제의 교훈

### 디자인 기법과 프레임워크
#### 흔히 사용하지만 까먹기 쉬운 문법
- 클래스 새로 만들기
- 클래스 확장하기
- 복제 후 맞바꾸기 패턴
- 익셉션 던지고 받기
- 파일 읽기
- 파일 쓰기
- 클래스 템플릿 작성하기

#### 고급 기법
- RAII
- 더블 디스패치
- 믹스인 클래스

#### 객체지향 프레임워크
- 프레임워크 다루기
- MVC 패러다임

### 디자인 패턴
#### 반복자 패턴
#### 싱글턴 패턴
- 예제: 로깅 매커니즘
- 싱글턴 구현 방법
- 싱글턴 사용 방법

#### 추상 팩토리 패턴
- 예제: 자동차 공장 시뮬레이션
- 팩토리 구현 방법
- 팩토리 사용 방법
- 팩토리 활용 사례

#### 프록시 패턴
- 예제: 네트워크 연결 문제 숨기기
- 프록시 구현 방법
- 프록시 사용 방법

#### 어댑터 패턴
- 예제: Logger 클래스
- 어댑터 구현 방법
- 어댑터 사용 방법

#### 데코레이터 패턴
- 예제: 웹 페이지 스타일 정의
- 데코레이터 구현 방법
- 데코레이터 사용 방법

#### 책임 사슬 패턴
- 예제: 이벤트 처리
- 책임 사슬 구현 방법
- 책임 사슬 사용 방법
- 책임 사슬이 클래스 계층 구조와 다른 경우

#### 옵저버 패턴
- 옵저버 구현 방법
- 옵저버블 구현 방법
- 옵저버 사용 방법

### 크로스 플랫폼과 크로스 언어 애플리케이션 개발 방법
#### 크로스 플랫폼 개발
- 아키텍처 이슈
- 구현 이슈
- 플랫폼 종속적인 기능

#### 크로스 언어 개발
- C와 C++ 섞어 쓰기
- 패러다임 전환하기
- C 코드와 링크하기
- C#에서 C++ 코드 호출하기
- JNI로 자바에서 C++ 코드 호출하기
- C++ 코드에서 스크립트 호출하기
- 스크립트에서 C++ 코드 호출하기
- C++에서 어셈블리 코드 호출하기

### 부록 A. C++ 면접 예상 질문
### 부록 B. 참고 문헌
### 부록 C. 표준 라이브러리 헤더 파일
### 부록 D. UML 기초
