#include<Windows.h>
#include<iostream>

using namespace std;
int main()
{
	bool bFile;
	bFile = MoveFile("G:\\fav\\C_WORKPLACE\\System-Programming\\moved.txt","G:\\fav\\Unity Projs\\moveBy.txt");
	if(bFile == false)
		cout<<"Move File failed"<<GetLastError()<<endl;
	cout<<"MoveFile Success"<<endl;
	return 0;
}
