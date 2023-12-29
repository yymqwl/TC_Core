

#include "Profile/TC_Profile.h"
#include "HAL/ThreadManager.h"
#include "Log/TC_Log.h"


void Log_CurrentThread(const FString&  str)
{
	uint32 CurrentThreadId = FPlatformTLS::GetCurrentThreadId();\
	FString CurrentThreadName = FThreadManager::Get().GetThreadName(CurrentThreadId);\
	TC_CORE_LOG(TEXT("线程:%s[%d] 输出:%s"), *CurrentThreadName, CurrentThreadId,*str);
}




void Log_TraceStack(int Depth )
{
	FString info = "Stack Info:";
	TArray<FProgramCounterSymbolInfo> stacks = FPlatformStackWalk::GetStack(1, Depth);
	for (int i=0; i < stacks.Num(); i++)
	{
		info += FString("\r\n\t") + FString::Printf(TEXT("%s (%s Line:%d"),
			ANSI_TO_TCHAR(stacks[i].FunctionName),  ANSI_TO_TCHAR(stacks[i].Filename), stacks[i].LineNumber);
	}
	if (stacks.Num() > 0)
	{
		TC_CORE_LOG( TEXT("%s"), *info);
	}
}