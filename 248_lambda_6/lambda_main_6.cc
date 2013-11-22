#include <vector>
#include <algorithm>
#include <iostream>

std::vector<int> nums;
std::vector<int> largeNums;

const int ubound = 10;

inline void LargeNumsFunc(int i)
{
	if (i > ubound)
		largeNums.push_back(i);
}

int main(int argc, const char *argv[])
{
	//��ͳfor����
	for (auto iter = nums.begin(); iter != nums.end(); ++iter)
	{
		if (*iter > ubound)
			largeNums.push_back(*iter);
	}

	//ʹ�ú���ָ��
	std::for_each(nums.begin(), nums.end(), LargeNumsFunc);

	//ʹ��lambda�����ͺ���ָ��
	std::for_each(nums.begin(), nums.end(), [=](int i){
		if (i > ubound)
			largeNums.push_back(i);
	});

	return 0;
}