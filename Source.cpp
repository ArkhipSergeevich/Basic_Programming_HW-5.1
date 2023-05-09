#include <iostream>

class shapes
{
public:
	
	shapes()
	{
		number_of_sides = 0;
	}
	void check_number_of_sides()
	{
		std::cout << number_of_sides << std::endl;
	}
protected:
	int number_of_sides;
};
class triangles :public shapes
{
public:
	triangles()
	{
		number_of_sides = 3;
	}
};
class quadrilaterals :public shapes 
{
public:
	quadrilaterals()
	{
		number_of_sides = 4;
	}
};
int main()
{
	shapes shape1;
	shape1.check_number_of_sides();
	triangles triangle1;
	triangle1.check_number_of_sides();
	quadrilaterals quadrilateral1;
	quadrilateral1.check_number_of_sides();
	//triangle1.number_of_sides = 5; //It's not allowed because of "protected" access modifier 
}