
// CTest11-1MFC���ݿ�Doc.h : CCTest111MFC���ݿ�Doc ��Ľӿ�
//


#pragma once
#include "CTest11-1MFC���ݿ�Set.h"


class CCTest111MFC���ݿ�Doc : public CDocument
{
protected: // �������л�����
	CCTest111MFC���ݿ�Doc();
	DECLARE_DYNCREATE(CCTest111MFC���ݿ�Doc)

// ����
public:
	CCTest111MFC���ݿ�Set m_CTest111MFC���ݿ�Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CCTest111MFC���ݿ�Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
