
// CTest4-5���������ƾ���״̬View.h : CCTest45���������ƾ���״̬View ��Ľӿ�
//

#pragma once


class CCTest45���������ƾ���״̬View : public CView
{
protected: // �������л�����
	CCTest45���������ƾ���״̬View();
	DECLARE_DYNCREATE(CCTest45���������ƾ���״̬View)

// ����
public:
	CCTest45���������ƾ���״̬Doc* GetDocument() const;

// ����
public:
	CString s1, s2, s3, s4, s5;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest45���������ƾ���״̬View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest4-5���������ƾ���״̬View.cpp �еĵ��԰汾
inline CCTest45���������ƾ���״̬Doc* CCTest45���������ƾ���״̬View::GetDocument() const
   { return reinterpret_cast<CCTest45���������ƾ���״̬Doc*>(m_pDocument); }
#endif

