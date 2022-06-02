#include <string>

class AirlineTicket
{
public:
	AirlineTicket(); // 생성자
	~AirlineTicket(); // 소멸자

	// 메서드 (동작) 선언
	double calculatePriceInDollars() const;

	const std::string& getPassengerName() const;
	void setPassangerName(const std::string& name);

	int getNumberOfMiles() const;
	void setNumberOfMiles(int miles);

	bool hasEliteSuperRewardStatus() const;
	void setHasEliteSuperRewardStatus(bool status);

	/*
		const-정확성 원칙에 따르면 객체의 데이터 멤버 값을 변경하지 않는 멤버 함수는
		항상 const로 지정하는 것이 좋다.
		이렇게 지정한 멤버 함수를 inspector, accessor, getter라고 부르며,
		non-const 멤버 함수를 mutator(변경자)라고 부른다.
	*/

private:
	// 데이터 멤버 (속성) 선언
	std::string mPassengerName;
	int mNumberOfMiles;
	bool mHasEliteSuperRewardStatus;
};

// 생성자 초기화
// 1. 이니셜라이저 (ctor 이니셜라이져) 사용
// 2. 생성자 본문에서 초기화
// 3. 클래스 선언에서 초기화 (생성자 불필요)
AirlineTicket::AirlineTicket()
	: mPassengerName("Unknown Passenger")
	, mNumberOfMiles(0)
	, mHasEliteSuperRewardStatus(false)
{
}

AirlineTicket::~AirlineTicket()
{
}

double AirlineTicket::calculatePriceInDollars() const
{
	if (hasEliteSuperRewardStatus()) {
		return 0;
	}
	return getNumberOfMiles() * 0.1;
}

const std::string& AirlineTicket::getPassengerName() const
{
	return mPassengerName;
}

void AirlineTicket::setPassangerName(const std::string& name)
{
	mPassengerName = name;
}

int AirlineTicket::getNumberOfMiles() const
{
	return mNumberOfMiles;
}

void AirlineTicket::setNumberOfMiles(int miles)
{
	mNumberOfMiles = miles;
}

bool AirlineTicket::hasEliteSuperRewardStatus() const
{
	return mHasEliteSuperRewardStatus;
}

void AirlineTicket::setHasEliteSuperRewardStatus(bool status)
{
	mHasEliteSuperRewardStatus = status;
}
