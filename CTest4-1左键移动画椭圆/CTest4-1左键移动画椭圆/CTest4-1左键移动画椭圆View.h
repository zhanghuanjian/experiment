
// CTest4-1����ƶ�����ԲView.h : CCTest41����ƶ�����ԲView ��Ľӿ�
//

#pragma once


class CCTest41����ƶ�����ԲView : public CView
{
protected: // �������л�����
	CCTest41����ƶ�����ԲView();
	DECLARE_DYNCREATE(CCTest41����ƶ�����ԲView)

// ����
public:
	CCTest41����ƶ�����ԲDoc* GetDocument() const;
	
// ����
public:
	
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest41����ƶ�����ԲView();
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
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest4-1����ƶ�����ԲView.cpp �еĵ��԰汾
inline CCTest41����ƶ�����ԲDoc* CCTest41����ƶ�����ԲView::GetDocument() const
   { return reinterpret_cast<CCTest41����ƶ�����ԲDoc*>(m_pDocument); }
#endif

