
// 04.13 ʵ��1View.h : CMy0413ʵ��1View ��Ľӿ�
//

#pragma once


class CMy0413ʵ��1View : public CView
{
protected: // �������л�����
	CMy0413ʵ��1View();
	DECLARE_DYNCREATE(CMy0413ʵ��1View)

// ����
public:
	CMy0413ʵ��1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0413ʵ��1View();
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

#ifndef _DEBUG  // 04.13 ʵ��1View.cpp �еĵ��԰汾
inline CMy0413ʵ��1Doc* CMy0413ʵ��1View::GetDocument() const
   { return reinterpret_cast<CMy0413ʵ��1Doc*>(m_pDocument); }
#endif

