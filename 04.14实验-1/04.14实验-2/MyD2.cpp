// MyD2.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "04.14ʵ��-2.h"
#include "MyD2.h"
#include "afxdialogex.h"


// MyD2 �Ի���

IMPLEMENT_DYNAMIC(MyD2, CDialogEx)

MyD2::MyD2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

MyD2::~MyD2()
{
}

void MyD2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST2, Lbox);
}


BEGIN_MESSAGE_MAP(MyD2, CDialogEx)
	ON_LBN_SELCHANGE(IDC_LIST2, &MyD2::OnLbnSelchangeList2)
	ON_BN_CLICKED(IDC_BUTTON1, &MyD2::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyD2 ��Ϣ�������


void MyD2::OnLbnSelchangeList2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


BOOL MyD2::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	s = "";
	Lbox.AddString(_T("�쳣: OCX ����ҳӦ���� FALSE"));
	Lbox.AddString(_T("TODO:  �ڴ���Ӷ���ĳ�ʼ��"));

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void MyD2::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int n = Lbox.GetCurSel();//ȡ����ѡ���к���
	Lbox.GetText(n, s);
}
