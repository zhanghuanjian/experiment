
// CTest4-2�������ƶ���ϢDoc.h : CCTest42�������ƶ���ϢDoc ��Ľӿ�
//


#pragma once


class CCTest42�������ƶ���ϢDoc : public CDocument
{
protected: // �������л�����
	CCTest42�������ƶ���ϢDoc();
	DECLARE_DYNCREATE(CCTest42�������ƶ���ϢDoc)

// ����
public:
	CPoint m_point;
// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CCTest42�������ƶ���ϢDoc();
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
