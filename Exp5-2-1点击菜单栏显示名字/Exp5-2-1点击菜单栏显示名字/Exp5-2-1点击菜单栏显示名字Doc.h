
// Exp5-2-1����˵�����ʾ����Doc.h : CExp521����˵�����ʾ����Doc ��Ľӿ�
//


#pragma once


class CExp521����˵�����ʾ����Doc : public CDocument
{
protected: // �������л�����
	CExp521����˵�����ʾ����Doc();
	DECLARE_DYNCREATE(CExp521����˵�����ʾ����Doc)

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
	virtual ~CExp521����˵�����ʾ����Doc();
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
