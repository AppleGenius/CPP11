#include <iostream>
#include <vector>

void fun(auto x = 1) {};			//1.auto���������޷�ͨ������

struct str{
	auto var = 10;					//2.auto�Ǿ�̬��Ա�������޷�ͨ������
};

int main(int argc, const char *argv[])
{
	auto int i = 1;
	return 0;
}