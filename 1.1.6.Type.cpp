// enum
/*

*/
const int PieceTypeKing_ = 0;
const int PieceTypeQueen_ = 1;
const int PieceTypeRook_ = 2;
const int PieceTypePawn_ = 3;

int myPiece = PieceTypeKing_;
/*
const로 표현해도 되지만, int 값으로 표현했기 때문에
누군가 값을 증가시키는 코드를 작성하면 심각한 문제가 발생할 수 있다.
enum 타입을 적용하면 변수에 지정할 수 있는 값의 범위를 엄격하게 제한하기 때문에
이러한 문제를 방지할 수 있다.
*/

enum PieceTypeEnum { PieceTypeKing = 1, PieceTypeQueen, PieceTypeRook = 10, PieceTypePawn };

/*
enum은 원래 타입을 엄격하게 따지지 않는다.
타입을 엄격히 따지는 것을 '스트롱 타입' 또는 '타입에 안전(세이프)하다.'고 표현한다.
enum 타입은 항상 정수로 해석하기 때문에 선언한 형태에 관계없이 모든 enum 타입을 서로 비교할 수 있다.
*/

enum class PieceType : unsigned long
{
	King = 1,
	Queen,
	Rook = 10,
	Pawn
};

void enum_check() {
	PieceType piece = PieceType::King;

	// if (PieceType::Queen == 2) {} // 불가능
	if (static_cast<int>(PieceType::Queen) == 2) {}
}

// 구조체
/*
구조체를 사용하면 기존에 정의된 타입을 한 개 이상 묶어서 새로운 타입으로 정의할 수 있다.
*/
struct Employee {
	char firstInitial;
	char lastInitial;
	int employeeNumber;
	int salary;
};