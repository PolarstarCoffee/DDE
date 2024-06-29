#pragma once

#include "Core.h"

namespace DDE {
	class DDE_API Application
	{
	public:
		Application();
		//subclassed by sandbox application 
		virtual ~Application();


		void Run();
	};
	//Defined in client
	Application* CreateApplication();
}
