
// CTest4-4������ƶ�����View.h : CCTest44������ƶ�����View ��Ľӿ�
//

#pragma once


class CCTest44������ƶ�����View : public CView
{
protected: // �������л�����
	CCTest44������ƶ�����View();
	DECLARE_DYNCREATE(CCTest44������ƶ�����View)

// ����
public:
	CCTest44������ƶ�����Doc* GetDocument() const;

// ����
public:
	CPoint up_point;
	CPoint down_point;
	int xiangsu;
	int count;
	CString s1, s2;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest44������ƶ�����View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest4-4������ƶ�����View.cpp �еĵ��԰汾
inline CCTest44������ƶ�����Doc* CCTest44������ƶ�����View::GetDocument() const
   { return reinterpret_cast<CCTest44������ƶ�����Doc*>(m_pDocument); }
#endif

