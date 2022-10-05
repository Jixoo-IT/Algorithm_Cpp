#pragma once
class CMyString
{
public:
	CMyString();
	~CMyString();

private:
	// 문자열을 저장하기 위해 동적 할당한 메모리를 가리키는 포인터
	char* m_pszData;
};

