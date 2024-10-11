#include "module_1.h"
#include "module_2.h"
#include "module_3.h"
#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	cout << "Hello world!" << "\n";

	cout << Module_1::getMyName() << "\n";
	cout << Module_2::getMyName() << "\n";

	using namespace Module_1;
	cout << getMyName() << "\n"; // (A)
	cout << Module_2::getMyName() << "\n";

	//using namespace Module2; // (B)
	//std::cout << getMyName() << "\n"; // COMPILATION ERROR (C)

	using Module_3::getMyName;
	cout << getMyName() << "\n";

	cout << Module_2::getMyName() << "\n"; // (D)

}
