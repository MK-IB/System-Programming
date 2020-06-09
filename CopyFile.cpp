#include<Windows.h>
#include<iostream>

using namespace std;
int main()
{
	bool dirBool;
	dirBool = CopyFile("G:\\fav\\C_WORKPLACE\\System-Programming\\old.txt", "G:\\fav\\C_WORKPLACE\\System-Programming\\new.txt", true);
	if(dirBool ==  false)
		cout<<"Copying Error"<<GetLastError()<<endl;
	else
		cout<<"Copy success"<<endl;
	
	system("PAUSE");;
	return 0;
}
