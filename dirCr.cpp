#include<Windows.h>
#include<iostream>

using namespace std;

int main()
{
	bool dir;
	dir = CreateDirectory("G:\\fav\\C_WORKPLACE\\DirBySysProg", NULL);
	if(dir == false)
		cout<<"Dir creation failed";
	cout<<"Created";
	system("PAUSE");
	return 0;
}
