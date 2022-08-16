/*
* �ļ�����ASCIIEncipher.h
* ���ߣ������
*/

#pragma once

#ifndef ASCII_HEADERS_STRING_
#include <string>
#define ASCII_HEADERS_STRING_
#endif // !ASCII_HEADERS_STRING_

#ifndef ASCII_HEADERS_SSTREAM_
#include <sstream>
#define ASCII_HEADERS_SSTREAM_
#endif // !ASCII_HEADERS_SSTREAM_

#ifndef ASCII_HEADERS_VECTOR
#include <vector>
#define ASCII_HEADERS_VECTOR
#endif // !ASCII_HEADERS_VECTOR

class ASCIIEncipher
{
public:
	/*
	* @brief ��10������ת����d������
	*
	* @param {int} n
	* @paran {int} d
	*
	* @return 10������n��d����
	*/
	std::string change(int n, int d);

	/*
	* @brief ����һ���ַ���
	*
	* @param {std::string} str - Ҫ���ܵ��ַ���
	* @return {std::vector<std::string>} - ���ܺ���ַ���
	*/
	std::vector<std::string> encipher(std::string str);

	/*
	* @brief ����һ���ַ���
	*
	* @param {std::string} str - Ҫ���ܵ��ַ���
	* @return {char} - ���ܺ���ַ�
	*/
	char decipher(std::string str);
private:
	/*
	* @brief ����n��k�η�������
	*
	* @param {int} n
	* @param {int} k
	*
	* @return {int} - n��k�η�
	*/
	int fac(int n, int k);
};
