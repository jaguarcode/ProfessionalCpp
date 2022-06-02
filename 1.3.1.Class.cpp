#include <string>

class AirlineTicket
{
public:
	AirlineTicket(); // ������
	~AirlineTicket(); // �Ҹ���

	// �޼��� (����) ����
	double calculatePriceInDollars() const;

	const std::string& getPassengerName() const;
	void setPassangerName(const std::string& name);

	int getNumberOfMiles() const;
	void setNumberOfMiles(int miles);

	bool hasEliteSuperRewardStatus() const;
	void setHasEliteSuperRewardStatus(bool status);

	/*
		const-��Ȯ�� ��Ģ�� ������ ��ü�� ������ ��� ���� �������� �ʴ� ��� �Լ���
		�׻� const�� �����ϴ� ���� ����.
		�̷��� ������ ��� �Լ��� inspector, accessor, getter��� �θ���,
		non-const ��� �Լ��� mutator(������)��� �θ���.
	*/

private:
	// ������ ��� (�Ӽ�) ����
	std::string mPassengerName;
	int mNumberOfMiles;
	bool mHasEliteSuperRewardStatus;
};

// ������ �ʱ�ȭ
// 1. �̴ϼȶ����� (ctor �̴ϼȶ�����) ���
// 2. ������ �������� �ʱ�ȭ
// 3. Ŭ���� ���𿡼� �ʱ�ȭ (������ ���ʿ�)
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
