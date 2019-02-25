#pragma once


#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {
	Hazel::Log::Init();
	HZ_CORE_WARN("Iniciando Hazel Engine");
	HZ_INFO("Iniciando log en servicio de cliente _ auto");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif