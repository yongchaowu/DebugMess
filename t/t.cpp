// t.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <Windows.h>
void ex(char* str);

int _tmain(int argc, _TCHAR* argv[])
{
	/*LPSYSTEMTIME tf;
	GetLocalTime(tf);*/
	SYSTEMTIME systime;
	GetLocalTime(&systime);

	GetCurrentThreadId();
	char tttt[128];
	sprintf(tttt, " yy  %d %d %d %d \r\n",systime.wHour,systime.wMinute,systime.wSecond,systime.wMilliseconds);
	ex(tttt);
	char str[] = "ggggggggggggggg1\r\n";
	char tt[128] = {0};
	sprintf(tt, "tttt: %d",GetCurrentThreadId());
	for (int i=0;i<10;i++)
	{		
		ex(str);      //�ر��ļ�

	}
	ex(tt);
	GetLocalTime(&systime);
	sprintf(tttt, " yy  %d %d %d %d \r\n",systime.wHour,systime.wMinute,systime.wSecond,systime.wMilliseconds);
	ex(tttt);
	getchar();
	return 0;
}
void ex(char* str)
{
	std::fstream ofile;               //��������ļ�
	//ofile.open("d:\\kio_debug_ycw.txt"/*,std::ios::binary|std::ios::app|std::ios::in|std::ios::out,0*/);     //��Ϊ����ļ���
	ofile.open("d:\\kio_debug_ycw.txt",std::ios::binary|std::ios::app|/*std::ios::in|*/std::ios::out);     //��Ϊ����ļ���
	/*if(ofile == NULL) return ;
	for(int i=0;i<strlen(str);i++)
		ofile.put(str[i]);
	ofile.close(); */
	if(ofile != NULL) 
	{
		for(int i=0;i<strlen(str);i++)
			ofile.put(str[i]);
		ofile.close(); 
	}

}
