
// CTest2-11�һ���ʾ��������View.h : CCTest211�һ���ʾ��������View ��Ľӿ�
//

#pragma once


class CCTest211�һ���ʾ��������View : public CView
{
protected: // �������л�����
	CCTest211�һ���ʾ��������View();
	DECLARE_DYNCREATE(CCTest211�һ���ʾ��������View)

// ����
public:
	CCTest211�һ���ʾ��������Doc* GetDocument() const;
	CString s;
// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest211�һ���ʾ��������View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest2-11�һ���ʾ��������View.cpp �еĵ��԰汾
inline CCTest211�һ���ʾ��������Doc* CCTest211�һ���ʾ��������View::GetDocument() const
   { return reinterpret_cast<CCTest211�һ���ʾ��������Doc*>(m_pDocument); }
#endif

