
// test1-2����ַ���(�ĵ�-��ͼ)Doc.h : Ctest12����ַ����ĵ���ͼDoc ��Ľӿ�
//


#pragma once


class Ctest12����ַ����ĵ���ͼDoc : public CDocument
{
protected: // �������л�����
	Ctest12����ַ����ĵ���ͼDoc();
	DECLARE_DYNCREATE(Ctest12����ַ����ĵ���ͼDoc)

// ����
public:

// ����
public:
	CString s;

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
	virtual ~Ctest12����ַ����ĵ���ͼDoc();
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
