
// CTest3-3���״̬View.h : CCTest33���״̬View ��Ľӿ�
//

#pragma once


class CCTest33���״̬View : public CView
{
protected: // �������л�����
	CCTest33���״̬View();
	DECLARE_DYNCREATE(CCTest33���״̬View)

// ����
public:
	CCTest33���״̬Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest33���״̬View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest3-3���״̬View.cpp �еĵ��԰汾
inline CCTest33���״̬Doc* CCTest33���״̬View::GetDocument() const
   { return reinterpret_cast<CCTest33���״̬Doc*>(m_pDocument); }
#endif

