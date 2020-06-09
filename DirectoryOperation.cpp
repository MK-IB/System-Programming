#include<Windows.h>
#include<iostream>

using namespace std;

int main()
{
	bool dir;
	dir = CreateDirectory("G:\\fav\\C_WORKPLACE\\DirBySysProg", NULL);
	if(dir == false)
		cout<<"Dir creation failed";
	cout<<"Created"<<endl;
	getchar();
	dir = RemoveDirectory("G:\\fav\\C_WORKPLACE\\DirBySysProg");
	if(dir == false)
		cout<<"Dir removal failed";
	cout<<"Deleted"<<endl;
	system("PAUSE");
	return 0;
}
