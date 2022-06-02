// Professional C++, 4rd.
#include <iostream>
#include <charconv>

std::string_view extractExtension(const std::string_view& fileName)
{
	return fileName.substr(fileName.rfind('.'));
}

int main()
{
	std::string fileName = R"(C:\temp\my file.ext)";
	std::cout << extractExtension(fileName) << "\n";

	return 0;
}