#include <MyLib/answer.h>

#include <cassert>
#include <iostream>

#include <Windows.h>

int main()
{
	HMODULE hmodule = LoadLibrary("MyLoadLibrary.dll");
	assert(hmodule);

	using TheQuestionFunc = const char * (*)();
	TheQuestionFunc TheQuestion = (TheQuestionFunc)GetProcAddress(hmodule, "TheQuestion");
	assert(TheQuestion);

	std::cout << TheQuestion() << " == " << MyLib::TheAnswer() << std::endl;

	CloseHandle(hmodule);
	return 0;
}
