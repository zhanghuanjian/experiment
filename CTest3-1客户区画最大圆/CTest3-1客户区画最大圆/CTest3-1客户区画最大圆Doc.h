
// CTest3-1�ͻ��������ԲDoc.h : CCTest31�ͻ��������ԲDoc ��Ľӿ�
//


#pragma once


class CCTest31�ͻ��������ԲDoc : public CDocument
{
protected: // �������л�����
	CCTest31�ͻ��������ԲDoc();
	DECLARE_DYNCREATE(CCTest31�ͻ��������ԲDoc)

// ����
public:

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
	virtual ~CCTest31�ͻ��������ԲDoc();
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
