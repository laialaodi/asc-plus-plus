/*
* �ļ�����main.cpp
* ���ߣ������
*/

#ifndef ASCII_STD_IOSTREAM_
#include <iostream>
#define ASCII_STD_IOSTREAM_
#endif // !ASCII_STD_IOSTREAM_

#ifndef ASCII_STD_CSTDLIB_
#include <cstdlib>
#define ASCII_STD_CSTDLIB_
#endif // !ASCII_STD_CSTDLIB_

#ifndef ASCII_HEADERS_ENCIPHER_H_
#include "ASCIIEncipher.h"
#define ASCII_HEADERS_ENCIPHER_H_
#endif // !ASCII_HEADERS_ENCIPHER_H_

int main()
{
	ASCIIEncipher link = ASCIIEncipher();
	std::cout << "��ӭ����ASCII����ϵͳ\n";
	std::cout << "����������1������������2��";
	int cmd;
	std::cin >> cmd;
	if (cmd == 1)
	{
		std::cout << "������Ҫ���ܵ��ַ�����";
		std::string input;
		std::cin >> input;
		std::vector<std::string> ans = link.encipher(input);
		std::vector<std::string>::iterator it = ans.begin();
		while (it != ans.end())
		{
			std::cout << *it << std::endl;
			it++;
		}
	}
	else if (cmd == 2)
	{
		std::string input = "", ans = "";
		char m = '\0';
		std::cout << "�����룺";
		while (std::cin >> input)
		{
			std::cout << "�����룺";
			if (isalnum(input[0]))
			{
				m = link.decipher(input);
				ans.insert(ans.length(), 1, m);
			}
		}
		std::cout << ans << std::endl;
	}
	else
	{
		std::cerr << "��Ч�����\n";
	}
	system("pause");
	return 0;
}