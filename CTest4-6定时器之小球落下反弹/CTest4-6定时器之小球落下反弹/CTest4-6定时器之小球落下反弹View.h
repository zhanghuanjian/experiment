
// CTest4-6��ʱ��֮С�����·���View.h : CCTest46��ʱ��֮С�����·���View ��Ľӿ�
//

#pragma once


class CCTest46��ʱ��֮С�����·���View : public CView
{
protected: // �������л�����
	CCTest46��ʱ��֮С�����·���View();
	DECLARE_DYNCREATE(CCTest46��ʱ��֮С�����·���View)

// ����
public:
	CCTest46��ʱ��֮С�����·���Doc* GetDocument() const;

// ����
public:
	int N;//����Բ�ĸ���
	CArray <CRect, CRect> cr;//���ݾ��λ�����Բ
	bool set;
	CRect rect;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest46��ʱ��֮С�����·���View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // CTest4-6��ʱ��֮С�����·���View.cpp �еĵ��԰汾
inline CCTest46��ʱ��֮С�����·���Doc* CCTest46��ʱ��֮С�����·���View::GetDocument() const
   { return reinterpret_cast<CCTest46��ʱ��֮С�����·���Doc*>(m_pDocument); }
#endif

