#pragma once

extern Hazel::Application* Hazel::CreateApplication();


#ifdef HZ_PLATFORM_WINDOWS
	void main(int argc, char** argv)
	{
		printf("Hazel engine\n");
		auto app = Hazel::CreateApplication();
		app->Run();
		delete app;
	}

#endif
