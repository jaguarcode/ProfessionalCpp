#include <iostream>
#include <memory>

class Coordinate
{
public:
	Coordinate(int _x, int _y) { 
		setX(_x);
		setY(_y);
	};
private:
	int x;
	int y;

public:
	void setX(int _x) { x = _x; };
	void setY(int _y) { y = _y; };
	int getX() { return x; };
	int getY() { return y; };
};

int smart_pointer()
{
	auto coordinate = std::make_unique<Coordinate>(1, 1);
	
	std::cout << coordinate.get()->getX() << ", ";
	std::cout << coordinate.get()->getY() << "\n";

	return 0;
}