
// CTest9-3��̬����(����)Dlg.h : ͷ�ļ�
//

#pragma once


// CCTest93��̬���ؾ���Dlg �Ի���
class CCTest93��̬���ؾ���Dlg : public CDialogEx
{
// ����
public:
	CCTest93��̬���ؾ���Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CTEST93_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	void foo(CImage & img, int & sx, int & sy, int & w, int & h);
	
};
