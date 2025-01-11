#include <iostream>

template <typename T>
T suma(T a, T b)
{
	return a + b;
}

int main()
{
	std::cout << "Hola mundo" << '\n';
	std::cout << "2 + 3 = " << suma(2,3) << '\n';
	return 0;
}