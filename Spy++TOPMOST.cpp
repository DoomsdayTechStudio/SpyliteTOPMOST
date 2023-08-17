#include <iostream>
#include <windows.h>
#include <conio.h> 
using namespace std;

int main()
{
	while(1)
	{
		HWND spypp=FindWindow("ThunderRT6FormDC","Spy++ Lite V3.1");
		cout<<spypp;
		SetWindowPos(spypp,HWND_TOPMOST,0,0,452,352,SWP_SHOWWINDOW);
	}
	
 } 
