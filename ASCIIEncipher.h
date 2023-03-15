/*
* 文件名：ASCIIEncipher.h
* 作者：刘作瀚
*/

#ifndef ASCIIENCIPHER_H_

#define ASCIIENCIPHER_H_

#pragma once

#include <string>
#include <vector>

namespace ASCIIEncipher
{
	/*
	* @brief 将10进制数转换成d进制数
	*
	* @param {int} n
	* @param {int} d
	*
	* @return 10进制数n的d进制
	*/
	std::string change(int n, int d);

	/*
	* @brief 加密一个字符串
	*
	* @param {std::string} str - 要加密的字符串
	* @return {std::vector<std::string>} - 加密后的字符串
	*/
	std::vector<std::string> encipher(std::string str);

	/*
	* @brief 解密一个字符串
	*
	* @param {std::string} str - 要解密的字符串
	* @return {char} - 解密后的字符
	*/
	char decipher(std::string str);
	/*
	* @brief 计算n的k次方并返回
	*
	* @param {int} n
	* @param {int} k
	*
	* @return {int} - n的k次方
	*/
	int fac(int n, int k);
};

#endif