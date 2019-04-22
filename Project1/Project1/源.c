#define _CRT_SECURE_NO_WARNINGS 1
// version��Ŀ
# include <windows.h>
# include <iostream>
# pragma push_macro
// ���ý��̺Ͳ���ϵͳ�İ汾��Ϣ�ļ�ʾ��
void main()
{   // ��ȡ������̵�ID��
	DWORD dwIdThis = ::GetCurrentProcessId();
	// �����һ���̺ͱ�������İ汾��Ҳ���Է���0�Ա�ָ����һ����
	DWORD dwVerReq = ::GetProcessVersion(dwIdThis);
	WORD wMajorReq = (WORD)(dwVerReq>16);
	WORD wMinorReq = (WORD)(dwVerReq & 0xffff);
	std::cout << "Process ID:" << dwIdThis << ",requires OS:"
		<< wMajorReq << wMinorReq << std::endl;
	// ���ð汾��Ϣ�����ݽṹ���Ա㱣�����ϵͳ�İ汾��Ϣ
	OSVERSIONINFOEX osvix;
	::ZeroMemory(&osvix, sizeof(osvix));
	osvix.dwOSVersionInfoSize = sizeof(osvix);
	// ��ȡ�汾��Ϣ�ͱ���
	::GetVersionEx(reinterpret_cast<LPOSVERSIONINFO>(&osvix));
	std::cout << "Running on OS:" << osvix.dwMajorVersion << "."
		<< osvix.dwMinorVersion << std::endl;
	// ��ʾ���̵�ǰ���ȼ�
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
	// �����NTS (Windows 2000) ϵͳ�������������Ȩ
	if (osvix.dwPlatformld == VER_PLATFORM_WIN32_NT &&
		osvix.dwMajorVersion >= 5)
	{
		if (dwProcessP != HIGH_PRIORITY_CLASS){
			// �����ǰ���ȼ�����high����ı����ȼ�
			::SetPriorityClass(
				::GetCurrentProcess(),		// ������һ����
				HIGH_PRIORITY_CLASS);		// �ı�Ϊhigh
			// ������û�
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