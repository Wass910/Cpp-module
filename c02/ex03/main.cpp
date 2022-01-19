
#include "Point.hpp"

int main(void)
{
	Point a(0, 0);
	Point b(20, 0);
	Point c(10, 30);
	Point in(10, 15);
	Point out(30, 50);

	Point x(-9, 0);
	Point y(-6, 5);
	Point z(-4, -3);
	Point in1(-7, 2);
	Point in2(-6, 1);
	Point out1(-10, 3);
	Point out2(-8, -2);
	Point out3(-3, 2);

	Point testx(-9, 0);
	Point testy(-6, 5);
	Point testz(-4, -3);
	Point testyout(-6, 5.1f);

	std::cout << "in : " << bsp(a, b, c, in) << std::endl;
	std::cout << "out : " << bsp(a, b, c, out) << std::endl;
	std::cout << std::endl;
	std::cout << "in1 : " << bsp(x, y, z, in1) << std::endl;
	std::cout << "in2 : " << bsp(x, y, z, in2) << std::endl;
	std::cout << "out1 : " << bsp(x, y, z, out1) << std::endl;
	std::cout << "out2 : " << bsp(x, y, z, out2) << std::endl;
	std::cout << "out3 : " << bsp(x, y, z, out3) << std::endl;
	std::cout << std::endl;
	std::cout << "dot : " << bsp(x, y, z, testx) << std::endl;
	std::cout << "dot : " << bsp(x, y, z, testy) << std::endl;
	std::cout << "dot : " << bsp(x, y, z, testz) << std::endl;
	std::cout << std::endl;
	std::cout << "dot out : " << bsp(x, y, z, testyout) << std::endl; 
	return 0;
}