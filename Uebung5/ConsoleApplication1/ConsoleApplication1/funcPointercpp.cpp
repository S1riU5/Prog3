#include <iostream>

int add(int x , int y)
{
	return x + y;
}

int subtract(int x, int y)
{
	return x - y;

}

int math(int x, int y, int(*z)(int, int))
{
	return (*z)(x, y);
}
/*
*/
int main(void)
{
	int x = 1, y = 3;

	std::cout << math(x,y,add) << std::endl;
	std::cout << math(x,y,subtract) << std::endl;
}