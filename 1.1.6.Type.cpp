// enum
/*

*/
const int PieceTypeKing_ = 0;
const int PieceTypeQueen_ = 1;
const int PieceTypeRook_ = 2;
const int PieceTypePawn_ = 3;

int myPiece = PieceTypeKing_;
/*
const�� ǥ���ص� ������, int ������ ǥ���߱� ������
������ ���� ������Ű�� �ڵ带 �ۼ��ϸ� �ɰ��� ������ �߻��� �� �ִ�.
enum Ÿ���� �����ϸ� ������ ������ �� �ִ� ���� ������ �����ϰ� �����ϱ� ������
�̷��� ������ ������ �� �ִ�.
*/

enum PieceTypeEnum { PieceTypeKing = 1, PieceTypeQueen, PieceTypeRook = 10, PieceTypePawn };

/*
enum�� ���� Ÿ���� �����ϰ� ������ �ʴ´�.
Ÿ���� ������ ������ ���� '��Ʈ�� Ÿ��' �Ǵ� 'Ÿ�Կ� ����(������)�ϴ�.'�� ǥ���Ѵ�.
enum Ÿ���� �׻� ������ �ؼ��ϱ� ������ ������ ���¿� ������� ��� enum Ÿ���� ���� ���� �� �ִ�.
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

	// if (PieceType::Queen == 2) {} // �Ұ���
	if (static_cast<int>(PieceType::Queen) == 2) {}
}

// ����ü
/*
����ü�� ����ϸ� ������ ���ǵ� Ÿ���� �� �� �̻� ��� ���ο� Ÿ������ ������ �� �ִ�.
*/
struct Employee {
	char firstInitial;
	char lastInitial;
	int employeeNumber;
	int salary;
};