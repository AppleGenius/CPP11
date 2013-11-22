#include <iostream>

int main(int argc, const char *argv[])
{
	int a(1), b(2);
	std::cout << "At the first the a && b are : " << a << "\t" << b << std::endl;

	//1.���lambda����
	[]{};		
	//2.ʡ���˲����б��뷵��ֵ���ͣ�����ֵ�����ɱ������ƶ�Ϊint
	[=]{ return a + b; };	
	//3.ʡ�Է���ֵ���ͣ��޷���ֵ
	auto fun1 = [&](int c) { b = a + c; };
	//4.�����ֺ�������lambda����
	auto fun2 = [=, &b](int c) ->decltype(a + c){ return b = a + c; };

	fun1(3);
	std::cout << "After fun1 " << "b is : " << b << std::endl;
	fun2(4);
	std::cout << "After fun2 " << "b is : " << b << std::endl;

	return 0;
}