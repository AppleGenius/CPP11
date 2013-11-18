#include <iostream>

class Base
{
	virtual void Turing() = 0;
	virtual void Dijkstra() = 0;
	virtual void VNeumann(int g) = 0;
	virtual void DKnuth()const;
	void Print();
};

class DerivedMid:public Base
{
	void VNeumann(double g);	
	//�ӿڱ����룬��֪��ŵ�����ǲ����麯��
};

class DervidTop :public DerivedMid
{
	void Turing()override;		//Ok
	//void Dijsktra()override;	//No! ƴд����
	//void VNeumann(double g)override;	//No! ������ƥ��
	//void DKnuth()override;		//No! �����Բ�һ��
	//void Print()override;		//No�����麯��
};
