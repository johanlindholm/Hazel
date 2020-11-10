#include <Hazel.h>

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{

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
