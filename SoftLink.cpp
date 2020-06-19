//SOFTLINK IS THE SHORTCUT OF ORIGINAL FILE
//IF YOU DELETE THE ORIGINAL FILE YOU WILL LOST THE LINK

#include<Windows.h>
#include<iostream>

using namespace std;
int main()
{
	bool bHfile;
	bHfile = CreateSymbolicLink(
		"G:\\fav\\C_WORKPLACE\\System-Programming\\SoftLinkFile.txt",
		"G:\\fav\\C_WORKPLACE\\System-Programming\\SoftlinkOriginalFile.txt",
		0); //3rd PARAM IS 0-FOR FILES, 1-FOR FOLDERS
	if(bHfile == false)
	{
		cout<<"Symbolic Link creation failed"<<GetLastError()<<endl;
	}
	cout<<"Symbolic Link created sucessfully"<<endl;
	
	system("PAUSE");
	return 0;
}
