#include"select.h"
#include"teacher.h"
#include"classone.h"
#include"Community.h"
#include"txt.h"
#include<fstream>
#include<iomanip>
/*int select::find_by_id()
{
	string num;
	cout << "������Ҫ���ҵı��" << endl;
	int i;
	for (i = 0; i < category; i++)
	{
		if (num == s[i].getnum())
			return i;
	}
	return -1;
	if (i == -1)
	{
		cout << "û���ҵ�" << endl;
		return 0;
	}
	else
	{
		cout << "���ҵ�" << endl;
		cout << s[i];
	}
}*/
void select::input()
{
	char ch;
	string inputLine; // ���ڽ����û��������������

	do
	{
		cout << "�������ʦ��Ϣ���γ����ƣ��γ̱�ţ���ʦ���ƣ���������Ϣ֮���ÿո����:" << endl;
		getline(cin, inputLine); // ��ȡ��������
		istringstream iss(inputLine); // �����ַ�����

		// ���ַ�������ȡ��ʦ��Ϣ
		s[category].teacher::input(iss);

		// ��Ҫ����classone��txt��input��������Ҫ�������ܹ������ַ���������
		// ���Ŀǰ��input����������istringstream����������Ҫ������Ӧ�޸�
		// ����classone::input()��txt::input()�Ѿ����޸�Ϊ����istringstream����
		cout << "�������Ͽ���Ϣ���Ͽ�ʱ�䣬��ʱ������������Ϣ֮���ÿո����:" << endl;
		getline(cin, inputLine); // ��ȡ��������
		iss.str(inputLine); // ���������ַ�����
		iss.clear(); // �����״̬
		c[category].classone::input(iss);

		cout << "������γ�������Ϣ���γ����ʣ�ѧ������������Ϣ֮���ÿո����:" << endl;
		getline(cin, inputLine); // ��ȡ��������
		iss.str(inputLine); // ���������ַ�����
		iss.clear(); // �����״̬
		t[category].txt::input(iss);

		category++;

		cout << "�Ѿ�¼����" << category << "��רҵ��,�Ƿ���Ҫ����¼�� Y/N" << endl;
		cin >> ch;
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ����ʣ������
	} while (toupper(ch) == 'Y'); // toupper������Сд��ĸת��Ϊ��д��ĸ
}
void select::inputs()
{
	char ch;
	string line; // ���ڴ洢�û�������ַ���

	do
	{
		cout << "������γ���Ϣ��" << endl;
		getline(cin, line); // ��ȡ����������Ϊ�ַ���

		// ����һ��istringstream�������а������û����������
		istringstream iss(line);

		s[category].teacher::input(iss);
		c[category].classone::input(iss);
		ty[category].Community::input(iss);

		category++;

		cout << "�Ѿ�¼����" << category << "��רҵ��,�Ƿ���Ҫ����¼�� Y/N" << endl;
		cin >> ch;
		cin.ignore(); // ����֮ǰ��ȡ�Ļ��з�

	} while (toupper(ch) == 'Y'); // toupper���Խ�Сд��ĸת��Ϊ��д��ĸ

	// ��ÿ��ѭ��ĩβ�����������״̬������ʣ���ַ�
}
void select::saveTofile()
{
	ofstream ofile;
	ofile.open("E://רҵ�ογ���Ϣ.txt");
	if (category == 0)
		cout << "��רҵ�ο��Դ���" << endl;
	else
	{
		ofile << "�γ�����" << '\t' << "�γ̱��" << '\t' << "��ʦ����" << '\t' << "�Ͽ�ʱ��" << '\t' << "��ʱ" << '\t' << "����ѧ��" << '\t' << "ѧ��" << '\t' << "�γ�����" << '\t' << "����רҵ" << endl;
		for (int i = 0; i < category; i++)
		{
			s[i].teacher::output(ofile);
			c[i].classone::output(ofile);
			t[i].txt::output(ofile);
		}
	}
	cout << "��ӳɹ���" << endl;
}
void select::FileToGoods()
{
	ifstream ifile;
	ifile.open("E://רҵ�ογ���Ϣ.txt");
	string line;
	int index = 0;
	while (getline(ifile, line) && index < 100)
	{
		istringstream iss_s(line.substr(0, 100)); // ��Ҫ����γ����ݵĳ���  
		teacher tempTeacher;
		tempTeacher.input(iss_s); // ����input��������istringstream����  
		s[index] = tempTeacher;
		index++;
	}
	ifile.close();
}