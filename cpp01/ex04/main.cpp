/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:23:09 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/09 17:38:49 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc < 4)
		return (std::cout << "Wrong number of arguments." << std::endl, 1);
	std::string path = argv[1];
	std::string from_str = argv[2];
	std::string to_str = argv[3];
	std::ifstream ini_file(path);
	if (!ini_file)
		return (std::cout << "Cannot read file" << std::endl, 1);
	std::ofstream out_file(path + ".replace");
	if (!out_file)
		return (std::cout << "Cannot write file" << std::endl, 1);
	std::string line;
	while (std::getline(ini_file, line))
	{
		size_t pos = 0;
		while ((pos = line.find(from_str, pos)) != std::string::npos)
		{
			line.replace(pos, from_str.length(), to_str);
			pos += to_str.length();
		}
		out_file << line << std::endl;
	}
	ini_file.close();
	out_file.close();
	return (0);
}
 