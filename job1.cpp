#include<iostream>
using namespace std;
class CMyString {
	public:
		CMyString(char* pData=NULL);
		CMyString(const CMyString& str);
		~CMyString();
	private:
		char* m_pData;
};

CMyString& CMyString::operator=(const CMyString& str){
	if(this==str)
		return *this;
	delete []m_pData;
	m_pData=NULL;
	m_pData=new char[stelen(str.m_pData)+1];
	strcpy(m_pData,str.m_pData);
	return *this;
}

CMyString& CMyString::operator=(const CMyString& str){
	if(this != str){
		CMyString strtemp(str);
		char* ptemp=strtemp.m_pData;
		strtemp.m_pData=m_pData;
		m_pData=ptemp;
	}
	return *this;
}
