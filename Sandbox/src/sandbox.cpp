#include <dde.h>

//Client Side 

class Sandbox : public DDE::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}


};

DDE::Application* DDE::CreateApplication()
{
	return new Sandbox();
}