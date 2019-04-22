#define _CRT_SECURE_NO_WARNINGS 1
// version项目
# include <windows.h>
# include <iostream>
# pragma push_macro
// 利用进程和操作系统的版本信息的简单示例
void main()
{   // 提取这个进程的ID号
	DWORD dwIdThis = ::GetCurrentProcessId();
	// 获得这一进程和报告所需的版本，也可以发送0以便指明这一进程
	DWORD dwVerReq = ::GetProcessVersion(dwIdThis);
	WORD wMajorReq = (WORD)(dwVerReq>16);
	WORD wMinorReq = (WORD)(dwVerReq & 0xffff);
	std::cout << "Process ID:" << dwIdThis << ",requires OS:"
		<< wMajorReq << wMinorReq << std::endl;
	// 设置版本信息的数据结构，以便保存操作系统的版本信息
	OSVERSIONINFOEX osvix;
	::ZeroMemory(&osvix, sizeof(osvix));
	osvix.dwOSVersionInfoSize = sizeof(osvix);
	// 提取版本信息和报告
	::GetVersionEx(reinterpret_cast<LPOSVERSIONINFO>(&osvix));
	std::cout << "Running on OS:" << osvix.dwMajorVersion << "."
		<< osvix.dwMinorVersion << std::endl;
	// 显示进程当前优先级
	DWORD dwProcessP : GetPriorityClass(GetCurrentProcess());
	std::cout << "Current process priority is:";
	switch (dwProcessP){
	case HIGH_PRIORTY_CLASS:
		std::cout << "High";
		break;
	case NORMAL_PRIORTY_CLASS:
		std::cout << "Normal";
		break;
	case IDLE_PRIORTY_CLASS:
		std::cout << "Idle";
		break;
	case REALTIME_PRIORTY_CLASS:
		std::cout << "RealTime";
		break;
	default:
		std::cout << "unknow";
		break;
	}
	std::cout << std::endl;
	// 如果是NTS (Windows 2000) 系统，则提高其优先权
	if (osvix.dwPlatformld == VER_PLATFORM_WIN32_NT &&
		osvix.dwMajorVersion >= 5)
	{
		if (dwProcessP != HIGH_PRIORITY_CLASS){
			// 如果当前优先级不是high，则改变优先级
			::SetPriorityClass(
				::GetCurrentProcess(),		// 利用这一进程
				HIGH_PRIORITY_CLASS);		// 改变为high
			// 报告给用户
			dwProcessP = GetPriorityClass(GetCurrentProcess());
			std::cout << "The process priority have been changed to ";
			switch (dwProcessP)
			{
			case HIGH_PRIORITY_CLASS:
				std::cout << "High";
				break;
			case NORMAL_PRIORITY_CLASS:
				std::cout << "Normal";
				break;
			case IDLE_PRIORITY_CLASS:
				std::cout << "Idle";
				break;
			case REALTIME_PRIORITY_CLASS:
				std::cout << "Realtime";
				break;
			default:
				std::cout << "<unknow>";
				break;
			}
			std::cout << std::endl;
		}
	}