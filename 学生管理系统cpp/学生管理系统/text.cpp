#include"select.h"
void menu1()
{
	cout << "*------------>��ӭʹ��ѧ��ѡ��ϵͳ<-----------*" << endl;
	cout << "*             (1)����Ա���                   *" << endl;
	cout << "*               (2)ѧ�����                   *" << endl;
}
void menu2()
{
	cout << "*------------------->��ӭ�������Աѡ��ϵͳ<--------------------*" << endl;
	cout << "*                      (1)�γ̹���							     *" << endl;
	cout << "*                      (2)ѧ������							     *" << endl;
	cout << "*                      (3)ѡ����Ϣ						         *" << endl;
	cout << "*                      (4)ͳ��ģ��						         *" << endl;
	cout << "*                      (5)���ɿγ̱�							 *" << endl;
	cout << "*                      (6)������һ��							 *" << endl;
}
void menu3()
{
	cout << "*------------------->��ӭ�������Աѡ��ϵͳ<-------------------*" << endl;
	cout << "*                   (1)��ѯ�γ���Ϣ							 *" << endl;
	cout << "*                   (2)���ӿγ���Ϣ							 *" << endl;
	cout << "*                   (3)ɾ���γ���Ϣ							 *" << endl;
	cout << "*                   (4)���¿γ���Ϣ							 *" << endl;
	cout << "*				     (5)����							         *" << endl;
	cout << "*                   (6)�γ���Ϣ��ȡ�뱣��						 *" << endl;
	cout << "*                   (7)������һ��							     *" << endl;
}
void menu4()
{
	cout << "*------------------->��ѡ���ѯ��ʽ<--------------------*" << endl;
	cout << "*                    (1)���տγ�����				 *" << endl;
	cout << "*                    (2)���տγ̱��						     *" << endl;
	cout << "*                    (3)���ս�ʦ����						         *" << endl;
	cout << "*                    (4)�����Ͽ�ʱ��					         *" << endl;
	cout << "*                    (5)���տ���ѧ��						 *" << endl;
	cout << "*                    (6)��������רҵ/����רҵ						 *" << endl;
	cout << "*                    (7)������һ��							     *" << endl;
}
void menu5()
{
	cout << "*------------->��ѡ��Ҫ���ӿγ̵�����<-----------*" << endl;
	cout << "*                  (1)רҵ��                     *" << endl;
	cout << "*                  (2)������                     *" << endl;
	cout << "*                  (3)������һ��			      *" << endl;
}
void menu6()
{
	cout << "*------------------------>��ѡ������ʽ<------------------------*" << endl;
	cout << "*                         (1)���γ�������						  *" << endl;
	cout << "*                         (2)���γ̴�������					  *" << endl;
	cout << "*                         (3)���Ͽ�ʱ������					  *" << endl;
	cout << "*                         (4)��������רҵ����/����רҵ����	  *" << endl;
	cout << "*                         (5)������һ��							     *" << endl;
}
void menu7()
{
	cout << "*------------------->��ӭ�������ѧ����Ϣϵͳ<-------------------*" << endl;
	cout << "*                     (1)��ѯѧ����Ϣ							 *" << endl;
	cout << "*                     (2)����ѧ����Ϣ							 *" << endl;
	cout << "*                     (3)ɾ��ѧ����Ϣ							 *" << endl;
	cout << "*                     (4)����ѧ����Ϣ							 *" << endl;
	cout << "*                     (5)ѧ����Ϣ����							 *" << endl;
	cout << "*                     (6)������һ��							     *" << endl;
}
select m;
int main()
{
	menu1();
	int c;
	for (;;)
	{
		cout << "��ѡ�����1-2" << endl;
		cin >> c;
		switch (c)
		{
		case 1: menu2();
		{
			int t;
			for (;;)
			{
				cout << "���������1-6" << endl;
				cin >> t;
				switch (t)
				{
				case 1: s1:menu3();
				{
					int t2;
					for (;;)
					{
						cout << "���������1-7" << endl;
						cin >> t2;
						switch (t2)
						{
						case 1: menu4();
						{
							int t3;
							for (;;)
							{
								cout << "��ѡ�����1-7" << endl;
								cin >> t3;
								switch (t3)
								{
								case 1:
								case 2: ;
								}
								break;
							}
						}
						case 2:s2: menu5();
						{
							int s1;
							for (;;)
							{
								cout << "���������1-3" << endl;
								cin >> s1;
								switch (s1)
								{
								case 1:m.input(); goto s2;
								case 2:m.inputs(); goto s2;
								case 3:goto s1;
								}
								break;
							}
						}
						case 6:m.saveTofile(); goto s1;
						}
						break;
					}

				}
				}
				break;
			}
		}
		}
		break;
	}
	return 0;
}