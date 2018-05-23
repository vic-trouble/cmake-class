#include <MyLib/answer.h>
#include <MyLib/question.h>

#include <iostream>

int main()
{
	std::cout << MyLib::TheQuestion() << " == " << MyLib::TheAnswer() << std::endl;
	return 0;
}