
// Exp5-2-1����˵�����ʾ����View.h : CExp521����˵�����ʾ����View ��Ľӿ�
//

#pragma once


class CExp521����˵�����ʾ����View : public CView
{
protected: // �������л�����
	CExp521����˵�����ʾ����View();
	DECLARE_DYNCREATE(CExp521����˵�����ʾ����View)

// ����
public:
	CExp521����˵�����ʾ����Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CExp521����˵�����ʾ����View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowname();
};

#ifndef _DEBUG  // Exp5-2-1����˵�����ʾ����View.cpp �еĵ��԰汾
inline CExp521����˵�����ʾ����Doc* CExp521����˵�����ʾ����View::GetDocument() const
   { return reinterpret_cast<CExp521����˵�����ʾ����Doc*>(m_pDocument); }
#endif

