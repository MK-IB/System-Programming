#include<Windows.h>
#include<iostream>

using namespace std;
int main()
{
	HANDLE hFile;
	hFile = CreateFile("G:\\fav\\C_WORKPLACE\\System-Programming\\FileCreated.docx",
						GENERIC_READ|GENERIC_WRITE,
						FILE_SHARE_READ,
						NULL,
						CREATE_NEW,
						FILE_ATTRIBUTE_NORMAL,
						NULL);
	if(hFile == INVALID_HANDLE_VALUE)
		cout<<"File Creation failed for"<<GetLastError()<<endl;
	cout<<"File Creation success"<<endl;
	CloseHandle(hFile);
	system("PAUSE");
	return 0;
}














