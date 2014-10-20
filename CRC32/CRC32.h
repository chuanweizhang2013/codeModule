#ifndef AssetsUpdate_CRC32_H_
#define AssetsUpdate_CRC32_H_

#include <string>
using namespace std;

class  CRC32
{
public:

	CRC32();
	virtual ~CRC32();

private:

	unsigned long m_Table[256];
	unsigned long Reflect(unsigned long ref, char ch);

public:

	string CRCGet(unsigned char* buffer, unsigned long size, bool release = false);
	void CRCInit	(unsigned long &Result);
	void CRCUpdate	(unsigned char* buffer, unsigned long size, unsigned long &Result);
	void CRCFinal	(unsigned long &Result);
	string ResultToHex(unsigned long Result);

};

#endif
