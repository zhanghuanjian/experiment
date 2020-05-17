#include <windows.h>
#include<stdio.h>

LRESULT CALLBACK WinSunProc(
	HWND hwnd,
    UINT uMsg,
	WPARAM wParam,
	LPARAM lParam
	);

	int WINAPI WinMain(
		HINSTANCE hInstance,
		HINSTANCE hPrevInstance,
		LPSTR lpCmdLine,
	    int nCmdShow
		)
        {
			
//���һ��������
WNDCLASS wndcls;
wndcls.cbClsExtra=0;
wndcls.cbWndExtra=0;
wndcls.hbrBackground=(HBRUSH)GetStockObject(BLACK_BRUSH);
wndcls.hCursor=LoadCursor(NULL,IDC_CROSS);
wndcls.hInstance=hInstance;
wndcls.lpfnWndProc=WinSunProc;
wndcls.lpszClassName="sunxin2016";
wndcls.lpszMenuName=NULL;
wndcls.style=CS_HREDRAW| CS_VREDRAW;
RegisterClass(&wndcls);

		
//��������,����һ��������������ɹ��������ں󷵻صľ��
 HWND hwnd;
 hwnd=CreateWindow("sunxin2016","http://www.sunxin.org",WS_OVERLAPPEDWINDOW,0,0,600,400,NULL,NULL,hInstance,NULL);

//
 ShowWindow(hwnd,SW_SHOWNORMAL);
 UpdateWindow(hwnd);

 //
 MSG msg;
 while(GetMessage(&msg,NULL,0,0))
 {
	 TranslateMessage(&msg);
	 DispatchMessage(&msg);

 }
return msg.wParam;
}
//
LRESULT CALLBACK WinSunProc(
  HWND hwnd,
  UINT uMsg,
  WPARAM wParam,
  LPARAM lParam
)
{
	switch(uMsg)
	{
	case WM_CHAR:
		char szChar[20];
		sprintf(szChar,"char code is %d",wParam);
		MessageBox(hwnd,szChar,"Char",0);
		break;
	case WM_LBUTTONDOWN:
		MessageBox(hwnd,"mouse clicked","message",0);
		HDC hdc;
		hdc=GetDC(hwnd);
		TextOut(hdc,0,50,"����֮��",strlen("����Ա֮��"));
		break;
	case WM_PAINT:
		HDC hDC;
		PAINTSTRUCT ps;
		hDC=BeginPaint(hwnd,&ps);
		TextOut(hDC,0,0,"http://www.sunixin.org",strlen("http://www.sunxin.org"));
		EndPaint(hwnd,&ps);
		break;
	case WM_CLOSE:
		if(IDYES==MessageBox(hwnd,"�Ƿ���ĵĽ���?","mwssage",MB_YESNO))
		{
			DestroyWindow(hwnd);

		}
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hwnd,uMsg,wParam,lParam);

	}
return 0;

}