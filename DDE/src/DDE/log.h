#pragma once
#include "memory"
#include "Core.h"
#include "spdlog/spdlog.h"

namespace DDE {


	class DDE_API log
	{
	public:
		static void Init();
		

		inline static std::shared_ptr<spdlog::logger>& getCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& getClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};


}
//Core log macros
#define DDE_CORE_ERROR(...) ::DDE::log::getCoreLogger()->error(__VA_ARGS__)
#define DDE_CORE_INFO(...) ::DDE::log::getCoreLogger()->info(__VA_ARGS__)
#define DDE_CORE_WARN(...) ::DDE::log::getCoreLogger()->warn(__VA_ARGS__)
#define DDE_CORE_TRACE(...) ::DDE::log::getCoreLogger()->trace(__VA_ARGS__)
#define DDE_CORE_FATAL(...) ::DDE::log::getCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define DDE_ERROR(...) ::DDE::log::getClientLogger()->error(__VA_ARGS__)
#define DDE_INFO(...) ::DDE::log::getClientLogger()->info(__VA_ARGS__)
#define DDE_WARN(...) ::DDE::log::getClientLogger()->warn(__VA_ARGS__)
#define DDE_TRACE(...) ::DDE::log::getClientLogger()->trace(__VA_ARGS__)
#define DDE_FATAL(...) ::DDE::log::getClientLogger()->fatal(__VA_ARGS__)


//study macro def with third party packages