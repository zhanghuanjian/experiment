
// ��ԲView.h : C��ԲView ��Ľӿ�
//

#pragma once


class C��ԲView : public CView
{
protected: // �������л�����
	C��ԲView();
	DECLARE_DYNCREATE(C��ԲView)

// ����
public:
	C��ԲDoc* GetDocument() const;

// ����
public:
	CArray<CRect, CRect> ca;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ԲView();
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
};

#ifndef _DEBUG  // ��ԲView.cpp �еĵ��԰汾
inline C��ԲDoc* C��ԲView::GetDocument() const
   { return reinterpret_cast<C��ԲDoc*>(m_pDocument); }
#endif

