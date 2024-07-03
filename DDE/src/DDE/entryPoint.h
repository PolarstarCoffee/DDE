#pragma once
#ifdef DDE_PLATFORM_WINDOWS

extern DDE::Application* DDE::CreateApplication();
int main(int argc, char** argv)
{
	DDE::log::Init();
	DDE_CORE_WARN("DDE Initalized");
	DDE_INFO("Crafting digital devils today?");
	//Allocated on the heap, explicit to memory
	//Basic entry point
	auto app = DDE::CreateApplication();
	app->Run();
	delete app;
}
#endif // DDE_PLATFORM_WINDOWS
