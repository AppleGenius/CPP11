#include <iostream>
#include <vector>

int main(int argc, const char *argv[])
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	
	for (auto i = v.begin(); i != v.end(); ++i)
		std::cout << *i << "\t";	//i�ǵ���������

	std::cout << "\n" << "From here is range for :" << "\n";

	for (auto e : v)
		std::cout << e << "\t";		//e�ǽ����ú�Ķ���

	return 0;
}