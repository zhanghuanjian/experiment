
// Exp6-1������ʾjpg�ļ�View.h : CExp61������ʾjpg�ļ�View ��Ľӿ�
//

#pragma once


class CExp61������ʾjpg�ļ�View : public CView
{
protected: // �������л�����
	CExp61������ʾjpg�ļ�View();
	DECLARE_DYNCREATE(CExp61������ʾjpg�ļ�View)

// ����
public:
	CExp61������ʾjpg�ļ�Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CExp61������ʾjpg�ļ�View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // Exp6-1������ʾjpg�ļ�View.cpp �еĵ��԰汾
inline CExp61������ʾjpg�ļ�Doc* CExp61������ʾjpg�ļ�View::GetDocument() const
   { return reinterpret_cast<CExp61������ʾjpg�ļ�Doc*>(m_pDocument); }
#endif

