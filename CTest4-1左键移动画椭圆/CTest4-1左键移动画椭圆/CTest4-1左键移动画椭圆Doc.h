
// CTest4-1����ƶ�����ԲDoc.h : CCTest41����ƶ�����ԲDoc ��Ľӿ�
//


#pragma once


class CCTest41����ƶ�����ԲDoc : public CDocument
{
protected: // �������л�����
	CCTest41����ƶ�����ԲDoc();
	DECLARE_DYNCREATE(CCTest41����ƶ�����ԲDoc)

// ����
public:

// ����
public:
	CRect m_tagRec;
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
	virtual ~CCTest41����ƶ�����ԲDoc();
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
