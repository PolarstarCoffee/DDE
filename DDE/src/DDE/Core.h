#pragma once

#ifdef DDE_PLATFORM_WINDOWS
	#ifdef DDE_BUILD_DLL
		#define DDE_API __declspec(dllexport)
	#else
		#define DDE_API __declspec(dllimport)
	#endif
#else
#error Digital Devil Engine only supports Windows for now!
#endif

//Macros yet only works on windows