// InheritTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class super
{
public:
	super()
	{
		std::cout << "super.Start" << std::endl;
		Method();
		std::cout << "super.End" << std::endl;
	}

	virtual void Method()
	{
		std::cout << "super.Method" << std::endl;
	}
};

class Derive : public super
{
public:
	Derive()
	{
		std::cout << "Derive.Start" << std::endl;
		Method();
		std::cout << "Derive.End" << std::endl;
	}

	void Method() override
	{
		std::cout << "Derive.Method" << std::endl;
	}
};

int main()
{
	//super *ss = new super();
	//super *sd = new Derive();
	//Derive *dd = new Derive();

	//ss->Method();
	//sd->Method();
	//dd->Method();

	Derive d;
	std::cout << "==========" << std::endl;
	Derive *pd = new Derive();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
