
// Ctest3-5���������View.h : CCtest35���������View ��Ľӿ�
//

#pragma once


class CCtest35���������View : public CView
{
protected: // �������л�����
	CCtest35���������View();
	DECLARE_DYNCREATE(CCtest35���������View)

// ����
public:
	CCtest35���������Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCtest35���������View();
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

#ifndef _DEBUG  // Ctest3-5���������View.cpp �еĵ��԰汾
inline CCtest35���������Doc* CCtest35���������View::GetDocument() const
   { return reinterpret_cast<CCtest35���������Doc*>(m_pDocument); }
#endif

