//IF YOU DELETE THE ORIGINAL FILE, YOU CAN STILL ACCESS THE FILE CREATED BY HARDLINK

#include<Windows.h>
#include<iostream>

using namespace std;
int main()
{
	bool bHfile;
	bHfile = CreateHardLink(
						"G:\\fav\\C_WORKPLACE\\System-Programming\\HardlinkCreatedFile.docx",
						"G:\\fav\\C_WORKPLACE\\System-Programming\\HardlinkExisting.docx",
						NULL);
	if(bHfile == false)
	{
		cout<<"HardLink creation failed"<<GetLastError()<<endl;
	}
	cout<<"hardlink Created"<<endl;
	
	system("PAUSE");
	return 0;
}
