
// CTest11-1MFC���ݿ�View.h : CCTest111MFC���ݿ�View ��Ľӿ�
//

#pragma once

class CCTest111MFC���ݿ�Set;

class CCTest111MFC���ݿ�View : public CRecordView
{
protected: // �������л�����
	CCTest111MFC���ݿ�View();
	DECLARE_DYNCREATE(CCTest111MFC���ݿ�View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_CTEST111MFC_FORM };
#endif
	CCTest111MFC���ݿ�Set* m_pSet;

// ����
public:
	CCTest111MFC���ݿ�Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CCTest111MFC���ݿ�View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit2();
	long ID;
	CString name;
	CString number;
	CString age;
	CString phoneNum;
};

#ifndef _DEBUG  // CTest11-1MFC���ݿ�View.cpp �еĵ��԰汾
inline CCTest111MFC���ݿ�Doc* CCTest111MFC���ݿ�View::GetDocument() const
   { return reinterpret_cast<CCTest111MFC���ݿ�Doc*>(m_pDocument); }
#endif

