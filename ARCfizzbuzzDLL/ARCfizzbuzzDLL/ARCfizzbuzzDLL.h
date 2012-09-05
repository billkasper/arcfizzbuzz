// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the ARCFIZZBUZZDLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// ARCFIZZBUZZDLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
//
// Questions?  arcfizzbuzz@logicalmetaphysics.com

#ifdef ARCFIZZBUZZDLL_EXPORTS
#define ARCFIZZBUZZDLL_API __declspec(dllexport)
#else
#define ARCFIZZBUZZDLL_API __declspec(dllimport)
#endif

// This class is exported from the ARCfizzbuzzDLL.dll
class ARCFIZZBUZZDLL_API CARCfizzbuzzDLL {
public:
	CARCfizzbuzzDLL(void);
	// TODO: add your methods here.

	int doFizzBuzz(
			int rangeStart, 
			int rangeEnd,
			int divideVal1, 
			int divideVal2, 
			char divString1[], 
			char divString2[], 
			char divStringBoth[]);
};


extern ARCFIZZBUZZDLL_API int doFizzBuzz(
			int rangeStart, 
			int rangeEnd,
			int divideVal1, 
			int divideVal2, 
			char divString1[], 
			char divString2[], 
			char divStringBoth[]);

extern ARCFIZZBUZZDLL_API int nARCfizzbuzzDLL;

ARCFIZZBUZZDLL_API int fnARCfizzbuzzDLL(void);
