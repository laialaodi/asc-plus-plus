/*
* 文件名：ASCIIEncipher.cpp
* 作者：刘作瀚
*/

#ifndef ASCII_HEADERS_ASCIIENCIPHER_H_
#include "ASCIIEncipher.h"
#define ASCII_HEADERS_ASCIIENCIPHER_H_
#endif // !ASCII_HEADERS_ASCIIENCIPHER_H_

std::string change(int n, int d)
{
	std::stringstream ss;
	std::string str = "", m = "";
	do
	{
		ss.clear();
		if (n % d >= 10)
		{
			str.insert(0, 1, char((n % d) - 10 + 'A'));
		}
		else
		{
			str.insert(0, 1, char((n % d) + '0'));
		}
		n /= d;
	} while (n != 0);
	return str;
}

std::vector<std::string> encipher(std::string str)
{
	std::vector<std::string> _strList;
	for (int i = 0; i < str.length(); i++)
	{
		std::string _astr = change(str[i], 2);
		while (_astr.length() < 8) _astr.insert(0, "0");
		_strList.emplace_back(_astr);
	}
	return _strList;
}

char decipher(std::string str)
{
	int ans = 0, k = 0;
	for (int i = str.length() - 1; i >= 0; i--)
	{
		if (str[i] == '1')
		{
			ans += fac(2, k);
		}
		k++;
	}
	return ans;
}

inline int fac(int n, int k)
{
	if (k == 0) return 1;
	return n * fac(n, k - 1);
}
