#include <windows.h>
#include <iostream>
typedef int(_stdcall* MyProc)();
HINSTANCE dllHandle = NULL;
int main()
{
	dllHandle = LoadLibrary(TEXT("JaAsm.dll"));
	MyProc procedura = (MyProc)GetProcAddress(dllHandle, "MyProc");
	std::cout << procedura();
}
