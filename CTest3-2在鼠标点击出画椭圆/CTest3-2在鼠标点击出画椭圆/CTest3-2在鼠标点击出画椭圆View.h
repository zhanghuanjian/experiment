
// CTest3-2�������������ԲView.h : CCTest32�������������ԲView ��Ľӿ�
//

#pragma once


class CCTest32�������������ԲView : public CView
{
protected: // �������л�����
	CCTest32�������������ԲView();
	DECLARE_DYNCREATE(CCTest32�������������ԲView)

// ����
public:
	CCTest32�������������ԲDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest32�������������ԲView();
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

#ifndef _DEBUG  // CTest3-2�������������ԲView.cpp �еĵ��԰汾
inline CCTest32�������������ԲDoc* CCTest32�������������ԲView::GetDocument() const
   { return reinterpret_cast<CCTest32�������������ԲDoc*>(m_pDocument); }
#endif

