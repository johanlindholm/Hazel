#pragma once

extern Hazel::Application* Hazel::CreateApplication();

#ifdef HZ_PLATFORM_WINDOWS
	void main(int argc, char** argv)
	{
		Hazel::Log::Init();
		HZ_CORE_INFO("Initialized log");
		int a = 50;
		HZ_INFO("Initialized log car={0}", a);

		auto app = Hazel::CreateApplication();
		app->Run();
		delete app;
	}

#endif
