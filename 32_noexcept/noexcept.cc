//void except_func() throw(int, double) { }	//C++11��׼�ϳ�throw
//void except_func() noexcept;				//�±�׼����noexcept������
//Bug����:�쳣�������쳣��Ƕ���쳣��
//���������������쳣����ʱ�������쳣������ƣ��������������оֲ�����������a��
//a������ʱ���ֻ���������������ֽ��׳�һ���쳣������ͻ����terminate()������ʰ�о֣�
//���������C++���Ե���������Ƕ���쳣ʱ�������terminate()��ɱ������
//Bug�Ľ��������
//������������ʹ��try-catch�Լ������쳣


#include <iostream>
using namespace std;

class A{
private:
	int _count;
public:
	A(void) :_count(0){}
	~A(void){
		if (_count != 0)
			throw("error");
	}
	void Set_count(int val){ _count = val; }
};

int main(int argc, const char **argv)
{
	A a;
	a.Set_count(1);

	bool staus = true;
	if (staus)
	{
		throw("error");
	}
	return 0;
}
