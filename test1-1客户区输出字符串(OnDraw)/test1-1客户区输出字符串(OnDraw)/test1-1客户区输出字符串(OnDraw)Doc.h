
// test1-1�ͻ�������ַ���(OnDraw)Doc.h : Ctest11�ͻ�������ַ���OnDrawDoc ��Ľӿ�
//


#pragma once


class Ctest11�ͻ�������ַ���OnDrawDoc : public CDocument
{
protected: // �������л�����
	Ctest11�ͻ�������ַ���OnDrawDoc();
	DECLARE_DYNCREATE(Ctest11�ͻ�������ַ���OnDrawDoc)

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
	virtual ~Ctest11�ͻ�������ַ���OnDrawDoc();
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
