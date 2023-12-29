#pragma once



//直接输入当前线程号

extern TC_CORE_API void Log_CurrentThread(const FString& str);


extern TC_CORE_API void  Log_TraceStack(int Depth = 5);