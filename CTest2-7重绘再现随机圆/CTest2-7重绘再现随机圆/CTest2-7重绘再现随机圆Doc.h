
// CTest2-7�ػ��������ԲDoc.h : CCTest27�ػ��������ԲDoc ��Ľӿ�
//


#pragma once


class CCTest27�ػ��������ԲDoc : public CDocument
{
protected: // �������л�����
	CCTest27�ػ��������ԲDoc();
	DECLARE_DYNCREATE(CCTest27�ػ��������ԲDoc)

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
	virtual ~CCTest27�ػ��������ԲDoc();
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
