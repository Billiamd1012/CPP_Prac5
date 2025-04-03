// CPP_Prac5.cpp : Defines the entry point for the application.
//

#include "CPP_Prac5.h"
#include "piefactory.h"

using namespace std;

int main()
{
	std::string type;
	std::cout << "What kind of pie do you want to make: ";
	std::cin >> type;

	PieFactory pf{};

	Pie* pie = pf.makePie(type);

	std:cout << pie->description();
	return 0;
}
