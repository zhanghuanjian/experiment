
// VC20200303Test1View.h : CVC20200303Test1View ��Ľӿ�
//

#pragma once


class CVC20200303Test1View : public CView
{
protected: // �������л�����
	CVC20200303Test1View();
	DECLARE_DYNCREATE(CVC20200303Test1View)

// ����
public:
	CVC20200303Test1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CVC20200303Test1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // VC20200303Test1View.cpp �еĵ��԰汾
inline CVC20200303Test1Doc* CVC20200303Test1View::GetDocument() const
   { return reinterpret_cast<CVC20200303Test1Doc*>(m_pDocument); }
#endif

