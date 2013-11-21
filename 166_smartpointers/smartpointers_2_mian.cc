#include <memory>
#include <iostream>

void Check(std::weak_ptr<int> &wp)
{
	std::shared_ptr<int> sp = wp.lock();	//��̽������
	if (sp != nullptr)
	{
		std::cout << "still: " << *sp << std::endl;
	}
	else
	{
		std::cout << "pointer is invalid." << std::endl;
	}
}
int main(int argc, const char *argv[])
{
	std::shared_ptr<int> sp1(new int(22));
	std::shared_ptr<int> sp2 = sp1;
	std::weak_ptr<int> wp = sp1;	//ָ��shared_ptr<int>��ָ��Ķ���

	std::cout << *sp1 << std::endl;	//22
	std::cout << *sp2 << std::endl;	//22	
	Check(wp);		//���ö����Ƿ���Ч

	sp1.reset();	//��ʽ�ͷ�sp1
	std::cout << *sp2 << std::endl;	//22
	Check(wp);		//���ö����Ƿ���Ч

	sp2.reset();	//��ʽ�ͷ�sp2
	Check(wp);		//���ö����Ƿ���Ч
	
	return 0;
}