#include<Windows.h>
#include<iostream>

using namespace std;
int main()
{
	HANDLE hFile;
	BOOL bFile;
	char chBuffer[] = "This is the sample program of write read API";
	DWORD dwNoByteToWrite = strlen(chBuffer);
	DWORD dwNoByteWritten = 0;
	
	DWORD dwNoByteToRead = strlen(chBuffer);
	DWORD dwNoByteRead = 0;
	
	hFile = CreateFile("G:\\fav\\C_WORKPLACE\\System-Programming\\WriteFileTest.txt",
						GENERIC_READ|GENERIC_WRITE,
						FILE_SHARE_READ,
						NULL,
						CREATE_NEW,
						FILE_ATTRIBUTE_NORMAL,
						NULL);
	if(hFile == INVALID_HANDLE_VALUE)
		cout<<"File Creation failed for -"<<GetLastError()<<endl;
	cout<<"File Creation success"<<endl;
	
	//Writing the file
	bFile = WriteFile(
					hFile,
					chBuffer,
					dwNoByteToWrite,
					&dwNoByteWritten,
					NULL);
	if(bFile == false)
	{
		cout<<"Write file failed for -"<<GetLastError()<<endl;
	}
	cout<<"Write Success";
	
	//Reading the  file
	bFile = ReadFile(
					hFile,
					chBuffer,
					dwNoByteToRead,
					&dwNoByteRead,
					NULL);
	if(bFile == false)
	{
		cout<<"Read file failed for -"<<GetLastError()<<endl;
	}
	cout<<"Read file success"<<endl;
	cout<<"DATA READ -> "<<chBuffer<<endl;
	
	//Closing the file
	CloseHandle(hFile);
	system("PAUSE");
	return 0;
}
