#include <Hazel.h>

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{
		int a = 0;
	}
	
	~Sandbox()
	{

	}

};

// 	__declspec(dllimport) void Print();

Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}
