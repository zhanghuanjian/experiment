
// 04.14ʵ��-2View.h : CMy0414ʵ��2View ��Ľӿ�
//

#pragma once


class CMy0414ʵ��2View : public CView
{
protected: // �������л�����
	CMy0414ʵ��2View();
	DECLARE_DYNCREATE(CMy0414ʵ��2View)

// ����
public:
	CMy0414ʵ��2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0414ʵ��2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnRButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 04.14ʵ��-2View.cpp �еĵ��԰汾
inline CMy0414ʵ��2Doc* CMy0414ʵ��2View::GetDocument() const
   { return reinterpret_cast<CMy0414ʵ��2Doc*>(m_pDocument); }
#endif

