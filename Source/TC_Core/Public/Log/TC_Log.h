#pragma once





//定义区域
TC_CORE_API DECLARE_LOG_CATEGORY_EXTERN(TC_Core_Log,Log,All);
//////////////////
///定义GF日志
///[Core.Log]
///TC_Core_Log=Display
///控制方法
///
///
///
#define TC_CORE_VERYBOSE(Format, ...) \
UE_LOG(TC_Core_Log,VeryVerbose,Format,##__VA_ARGS__)


#define TC_CORE_VERBOSE(Format, ...) \
UE_LOG(TC_Core_Log,Verbose,Format,##__VA_ARGS__)

#define TC_CORE_LOG(Format, ...) \
UE_LOG(TC_Core_Log,Log,Format,##__VA_ARGS__)

#define TC_CORE_DISPLAY(Format, ...) \
UE_LOG(TC_Core_Log,Display,Format,##__VA_ARGS__)

#define TC_CORE_WARNING(Format, ...) \
UE_LOG(TC_Core_Log,Warning,Format,##__VA_ARGS__)

#define TC_CORE_ERROR(Format, ...) \
UE_LOG(TC_Core_Log,Error,Format,##__VA_ARGS__)

#define TC_CORE_FATAL(Format, ...) \
UE_LOG(TC_Core_Log,Fatal,Format,##__VA_ARGS__)




///////////////////////////////