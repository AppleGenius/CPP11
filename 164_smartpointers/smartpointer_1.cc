#include <memory>
#include <iostream>

int main(int argc, const char *argv[])
{
	//unique_ptr<T> �÷���
	std::unique_ptr<int> up1(new int(11));		//��ָ�룬�޷����Ƶ�up1
	//std::unique_ptr<int> up2 = up1;				//���󣡲���ͨ������
	std::cout << "*up1: " << *up1 << std::endl;	//11

	std::unique_ptr<int> up3 = move(up1);		//����up3������11��Ψһunique_ptr
	std::cout << "*up3: " << *up3 << std::endl;	//11
	//std::cout << "*up1: " << *up1 << std::endl;	//Runtime Error!

	up3.reset();								//��ʽ�ͷ��ڴ�
	up1.reset();								//���ﲻ�ᵼ�´���
	//std::cout << "*up3: " << *up3 << std::endl;	//Runtime Error!
	
	//shared_ptr<T> �÷���
	std::shared_ptr<int> sp1(new int(22));		
	std::shared_ptr<int> sp2 = sp1;				//Ok!
	std::cout << "The value of sp1 is : " << *sp1 << std::endl;						//22
	std::cout << "After copy From sp1 the value of sp2 is: " << *sp2 << std::endl;	//22

	sp1.reset();								//��ʽ�ͷ�sp1
	std::cout << "After delete sp1 the value of sp2 is: " << *sp2 << std::endl;		//22

	return 0;
}