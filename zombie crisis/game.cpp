#define _CRT_SECURE_NO_WARNINGS 1
//#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
using namespace std;
int x;//�жϾ��� 
int flag = 0, mz;
int gongji = 50, xue = 100, man = 100;
int qiang = 0;
int zuo[40];
int rong = 0;
void level_1() {
	int go = gongji;
	system("cls");
	getchar();
	printf("��ƽ���ģ��������峿��6:00׼ʱ��");
	getchar();
	system("cls");
	printf("���˺ܲ�������");
	getchar();
	system("cls");
	printf("��΢����������ߵ����Լ��ĳ���");
	getchar();
	system("cls");
	printf("���ֻ�ȥ�������ϵ�ѩ");
	getchar();
	system("cls");
	printf("Ȼ������ʹ�������Ϲ��˿���");
	getchar();
	system("cls");
	printf("����ʲô��������������");
	getchar();
	system("cls");
	printf("�������߽��˳������Ż�Ƴ���������������");
	getchar();
	system("cls");
	printf("��Сʱ����ĳ�ͣ����MIR��˾�ſ�");
	getchar();
	system("cls");
	printf("������������������ֱ��������ס�ģ��㿴�ſڱ���Ҳû��������˸���Ƿ");
	getchar();
	system("cls");
	printf("��̧ͷ�������죺������������Ҳ��");
	getchar();
	system("cls");
	printf("��ͣ�³����߽���MIR");
	getchar();
	system("cls");
	printf("��һ·����С��������ǽ���˽�ȥ�������˵��ݿ�");
	getchar();
	system("cls");
	printf("�㣺�����������ǰɣ�����ô��ù���𣬵��ݶ����ˡ�");
	getchar();
	system("cls");
	printf("�������������Ƶ�������¥��");
	getchar();
	system("cls");
	printf("�����㷢�֣���¥��¥����û�п��ƣ�һ�кڶ�����");
	getchar();
	system("cls");
	printf("�������𣿣������������");
	getchar();
	system("cls");
	printf("�����𡭡������𡭡������𡭡����еĻ�������¥���ﵴ��");
	getchar();
	system("cls");
	printf("���ǣ��㾲���ĵ�������ȥ");
	getchar();
	system("cls");
	printf("�����Ĵ򿪰칫�ҵ���");
	getchar();
	system("cls");
	printf("����ҲһƬ���...");
	getchar();
	system("cls");
	printf("�������𡪡��������������������");
	getchar();
	system("cls");
	printf("��^^^^^^^^&#$����...");
	getchar();
	system("cls");
	printf("���������ʼս��");
	getchar();
	system("cls");
	printf("��ʬ�������ҩ��ʬ\n\n");
	printf("Ѫ����200 ��������20�����ң� ��Ч����\n");
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("��1����ս��	��2�ӱܣ�30%���ʣ�\n");
	scanf("%d", &x);
	system("cls");
	if (x == 2) {
		int k = rand() % 10;
		if (k <= 4) printf("��������...");
		else printf("�������ܵĹ����У���ɥʬҧ����...");
		getchar();
		system("cls");
		if (k > 4) {
			printf("������������½�...");
			getchar();
			return;
		}
		else {
			printf("���ܳ���һ���������һ�е�һ�ж��仯��...");
			getchar();
			system("cls");
			printf("������ɢ����Ѫ�ȵ�ζ����ȫ�ǽ�ʬ����^^^^��");
			getchar();
			system("cls");
			printf("������Զ����һֻ��ʬ��������");
			getchar();
			system("cls");
			printf("�������ܻ��л��ᣡ");
			getchar();
			system("cls");
			printf("1.����	2.����Ӳ��");
			scanf("%d", &x);
			if (x == 1) {
				printf("���ӻ����Լ��ļ�...");
				getchar();
				system("cls");
				printf("���ǽ�ʬ������ʵ����̫���ˣ����Ƕ��ǵ�");
				getchar();
				system("cls");
				printf("������һ�죬�㵹����");
				getchar();
				system("cls");
				printf("Զ����һ��������������������Ӧ�÷�������...��");
				getchar();
				system("cls");
				printf("������������½�");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("���������޴����������򲻹���ʬ��");
				getchar();
				system("cls");
				printf("����Ӵ����û�ж����ʬ��Ϯ��");
				getchar();
				system("cls");
				printf("�ⲻ�Ǳ���һ���õĽ��......");
				getchar();
				system("cls");
				return;
			}
		}
	}
	int shixue = 200, gongni = 20, yuan = gongji, ni = gongni;
	int s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100;
		if (k < 50) gongji += rand() % 5;
		else gongji -= rand() % 5;
		printf("����ʬ���𹥻�����ʬѪ������%d", gongji);
		getchar();
		system("cls");
		shixue -= gongji;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 5;
		else gongni -= rand() % 5;
		int t = rand() % 100;//���ܲ��ṥ���� 
		if (t > 30) printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		else {
			int f = rand() % 37;
			f += rand() % 5;
			printf("��ʬ���ڴ�ҩ��Ѫ���ָ�%d", f);
			shixue += f;
		}
		if (t > 30) xue -= gongni;
		if (xue <= 0) {
			printf("����...");
			getchar();
			system("cls");
			printf("����ǰ��ֻ������ʬ������Ц������...");
			getchar();
			system("cls");
			return;
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	int z1 = 0, z2 = 0;
	getchar();
	system("cls");
	printf("����˰칫�ҵĵ�");
	getchar();
thi:
	system("cls");
	printf("��Ҫ�ң�\n");
	Sleep(300);
	printf("1.�칫����\n");
	Sleep(300);
	printf("2.������\n");
	Sleep(300);
	printf("-1.������\n");
	while (scanf("%d", &x) == 1) {
		if (x == -1) break;
		if (x == 1) {
			if (z1 == 1) {
				printf("�ҹ���");
				getchar();
				getchar();
				system("cls");
				goto thi;
			}
			z1 = 1;
			printf("�㷢����һ����Ѫ�룬Ѫ������");
			xue = man;
			getchar();
			getchar();
			system("cls");
			goto thi;
		}
		else {
			if (z2 == 1) {
				printf("�ҹ���");
				getchar();
				getchar();
				system("cls");
				goto thi;
			}
			z2 = 1;
			int k = rand() % 10 + 20;
			printf("�㷢����һ�ֽ���������������+%d\n\n", k);
			getchar();
			getchar();
			gongji += k;
			printf("�����ڵĹ������ǣ�%d", gongji);
			getchar();
			system("cls");
			goto thi;
		}
	}
	getchar();
	system("cls");
	printf("�������ڴ������ֻ��ʬ�Ժ���Ϣ�˰���");
	getchar();
	system("cls");
	man += 20;
	xue = man;
	printf("��ϲ��ɵ�һ�£�MIR��Ѫ������+20���������Ѫ����%d", xue);
	getchar();
	system("cls");
	zuo[1] = 1;
	printf("�����������...");
	getchar();
	system("cls");
	return;
}
void level_2() {
	int go = gongji;
	if (zuo[1] == 0) {
		system("cls");
		printf("������ɵ�һ��");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("�����������еط����߳��˰칫��");
	getchar();
	system("cls");
	printf("���٣���ѩ�����˽���");
	getchar();
	system("cls");
	printf("���͵�һ��ͷ������ԭ��������");
	getchar();
	system("cls");
	printf("�㣺ѽ������������������ʱ��");
	getchar();
	system("cls");
	printf("�����������������潩ʬ���ĳ��֣��Ѿ�û�����κε�����");
	getchar();
	system("cls");
	printf("������ֻ�н���ļ�̨����������Ҳ�ڽ�ʬ����...");
	getchar();
	system("cls");
	printf("�㣺���ڻ��ж����Ҵ��ߣ�");

	getchar();
	system("cls");
	printf("���������̾�˿���");
	getchar();
	system("cls");
	printf("���������ң������Ҵ��߰�");
	getchar();
	system("cls");
	printf("�㣺�����ڻ�������������");
	getchar();
	system("cls");
	printf("�������ܣ���ϣ����ã");
	getchar();
	system("cls");
	printf("�㣺�����������߰�");
	getchar();
	system("cls");
	printf("������ȥ���ﰡ");
	getchar();
	system("cls");
	printf("�㣺emm��S�����������������ȥS�ǰɣ�");
	getchar();
	system("cls");
	printf("������Ҳֻ��������");
	getchar();
	system("cls");
	printf("���������㣬��ѩ����������");
	getchar();
	system("cls");
	printf("�㣺лл");
	getchar();
	system("cls");
	printf("��ĵ�ҩ����");
	getchar();
	system("cls");
	printf("������¥�����������ʲô����������");
	getchar();
	system("cls");
	printf("�㣺ʲô��������...");
	getchar();
	system("cls");
	printf("��&����#^^^");
	getchar();
	system("cls");
	printf("���������ʼս��");
	getchar();
	system("cls");
	printf("��ʬ������м���ʬ\n\n");
	printf("Ѫ����250 ��������30�����ң� ��Ч������	�Ѷȣ��ߣ�������Ѫ����˵��\n");
	int shixue = 250;
	int gongni = 30, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	int s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 5;
		else gongji -= rand() % 5;
		printf("����ʬ���𹥻�����ʬѪ������%d", gongji);
		getchar();
		system("cls");
		shixue -= gongji;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 5;
		else gongni -= rand() % 5;
		int t = rand() % 100;//�ṥ���� 
		if (t > 5) printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		else {
			system("cls");
			int k = rand() % 100;
			printf("��ʬʹ�ÿ񱩼��ܣ����Ѫ������%d", min(k * 2, 100));
			getchar();
			system("cls");
			xue -= k;
		}
		if (t > 5) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			printf("����...");
			getchar();
			system("cls");
			printf("����ǰ��ֻ��������˵����ѩ��...");
			getchar();
			system("cls");
			return;
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("�������У���ʰһ�£����ǳ�����");
	getchar();
	system("cls");
	printf("��Сʱ�Ժ����ǵ�����S��");
	getchar();
	system("cls");
	printf("�����Ѿ������û����������ƾɲ���������");
	getchar();
	system("cls");
	printf("���ǲҲ��̶�");
	getchar();
	system("cls");
	printf("������������һ�������ӣ�Ҫ��Ҫȥ����");
	getchar();
	system("cls");
	printf("1.Ҫ	2.��Ҫ�˰�\n");
	scanf("%d", &x);
	if (x == 2) goto no;
	getchar();
	system("cls");
	printf("���Ƿ�����һ����������һ��ϻ��");
	getchar();
	system("cls");
	printf("���Ǵ�����");
	getchar();
	system("cls");
	printf("�������쿴�쿴������ʳ�");
	getchar();
	system("cls");
	printf("���ǳ�����ʳ�Ѫ������");
	xue = man;
	getchar();
	system("cls");
no:
	if (x == 1) {
		printf("�㣺��ѽ�����ڿ��о�����˰�");
		getchar();
		system("cls");
	}
	printf("�����������ǽ���ȥ�������ط�");
	getchar();
	system("cls");
	printf("���ȵ�...�ҡ�");
	getchar();
	system("cls");
	printf("��һ������������");
	getchar();
	system("cls");
	printf("�����������೤��");
	getchar();
	system("cls");
	printf("�೤����������ô�����ﰡ");
	getchar();
	system("cls");
	printf("�㣺�ⲻ�Ǳ�����ɥʬ������������Ѱ����");
	getchar();
	system("cls");
	printf("�೤���ߣ�������һ��");
	getchar();
	system("cls");
	printf("��������һͬ������");
	getchar();
	system("cls");
	int k = rand() % 30;
	printf("��ϲ��ɵڶ��£�S�ǣ�Ѫ������+%d", k);
	man += k;
	xue = man;
	zuo[2] = 1;
	getchar();
	system("cls");
	return;
}
void level_3() {
	if (zuo[2] == 0) {
		system("cls");
		printf("������ɵڶ���");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("�������������ǿ쿴������ʲô��");
	getchar();
	system("cls");
	printf("����������Զ�������˿��������Ǹ�ƿ�ӡ�");
	getchar();
	system("cls");
	printf("�೤��ʲôƿ����");
	getchar();
	system("cls");
	printf("�㣺�����������֣�����ë���룿�ҿ�����");
	getchar();
	system("cls");
	printf("��è���飺��������");
	getchar();
	system("cls");
	printf("��������");
	getchar();
	system("cls");
	printf("�೤����");
	getchar();
	system("cls");
	printf("�㣺��");
	getchar();
	system("cls");
	printf("�೤�������磿");
	getchar();
	system("cls");
	printf("�㣺������ǲ�����");
	getchar();
	system("cls");
	printf("������...");
	getchar();
	system("cls");
	printf("�೤��...");
	getchar();
	system("cls");
	printf("�㣺��������ȥ�����Ǹ�ƿ�Ӱ�");
	getchar();
	system("cls");
	printf("���ǣ���������һ·�������Ǹ�ƿ����ǰ");
	getchar();
	system("cls");
	printf("ƿ����д�ģ�ǧ��...��Ҫ&��ͷ.*D");
	getchar();
	system("cls");
	printf("��������û������");
	getchar();
	system("cls");
	printf("�೤����...��������...��ͷ...����");
	getchar();
	system("cls");
	printf("������#&��*%��^");
	getchar();
	system("cls");
	printf("��ʬ�����ħ����ʬ\n\n");
	printf("Ѫ����250 ��������25�����ң� ��Ч���ٻ���Ϯ	�Ѷȣ��У�������Ѫ����˵��\n");
	int shixue = 250;
	int gongni = 25, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	int s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 10;
		else gongji -= rand() % 10;
		printf("����ʬ���𹥻�����ʬѪ������%d", gongji);
		getchar();
		system("cls");
		shixue -= gongji;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 5;
		else gongni -= rand() % 5;
		int t = rand() % 100;//�ṥ���� 
		if (t > 5) printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 70) {
				printf("��ʬʹ��ħ�����ܣ��ٻ���Ϯ�����Ѫ������%d", k);
				getchar();
				system("cls");
				xue -= k;
			}
			else {
				printf("��ʬʹ��ħ�����ܣ��ٻ���Ϯ�����Ѫ������%d", 3 * k);
				getchar();
				system("cls");
				xue -= 3 * k;
			}
		}
		if (t > 5) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			printf("����...");
			getchar();
			system("cls");
			printf("����ǰ��ֻ���������Ͱ೤�������ѩ��...");
			getchar();
			system("cls");
			return;
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("�㣺�೤����Ǿ������ǣ������ǻ�ͷ����");
	getchar();
	system("cls");
	printf("�೤�������⻰�ֵֹ�");
	getchar();
	system("cls");
	printf("��������������������");
	getchar();
	system("cls");
	printf("�㣺�������������ˣ�����ǰ����");
	getchar();
	system("cls");
	printf("�����Ͱ೤������ֵĿ�����");
	getchar();
	system("cls");
	printf("�೤��ȥ����");
	getchar();
	system("cls");
	printf("�㣺��֪��");
	getchar();
	system("cls");
	printf("����������*����&*&");
	getchar();
	system("cls");
	printf("�㣺���ǿ��Ե�S�Ǳ��ϵ�Χǽ����");
	getchar();
	system("cls");
	printf("�㣺����Ѱ���Ҵ��߶�ܽ�ʬ��Ϯ��");
	getchar();
	system("cls");
	printf("������������");
	getchar();
	system("cls");
	printf("�೤������û����");
	getchar();
	system("cls");
	printf("�㣺û�µ����ﹻ��");
	getchar();
	system("cls");
	printf("ǰ����һ������·�ڣ��೤����ѩ���������߰�");
	getchar();
	system("cls");
	printf("1.ֱ��	2.��ת	3.��ת\n");
	scanf("%d", &x);
	if (x == 1) {
		goto yes;
	}
	else {
		printf("������������ȥ��...");
		getchar();
		system("cls");
		printf("��ʱ��һȺ��һȺ�Ľ�ʬ��Χ������");
		getchar();
		system("cls");
		printf("���ǹѲ�����");
		getchar();
		system("cls");
		printf("���������˽�ʬ����...");
		getchar();
		system("cls");
		printf("����һ�ΰɣ�");
		getchar();
		system("cls");
		return;
	}
yes:
	printf("����������Χǽ�Ա�");
	getchar();
	system("cls");
	printf("�㣨����Χǽ������Χǽ�е��ʵ��");
	getchar();
	system("cls");
	printf("������Ҫ��������ȥ��");
	getchar();
	system("cls");
	printf("�㣺&*&#������%��");
	getchar();
	system("cls");
	printf("�೤��������");
	getchar();
	system("cls");
	printf("�㣨�������ģ�������...");
	getchar();
	system("cls");
	printf("������Ц�����������ˣ���������");
	getchar();
	system("cls");
	printf("�೤������ȥ���Ҵ��߰ɣ�");
	getchar();
	system("cls");
	printf("�㣺�ã�");
	getchar();
	system("cls");
	printf("���ǣ�����������һ·������ȥ...");
	getchar();
	system("cls");
	int k = rand() % 30;
	man += k;
	xue += k;
	if (xue > man) xue = man;
	printf("��ϲ��ɵ����£�S��(2)��Ѫ������+%d���������Ѫ����%d", k, xue);
	getchar();
	system("cls");
	zuo[3] = 1;
	printf("�����������...");
	getchar();
	system("cls");
	return;
}
void HideCursor(bool Visible) {
	CONSOLE_CURSOR_INFO Cursor;
	Cursor.bVisible = !Visible;
	Cursor.dwSize = sizeof(Cursor);
	HANDLE Hand = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorInfo(Hand, &Cursor);
}
void MAP() {
	system("cls");
	getchar();
	printf("#����Χǽ\n\n");
	printf("----------------------------------------------------------------\n");
	printf("|......MIR��˾.....           ...........   #      ...   ...  .|\n");
	printf("|....................   ��  ...S��.......   #   ...����... . ..|\n");
	printf("|    ............             ..   ......   #   ....... .. . ..|\n");
	printf("|  .........                  ... ...........    #   ##    ..  |\n");
	printf("|                 ...... ..                                    |\n");
	printf("|        ... .......���Ĵ��......          .. ....            |\n");
	printf("|               . ........                  ............X��..  |\n");
	printf("|                  .........                 ......  ... ..... |\n");
	printf("|....D����.......                                ...           |\n");
	printf("| ... .....  .                                       ... .     |\n");
	printf("|##################### #  #   ##### #                #         |\n");
	printf("|   ��������. .. ... .. . .... ..             #########        |\n");
	printf("|..... .................                     .... ����.... .   |\n");
	printf("|....                                            .........     |\n");
	printf("| ..   ��������... ...                  .......................|\n");
	printf("|........... . .. .... . . . .                                 |\n");
	printf("----------------------------------------------------------------\n");
	printf("�����������...");
	getchar();
	system("cls");
	return;
}
void wu_jin() {
	getchar();
	system("cls");
	printf("��ģʽ���ڿ�����...");
	getchar();
	system("cls");
	printf("�����������...");
	getchar();
	system("cls");
	return;
}
void level_4() {
	if (zuo[3] == 0) {
		system("cls");
		printf("������ɵ�����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("����������һ��·������ȥ");
	getchar();
	system("cls");
	printf("һ·�������ò������Ӳ���ʬ��");
	getchar();
	system("cls");
	printf("ͻȻ�����Ƿ�����һȺ�ڶ����Ķ��������Ǳ���");
	getchar();
	system("cls");
	printf("�㣺ѽ��");
	getchar();
	system("cls");
	printf("�೤���������ˣ����ͣ���ѩ");
	getchar();
	system("cls");
	printf("��ʬ������Ա���ʬ\n\n");
	printf("Ѫ����500 ��������40�����ң� ��Ч������ʱ�Ա�	�Ѷȣ��ߣ�������Ѫ����˵��\n");
	int shixue = 500;
	int gongni = 40, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	int s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 30;
		else gongji -= rand() % 10;
		printf("����ʬ���𹥻�����ʬѪ������%d", gongji);
		getchar();
		system("cls");
		shixue -= gongji;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 50;//�ṥ���� 
		if (shixue >= t) printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 70) {
				printf("��ʬ�����Ա�������������������׼����������");
				getchar();
				system("cls");
			}
			else {
				printf("�䣡����������������");
				getchar();
				system("cls");
				printf("�㣺��^&&*^%^$......");
				getchar();
				system("cls");
				printf("��������ѩ��");
				getchar();
				system("cls");
				printf("�೤����ѩ��");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 40) {
					printf("�����������");
					getchar();
					system("cls");
					printf("Ҫ��...���ҵģ��ٿ�һ��");
					getchar();
					system("cls");
					printf("�����������");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("������һ��ɨ��֮���㱻��������");
					break;
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 50) {
				printf("����...");
				getchar();
				system("cls");
				printf("����ǰ��ֻ���������Ͱ೤�������ѩ��...");
				getchar();
				system("cls");
			}
			else {
				printf("��S��");
				getchar();
				system("cls");
				printf("��������һ��ɨ��֮���㱻��������");
				getchar();
				system("cls");
				xue += 100;
				printf("Ѫ���ָ�100");
				break;
			}
			return;
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("�㣺���Ǵ�����ˣ���");
	getchar();
	system("cls");
	printf("�㣺Ү������");
	getchar();
	system("cls");
	printf("��ʬ�������̫�磬������...");
	getchar();
	system("cls");
	printf("�㣺����������");
	getchar();
	system("cls");
	printf("����������������");
	getchar();
	system("cls");
	printf("�೤������������");
	getchar();
	system("cls");
	printf("���������ʼս��");
	getchar();
	system("cls");
	printf("��ʬ��������ཀྵʬ\n\n");
	printf("Ѫ����100 ��������10�����ң� ��Ч����	�Ѷȣ��ͣ�ֻ�ǲ������Ѫ���������õģ�\n");
	shixue = 100;
	gongni = 10, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 5;
		else gongji -= rand() % 5;
		printf("����ʬ���𹥻�����ʬѪ������%d", gongji);
		getchar();
		system("cls");
		shixue -= gongji;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 20;
		else gongni -= rand() % 5;
		printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			printf("����...");
			getchar();
			system("cls");
			printf("Զ����һ����������...������ô��������...");
			getchar();
			system("cls");
			return;
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("�㣺����һ�����⽩ʬ���m��");
	getchar();
	system("cls");
	printf("������Ҳ����һ��");
	getchar();
	system("cls");
	printf("�೤��Ҳ����һ��");
	getchar();
	system("cls");
	printf("���������㣬���Ȱ�");
	getchar();
	system("cls");
	printf("�㣺лл");
	getchar();
	system("cls");
	int k = 190 + rand() % 20;
	man = k;
	xue = k;
	printf("�����ڵ�Ѫ���ǣ�%d", xue);
	getchar();
	system("cls");
	printf("�೤��������һ����ǹ�G��");
	getchar();
	system("cls");
	if (qiang == 0) printf("�㣺лл");
	else printf("�㣺������");
	getchar();
	system("cls");
	printf("�೤��*&��*W&%����");
	getchar();
	system("cls");
	int o = rand() % 100;
	gongji += o;
	if (qiang == 1) gongji -= o;
	qiang = 1;
	printf("�����ڵĹ�������%d", gongji);
	getchar();
	system("cls");
	printf("��ʬ��������һ��������");
	getchar();
	system("cls");
	printf("�����������ս��");
	getchar();
	system("cls");
	printf("��ʬ������߼���ʬ\n\n");
	printf("Ѫ����1000 ��������50�����ң� ��Ч����	�Ѷȣ��ߣ�������Ѫ����˵��\n");
	shixue = 1000;
	gongni = 50, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 30;
		else gongji -= rand() % 10;
		printf("����ʬ���𹥻�����ʬѪ������%d", gongji);
		getchar();
		system("cls");
		shixue -= gongji;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 50;//�ṥ���� 
		printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 50) {
				printf("����...");
				getchar();
				system("cls");
				printf("����ǰ��ֻ���������Ͱ೤�������ѩ��...");
				getchar();
				system("cls");
			}
			else {
				printf("��S��");
				getchar();
				system("cls");
				printf("��������һ��ɨ��֮���㱻��������");
				getchar();
				system("cls");
				xue += 100;
				printf("Ѫ���ָ�100");
				break;
			}
			return;
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("���ۣ����Ǻ���������");
	getchar();
	system("cls");
	printf("�㣺��");
	getchar();
	system("cls");
	printf("�೤����");
	getchar();
	system("cls");
	printf("��������");
	getchar();
	system("cls");
	printf("�㣺�ⲻ�����ǽ�ʬ�ɣ��˱��");
	getchar();
	system("cls");
	printf("���������������˹�����");
	getchar();
	system("cls");
	printf("����ѽ���ң��ܼ࣡��");
	getchar();
	system("cls");
	printf("���������ܼ�����ô����");
	getchar();
	system("cls");
	printf("�ܼࣺ��������һֱ�Ͷ������Ѱ���Ҵ�����");
	getchar();
	system("cls");
	printf("�೤����������������һ���߹�");
	getchar();
	system("cls");
	printf("�ܼࣺ�õ�û����");
	getchar();
	system("cls");
	printf("�㣺�濪�ģ���������һ������");
	getchar();
	system("cls");
	printf("������������");
	getchar();
	system("cls");
	printf("�㣺�����ǽ�����ȥ��ʲôѽ������Ҳ����һ���Ҵ����˰�");
	getchar();
	system("cls");
	printf("�ܼࣺ�ǵģ��Ҷ��ҹ���");
	getchar();
	system("cls");
	printf("�೤���Ҽǵ÷�������ĵ��ƶ���ɽ���Ӹ����ºÿ�����������ȥ�����");
	getchar();
	system("cls");
	printf("�㣺��ѽ");
	getchar();
	system("cls");
	printf("�ܼࣺ��������һЩʳ��");
	getchar();
	system("cls");
	k = rand() % 10 + 30;
	xue += k;
	if (xue > man) xue = man;
	printf("�������Щʳ�Ѫ����%d", xue);
	getchar();
	system("cls");
	printf("��ϲ��ɵ����£��Ҵ���");
	getchar();
	system("cls");
	s = 20 + rand() % 5;
	man += s;
	xue += s;
	printf("Ѫ������+%d", s);
	getchar();
	system("cls");
	zuo[4] = 1;
	printf("�����������...");
	getchar();
	system("cls");
	return;
}
void level_5() {
	if (zuo[4] == 0) {
		system("cls");
		printf("������ɵ�����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("��������ǲ��ǵ÷��������кܶ�ĳ�ǽ");
	getchar();
	system("cls");
	printf("�೤���ǵ�");
	getchar();
	system("cls");
	printf("�ܼࣺ�ǵ�");
	getchar();
	system("cls");
	printf("�㣺����");
	getchar();
	system("cls");
	printf("���������Ǿ����Ǹ���ǽ�������ʬ��");
	getchar();
	system("cls");
	printf("�ܼࣺ������");
	getchar();
	system("cls");
	printf("�೤�����˿�����ʲôʱ����ܵ���");
	getchar();
	system("cls");
	printf("�������㿴����ʲô");
	getchar();
	system("cls");
	printf("�೤����͵��ˣ�����");
	getchar();
	system("cls");
	printf("�㣺���ǿ��³���");
	getchar();
	system("cls");
	printf("�ܼ��һ�£������Աߵ��Ǹ�������...");
	getchar();
	system("cls");
	printf("�㣺��������");
	getchar();
	system("cls");
	printf("�������������ˣ�����ƿ��ţ������");
	getchar();
	system("cls");
	printf("�㣺лл");
	getchar();
	system("cls");
	int k = rand() % 100;
	xue += k;
	if (xue > man) xue = man;
	printf("���Ѫ���ǣ�%d", xue);
	printf("��ʬ������߼���ʬ\n\n");
	printf("Ѫ����1000 ��������50�����ң� ��Ч����	�Ѷȣ��ߣ�������Ѫ����˵��\n");
	int shixue = 1000;
	int gongni = 50, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	int s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 30;
		else gongji -= rand() % 10;
		printf("����ʬ���𹥻�����ʬѪ������%d", gongji);
		getchar();
		system("cls");
		shixue -= gongji;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 50;//�ṥ���� 
		printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int d = rand() % 3;
			if (d == 2) {
				printf("�㱻��ʬ������");
				getchar();
				system("cls");
				printf("�������೤���ܼ࣬�����ϰ�...");
				getchar();
				system("cls");
				printf("ʮ���Ӻ����Ǹɵ��˽�ʬ����������");
				getchar();
				system("cls");
				int k = rand() % 200;
				xue += k;
				if (xue > man) xue = man;
				printf("���Ǹ�����һ��ҩҩ�����Ѫ����������%d", xue);
				getchar();
				system("cls");
				printf("Ѫ������+20");
				man += 20;
				getchar();
				system("cls");
				break;
			}
			printf("����...");
			getchar();
			system("cls");
			printf("����ǰ��ֻ���������Ͱ೤�������ѩ��...");
			getchar();
			system("cls");
			return;
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("�㣺tmd��ô��ô��ĸ߼���ʬ��");
	getchar();
	system("cls");
	printf("���������ԶԶ�");
	getchar();
	system("cls");
	printf("�೤�����ԶԶ�");
	getchar();
	system("cls");
	printf("�ܼࣺ���ԶԶ�");
	getchar();
	system("cls");
	printf("�㣺������");
	getchar();
	system("cls");
	printf("�����Ͱ೤˵���߰ɣ����˷�ʱ���ˣ�Χǽ����ǰ�棡");
	getchar();
	system("cls");
	printf("�ܼࣺ��������ɽ�ϣ������Χǽ����");
	getchar();
	system("cls");
	printf("�㣺�ã����ǲ�֪����ʬ�᲻��Ӻ��͵Ϯ����");
	getchar();
	system("cls");
	printf("������û��������");
	getchar();
	system("cls");
	printf("�೤���������㱣�ذ�");
	getchar();
	system("cls");
	printf("��������Χǽ���棬ע����һ��");
	getchar();
	system("cls");
	printf("�㣺�ߣ����ǵ�Χǽ����");
	getchar();
	system("cls");
	printf("�ܼࣺ�����������и��Խ���������������Ϣ�������ǹ�");
	getchar();
	system("cls");
	printf("�߳���Զ���������˸�ok�����ƣ�û�����");
	getchar();
	system("cls");
	printf("���ǣ����Ǹ�˾��ְȥ��");
	getchar();
	system("cls");
	k = rand() % 15;
	man += k;
	xue = man;
	printf("��ϲ��ɵ����£�Ѫ������+%d�������ڵ�Ѫ����%d", k, xue);
	getchar();
	system("cls");
	printf("�����������...");
	zuo[5] = 1;
	getchar();
	system("cls");
	return;
}
void level_6() {
	if (zuo[5] == 0) {
		system("cls");
		printf("������ɵ�����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
	printf("������ϸ�����ŶԽ�����Ķ���");
	getchar();
	system("cls");
	printf("ͻȻ����������һ���ڶ����Ķ�������������������");
	getchar();
	system("cls");
	printf("�㣺�����Զ���󲻴�");
	getchar();
	system("cls");
	printf("����������200�ף���С");
	getchar();
	system("cls");
	printf("�೤���ǾͿ������");
	getchar();
	system("cls");
	printf("�������õ�");
	getchar();
	system("cls");
	printf("����һ��...");
	getchar();
	system("cls");
	printf("�㣺���ǿ�ǰ����Ǹ���ʲô��");
	getchar();
	system("cls");
	printf("�೤����...");
	getchar();
	system("cls");
	printf("�����������ս��");
	getchar();
	system("cls");
	printf("��ʬ������Ա���ʬ\n\n");
	printf("Ѫ����500 ��������40�����ң� ��Ч������ʱ�Ա�	�Ѷȣ��ߣ�������Ѫ����˵��\n");
	int shixue = 500;
	int gongni = 40, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	int s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 30;
		else gongji -= rand() % 10;
		printf("�㡢�೤���ܼ���ʬ���𹥻�����ʬѪ������%d", gongji * 3);
		getchar();
		system("cls");
		shixue -= gongji * 3;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 50;//�ṥ���� 
		if (shixue >= t) printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 70) {
				printf("��ʬ�����Ա�������������������׼����������");
				getchar();
				system("cls");
			}
			else {
				printf("�䣡����������������");
				getchar();
				system("cls");
				printf("�㣺��^&&*^%^$......");
				getchar();
				system("cls");
				printf("��������ѩ��");
				getchar();
				system("cls");
				printf("�೤����ѩ��");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 40) {
					printf("�����������");
					getchar();
					system("cls");
					printf("Ҫ��...���ҵģ��ٿ�һ��");
					getchar();
					system("cls");
					printf("�����������");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("������һ��ɨ��֮���㱻��������");
					break;
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			printf("����...");
			getchar();
			system("cls");
			printf("����ǰ��ֻ���������Ͱ೤�������ѩ��...");
			getchar();
			system("cls");
			return;
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("�೤������������һ���ģ�����㵯ҩ����ʳ");
	getchar();
	system("cls");
	xue = man + 20;
	man += 20;
	if (xue < man) xue = man;
	gongji += 18;
	printf("�㣺3Q");
	getchar();
	system("cls");
	printf("�㣺�����ʬ�е�����");
	getchar();
	system("cls");
	printf("���ٺ٣�������m...�ҾͲ�����...��");
	getchar();
	system("cls");
	printf("�����������ս��");
	getchar();
	system("cls");
	printf("��ʬ���������ؽ�ʬ\n\n");
	printf("Ѫ����1500 ��������70�����ң� ��Ч����	�Ѷȣ��ߣ���������Ѫ����˵��\n");
	shixue = 1500;
	gongni = 70, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		if (shixue <= 1000) {
			printf("����������������������");
			getchar();
			system("cls");
			printf("�������룬������+100");
			gongji += 100;
		}
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 30;
		else gongji -= rand() % 10;
		printf("�㡢�೤���ܼ���ʬ���𹥻�����ʬѪ������%d", gongji * 3);
		getchar();
		system("cls");
		shixue -= gongji * 3;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 50;//�ṥ���� 
		printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			printf("����...");
			getchar();
			system("cls");
			printf("����ǰ��ֻ���������Ͱ೤�������ѩ��...");
			getchar();
			system("cls");
			return;
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	gongji -= 100;
	printf("�ܼࣺ���������");
	getchar();
	system("cls");
	printf("�㣺���ڵĽ�ʬ��������");
	getchar();
	system("cls");
	printf("���������ˣ��ҸղŴ��Ǹ���ʬ�����ҵ���һ�����������죡����һ������");
	getchar();
	system("cls");
	printf("���ǰѶ�����˹�ȥ");
	getchar();
	system("cls");
	printf("��S...����Ϊ...�׶�...��");
	getchar();
	system("cls");
	printf("�⵽....��...���");
	getchar();
	system("cls");
	printf("��...������...");
	getchar();
	system("cls");
	printf("ֻ...ʱ��...����...");
	getchar();
	system("cls");
	printf("����������������");
	getchar();
	system("cls");
	printf("�������������ǸϽ�ȥ֧Ԯ�׶��ɣ�˳���ҵ��Ҵ��ߣ�");
	getchar();
	system("cls");
	printf("�㣺��");
	getchar();
	system("cls");
	printf("�೤����");
	getchar();
	system("cls");
	printf("�ܼࣺ��");
	getchar();
	system("cls");
	int k = rand() % 20;
	printf("��ϲ��ɵ����£��׶���������+%d��Ѫ������", k);
	xue = man;
	zuo[6] = 1;
	printf("�����������...");
	getchar();
	system("cls");
	return;
}
void level_7() {
	if (zuo[6] == 0) {
		system("cls");
		printf("������ɵ�����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("�����ҵ������ǵĳ�");
	getchar();
	system("cls");
	printf("�೤���Ҿ�˵�ɣ���û����");
	getchar();
	system("cls");
	printf("����������");
	getchar();
	system("cls");
	printf("�ܼࣺ���а�");
	getchar();
	system("cls");
	printf("��������");
	getchar();
	system("cls");
	printf("�೤����");
	getchar();
	system("cls");
	printf("�㣺��");
	getchar();
	system("cls");
	printf("�ܼࣨЦ���������͹���");
	getchar();
	system("cls");
	printf("������md�����ܿ���Ц��");
	getchar();
	system("cls");
	printf("�೤�����ˣ�S��������Ҳ�ܽ����߹�ȥ��");
	getchar();
	system("cls");
	printf("�㣺���������⵽��ʬ����Ϯ");
	getchar();
	system("cls");
	printf("������ֻҪ�����������ܶ����������Ľ�ʬ����");
	getchar();
	system("cls");
	printf("���ǣ��������˳���S����ȥ��");
	getchar();
	system("cls");
	printf("ͻȻ�ģ�����˵������ô�о��е㺦��");
	getchar();
	system("cls");
	printf("�೤��me too...");
	getchar();
	system("cls");
	printf("�㣺�߰ɣ���������");
	getchar();
	system("cls");
	printf("�ܼࣺ�ǰ��ǰ�");
	getchar();
	system("cls");
	printf("���������е����");
	getchar();
	system("cls");
	printf("�೤������ʳ��");
	getchar();
	system("cls");
	printf("���������ˣ������̣�����ѩ���Ű�");
	getchar();
	system("cls");
	printf("�㣺��ѽ����������Ҳ�ó԰�");
	getchar();
	system("cls");
	printf("��ʬ�����ҳ԰�...");
	getchar();
	system("cls");
	printf("�����������ս��");
	getchar();
	system("cls");
	printf("��ʬ���������ؽ�ʬ\n\n");
	printf("Ѫ����1500 ��������70�����ң� ��Ч��ÿ�غ�����Ĺ�������10�����ң�	�Ѷȣ��ߣ���������Ѫ����˵��\n");
	int shixue = 1500;
	int gongni = 70, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	int s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 30;
		else gongji -= rand() % 10;
		printf("�㡢�೤���ܼ���ʬ���𹥻�����ʬѪ������%d", gongji * 3);
		getchar();
		system("cls");
		shixue -= gongji * 3;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^&^%E#$����SE&*$%��һǽSDF*(#*$)����#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 50;//�ṥ���� 
		printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			printf("����...");
			getchar();
			system("cls");
			int q = rand() % 100;
			if (q & 1) {
				printf("����ǰ��ֻ���������Ͱ೤�������ѩ��...");
				getchar();
				system("cls");
			}
			else {
				printf("�����㱻���Ǿ�������...");
			}
			return;
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		int kk = rand() % 15;
		getchar();
		system("cls");
		printf("����һ���غϣ���ʬʹ�ü��ܣ���Ĺ���������%d", kk);
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("������ʲô����˵ʲô");
	getchar();
	system("cls");
	printf("�೤��������һǽɶ���ʣ�");
	getchar();
	system("cls");
	printf("�ܼࣺ������һ��ǽ��������");
	getchar();
	system("cls");
	printf("�㣺�ǿ϶������ҵİ���");
	getchar();
	system("cls");
	printf("�೤��SDF(*$T%$)");
	getchar();
	system("cls");
	printf("������hhh");
	getchar();
	system("cls");
	printf("�ܼࣺ*(%$IED)");
	getchar();
	system("cls");
	printf("�������������߰�");
	getchar();
	system("cls");
	printf("�㣺���ǣ����ǲ���Ҫ�����׶�����");
	getchar();
	system("cls");
	printf("������˼���Σ�˵���ܼ࣬��Ͱ೤�����������׶����Һʹ�ѩȥ������");
	getchar();
	system("cls");
	printf("�ܼࡢ�೤��ok");
	getchar();
	system("cls");
	printf("���ǣ��������һ��ȥ�˼���");
	getchar();
	system("cls");
	printf("���ܼ�Ͱ೤���������׶�");
	getchar();
	system("cls");
	printf("���ˣ������ղŽ�ʬ�ĳ����������������ڻ�ʣ%d�Ĺ�����", gongji);
	getchar();
	system("cls");
	int qwq = rand() % 15;
	printf("�����㹥����%d", 2 * qwq);
	gongji += qwq * 2;
	getchar();
	system("cls");
	printf("ʲô���㻹��ҪѪ��������");
	getchar();
	system("cls");
	xue = man;
	printf("�ðɣ������ڵ�Ѫ����%d", xue);
	getchar();
	system("cls");
	int k = rand() % 30;
	man += k;
	printf("��ϲ��ɵ�7�£��׶�(2)��Ѫ������+%d", k);
	getchar();
	system("cls");
	printf("�����������...");
	getchar();
	system("cls");
	zuo[7] = 1;
	return;
}
void level_8() {
	if (zuo[7] == 0) {
		system("cls");
		printf("������ɵ�����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("�������㿴��ǰ��͵���");
	getchar();
	system("cls");
	printf("�㣺wcao����ô��");
	getchar();
	system("cls");
	printf("�������������㣬����100min����˵���");
	getchar();
	system("cls");
	printf("�㣺�뵱���ҽ������1000min������ɶ�������𴲲�ϴ��������˯����ˢ��");
	getchar();
	system("cls");
	printf("������ǰ���䷲�������������е�ק");
	getchar();
	system("cls");
	printf("�㣺...");
	getchar();
	system("cls");
	printf("������ȥ������ǽ����ʲô������");
	getchar();
	system("cls");
	printf("�㣺���أ�������");
	getchar();
	system("cls");
	printf("�������������ˣ���ȥ������");
	getchar();
	system("cls");
	printf("��������Ů���е�");
	getchar();
	system("cls");
	printf("�㣺����");
	getchar();
	system("cls");
	printf("������������Զ����������");
	getchar();
	system("cls");
	printf("����������������и�...");
	getchar();
	system("cls");
	printf("���������ܰ�������");
	getchar();
	system("cls");
	printf("�㣺���ܲ�����������");
	getchar();
	system("cls");
	printf("���������ʼս��...");
	getchar();
	system("cls");
	printf("��ʬ�������Խ�ʬ\n\n");
	printf("Ѫ������ ���������� ��Ч����	�Ѷȣ���\n");
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("��1����ս��	2����\n");
	scanf("%d", &x);
	system("cls");
	getchar();
	if (x == 1) {
		printf("��������ܵ��ǰ�");
		getchar();
		system("cls");
		printf("��������֧��S��");
		getchar();
		system("cls");
		printf("�����������...");
		getchar();
		system("cls");
		return;
	}
	printf("����ٰ�Enter������������ٶȿ������ܣ�����");
	getchar();
	system("cls");
	printf("5");
	Sleep(1000);
	system("cls");
	printf("4");
	Sleep(1000);
	system("cls");
	printf("3");
	Sleep(1000);
	system("cls");
	printf("2");
	Sleep(1000);
	system("cls");
	printf("1");
	Sleep(1000);
	system("cls");
	printf("Go!");
	Sleep(1000);
	system("cls");
	int cnt = 0;
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	printf("%d", ++cnt);
	getchar();
	system("cls");
	int s = rand() % 50;
	if (s > 25) {
		printf("��������...");
	}
	else {
		printf("������û������");
		getchar();
		system("cls");
		printf("Զ������һ���������ǲ��Ǹ÷�������...");
		getchar();
		system("cls");
		printf("�����������...");
		getchar();
		system("cls");
		return;
	}
	getchar();
	system("cls");
	printf("������������������������UZI������");
	getchar();
	system("cls");
	int k = rand() % 10 + 90;
	printf("���UZI���ǹ��������+%d", k);
	getchar();
	system("cls");
	printf("�㣺��һ�������ջ���ˣ����ǿ��ȥ�ɣ�����");
	getchar();
	system("cls");
	printf("���ǣ����ǻ�ȥ��...");
	getchar();
	system("cls");
	k = rand() % 20;
	printf("��ϲ��ɵڰ��£�������Ѫ������+%d", k);
	man += k;
	xue = man;
	zuo[8] = 1;
	getchar();
	system("cls");
	printf("�����������...");
	getchar();
	system("cls");
	return;
}
void level_9() {
	if (zuo[8] == 0) {
		system("cls");
		printf("������ɵڰ���");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("�����־�����һ·���ڣ��ص�����������");
	getchar();
	system("cls");
	printf("��������ľ...����ôû����������");
	getchar();
	system("cls");
	printf("�����������ʲô���ѵ�...");
	getchar();
	system("cls");
	printf("�㣺������ҹ������嶫��������Ҫ��Ȼ��������˵��");
	getchar();
	system("cls");
	printf("������������ʧ��ʱ�����������������ж�");
	getchar();
	system("cls");
	printf("��ҧ��˵��������������˰���");
	getchar();
	system("cls");
	printf("����������ת��ͷ�������㣺����ȥ�ˣ���ౣ��");
	getchar();
	system("cls");
	printf("�㣺������...");
	getchar();
	system("cls");
	printf("����������UZI�������㣬һ�����ذ�");
	getchar();
	system("cls");
	printf("�������1.���ˣ�����һ����	2.лл��������UZI\n");
	scanf("%d", &x);
	system("cls");
	if (x == 2) {
		printf("�㣺лл��");
		getchar();
		system("cls");
		printf("�����������ͷ˵���ౣ�ذ�");
		getchar();
		system("cls");
		printf("......");
		getchar();
		system("cls");
		printf("����ѩ������ѩ���ѡ�");
		getchar();
		system("cls");
		printf("�������������۾����Ѿ��ǵڶ�����");
		getchar();
		system("cls");
		printf("�ܼࣺ��û�°�");
		getchar();
		system("cls");
		printf("�㣺��û�°�");
		getchar();
		system("cls");
		printf("�೤ͻȻ������������������ǹ����������ǹ����������������������...��...����...");
		getchar();
		system("cls");
		printf("�ܼࣺ�����ǵģ���...");
		getchar();
		system("cls");
		printf("�����̽���������������...");
		getchar();
		system("cls");
		printf("�೤����ӦΪ�����ˣ�������");
		getchar();
		system("cls");
		printf("��ŭ�İ೤һ������UZI��ɨ��������");
		getchar();
		system("cls");
		printf("��S��");
		getchar();
		system("cls");
		printf("�����������...");
		getchar();
		system("cls");
		return;
	}
	printf("�������ã�������һ��");
	getchar();
	system("cls");
	printf("�㣺�쿴...����....");
	getchar();
	system("cls");
	printf("Զ����һȺ��ѹѹ����Ѫ���������");
	getchar();
	system("cls");
	printf("һֱ��Enter�������𲫶�");
	getchar();
	system("cls");
	printf("5");
	Sleep(1000);
	system("cls");
	printf("4");
	Sleep(1000);
	system("cls");
	printf("3");
	Sleep(1000);
	system("cls");
	printf("2");
	Sleep(1000);
	system("cls");
	printf("1");
	Sleep(1000);
	system("cls");
	printf("Go!");
	Sleep(2000);
	system("cls");
	for (int i = 1; i <= 300; i++) {
		if (xue <= 0) {
			printf("���ں����𲫶��У��ܵ�����");
			getchar();
			int q = rand() % 10;
			if (q & 1) {
				system("cls");
				printf("���ǣ������ձ���������");
				break;
			}
			else {
				system("cls");
				printf("�����������...");
				getchar();
				system("cls");
			}
			return;
		}
		printf("Ѫ��ʣ�ࣺ%d", xue);
		getchar();
		int f = rand() % 3;
		int r = rand() % 10;
		if (r > 80) {
			xue += f;
		}
		else {
			xue -= f;
		}
		system("cls");
	}
	getchar();
	system("cls");
	if (xue <= 0) {
		printf("��ϲ��ɲʵ���0Ѫ���");
		getchar();
		system("cls");
		int k = rand() % 10000;
		xue += k * k;
		gongji += k * 2;
		printf("���Ѫ����%d	��Ĺ�������%d", xue, gongji);
		getchar();
		system("cls");
	}
	printf("�㣺��������");
	getchar();
	system("cls");
	printf("�������ǰ��ǰ�");
	getchar();
	system("cls");
	printf("�㣺�쿴���ܼ����������");
	getchar();
	system("cls");
	printf("�������ۣ�");
	getchar();
	system("cls");
	printf("�ܼࣺ�����õ���ʲô�ö�������");
	getchar();
	system("cls");
	printf("��Ц�����ĵݸ��ܼࣺ����UZI��");
	getchar();
	system("cls");
	printf("�೤���ۣ��������Ŷ");
	getchar();
	system("cls");
	printf("�ܼ����۵�������˵����û������ʲô���Ѱ�");
	getchar();
	system("cls");
	printf("�㣺������ˣ�");
	getchar();
	system("cls");
	printf("�ܼࣺ��������");
	getchar();
	system("cls");
	printf("�ܼࣺ����ֹѪ��");
	getchar();
	system("cls");
	xue = man;
	printf("Ѫ����%d", xue);
	man += 10;
	getchar();
	system("cls");
	printf("���������ǽ������ļƻ���...");
	getchar();
	system("cls");
	printf("�೤���ܼ�ͬʱЦ��˵���������׶�����");
	getchar();
	system("cls");
	printf("�೤�����ǸղŻ������ű�ֽ");
	getchar();
	system("cls");
	printf("�㣺д��ʲô");
	getchar();
	system("cls");
	printf("�����ڣ�ȫ���粼����ATO�����������ʮ�����ص��˺���");
	getchar();
	system("cls");
	printf("������ATO��");
	getchar();
	system("cls");
	printf("�㣺���Ǹ�ר��������");
	getchar();
	system("cls");
	printf("�ܼࣺ�Ǹ�ת�Ƶ�����");
	getchar();
	system("cls");
	printf("������&E*%$%#$ID");
	getchar();
	system("cls");
	printf("�㣺����������");
	getchar();
	system("cls");
	printf("�೤�������Ǿ͸Ͻ��������׶��ɣ�");
	getchar();
	system("cls");
	printf("�㣺ok��");
	getchar();
	system("cls");
	int k = rand() % 100;
	printf("��ϲ��ɵ�9�£�ATO������Ѫ������+%d", k);
	getchar();
	system("cls");
	printf("�����������...");
	getchar();
	system("cls");
	zuo[9] = 1;
	return;
}
void level_10() {
	if (zuo[9] == 0) {
		system("cls");
		printf("������ɵھ���");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("��������ѩ�������...");
	getchar();
	system("cls");
	printf("��~~~~~````");
	getchar();
	system("cls");
	printf("���������ʼս��...");
	getchar();
	system("cls");
	printf("��ʬ�������Ӱ�Ա���ʬ\n\n");
	printf("Ѫ����25500 ��������50�����ң� ��Ч������ʱ�Ա�	�Ѷȣ��ߣ�������Ѫ����˵��\n");
	int shixue = 25500;
	int gongni = 50, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	int s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 30;
		else gongji -= rand() % 10;
		printf("�㡢�������೤���ܼ���ʬ���𹥻�����ʬ�������˺�%d", gongji * 4);
		getchar();
		system("cls");
		shixue -= gongji;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 300;//�ṥ���� 
		if (shixue >= t) printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 70) {
				printf("��ʬ�����Ա�������������������׼����������");
				getchar();
				system("cls");
			}
			else {
				printf("�䣡����������������");
				getchar();
				system("cls");
				printf("�㣺��^&&*^%^$......");
				getchar();
				system("cls");
				printf("��������ѩ��");
				getchar();
				system("cls");
				printf("�೤����ѩ��");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 60) {
					printf("�����������");
					getchar();
					system("cls");
					printf("Ҫ��...���ҵģ��ٿ�һ��");
					getchar();
					system("cls");
					printf("�����������");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("��������һ��ɨ��֮���㱻��������");
					getchar();
					system("cls");
					xue += 100;
					printf("Ѫ���ָ�100");
					break;
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 70) {
				printf("����...");
				getchar();
				system("cls");
				printf("����ǰ��ֻ���������Ͱ೤�������ѩ��...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("�㱻ɨ�䵹��");
				getchar();
				system("cls");
				printf("��������һ��ɨ��֮���㱻�������ˣ����Ŵ�");
				getchar();
				system("cls");
				int qqq = rand() % 1000;
				xue += qqq;
				printf("Ѫ���ָ�%d", qqq);
			}
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("���������");
	getchar();
	system("cls");
	getchar();
	system("cls");
	printf("��ʬ�����ħ���Ա���ʬ\n\n");
	printf("Ѫ����50000 ��������100�����ң� ��Ч������ʱ�Ա�	�Ѷȣ��ߣ�������Ѫ����˵��\n");
	shixue = 50000;
	gongni = 100, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 30;
		else gongji -= rand() % 10;
		printf("�㡢�������೤���ܼ���ʬ���𹥻�����ʬ�������˺�%d", gongji * 4);
		getchar();
		system("cls");
		shixue -= gongji;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 300;//�ṥ���� 
		if (shixue >= t) printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 50) {
				printf("��ʬ�����Ա�������������������׼����������");
				getchar();
				system("cls");
			}
			else {
				printf("�䣡����������������");
				getchar();
				system("cls");
				printf("�㣺��^&&*^%^$......");
				getchar();
				system("cls");
				printf("��������ѩ��");
				getchar();
				system("cls");
				printf("�೤����ѩ��");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 60) {
					printf("�����������");
					getchar();
					system("cls");
					printf("Ҫ��...���ҵģ��ٿ�һ��");
					getchar();
					system("cls");
					printf("�����������");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("��������һ��ɨ��֮���㱻��������");
					getchar();
					system("cls");
					xue += 100;
					printf("Ѫ���ָ�100");
					break;
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 70) {
				printf("����...");
				getchar();
				system("cls");
				printf("����ǰ��ֻ���������������ѩ��...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("�㱻ɨ�䵹��");
				getchar();
				system("cls");
				printf("��������һ��ɨ��֮���㱻�������ˣ����Ŵ�");
				getchar();
				system("cls");
				int qqq = rand() % 1000;
				xue += qqq;
				printf("Ѫ���ָ�%d", qqq);
			}
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("�೤�����죬����������ʬ�ˣ���Ҳ���Ѫ��");
	getchar();
	system("cls");
	int k = rand() % 1000;
	xue += k;
	printf("Ѫ��Ϊ��%d", xue);
	getchar();
	system("cls");
	printf("��ʬ������Ա���ʬBOSS\n\n");
	printf("Ѫ����150000 ��������150�����ң� ��Ч��ʵʱ�Ա�	�Ѷȣ��ߣ�������Ѫ����˵��\n");
	shixue = 150000;
	gongni = 150, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 30;
		else gongji -= rand() % 10;
		printf("�㡢�������೤���ܼ���ʬ���𹥻�����ʬ�������˺�%d", gongji * 4);
		getchar();
		system("cls");
		shixue -= gongji;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//�ṥ���� 
		if (shixue >= t) printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("��ʬ�����Ա�������������������׼����������");
				getchar();
				system("cls");
			}
			else {
				printf("�䣡����������������");
				getchar();
				system("cls");
				printf("�㣺��^&&*^%^$......");
				getchar();
				system("cls");
				printf("��������ѩ��");
				getchar();
				system("cls");
				printf("�೤����ѩ��");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 80) {
					printf("�����������");
					getchar();
					system("cls");
					printf("Ҫ��...���ҵģ��ٿ�һ��");
					getchar();
					system("cls");
					printf("�����������");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("��������һ��ɨ��֮���㱻��������");
					getchar();
					system("cls");
					xue += 100;
					printf("Ѫ���ָ�100");
					break;
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("����...");
				getchar();
				system("cls");
				printf("����ǰ��ֻ���������������ѩ��...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("��S��");
				getchar();
				system("cls");
				printf("��������һ��ɨ��֮���㱻��������");
				getchar();
				system("cls");
				xue += 10000;
				printf("Ѫ���ָ�10000");
			}
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("�ܼࣺ��ҿ�Ե�ʳ������ӵ�");
	getchar();
	system("cls");
	k = rand() % 1000;
	xue += k;
	gongji += k;
	printf("Ѫ����%d	��������%d", xue, gongji);
	getchar();
	system("cls");
	getchar();
	system("cls");
	printf("��ʬ������Ա���ʬBOSS\n\n");
	printf("Ѫ����150000 ��������150�����ң� ��Ч��ʵʱ�Ա����������˺�	�Ѷȣ��ߣ�������Ѫ����˵��\n");
	shixue = 150000;
	gongni = 150, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 30;
		else gongji -= rand() % 10;
		if (k & 1) printf("�㡢�������೤���ܼ���ʬ���𹥻�����ʬ�������˺�%d", gongji * 8);
		else printf("��ʬ����������˺�");
		getchar();
		system("cls");
		if (k & 1) shixue -= gongji;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//�ṥ���� 
		if (shixue >= t * 3) printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("��ʬ�����Ա�������������������׼����������");
				getchar();
				system("cls");
			}
			else {
				printf("�䣡����������������");
				getchar();
				system("cls");
				printf("�㣺��^&&*^%^$......");
				getchar();
				system("cls");
				printf("��������ѩ��");
				getchar();
				system("cls");
				printf("�೤����ѩ��");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 70) {
					printf("�����������");
					getchar();
					system("cls");
					printf("Ҫ��...���ҵģ��ٿ�һ��");
					getchar();
					system("cls");
					printf("�����������");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("��������һ��ɨ��֮���㱻��������");
					getchar();
					system("cls");
					xue += 1000;
					printf("Ѫ���ָ�1000");
					break;
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("����...");
				getchar();
				system("cls");
				printf("����ǰ��ֻ���������������ѩ��...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("��S��");
				getchar();
				system("cls");
				printf("��������һ��ɨ��֮���㱻��������");
				getchar();
				system("cls");
				xue += 10000;
				printf("Ѫ���ָ�10000");
				break;
			}
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("�ܼࣺ�������ڴ���˼���BOSS...");
	getchar();
	system("cls");
	printf("�೤����������������ҪѰ�Ҹ���Ľ�ʬ��");
	getchar();
	system("cls");
	printf("�������õģ�");
	getchar();
	system("cls");
	printf("���ǣ�����Ѱ��������");
	getchar();
	system("cls");
	k = rand() % 2000;
	printf("��ϲ��ɵ�10�£�ATO����(2)����������ˣ���Ѫ�����޺͹�����+%d", k);
	man += k;
	gongji += k;
	getchar();
	system("cls");
	printf("�����������...");
	zuo[10] = 1;
	xue = man;
	getchar();
	system("cls");
	return;
}
void level_11() {
	if (zuo[10] == 0) {
		system("cls");
		printf("������ɵ�ʮ��");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("����������ʲô��");
	getchar();
	system("cls");
	printf("�೤���Դ����˽�ȥ������...��������");
	getchar();
	system("cls");
	printf("�ܼࣺ�������...");
	getchar();
	system("cls");
	printf("�����...����...��");
	getchar();
	system("cls");
	printf("�ұ���...��");
	getchar();
	system("cls");
	printf("��......���Ĵ�...��");
	getchar();
	system("cls");
	printf("���˾Ⱦ�...");
	getchar();
	system("cls");
	printf("�㣺������ȣ�");
	getchar();
	system("cls");
	printf("����������Ӧ����ȥ������");
	getchar();
	system("cls");
	printf("�ܼࣺ��죡");
	getchar();
	system("cls");
	printf("�೤��������������");
	getchar();
	system("cls");
	printf("�㣺û���˺ð�");
	getchar();
	system("cls");
	printf("�೤��û�£������õ�");
	getchar();
	system("cls");
	printf("���ǣ����Ƿ���ȥ�˵��Ĵ��");
	getchar();
	system("cls");
	printf("�������ϣ����ǵ����˵��Ĵ��");
	getchar();
	system("cls");
	printf("֮�����ﶼ�ǻĲݣ�һƬ�ǽ�");
	getchar();
	system("cls");
	printf("�ܼ�ҡ��ҡͷ");
	getchar();
	system("cls");
	printf("����ͣ���˳���һ·ǰ��");
	getchar();
	system("cls");
	printf("ǰ���Ӳݴ�����������Σ��");
	getchar();
	system("cls");
	printf("ϵͳ���������ô����");
	getchar();
	system("cls");
	printf("ϵͳ����Ȼ�Ǻ��������ܼࡢ�೤����ǰ����");
	getchar();
	system("cls");
	printf("�㣺...");
	getchar();
	system("cls");
	printf("�������٣���ѩ����������ʲô��");
	getchar();
	system("cls");
	printf("���ܹ�ȥһ����������M27������");
	getchar();
	system("cls");
	printf("�㣺�Ҳݣ�");
	getchar();
	system("cls");
	printf("�����������İѣ�û��һ�ѣ�����");
	getchar();
	system("cls");
	int k = rand() % 1000;
	printf("�յ�M27������������%d", k);
	gongji += k;
	getchar();
	system("cls");
	printf("�㣺�쿴��ǰ������ʲô��������");
	getchar();
	system("cls");
	printf("��``&&&`^FD");
	getchar();
	system("cls");
	printf("�����������ս��...");
	getchar();
	system("cls");
	printf("��ʬ��������Ž�ʬ\n\n");
	printf("Ѫ����5000 ��������50�����ң� ��Ч�������˺����������˺�	�Ѷȣ��ߣ�������Ѫ����˵��\n");
	int shixue = 5000;
	int gongni = 50, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	int s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 30;
		else gongji -= rand() % 10;
		if (k & 1) printf("�㡢�������೤���ܼ���ʬ���𹥻�����ʬ�������˺�%d", gongji * 4);
		else if (k > 50)printf("��ʬ����������˺�");
		else {
			printf("��ʬʹ�ü��ܣ�����");
			getchar();
			system("cls");
			printf("�б����ŵ�");
			getchar();
			system("cls");
			gongji /= 2;
			printf("�㻹ʣ�๥������%d", gongji);
		}
		getchar();
		system("cls");
		if (k & 1)shixue -= gongji;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//�ṥ���� 
		if (shixue >= t * 3) printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("��ʬ�����Ա�������������������׼����������");
				getchar();
				system("cls");
			}
			else {
				printf("�䣡����������������");
				getchar();
				system("cls");
				printf("�㣺��^&&*^%^$......");
				getchar();
				system("cls");
				printf("��������ѩ��");
				getchar();
				system("cls");
				printf("�೤����ѩ��");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 40) {
					printf("�����������");
					getchar();
					system("cls");
					printf("Ҫ��...���ҵģ��ٿ�һ��");
					getchar();
					system("cls");
					printf("�����������");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("��������һ��ɨ��֮���㱻��������");
					getchar();
					system("cls");
					xue += 1000;
					printf("Ѫ���ָ�1000");
					getchar();
					system("cls");
					printf("���Ŵ򣡣���");
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("����...");
				getchar();
				system("cls");
				printf("����ǰ��ֻ���������������ѩ��...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("������");
				getchar();
				system("cls");
				printf("��������һ��ɨ��֮���㱻��������");
				getchar();
				system("cls");
				xue += 10000;
				printf("Ѫ���ָ�10000");
				break;
			}
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	if (gongji <= 100) {
		gongji = 100;
	}
	printf("�㻹ʣ�๥������%d", gongji);
	getchar();
	system("cls");
	s = rand() % 1000;
	gongji += s;
	printf("���㹥������%d", s);
	getchar();
	system("cls");
	printf("�㣺����ȥ���");
	getchar();
	system("cls");
	printf("���������Ҵ����");
	getchar();
	system("cls");
	printf("�೤�����ߵϿ�������");
	getchar();
	system("cls");
	printf("�ܼࣺ���»�������Ϯ");
	getchar();
	system("cls");
	printf("�㣺�����в����ںúõ�����������");
	getchar();
	system("cls");
	printf("���������һ��λ��������ԭ������");
	getchar();
	system("cls");
	printf("�㣺�����裬�������������µ�");
	getchar();
	system("cls");
	printf("�ܼࣺ���˲����ˣ����ǽ���ȥ��ATO������");
	getchar();
	system("cls");
	printf("�㣺...");
	getchar();
	system("cls");
	printf("�೤�����䲻��");
	getchar();
	system("cls");
	printf("���������ǵ�Ȼ��");
	getchar();
	system("cls");
	printf("��ϲ��ɵ�11�£����Ĵ�֣�Ѫ������+20");
	man += 20;
	xue = man;
	gongji += rand() % 100;
	getchar();
	system("cls");
	printf("�����ڵĹ�������%d", gongji);
	getchar();
	system("cls");
	zuo[11] = 1;
	printf("�����������...");
	getchar();
	system("cls");
	return;
}
void level_12() {
	if (zuo[11] == 0) {
		system("cls");
		printf("������ɵ�ʮһ��");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("��������ľ����ǰ����һ����Ⱦ��");
	getchar();
	system("cls");
	printf("�㣺����...��������û���˺��ҵ���˼");
	getchar();
	system("cls");
	printf("�ܼࣺ������˵ʲô���⣬�����Ҵ��߰�����");
	getchar();
	system("cls");
	printf("���������֣���������������");
	getchar();
	system("cls");
	printf("���������ˣ�������");
	getchar();
	system("cls");
	printf("�೤�����ã����Ǹ�Ⱦ�ߣ�");
	getchar();
	system("cls");
	printf("��ʬ�������Ⱦ��\n\n");
	printf("Ѫ����5000 ��������50�����ң� ��Ч���Ա��������˺� �Ѷȣ��ߣ�������Ѫ����˵��\n");
	int shixue = 5000;
	int gongni = 50, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	int s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 30;
		else gongji -= rand() % 10;
		if (k & 1) printf("�㡢�������೤���ܼ���ʬ���𹥻�����ʬ�������˺�%d", gongji * 4);
		else if (k > 50)printf("��ʬ����������˺�");
		else {
			printf("��ʬʹ�ü��ܣ�����");
			getchar();
			system("cls");
			printf("�б����ŵ�");
			getchar();
			system("cls");
			gongji = gongji - gongji / 10;
			printf("�㻹ʣ�๥������%d", gongji);
		}
		getchar();
		system("cls");
		if (k & 1)shixue -= gongji;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//�ṥ���� 
		if (shixue >= t * 3) printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("��ʬ�����Ա�������������������׼����������");
				getchar();
				system("cls");
			}
			else {
				printf("�䣡����������������");
				getchar();
				system("cls");
				printf("�㣺��^&&*^%^$......");
				getchar();
				system("cls");
				printf("��������ѩ��");
				getchar();
				system("cls");
				printf("�೤����ѩ��");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 40) {
					printf("�����������");
					getchar();
					system("cls");
					printf("Ҫ��...���ҵģ��ٿ�һ��");
					getchar();
					system("cls");
					printf("�����������");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("��������һ��ɨ��֮���㱻��������");
					getchar();
					system("cls");
					xue += 1000;
					printf("Ѫ���ָ�1000");
					getchar();
					system("cls");
					printf("���Ŵ�");
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("����...");
				getchar();
				system("cls");
				printf("����ǰ��ֻ���������������ѩ��...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("��S��");
				getchar();
				system("cls");
				printf("��������һ��ɨ��֮���㱻��������");
				getchar();
				system("cls");
				xue += 10000;
				printf("Ѫ���ָ�10000");
				getchar();
				system("cls");
				printf("���Ŵ�");
			}
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	if (gongji <= 100) {
		gongji = 100;
	}
	printf("�㻹ʣ�๥������%d", gongji);
	getchar();
	system("cls");
	printf("���......");
	getchar();
	system("cls");
	printf("�㣺������");
	getchar();
	system("cls");
	printf("������������");
	getchar();
	system("cls");
	printf("�೤��������");
	getchar();
	system("cls");
	printf("�ܼࣺ������");
	getchar();
	system("cls");
	printf("��ã�����...");
	getchar();
	system("cls");
	printf("�㣺����˭���������");
	getchar();
	system("cls");
	printf("���Ǹ���");
	getchar();
	system("cls");
	printf("�㣺�����أ���");
	getchar();
	system("cls");
	printf("���������");
	getchar();
	system("cls");
	printf("ͻȻ������棬������һֻ����");
	getchar();
	system("cls");
	printf("������������������");
	getchar();
	system("cls");
	printf("���壺�ǰ�����������");
	getchar();
	system("cls");
	printf("�೤���������ӣ��ÿɰ�");
	getchar();
	system("cls");
	printf("���壺����...��");
	getchar();
	system("cls");
	printf("�㣺̫�ɰ��ˣ��б��ȵ�");
	getchar();
	system("cls");
	printf("���壺����ҿ��Ժ�����һ������");
	getchar();
	system("cls");
	printf("�ܼࣺ��Ȼ������");
	getchar();
	system("cls");
	printf("���������Ǻܳ������");
	getchar();
	system("cls");
	printf("�೤������ôϲ������");
	getchar();
	system("cls");
	printf("�ܼࣺ��ѩ�����ǲ��ǳԴ���");
	getchar();
	system("cls");
	printf("�㣺...");
	getchar();
	system("cls");
	printf("�೤�����������������߰�");
	getchar();
	system("cls");
	printf("�㣺ȥ�ģ�");
	getchar();
	system("cls");
	printf("����������...ȥ��...�����㿴��...��ǰ��...");
	getchar();
	system("cls");
	printf("�㣺����������������������������");
	getchar();
	system("cls");
	printf("��ϲ��ɵ�12�£����壬Ѫ������+30");
	man += 30;
	xue = man;
	getchar();
	zuo[12] = 1;
	system("cls");
	printf("�����������...");
	getchar();
	system("cls");
	return;
}
void level_13() {
	if (zuo[12] == 0) {
		system("cls");
		printf("������ɵ�ʮ����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("��������죬��ҿ��ɢ������");
	getchar();
	system("cls");
	printf("�ܼࣺС����һ���������𰡰���������");
	getchar();
	system("cls");
	printf("�㣺���Ǹ���ô��������");
	getchar();
	system("cls");
	printf("�೤���������ˣ��ౣ�ذ�");
	getchar();
	system("cls");
	printf("���������ʼս��...");
	getchar();
	system("cls");
	getchar();
	system("cls");
	printf("��ʬ�����δ֪��ʬ\n\n");
	printf("Ѫ����100000 ��������2000�����ң� ��Ч��ʵʱ�Ա����������˺����Լ�����	�Ѷȣ��ߣ�������Ѫ����˵��\n");
	int shixue = 100000;
	int gongni = 2000, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	int s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 30;
		else gongji -= rand() % 10;
		if (k & 1) printf("�㡢�������೤���ܼ���ʬ���𹥻�����ʬ�������˺�%d", gongji * 4);
		else printf("��ʬ����������˺�");
		getchar();
		system("cls");
		if (k & 1) shixue -= gongji;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//�ṥ���� 
		if (shixue >= t * 3) {
			x = rand() % 10;
			if (x < 20) printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
			else if (x < 50) printf("��ʬ����Ͷ�Ż��浯�����Ѫ������%d", gongni * 3);
			else if (x < 70) printf("��ʬ�����Ƿ��亮�⣬���Ѫ������%d", gongni * 4);
			else if (x < 80) printf("��ʬʹ�ü��ܣ������½�ʬѪ������%d", x);
			else if (x < 90) printf("��ʬ����ʹ���������Ѫ������%d", gongni * 5);
			else printf("��ʬ����ʹ�ý����꣬���Ѫ������%d", gongni * 7);
			if (x < 20) xue -= gongni;
			else if (x < 50) xue -= gongni * 3;
			else if (x < 70) xue -= gongni * 4;
			else if (x < 80) shixue += x;
			else if (x < 90) xue -= gongni * 5;
			else xue -= gongni * 7;
		}
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("��ʬ�����Ա�������������������׼����������");
				getchar();
				system("cls");
			}
			else {
				printf("�䣡����������������");
				getchar();
				system("cls");
				printf("�㣺��^&&*^%^$......");
				getchar();
				system("cls");
				printf("��������ѩ��");
				getchar();
				system("cls");
				printf("�೤����ѩ��");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 70) {
					printf("�����������");
					getchar();
					system("cls");
					printf("Ҫ��...���ҵģ��ٿ�һ��");
					getchar();
					system("cls");
					printf("�����������");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("��������һ��ɨ��֮���㱻��������");
					getchar();
					system("cls");
					xue += 1000;
					printf("Ѫ���ָ�1000");
					break;
				}
			}
		}
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("����...");
				getchar();
				system("cls");
				printf("����ǰ��ֻ���������������ѩ��...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("��S��");
				getchar();
				system("cls");
				printf("��������һ��ɨ��֮���㱻��������");
				getchar();
				system("cls");
				xue += 10000;
				printf("Ѫ���ָ�10000");
				break;
			}
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("�������Ҳ���ʲô����");
	getchar();
	system("cls");
	printf("�ܼࣺ�������");
	getchar();
	system("cls");
	printf("���壺�ꡭ��");
	getchar();
	system("cls");
	printf("���壨���ᣩ�����ܸо��й���ֵ�ζ��");
	getchar();
	system("cls");
	printf("�ܼࣺ�㿴����ʲô����");
	getchar();
	system("cls");
	printf("�㣺���Ǹ�������");
	getchar();
	system("cls");
	printf("�������쿴���ܲ�������");
	getchar();
	system("cls");
	printf("��~~~~~~~~~~~~~~~~");
	getchar();
	system("cls");
	printf("�⼸��...����...����...");
	getchar();
	system("cls");
	printf("�ر�...����...֧Ԯ...");
	getchar();
	system("cls");
	printf("����...");
	getchar();
	system("cls");
	printf("��~~~~~~~~~~~~~~~~");
	getchar();
	system("cls");
	printf("�������ѵ�...����Ҫ�����뿪�׶�����");
	getchar();
	system("cls");
	printf("�ܼࣺ��������ֻ��������");
	getchar();
	system("cls");
	printf("���ǣ��������˶����׶����������װ����׶������ǣ���~��~��~��~...��");
	getchar();
	system("cls");
	zuo[13] = 1;
	printf("��ϲ��ɵ�13�£����滹�ǻ���");
	getchar();
	system("cls");
	printf("������+40");
	gongji += 40;
	getchar();
	system("cls");
	printf("�����������...");
	getchar();
	system("cls");
	return;
}
void level_14() {
	if (zuo[13] == 0) {
		system("cls");
		printf("������ɵ�ʮ����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("����һ·����ȥ�������˼����ĸ���");
	getchar();
	system("cls");
	printf("��������������");
	getchar();
	system("cls");
	printf("�೤���ص�˵������");
	getchar();
	system("cls");
	printf("�ܼࣺ���ǵļ�����������������ˣ�����");
	getchar();
	system("cls");
	printf("���壺���������Ѿ�������");
	getchar();
	system("cls");
	printf("�㣺�Ǹ�����ź���˭������");
	getchar();
	system("cls");
	printf("���壺��֪��");
	getchar();
	system("cls");
	printf("���壺�㿴����ʲô");
	getchar();
	system("cls");
	printf("�ܼࣺ���Ǵ�ѩ���ֻ�");
	getchar();
	system("cls");
	printf("�ܼࣺ��ô���е绰");
	getchar();
	system("cls");
	printf("�㣺Ŷ���������߿���");
	getchar();
	system("cls");
	printf("�㣺ι��");
	getchar();
	system("cls");
	printf("�绰����...����");
	getchar();
	system("cls");
	printf("�㣺�������ﰡ��");
	getchar();
	system("cls");
	printf("�绰�������׶�...");
	getchar();
	system("cls");
	printf("�㣺�������Ǹմ�������");
	getchar();
	system("cls");
	printf("�绰�������������Ұ�...");
	getchar();
	system("cls");
	printf("����������������");
	getchar();
	system("cls");
	printf("�㣺�ѵ���Ҫ��ȥ����");
	getchar();
	system("cls");
	printf("���壺���뻹�ǻ�ȥ��");
	getchar();
	system("cls");
	printf("������ǰ���Ǹ�����������ȥ������ʲô���ܿ�");
	getchar();
	system("cls");
	printf("�㣨Ц����������͵�԰�");
	getchar();
	system("cls");
	printf("�ܼࣺ������");
	getchar();
	system("cls");
	printf("���ǣ������߽��˷�������");
	getchar();
	system("cls");
	printf("��������㲻�����㣬ǰ�������һֻ��Ⱦ��"); getchar();
	system("cls");
	printf("��ʬ�������Ⱦ��\n\n");
	printf("Ѫ����50000 ��������150�����ң� ��Ч���Ա��������˺� �Ѷȣ��ߣ�������Ѫ����˵��\n");
	int shixue = 50000;
	int gongni = 150, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	int s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 30;
		else gongji -= rand() % 10;
		if (k & 1) printf("�㡢�������೤���ܼ���ʬ���𹥻�����ʬ�������˺�%d", gongji * 4);
		else if (k > 50)printf("��ʬ����������˺�");
		else {
			printf("��ʬʹ�ü��ܣ�����");
			getchar();
			system("cls");
			printf("�б����ŵ�");
			getchar();
			system("cls");
			gongji = gongji / 2;
			printf("�㻹ʣ�๥������%d", gongji);
		}
		getchar();
		system("cls");
		if (k & 1)shixue -= gongji;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//�ṥ���� 
		if (shixue >= t * 3) printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("��ʬ�����Ա�������������������׼����������");
				getchar();
				system("cls");
			}
			else {
				printf("�䣡����������������");
				getchar();
				system("cls");
				printf("�㣺��^&&*^%^$......");
				getchar();
				system("cls");
				printf("��������ѩ��");
				getchar();
				system("cls");
				printf("�೤����ѩ��");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 40) {
					printf("�����������");
					getchar();
					system("cls");
					printf("Ҫ��...���ҵģ��ٿ�һ��");
					getchar();
					system("cls");
					printf("�����������");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("��������һ��ɨ��֮���㱻��������");
					getchar();
					system("cls");
					xue += 1000;
					printf("Ѫ���ָ�1000");
					getchar();
					system("cls");
					printf("���Ŵ�");
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("����...");
				getchar();
				system("cls");
				printf("����ǰ��ֻ���������������ѩ��...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("��S��");
				getchar();
				system("cls");
				printf("��������һ��ɨ��֮���㱻��������");
				getchar();
				system("cls");
				xue += 10000;
				printf("Ѫ���ָ�10000");
				getchar();
				system("cls");
				printf("���Ŵ�");
			}
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	if (gongji <= 1000) printf("�������Ҳ����ѵ�UZI��M27��������");
	else printf("�㣺��������ǹ����");
	getchar();
	system("cls");
	printf("�೤��...");
	getchar();
	system("cls");
	printf("�ܼࣺ�������������㿴����ʲô");
	getchar();
	system("cls");
	printf("���壺�����ǣ�������");
	getchar();
	system("cls");
	printf("�㣺��Ŷ�����Ͻ�����");
	getchar();
	system("cls");
	printf("����һ����3h���������׶�");
	getchar();
	system("cls");
	printf("���ǣ����Ƿ����׶��Ѿ�����˽�ʬ�ľۼ���");
	getchar();
	system("cls");
	printf("���еĽ�ʬ�����ţ�������");
	getchar();
	system("cls");
	printf("ʮ�ֵĿ���");
	getchar();
	system("cls");
	printf("�㣺���ܰ�����");
	getchar();
	system("cls");
	printf("���������У���");
	getchar();
	system("cls");
	printf("�������Ƕ�����������棬����������ɨ�佩ʬ");
	getchar();
	system("cls");
	printf("��ʬ������ά���˺ܾúܾ�");
	getchar();
	system("cls");
	printf("ֱ��...");
	getchar();
	system("cls");
	printf("��������ѽû�ӵ��ˣ�");
	getchar();
	system("cls");
	printf("�㣺�ҵ�ʱ��˵�Ͻ��߰ɣ�");
	getchar();
	system("cls");
	int sf = rand() % 1000;
	printf("����������%d", sf);
	gongji -= sf;
	if (gongji < 100) gongji = 100;
	printf("�ܼࣺ��ʱ���ӻ�����");
	getchar();
	system("cls");
	printf("�������㻹�ǵ�����֮ǰ˵��ʲô����...�����׶�����");
	getchar();
	system("cls");
	printf("����������һ��ɱ��...");
	getchar();
	system("cls");
	printf("����һ�������ȥ");
	getchar();
	system("cls");
	for (int i = 1; i <= rand() % 100; i++) {
		printf("�㻹ʣ��Ѫ����%d\n\n", xue);
		printf("��1������2����");
		scanf("%d", &x);
		if (x == 1 && xue == 11) {
			break;
		}
		if (x == 2) {
			break;
		}
		xue -= rand() % 1000;
		if (xue <= 11) xue = 11;
		getchar();
		system("cls");
	}
	if (xue == 11) {
		printf("�����ٻ���Ϯ���Ե������237426319305734626612374342364632���˺�");
		getchar();
		system("cls");
		printf("�����ٴ��ٻ���Ϯ���������18348213947522490532485���˺�");
		getchar();
		system("cls");
		printf("�������һ���ٻ���Ϯ���������132490234757347536465626346124���˺�");
		getchar();
		system("cls");
		printf("��ʬ����Զȥ������Ҳ����ƣ��");
		getchar();
		system("cls");
		printf("�������쿴��������Vector����");
		getchar();
		system("cls");
		printf("����vector���˺�+283");
		getchar();
		system("cls");
		gongji += 283;
	}
	getchar();
	system("cls");
	printf("�ܼࣺ��㣬��Ҳ���Ѫ");
	getchar();
	system("cls");
	xue += 2000;
	printf("Ѫ = %d", xue);
	getchar();
	system("cls");
	printf("�ܼࣺ���ǿ����׶����ز�ס�ˣ���ô�찡����");
	getchar();
	system("cls");
	printf("����������ֻ����Ѱ��·��...");
	getchar();
	system("cls");
	printf("��������ȥ������");
	getchar();
	system("cls");
	printf("�㡢�ܼࡢ�೤�����壺����");
	getchar();
	system("cls");
	int k = rand() % 100;
	printf("��ϲ��ɵ�14�£��ٱ��׶���������+%d", k);
	gongji += k;
	getchar();
	system("cls");
	printf("�����������...");
	zuo[14] = 1;
	getchar();
	system("cls");
	return;
}
void level_15() {
	if (zuo[14] == 0) {
		system("cls");
		printf("������ɵ�ʮ����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("����һ·���ſ��������˼���");
	getchar();
	system("cls");
	printf("����֮ǰһ������");
	getchar();
	system("cls");
	printf("Ȼ������ͻȻ�������쿴��������ʲô");
	getchar();
	system("cls");
	printf("�㣺�Ҳݣ�����RPG���Ͳ��");
	getchar();
	system("cls");
	printf("�ܼࣺ�м���������Ц��");
	getchar();
	system("cls");
	printf("�㣺ֻ��һ�������������ʣ�ͬ��������");
	getchar();
	system("cls");
	printf("�೤���ܼ࣬����ɶ�أ�");
	getchar();
	system("cls");
	printf("�ܼࣺ��Ҳ��Ҫ��...");
	getchar();
	system("cls");
	printf("����͵͵��Ц��");
	getchar();
	system("cls");
	printf("�㣺������Цʲô��");
	getchar();
	system("cls");
	printf("������������������ûЦ");
	getchar();
	system("cls");
	printf("������ղŻ�ͷ����ʱ�򣬷�����...");
	getchar();
	system("cls");
	printf("ʬ��...");
	getchar();
	system("cls");
	printf("���壺�����ϣ�ɱ����������ѩ���ܼࡢ�೤��");
	getchar();
	system("cls");
	printf("��������⣬�����ǻ���");
	getchar();
	system("cls");
	printf("�㣺����һ��Ͳ����");
	getchar();
	system("cls");
	printf("���������Ѿ�����������RPG��");
	getchar();
	system("cls");
	printf("�೤����RPG����ɥʬ��");
	getchar();
	system("cls");
	printf("Ȼ��û�ӵ���");
	getchar();
	system("cls");
	printf("����...���һֻɥʬ...�Ϳ����ˣ�");
	getchar();
	system("cls");
	printf("�����������ս��...");
	getchar();
	system("cls");
	getchar();
	system("cls");
	printf("��ʬ�������Ⱦ��\n\n");
	printf("Ѫ����50000 ��������150�����ң� ��Ч���Ա��������˺� �Ѷȣ��ߣ�������Ѫ����˵��\n");
	int shixue = 50000;
	int gongni = 150, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	int s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 30;
		else gongji -= rand() % 10;
		if (k & 1) printf("�㡢�������೤���ܼ���ʬ���𹥻�����ʬ�������˺�%d", gongji * 10);
		else if (k > 50)printf("��ʬ����������˺�");
		else {
			printf("��ʬʹ�ü��ܣ�����");
			getchar();
			system("cls");
			printf("�б����ŵ�");
			getchar();
			system("cls");
			gongji = gongji / 2;
			printf("�㻹ʣ�๥������%d", gongji);
		}
		getchar();
		system("cls");
		if (k & 1)shixue -= gongji;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//�ṥ���� 
		if (shixue >= t * 3) printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("��ʬ�����Ա�������������������׼����������");
				getchar();
				system("cls");
			}
			else {
				printf("�䣡����������������");
				getchar();
				system("cls");
				printf("�㣺��^&&*^%^$......");
				getchar();
				system("cls");
				printf("��������ѩ��");
				getchar();
				system("cls");
				printf("�೤����ѩ��");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 40) {
					printf("�����������");
					getchar();
					system("cls");
					printf("Ҫ��...���ҵģ��ٿ�һ��");
					getchar();
					system("cls");
					printf("�����������");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("��������һ��ɨ��֮���㱻��������");
					getchar();
					system("cls");
					xue += 1000;
					printf("Ѫ���ָ�1000");
					getchar();
					system("cls");
					printf("���Ŵ�");
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("����...");
				getchar();
				system("cls");
				printf("����ǰ��ֻ���������������ѩ��...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("��S��");
				getchar();
				system("cls");
				printf("��������һ��ɨ��֮���㱻��������");
				getchar();
				system("cls");
				xue += 10000;
				printf("Ѫ���ָ�10000");
				getchar();
				system("cls");
				printf("���Ŵ�");
			}
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("�ܼࣺ���أ����徹Ȼ�ǻ���");
	getchar();
	system("cls");
	printf("�㣺���ݰ��ݰ��ݼݼ�");
	getchar();
	system("cls");
	printf("��������");
	getchar();
	system("cls");
	printf("�ܼࣺ��");
	getchar();
	system("cls");
	printf("�೤����");
	getchar();
	system("cls");
	printf("�㣺�ݰ��ݰ���Ӵ��");
	getchar();
	system("cls");
	printf("����������ˣ�");
	getchar();
	system("cls");
	printf("�㣺�쿴�ҷ�����ʲô��");
	getchar();
	system("cls");
	printf("���������õ�ʲô��");
	getchar();
	system("cls");
	printf("�೤��USB��");
	getchar();
	system("cls");
	printf("�㣺������ģ����you SB��");
	getchar();
	system("cls");
	printf("�೤����ѽ��˵�Ĳ���you SB����USB��");
	getchar();
	system("cls");
	printf("�㣺ʲôyou SB��������USB��");
	getchar();
	system("cls");
	printf("�೤��...");
	getchar();
	system("cls");
	printf("�ܼࣺ��嵽����ֻ�������");
	getchar();
	system("cls");
	printf("�㣺�ֻ��ܲ�USB����");
	getchar();
	system("cls");
	printf("��������˵���ԾͿ���");
	getchar();
	system("cls");
	printf("�����������ˣ���˵�������ԣ�");
	getchar();
	system("cls");
	printf("�ܼࣺ���е���");
	getchar();
	system("cls");
	printf("�೤�����������������������");
	getchar();
	system("cls");
	printf("��������������");
	getchar();
	system("cls");
	printf("�㣺���ǵ���һ���ж���");
	getchar();
	system("cls");
	printf("����������Ѱ�ҽ�ʬ");
	getchar();
	system("cls");
	gongji += rand() % 1000;
	getchar();
	system("cls");
	printf("�������Ȼ��ҿ��µ�ͼ");
	getchar();
	system("cls");
	printf("����һ��...");
	getchar();
	system("cls");
	printf("�ܼࣺ������");
	getchar();
	system("cls");
	printf("�ܼࣺ�ղ������ƽԭ..ԭ������ԭ���ļ�������");
	getchar();
	system("cls");
	printf("�����������Ѿ�̮���ˣ�");
	getchar();
	system("cls");
	printf("�㣺Ŷ��USB�����ˣ�");
	getchar();
	system("cls");
	printf("USB������������������Ա");
	getchar();
	system("cls");
	printf("USB��������ת��");
	getchar();
	system("cls");
	printf("USB����������");
	getchar();
	system("cls");
	printf("���������Ǹմ��׶�����");
	getchar();
	system("cls");
	printf("�������׶�̮��...");
	getchar();
	system("cls");
	printf("�ܼࣺ���ڼ�����̮��");
	getchar();
	system("cls");
	printf("�㣺���ǵ��׸�ȥ�ģ���������");
	getchar();
	system("cls");
	int k = rand() % 100;
	printf("��ϲ��ɵ�15�£�Ѫ������+%d", k);
	getchar();
	system("cls");
	printf("�����������...");
	getchar();
	system("cls");
	zuo[15] = 1;
	return;
}
void level_16() {
	if (zuo[15] == 0) {
		system("cls");
		printf("������ɵ�ʮ����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("�㣺�š�����ͼ������˼������H�еĵط��ܲ���...");
	getchar();
	system("cls");
	printf("����������ûȥ����������ﶼ�����");
	getchar();
	system("cls");
	printf("�㣺ûȥ����������ȥ");
	getchar();
	system("cls");
	printf("������˵��Ҳ��");
	getchar();
	system("cls");
	printf("�㣺��ȻH�е��������Ǹı䲻�ˣ����������ܸı�");
	getchar();
	system("cls");
	printf("�������ܼ໹�а೤����ֵĿ�����");
	getchar();
	system("cls");
	printf("�㣺��tm���Ҹ�ɶ");
	getchar();
	system("cls");
	printf("�೤��������");
	getchar();
	system("cls");
	printf("�㣺����");
	getchar();
	system("cls");
	printf("�㣺�����ǣ���˵���ˣ����ǿ���ȥһ̽������������");
	getchar();
	system("cls");
	printf("�����Ͱ೤���������˶�Ĵָ");
	getchar();
	system("cls");
	printf("�㣺��...��ʲô");
	getchar();
	system("cls");
	printf("���������ǿ��߰ɣ�");
	getchar();
	system("cls");
	printf("�ܼࣺ��ѽ");
	getchar();
	system("cls");
	printf("�㣺���Ǹղŵĳ��أ�");
	getchar();
	system("cls");
	printf("�������G�٣��԰������ǳ���");
	getchar();
	system("cls");
	printf("�㣺������");
	getchar();
	system("cls");
	printf("�㣺what's that��������");
	getchar();
	system("cls");
	printf("�ܼࣺ������ôð���ˣ�����");
	getchar();
	system("cls");
	printf("���������ȥ����");
	getchar();
	system("cls");
	printf("�������˹�ȥ");
	getchar();
	system("cls");
	printf("�㣺�Ҳݣ���Ͷ");
	getchar();
	system("cls");
	printf("����������������д����ʲô");
	getchar();
	system("cls");
	printf("�����Ҵ����õ����ʣ��ѱ���ʱ֮�衱");
	getchar();
	system("cls");
	printf("������������������̫����");
	getchar();
	system("cls");
	printf("�㣺�򿪿�����");
	getchar();
	system("cls");
	printf("���Ǵ��˿�Ͷ");
	getchar();
	system("cls");
	int k = rand() % 700;
	printf("|��ķѷ���ǹ * 3 ������ + %d", k);
	gongji += k;
	getchar();
	system("cls");
	printf("|UMP45 * 4 ������ + %d", k * 2);
	gongji += k * 2;
	getchar();
	system("cls");
	printf("|M27�ѻ�ǹ * 2 ������ + %d", k * 3);
	getchar();
	system("cls");
	gongji += k * 3;
	printf("|���� * 1 ������ + %d", k * 4);
	getchar();
	system("cls");
	gongji += k * 4;
	printf("|ҽ���� * 5 Ѫ��������%d", xue * 3 / 2);
	xue = xue * 3 / 2;
	getchar();
	system("cls");
	printf("|���� * 3 Ѫ��������%d", xue * 2);
	xue = xue * 2;
	getchar();
	system("cls");
	printf("�������������������ʲô");
	getchar();
	system("cls");
	printf("�೤��һҹ��ƨ��");
	getchar();
	system("cls");
	printf("��������tmʲôһҹ��ƨ��");
	getchar();
	system("cls");
	printf("�㣺������һҹ������");
	getchar();
	system("cls");
	printf("�������ԣ�");
	getchar();
	system("cls");
	printf("�㣺�����ǿ쿴����Ͷ�ϻ�д��ʲô");
	getchar();
	system("cls");
	printf("-------------------------------------------------------\n");
	printf("|          ���װ����Ҵ�����                           |\n");
	printf("|    �ܱ�Ǹ��������������������H�������ǰ�����ݣ���|\n");
	printf("|������Ա���ڶ�������������������Щ���ʶ�������       |\n");
	printf("|    ����������������Σ��Ҳû�н�����Ӷ������Ľ�ʬͻ |\n");
	printf("|�˲��������Ѿ���������ǵĻ����ˣ�                 |\n");
	printf("|    ����Ŀǰ����ʽ��������ʬ��������ɲ���ʲô��в   |\n");
	printf("|    �����뿴��������Ҵ��ߣ��������Լ���             |\n");
	printf("-------------------------------------------------------\n");
	getchar();
	system("cls");
	printf("�㣺��Ҳ������");
	getchar();
	system("cls");
	printf("������...");
	getchar();
	system("cls");
	printf("�೤��...");
	getchar();
	system("cls");
	printf("�ܼࣺ...");
	getchar();
	system("cls");
	printf("�㣺��");
	getchar();
	system("cls");
	man = xue;
	printf("�������������ڸ���ô��");
	getchar();
	system("cls");
	printf("�೤���ʵú�");
	getchar();
	system("cls");
	printf("�㣺Ҫ��֪������ˣ����ǲ�������");
	getchar();
	system("cls");
	printf("�㣺�����ھ��ر���̸��������֪����...�����ܶ������ڵ�������");
	getchar();
	system("cls");
	printf("�ܼࣺ�ܶ��ܶ��������һֻ����");
	getchar();
	system("cls");
	printf("�㣺��");
	getchar();
	system("cls");
	printf("�������Ұ�����ܸ����󣨻�����");
	getchar();
	system("cls");
	printf("��һ�����˾���˭��");
	getchar();
	system("cls");
	printf("�������೤��");
	getchar();
	system("cls");
	printf("�೤��&DS*&$W#..@$*$%&$...8&$%@.&$@@#(4)^#*@");
	getchar();
	system("cls");
	printf("������(����)");
	getchar();
	system("cls");
	printf("�㣺...");
	getchar();
	system("cls");
	printf("�㣺��������Ҫȥ������������");
	getchar();
	system("cls");
	printf("��ϲ��ɵ�16�£�H�����ݣ�Ѫ������+%d", k * 3);
	xue += k * 3;
	man = xue;
	getchar();
	system("cls");
	printf("�����������...");
	getchar();
	system("cls");
	zuo[16] = 1;
	return;
}
void level_17() {
	if (zuo[16] == 0) {
		system("cls");
		printf("������ɵ�ʮ����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("�������ǵ�");
	getchar();
	system("cls");
	printf("�ܼࣺ����Σ����");
	getchar();
	system("cls");
	printf("����������˵������Щ��ʬ");
	getchar();
	system("cls");
	printf("�㣺���ԣ�");
	getchar();
	system("cls");
	printf("��ʬ�����������˹�����...");
	getchar();
	system("cls");
	printf("�����������ս��...");
	getchar();
	system("cls");
	printf("��ʬ�������Ⱦ��\n\n");
	printf("Ѫ����300000 ��������200�����ң� ��Ч���Ա��������˺� �Ѷȣ��ߣ�������Ѫ����˵��\n");
	int shixue = 300000;
	int gongni = 200, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	int s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 30;
		else gongji -= rand() % 10;
		if (k & 1) printf("�㡢�������೤���ܼ���ʬ���𹥻�����ʬ�������˺�%d", gongji * 6);
		else if (k > 50)printf("��ʬ����������˺�");
		else {
			printf("��ʬʹ�ü��ܣ�����");
			getchar();
			system("cls");
			printf("�б����ŵ�");
			getchar();
			system("cls");
			gongji = gongji / 2 + gongji / 3;
			printf("�㻹ʣ�๥������%d", gongji);
		}
		getchar();
		system("cls");
		if (k & 1)shixue -= gongji;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//�ṥ���� 
		if (shixue >= t * 3) printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("��ʬ�����Ա�������������������׼����������");
				getchar();
				system("cls");
			}
			else {
				printf("�䣡����������������");
				getchar();
				system("cls");
				printf("�㣺��^&&*^%^$......");
				getchar();
				system("cls");
				printf("��������ѩ��");
				getchar();
				system("cls");
				printf("�೤����ѩ��");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 60) {
					printf("�����������");
					getchar();
					system("cls");
					printf("Ҫ��...���ҵģ��ٿ�һ��");
					getchar();
					system("cls");
					printf("�����������");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("��������һ��ɨ��֮���㱻��������");
					getchar();
					system("cls");
					xue += 1000;
					printf("Ѫ���ָ�1000");
					getchar();
					system("cls");
					printf("���Ŵ�");
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("����...");
				getchar();
				system("cls");
				printf("����ǰ��ֻ���������������ѩ��...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("��S��");
				getchar();
				system("cls");
				printf("��������һ��ɨ��֮���㱻��������");
				getchar();
				system("cls");
				xue += rand() % 10000;
				printf("Ѫ���ָ�%d", xue);
				getchar();
				system("cls");
				printf("���Ŵ�");
			}
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("�������������׶��Ľ�ʬ������");
	getchar();
	system("cls");
	printf("�ܼࣺ�쿪���߰�������");
	getchar();
	system("cls");
	printf("����һ·�������������������ĸ���");
	getchar();
	system("cls");
	printf("ֻ��������ǰ������һ����¥");
	getchar();
	system("cls");
	printf("��ɫ�����Ѿ��˵Ĳ�����");
	getchar();
	system("cls");
	printf("¥���и�Բ�ε��״���");
	getchar();
	system("cls");
	printf("¥���������ģ�ʮ�ֲֿ�");
	getchar();
	system("cls");
	printf("��ʱ�����ǿ���������һ����Ӱ����");
	getchar();
	system("cls");
	printf("�����������߽�����������");
	getchar();
	system("cls");
	printf("ֻ������������һƬ...");
	getchar();
	system("cls");
	printf("�����ֳ�UMP��һ·ɨ���Ž�ȥ��");
	getchar();
	system("cls");
	printf("��ʬ�Ǹ����ֵ���סUMP��ɨ�䣬���Է׷׵���");
	getchar();
	system("cls");
	printf("����һ·��ȥ��ʱ��Ҳ�����ص�ʬ��...");
	getchar();
	system("cls");
	printf("�೤����˵�����ǲ��Ƕ������ʹ��������˰���");
	getchar();
	system("cls");
	printf("�������㿴��������������");
	getchar();
	system("cls");
	printf("�㡢�ܼࡢ�೤��������������");
	getchar();
	system("cls");
	printf("��������������˼");
	getchar();
	system("cls");
	printf("�㣺...");
	getchar();
	system("cls");
	printf("�೤��...");
	getchar();
	system("cls");
	printf("�ܼࣺ...");
	getchar();
	system("cls");
	printf("��������������ȥ����");
	getchar();
	system("cls");
	printf("�㣺ǰ���Ǹ����������...");
	getchar();
	system("cls");
	printf("��ʬ������...");
	getchar();
	system("cls");
	printf("��ʬ�����ճҺɥʬ\n\n");
	printf("Ѫ����500000 ��������200�����ң� ��Ч���ס���� �Ѷȣ��ߣ�������Ѫ����˵��\n");
	shixue = 500000;
	gongni = 200, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 30;
		else gongji -= rand() % 10;
		if (k & 1) printf("�㡢�������೤���ܼ���ʬ���𹥻�����ʬ�������˺�%d", gongji * 6);
		else if (k > 50)printf("��ʬ����������˺�");
		else {
			printf("��ʬʹ�ü��ܣ����");
			getchar();
			system("cls");
			printf("�ס�����ǹ");
			int sq = rand() % 600;
			getchar();
			system("cls");
			printf("��Ĺ���������%d", sq);
			getchar();
			system("cls");
			printf("��ʬ�Ĺ���������%d", sq);
			gongji -= sq;
			gongni += sq;
			getchar();
			system("cls");
			printf("�㻹ʣ�๥������%d", gongji);
			getchar();
			system("cls");
			printf("ɥʬ�Ĺ������ǣ�%d", gongni);
		}
		getchar();
		system("cls");
		if (k & 1)shixue -= gongji;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//�ṥ���� 
		if (shixue >= t * 3) printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("��ʬ�����Ա�������������������׼����������");
				getchar();
				system("cls");
			}
			else {
				printf("�䣡����������������");
				getchar();
				system("cls");
				printf("�㣺��^&&*^%^$......");
				getchar();
				system("cls");
				printf("��������ѩ��");
				getchar();
				system("cls");
				printf("�೤����ѩ��");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 80) {
					printf("�����������");
					getchar();
					system("cls");
					printf("Ҫ��...���ҵģ��ٿ�һ��");
					getchar();
					system("cls");
					printf("�����������");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("��������һ��ɨ��֮���㱻��������");
					getchar();
					system("cls");
					xue += 1000;
					printf("Ѫ���ָ�1000");
					getchar();
					system("cls");
					printf("���Ŵ�");
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("����...");
				getchar();
				system("cls");
				printf("����ǰ��ֻ���������������ѩ��...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("��S��");
				getchar();
				system("cls");
				printf("��������һ��ɨ��֮���㱻��������");
				getchar();
				system("cls");
				xue += rand() % 10000;
				printf("Ѫ���ָ�%d", xue);
				getchar();
				system("cls");
				printf("���Ŵ�");
			}
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("�㣺���ڵĽ�ʬԽ��Խ������");
	getchar();
	system("cls");
	printf("��������ȷ��");
	getchar();
	system("cls");
	printf("�ܼࣺ�죬��ȥ����");
	getchar();
	system("cls");
	printf("�������õ�");
	getchar();
	system("cls");
	printf("�����Ǻá�");
	getchar();
	system("cls");
	printf("�ܼࣺ�G��������");
	getchar();
	system("cls");
	printf("�Ǹ���˵���������Ҵ�����");
	getchar();
	system("cls");
	printf("�㣺�����ǵ�");
	getchar();
	system("cls");
	printf("�Ǹ��˹�����Ц����������������ô�������Ҵ�����");
	getchar();
	system("cls");
	printf("˵�����������ǹ");
	getchar();
	system("cls");
	printf("�������\n-----------------------\n1.��RPG��������\n");
	printf("2.��UMP����ɨ��\n");
	printf("3.��ͼȰȰ��\n\n\n");
	scanf("%d", &x);
	if (x == 1) {
		system("cls");
		printf("�������Լ�Ҳ��������");
		getchar();
		system("cls");
		printf("�����������...");
		getchar();
		system("cls");
		return;
	}
	else if (x == 3) {
		system("cls");
		printf("��֪���˲�������Ļ���������ɨ������");
		getchar();
		system("cls");
		printf("�����������...");
		getchar();
		system("cls");
		return;
	}
	getchar();
	system("cls");
	printf("���������õ����Ǹ��˵�����");
	getchar();
	system("cls");
	int k = rand() % 100;
	printf("|���MK-14���⵼�� * 1	���� + %d", k * k * k);
	getchar();
	system("cls");
	printf("|���RS-23׷�ٵ��� * 1	���� + %d", k * k * k * k);
	getchar();
	system("cls");
	printf("|���ҽ���� * 1	Ѫ�� + %d", k * 5);
	xue += k * 5;
	getchar();
	system("cls");
	gongji += k * k * k;
	gongji += k * k * k * k;
	printf("�������÷ʰ�");
	getchar();
	system("cls");
	printf("�㣺������ʲô���Ⱑ");
	getchar();
	system("cls");
	printf("�ܼࣺ�ǰ��ǰ�");
	getchar();
	system("cls");
	printf("��ϲ��ɵ�17�£�����������Ѫ������ + %d", k * 3);
	xue += k * 3;
	man = xue;
	getchar();
	system("cls");
	zuo[17] = 1;
	printf("�����������...");
	getchar();
	system("cls");
	return;
}
void level_18() {
	if (zuo[17] == 0) {
		system("cls");
		printf("������ɵ�ʮ����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("�㣺���ǽ�����ȥ����");
	getchar();
	system("cls");
	printf("�������ú�");
	getchar();
	system("cls");
	printf("�ܼࣺ���������������������");
	getchar();
	system("cls");
	printf("�㣺���ǲ��������������С�������������ֺ���С���ӱ�����");
	getchar();
	system("cls");
	printf("������������С���ӡ�");
	getchar();
	system("cls");
	printf("�㣺������ҪС����...");
	getchar();
	system("cls");
	printf("���Դ��ҹ���ж�ס�\n");
	getchar();
	printf("��ƽ�������¡�");
	getchar();
	printf("\n�������ʵ���Ϧ�������̡�\n");
	getchar();
	printf("����ս����δ��Ը��ֵ����Ǯ��\n");
	getchar();
	printf("����ս����δ��Ը��ֵ����Ǯ��\n");
	getchar();
	printf("��˭Ը���ҹ�����ɽ���ޡ�\n");
	getchar();
	system("cls");
	printf("�㣺��ѽ����˭�ŵ�һ�ס������ᡷ���ĺø��˰�");
	getchar();
	system("cls");
	printf("���������������ǲ����㳪����...");
	getchar();
	system("cls");
	printf("�㣺����");
	getchar();
	system("cls");
	printf("�ܼࣺ����˵�Ķ�");
	getchar();
	system("cls");
	printf("�೤���ܼ�˵�Ķ�");
	getchar();
	system("cls");
	printf("�㣺�೤�Բ���");
	getchar();
	system("cls");
	printf("��������ѩ�Լ�����");
	getchar();
	system("cls");
	printf("�㣺(����)");
	getchar();
	system("cls");
	printf("��ʬ�����ߵϿ�~");
	getchar();
	system("cls");
	printf("�����������ս��...");
	getchar();
	system("cls");
	printf("��ʬ�����ճҺɥʬ\n\n");
	printf("Ѫ����500000 ��������200�����ң� ��Ч���ס���� �Ѷȣ��ߣ�������Ѫ����˵��\n");
	int shixue = 500000;
	int gongni = 200, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	int s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 30;
		else gongji -= rand() % 10;
		if (k & 1) printf("�㡢�������೤���ܼ���ʬ���𹥻�����ʬ�������˺�%d", gongji * 6);
		else if (k > 50)printf("��ʬ����������˺�");
		else {
			printf("��ʬʹ�ü��ܣ����");
			getchar();
			system("cls");
			printf("�ס�����ǹ");
			int sq = rand() % 600;
			getchar();
			system("cls");
			printf("��Ĺ���������%d", sq);
			getchar();
			system("cls");
			printf("��ʬ�Ĺ���������%d", sq);
			gongji -= sq;
			gongni += sq;
			getchar();
			system("cls");
			printf("�㻹ʣ�๥������%d", gongji);
			getchar();
			system("cls");
			printf("ɥʬ�Ĺ������ǣ�%d", gongni);
		}
		getchar();
		system("cls");
		if (k & 1)shixue -= gongji;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//�ṥ���� 
		if (shixue >= t * 3) printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("��ʬ�����Ա�������������������׼����������");
				getchar();
				system("cls");
			}
			else {
				printf("�䣡����������������");
				getchar();
				system("cls");
				printf("�㣺��^&&*^%^$......");
				getchar();
				system("cls");
				printf("��������ѩ��");
				getchar();
				system("cls");
				printf("�೤����ѩ��");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 40) {
					printf("�����������");
					getchar();
					system("cls");
					printf("Ҫ��...���ҵģ��ٿ�һ��");
					getchar();
					system("cls");
					printf("�����������");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("��������һ��ɨ��֮���㱻��������");
					getchar();
					system("cls");
					xue += 1000;
					printf("Ѫ���ָ�1000");
					getchar();
					system("cls");
					printf("���Ŵ�");
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("����...");
				getchar();
				system("cls");
				printf("����ǰ��ֻ���������������ѩ��...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("��S��");
				getchar();
				system("cls");
				printf("��������һ��ɨ��֮���㱻��������");
				getchar();
				system("cls");
				xue += rand() % 10000;
				printf("Ѫ���ָ�%d", xue);
				getchar();
				system("cls");
				printf("���Ŵ�");
			}
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("�㣺�Ҿ�˵ҪС�ĵ��");
	getchar();
	system("cls");
	printf("�������ţ����ϸ�¥����");
	getchar();
	system("cls");
	printf("����һ���������˸�¥���棬ֻ����һ����Ȼ���ﴣ����ǰ��");
	getchar();
	system("cls");
	printf("���Ƕ���һ������һ��ֱ����");
	getchar();
	system("cls");
	printf("�ܼࣺ�죬���ǿ���������");
	getchar();
	system("cls");
	printf("������ֱ������ȥ������ֵ�������һֱ��׷����ֱ����");
	getchar();
	system("cls");
	printf("�������Ҳ�ʲô���");
	getchar();
	system("cls");
	printf("�ܼࣺ����ʵ�����������˰�");
	getchar();
	system("cls");
	printf("ͻȻ��ֱ�����ﴫ����һ������...");
	getchar();
	system("cls");
	printf("-��ʿ��");
	getchar();
	system("cls");
	printf("-�����ҵ������յĸ�Դ");
	getchar();
	system("cls");
	printf("-���Ǽ�������������");
	getchar();
	system("cls");
	printf("-ȥ������԰");
	getchar();
	system("cls");
	printf("��������һ����ϲ����");
	getchar();
	system("cls");
	printf("�㣺�������ǿ����ڿ��к佩ʬ����");
	getchar();
	system("cls");
	int st = rand() % 1000;
	printf("��ϲ��ɵ�18�£����ص�ֱ������������ + %d", st);
	gongji += st;
	getchar();
	system("cls");
	printf("�����������...");
	getchar();
	system("cls");
	zuo[18] = 1;
	return;
}
void level_19() {
	if (zuo[18] == 0) {
		system("cls");
		printf("������ɵ�ʮ����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("���Ǽ�������������ֱ����");
	getchar();
	system("cls");
	printf("���������ţ��㡢�ܼࡢ�೤ÿ���ֳ�AT-X���⵼��");
	getchar();
	system("cls");
	printf("���Ǵ��Ͽո��ӵ�ʱ�򣬵��µ��龰������Ŀ�ɿڴ�...");
	getchar();
	system("cls");
	printf("�����Ѿ�����֮ǰ���ֵĸ�¥��");
	getchar();
	system("cls");
	printf("������������������Ư���Ž�ʬ����Ϣ");
	getchar();
	system("cls");
	printf("���е�¥������̮����ΪһƬƽԭ...");
	getchar();
	system("cls");
	printf("Ψһ�ܿ�����...����Զ��...�����ļ�԰���Ǹ���Ϊ��֪�ĵط�");
	getchar();
	system("cls");
	printf("�㣺...");
	getchar();
	system("cls");
	printf("�ܼࣺ...");
	getchar();
	system("cls");
	printf("�೤��...");
	getchar();
	system("cls");
	printf("�㣺��ʬ����������������������");
	getchar();
	system("cls");
	printf("������������Ϯ...");
	getchar();
	system("cls");
	printf("��ʬ�����׷��ɥʬ\n\n");
	printf("Ѫ����1000000 ��������250�����ң� ��Ч������׷�ٵ��� �Ѷȣ��ߣ�������Ѫ����˵��\n");
	int shixue = 1000000;
	int gongni = 250, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	int s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 30;
		else gongji -= rand() % 10;
		if (k & 1) printf("�㡢�������೤���ܼ���ʬ���𹥻�����ʬ�ܻ���Χ��%d", gongji * 6);
		else if (k > 50)printf("��ʬ����������˺�");
		else {
			printf("��ʬʹ�ü��ܣ���Ϯ");
			getchar();
			system("cls");
			printf("��ʬ���㷢����׷�ٵ���");
			getchar();
			system("cls");
			printf("���棺���ѱ���������");
			getchar();
			system("cls");
			printf("��Ҳ��ͬһʱ�䷢����һöAT-X����ȥ��ײ׷�ٵ�");
			getchar();
			system("cls");
			int sss = rand() % 10;
			if (sss & 1) {
				printf("����׷�ٵ����������㣬������ֱ����");
				getchar();
				system("cls");
				printf("�䣡��������");
				getchar();
				system("cls");
				printf("�����������...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("��ɹ����ص���");
			}
		}
		getchar();
		system("cls");
		if (k & 1)shixue -= gongji * 3;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//�ṥ���� 
		if (shixue >= t * 3) printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("��ʬ�����Ա�������������������׼����������");
				getchar();
				system("cls");
			}
			else {
				printf("�䣡����������������");
				getchar();
				system("cls");
				printf("�㣺��^&&*^%^$......");
				getchar();
				system("cls");
				printf("��������ѩ��");
				getchar();
				system("cls");
				printf("�೤����ѩ��");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 40) {
					printf("�����������");
					getchar();
					system("cls");
					printf("Ҫ��...���ҵģ��ٿ�һ��");
					getchar();
					system("cls");
					printf("�����������");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("��������һ��ɨ��֮���㱻��������");
					getchar();
					system("cls");
					xue += 1000;
					printf("Ѫ���ָ�1000");
					getchar();
					system("cls");
					printf("���Ŵ�");
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("����...");
				getchar();
				system("cls");
				printf("����ǰ��ֻ���������������ѩ��...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("��S��");
				getchar();
				system("cls");
				printf("��������һ��ɨ��֮���㱻��������");
				getchar();
				system("cls");
				xue += rand() % 10000;
				printf("Ѫ���ָ�%d", xue);
				getchar();
				system("cls");
				printf("���Ŵ�");
			}
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("���������հ�...");
	getchar();
	system("cls");
	printf("�Ե�ʳ�Ѫ���ָ�");
	xue = man;
	getchar();
	system("cls");
	printf("�����ڵĹ������ǣ�%d", gongji);
	getchar();
	system("cls");
	printf("ͻȻ��ǰ����һ�ε����¿�Ͷ...");
	getchar();
	system("cls");
	printf("�������\n|��");
	getchar();
	system("cls");
	int some = rand() % 5000;
	printf("|׷�ٵ��� * 1 ������ + %d", some);
	gongji += some;
	getchar();
	system("cls");
	printf("|MG3 * 5 ������+ %d", some * 2);
	getchar();
	system("cls");
	printf("|���� * 2 �ɻ�ӵ�ж��ƣ���ը�ļ��ʸ�С�ˣ�");
	getchar();
	system("cls");
	printf("�����˿�Ͷ\n�������\n|���");
	getchar();
	system("cls");
	printf("�㣺�ۣ�����װ���ַḻ�ˣ�");
	getchar();
	system("cls");
	printf("�������ǰ��ǰ�");
	getchar();
	system("cls");
	printf("����һ·�ɵ����Ǹ���ν�����ļ�԰���ĵط�");
	getchar();
	system("cls");
	printf("�ܼࣺ�Ҹо������Ҫ������һ������...");
	getchar();
	system("cls");
	printf("�㣺����������");
	getchar();
	system("cls");
	printf("����������������");
	getchar();
	system("cls");
	printf("�೤������������");
	getchar();
	system("cls");
	printf("�ڰ��Сʱ�Ժ�����ͣ�����Ǹ���ʣ���Ҵ�����");
	getchar();
	system("cls");
	printf("�ɱ����ְ�Χ����ʬ������");
	getchar();
	system("cls");
	printf("�����һ�����еĴ�С��6000����");
	getchar();
	system("cls");
	printf("���ǣ�����Ҳ׼������������һ��ʱ��");
	getchar();
	system("cls");
	printf("��������");
	getchar();
	system("cls");
	printf("���ǣ�����ͬʱҲ֪��");
	getchar();
	system("cls");
	printf("����һ�죬ɥʬ���ܽ�����");
	getchar();
	system("cls");
	printf("��ϲ��ɵ�19�£����ļ�԰��Ѫ������+%d", gongji / xue);
	xue += gongji / xue;
	zuo[19] = 1;
	getchar();
	system("cls");
	printf("�����������...");
	getchar();
	system("cls");
	return;
}
void level_20() {
	if (zuo[19] == 0) {
		system("cls");
		printf("������ɵ�ʮ����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("�������������˳���ӭ��");
	getchar();
	system("cls");
	printf("�㣺���Ǻ�");
	getchar();
	system("cls");
	printf("�������á�");
	getchar();
	system("cls");
	printf("������Ҳ���Ҵ����ǰɡ�");
	getchar();
	system("cls");
	printf("�������ǵ�");
	getchar();
	system("cls");
	printf("���������Ͼ͸������Ҹ�ס����");
	getchar();
	system("cls");
	printf("������Ҫ��һ����");
	getchar();
	system("cls");
	printf("�����������Ӷ�Ц");
	getchar();
	system("cls");
	printf("����Ȼ������");
	getchar();
	system("cls");
	printf("���ǣ����Ǳ�������һ���ܴ������");
	getchar();
	system("cls");
	printf("����Ķ���Ҳ�Ƚϵ���");
	getchar();
	system("cls");
	printf("ס��Ҳ������");
	getchar();
	system("cls");
	printf("ת�ۼ䣬�ֹ�������");
	getchar();
	system("cls");
	printf("���˵����ܵ�ʱ��...");
	getchar();
	system("cls");
	printf("�������������������ֱ�ɥʬ���Ƚ������������ˣ�������");
	getchar();
	system("cls");
	printf("�㡢�������ܼࡢ�೤��ʲô����");
	getchar();
	system("cls");
	printf("���Ǽ�æ��ȥ����");
	getchar();
	system("cls");
	printf("��ô�����ǽ��ῴ��ʲô������");
	getchar();
	system("cls");
	printf("��ʬ���׻᲻�����������Ҵ���Ӫ�أ�");
	getchar();
	system("cls");
	printf("�����ֻ��ʵ��Щ�µĶ�Ա��");
	getchar();
	system("cls");
	printf("�����ڴ�������ĩ�ա�ɥʬΣ�����ڶ�������");
	getchar();
	system("cls");
	printf("�����������...");
	getchar();
	system("cls");
	zuo[20] = 1;
	return;
}
void Start();
void DIERJI() {
	getchar();
	system("cls");
	Sleep(1500);
	printf("������Ϸ������ĩ�ա�ɥʬΣ�����ڶ�����\n\n");
	Sleep(1500);
	printf("��Ʒ��:��虜�ʤɤ�\n\n");
	Sleep(1500);
	printf("��Ʒʱ�䣺2021/5/20 ~ 2023/5/14\n\n");
	Sleep(1500);
	printf("�ر���лPair������\n\n");
	Sleep(1500);
	printf("�汾2.4.16�����������ƺ�\n\n");
	Sleep(1500);
	printf("��ӭָ������Ŷ");
	Sleep(3500);
	Start();
}
void Level_1() {
	getchar();
	system("cls");
	printf("���Ƿɿ�Ŀ���������������ȥ");
	getchar();
	system("cls");
	printf("ȴ���ֽ�ʬ�õ����������Ѿ�����ʶ��");
	getchar();
	system("cls");
	printf("��ʬ�Ѿ�����ԭ������������ɵ����");
	getchar();
	system("cls");
	printf("���ڼ���ÿһ����ʬ����AT4-X���⵼�������뵽��**Ӣ��ȥ��");
	getchar();
	system("cls");
	printf("������׷�ٵ�������Ҳ�κβ��˸����������ӵ�");
	getchar();
	system("cls");
	printf("ֻ����ʽʮ��Σ�����������Ǿͱ�ռ����");
	getchar();
	system("cls");
	printf("�������̾���һ������Բ�");
	getchar();
	system("cls");
	printf("���������ǿ����ڶ�¥�Ϸ���׷�ٵ���׷�ٽ�ʬ");
	getchar();
	system("cls");
	printf("������Ȼ���յ����Ƿ������⵼��");
	getchar();
	system("cls");
	printf("������������ſ�£��������");
	getchar();
	system("cls");
	printf("����������һֱ��ȥ��������һ�콩ʬ���ӵ���û�е�");
	getchar();
	system("cls");
	printf("�ܼࣺ����ý�ʬ�Ͳ����������Լ���������");
	getchar();
	system("cls");
	printf("�೤���������ٱȼ��⵼���Ĺ�����Ҫ�Ͱ�");
	getchar();
	system("cls");
	printf("�㣺Ҳ��Ҳ��");
	getchar();
	system("cls");
	printf("˭֪��ǽ�ж������ǵĶԻ����ڴ�������͵���Ľ�ʬ������");
	getchar();
	system("cls");
	printf("��~~~~~~~~");
	getchar();
	system("cls");
	printf("��ʬ�����׷��ɥʬ\n\n");
	printf("Ѫ����6666666 ��������666�����ң� ��Ч������׷�ٵ��� �Ѷȣ��ߣ�������Ѫ����˵��\n");
	int shixue = 6666666;
	int gongni = 666, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	int s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 30;
		else gongji -= rand() % 10;
		if (k & 1) printf("�㡢�������೤���ܼ���ʬ���𹥻�����ʬ�ܻ���Χ��%d", gongji * 6);
		else if (k > 50)printf("��ʬ����������˺�");
		else {
			printf("��ʬ���㷢����׷�ٵ���");
			getchar();
			system("cls");
			printf("���棺���ѱ���������");
			getchar();
			system("cls");
			printf("��Ҳ��ͬһʱ�䷢����һöAT-X����ȥ��ײ׷�ٵ�");
			getchar();
			system("cls");
			int sss = rand() % 10;
			if (sss & 1) {
				printf("����׷�ٵ����������㷢��ĵ������������㣡");
				getchar();
				system("cls");
				printf("�䣡��������");
				getchar();
				system("cls");
				printf("�����������...");
				getchar();
				system("cls");
				return;
			}
			else {
				int ss = rand() % 500;
				printf("��ɹ����ص����������������뵼��̫����Ѫ������%d", ss);
			}
		}
		getchar();
		system("cls");
		if (k & 1)shixue -= gongji * 6;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//�ṥ���� 
		if (shixue >= t * 3) printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("��ʬ�����Ա�������������������׼����������");
				getchar();
				system("cls");
			}
			else {
				printf("�䣡����������������");
				getchar();
				system("cls");
				printf("�㣺��^&&*^%^$......");
				getchar();
				system("cls");
				printf("��������ѩ��");
				getchar();
				system("cls");
				printf("�೤����ѩ��");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 40) {
					printf("�����������");
					getchar();
					system("cls");
					printf("Ҫ��...���ҵģ��ٿ�һ��");
					getchar();
					system("cls");
					printf("�����������");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("��������һ��ɨ��֮���㱻��������");
					getchar();
					system("cls");
					xue += 1000;
					printf("Ѫ���ָ�1000");
					getchar();
					system("cls");
					printf("���Ŵ�");
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("����...");
				getchar();
				system("cls");
				printf("����ǰ��ֻ���������������ѩ��...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("��S��");
				getchar();
				system("cls");
				printf("��������һ��ɨ��֮���㱻��������");
				getchar();
				system("cls");
				xue += rand() % 10000;
				printf("Ѫ���ָ�%d", xue);
				getchar();
				system("cls");
				printf("���Ŵ�");
			}
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("��������ȥ�����ˣ����ﲻ�᲻��ȫ��");
	getchar();
	system("cls");
	printf("�㣺�ǿ϶���");
	getchar();
	system("cls");
	printf("�ܼࣺ�߻���λ��ȥ");
	getchar();
	system("cls");
	printf("�㣺�õ�");
	getchar();
	system("cls");
	printf("������������һ������ǰ��");
	getchar();
	system("cls");
	printf("ȴ������һ��ֽ��");
	getchar();
	system("cls");
	printf("��ֽ������д��ʲô\n|1 ��\n|2 ����");
	scanf("%d", &x);
	system("cls");
	if (x == 1) {
		printf("|�½�ʬ��");
		getchar();
		system("cls");
		printf("|��ͷ������");
	}
	else if (x == 2) {
		printf("�����վ�û���ӹ���ͷ��һ�۵�����");
		getchar();
		system("cls");
		printf("��ع���ͷ");
	}
	if (x != 3) {
		getchar();
		system("cls");
		printf("֮��һ���������ø������ݺݵĶ�����");
		getchar();
		system("cls");
		printf("�����ˣ��ֵ�");
		getchar();
		system("cls");
		printf("�����������");
		return;
	}
	getchar();
	system("cls");
	printf("������ô֪��Ҫ��3�ģ�����");
	getchar();
	system("cls");
	printf("�ðɲ�������������һ��");
	getchar();
	system("cls");
	int ss = rand() % 3000;
	printf("��ϲ��ɵ�1�أ�Ѫ������ + %d", ss);
	xue += ss;
	man = xue;
	getchar();
	system("cls");
	printf("�����������...");
	getchar();
	system("cls");
	zuo[1] = 1;
	return;
}
void Level_2() {
	if (zuo[1] == 0) {
		system("cls");
		printf("������ɵ�һ��");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("����Ҳ����Ϊĳ�˳տ�\n\n");
	getchar();
	system("cls");
	printf("����������ǿ��\n\n");
	getchar();
	system("cls");
	printf("��������...");
	getchar();
	system("cls");
	printf("�㣺...");
	getchar();
	system("cls");
	printf("�೤����Ӵ��Ү����������");
	getchar();
	system("cls");
	printf("�ܼࣺ���������ĸ����ҵ��ˣ�");
	getchar();
	system("cls");
	printf("�೤���쿴���05ʽ΢�����ǹ��");
	getchar();
	system("cls");
	printf("�㣺...");
	getchar();
	system("cls");
	printf("�㣺������ڻ����Ծ�ʱ�����õ��ų��ǹ��");
	getchar();
	system("cls");
	printf("�೤��...");
	getchar();
	system("cls");
	printf("��ʬ������...������õ���");
	getchar();
	system("cls");
	printf("�����������ս��");
	getchar();
	system("cls");
	printf("��ʬ�����׷��ɥʬ\n\n");
	printf("Ѫ����6666666 ��������666�����ң� ��Ч������׷�ٵ��� �Ѷȣ��ߣ�������Ѫ����˵��\n");
	int shixue = 6666666;
	int gongni = 666, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	int s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 30;
		else gongji -= rand() % 10;
		if (k & 1) printf("�㡢�������೤���ܼ���ʬ���𹥻�����ʬ�ܻ���Χ��%d", gongji * 6);
		else if (k > 50)printf("��ʬ����������˺�");
		else {
			printf("��ʬ���㷢����׷�ٵ���");
			getchar();
			system("cls");
			printf("���棺���ѱ���������");
			getchar();
			system("cls");
			printf("��Ҳ��ͬһʱ�䷢����һöAT-X����ȥ��ײ׷�ٵ�");
			getchar();
			system("cls");
			int sss = rand() % 10;
			if (sss & 1) {
				printf("����׷�ٵ����������㷢��ĵ������������㣡");
				getchar();
				system("cls");
				printf("�䣡��������");
				getchar();
				system("cls");
				printf("�����������...");
				getchar();
				system("cls");
				return;
			}
			else {
				int ss = rand() % 500;
				printf("��ɹ����ص����������������뵼��̫����Ѫ������%d", ss);
			}
		}
		getchar();
		system("cls");
		if (k & 1)shixue -= gongji * 6;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//�ṥ���� 
		if (shixue >= t * 3) printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("��ʬ�����Ա�������������������׼����������");
				getchar();
				system("cls");
			}
			else {
				printf("�䣡����������������");
				getchar();
				system("cls");
				printf("�㣺��^&&*^%^$......");
				getchar();
				system("cls");
				printf("��������ѩ��");
				getchar();
				system("cls");
				printf("�೤����ѩ��");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 40) {
					printf("�����������");
					getchar();
					system("cls");
					printf("Ҫ��...���ҵģ��ٿ�һ��");
					getchar();
					system("cls");
					printf("�����������");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("��������һ��ɨ��֮���㱻��������");
					getchar();
					system("cls");
					xue += 1000;
					printf("Ѫ���ָ�1000");
					getchar();
					system("cls");
					printf("���Ŵ�");
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("����...");
				getchar();
				system("cls");
				printf("����ǰ��ֻ���������������ѩ��...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("��S��");
				getchar();
				system("cls");
				printf("��������һ��ɨ��֮���㱻��������");
				getchar();
				system("cls");
				xue += rand() % 10000;
				printf("Ѫ���ָ�%d", xue);
				getchar();
				system("cls");
				printf("���Ŵ�");
			}
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("�������ʱ��ɥʬΣ��ͻȻ�����...");
	getchar();
	system("cls");
	printf("����������");
	getchar();
	system("cls");
	printf("�������Լ�������û����...");
	getchar();
	system("cls");
	printf("����ܻ��ʣ��������Ĺؿ��ͳɾ��Ǹ�ɶ��");
	getchar();
	system("cls");
	printf("�ң����������");
	getchar();
	system("cls");
	printf("��֮��лл����������");
	getchar();
	system("cls");
	printf("Ҳлл���������Ϸ");
	getchar();
	system("cls");
	printf("���ԣ���ʬ������Ϯ��");
	getchar();
	system("cls");
	getchar();
	system("cls");
	printf("��ʬ�����׷��ɥʬ\n\n");
	printf("Ѫ����66666666 ��������666�����ң� ��Ч������׷�ٵ��� �Ѷȣ��ߣ�������Ѫ����˵��\n");
	shixue = 66666666;
	gongni = 666, yuan = gongji, ni = gongni;
	printf("���Ѫ����%d����Ĺ�������%d\n", xue, gongji);
	printf("�����������ս��\n");
	getchar();
	system("cls");
	s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	int dun = 1000000;
	while (1) {
		dun /= 2;
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 30;
		else gongji -= rand() % 10;
		if (k & 1) printf("�㡢�������೤���ܼ���ʬ���𹥻�����ʬ�ܻ���Χ��%d", gongji * 6);
		else if (k > 50)printf("��ʬ����������˺����㱻ɥʬ�ĳ�������������𵴣�Ѫ���۰�"), xue /= 2, shixue += xue * xue;
		else {
			printf("��ʬ���㷢����׷�ٵ���");
			getchar();
			system("cls");
			printf("���棺���ѱ���������");
			getchar();
			system("cls");
			printf("��Ҳ��ͬһʱ�䷢����һöAT-X����ȥ��ײ׷�ٵ�");
			getchar();
			system("cls");
			int sss = rand() % 10;
			if (sss & 1) {
				printf("����׷�ٵ����������㷢��ĵ������������㣡");
				getchar();
				system("cls");
				printf("�䣡��������");
				getchar();
				system("cls");
				int s = rand() % 10;
				if (s == 1 || s % 2 == 0)printf("�����������..."), getchar(), system("cls");
				else printf("�㱻������������ʬ�������㣬����~~~~���ţ�����"), getchar(), system("cls");
				return;
			}
			else {
				int ss = rand() % 500;
				printf("��ɹ����ص����������������뵼��̫����Ѫ������%d", ss);
				xue = xue - x + dun;
			}
		}
		getchar();
		system("cls");
		if (k & 1)shixue -= gongji * 6;
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("��^^#@%");
			getchar();
			system("cls");
			printf("��ʬ������");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//�ṥ���� 
		if (shixue >= t * 3) printf("��ʬ���㷢�𹥻������Ѫ������%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("��ʬ�����Ա�������������������׼����������");
				getchar();
				system("cls");
			}
			else {
				printf("�䣡����������������");
				getchar();
				system("cls");
				printf("�㣺��^&&*^%^$......");
				getchar();
				system("cls");
				printf("��������ѩ��");
				getchar();
				system("cls");
				printf("�೤����ѩ��");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 40) {
					printf("�����������");
					getchar();
					system("cls");
					printf("Ҫ��...���ҵģ��ٿ�һ��");
					getchar();
					system("cls");
					printf("�����������");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("��������һ��ɨ��֮���㱻��������");
					getchar();
					system("cls");
					xue += 1000;
					printf("Ѫ���ָ�1000");
					getchar();
					system("cls");
					printf("���Ŵ�");
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("����...");
				getchar();
				system("cls");
				printf("����ǰ��ֻ���������������ѩ��...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("�㱻��ʬ������");
				getchar();
				system("cls");
				printf("��������һ�κ���֮���㱻��������");
				getchar();
				system("cls");
				xue += rand() % 10000;
				printf("Ѫ���ָ�%d", xue);
				getchar();
				system("cls");
				printf("���Ŵ�");
			}
		}
		getchar();
		system("cls");
		printf("��ʬѪ����%d	���Ѫ����%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
		if (dun > xue)xue += dun;
		else {
			printf("��ʬ��ŭ���о��յ������裬���Ѫ����ԭѪ����1/3");
			xue /= 3;
			xue += dun;
			getchar(), system("cls");
		}
	}
	getchar();
	system("cls");
	if (mz = 10086) {
		printf("���ʱ��ͻȻ�������緢����һ���׹�\n");
		printf("����ǰ��ȥ��ɥʬͻȻ�漣��Ļ��˹���\n");
		printf("�����...\n�ˣ����еĽ�ʬ����һʱ��ͻȻ������������\n\n");
		printf("���Ǻ��ػ��ǻ���\n��ʬ�ǵ��������������˺ۣ�¶����һЩ�ۼ�");
		printf("\n���߽���ȥ������2680-8-17����ʧ\n��ʬ��ͻȻ���ֵ���ס��Щ����\n\n");
		printf("����������������������һ�����������\n�������Ա߿���Ŀ�ɿڴ���Ȼ�������Ƕ��ⲻ�˱�ɥʬҪ��������\n\n");
		getchar();
		system("cls");
		printf("���������...\n���������...\n���������...\n��ʬ�����ţ���ҧ��\n\n");
		printf("����������ʱ��ͻȻ��������һ��������\n�����һ�ж���ʧ��...\n����...���������\n\n");
		getchar();
		system("cls");
		mz = 20086;
		printf("���ǰ�");
		getchar();
		system("cls");
		return;
	}
	return;
}
void Level_3() {
	if (zuo[2] == 0) {
		system("cls");
		printf("������ɵڶ���");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
}
void Level_4() {
	if (zuo[3] == 0) {
		system("cls");
		printf("������ɵ�����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
}
void Level_5() {
	if (zuo[4] == 0) {
		system("cls");
		printf("������ɵ�����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
}
void Level_6() {
	if (zuo[3] == 0) {
		system("cls");
		printf("������ɵ�����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
}
void Level_7() {
	if (zuo[3] == 0) {
		system("cls");
		printf("������ɵ�����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
}
void Level_8() {
	if (zuo[3] == 0) {
		system("cls");
		printf("������ɵ�����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
}
void Level_9() {
	if (zuo[3] == 0) {
		system("cls");
		printf("������ɵڰ���");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
}
void Level_10() {
	if (zuo[3] == 0) {
		system("cls");
		printf("������ɵھ���");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
}
void Level_11() {
	if (zuo[3] == 0) {
		system("cls");
		printf("������ɵ�ʮ��");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
}
void Level_12() {
	if (zuo[3] == 0) {
		system("cls");
		printf("������ɵ�ʮһ��");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
}
void Level_13() {
	if (zuo[3] == 0) {
		system("cls");
		printf("������ɵ�ʮ����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
}
void Level_14() {
	if (zuo[3] == 0) {
		system("cls");
		printf("������ɵ�ʮ����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
}
void Level_15() {
	if (zuo[3] == 0) {
		system("cls");
		printf("������ɵ�ʮ����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
}
void Level_16() {
	if (zuo[3] == 0) {
		system("cls");
		printf("������ɵ�ʮ����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
}
void Level_17() {
	if (zuo[3] == 0) {
		system("cls");
		printf("������ɵ�ʮ����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
}
void Level_18() {
	if (zuo[3] == 0) {
		system("cls");
		printf("������ɵ�ʮ����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
}
void Level_19() {
	if (zuo[3] == 0) {
		system("cls");
		printf("������ɵ�ʮ����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
}
void Level_20() {
	if (zuo[3] == 0) {
		system("cls");
		printf("������ɵ�ʮ����");
		getchar();
		getchar();
		system("cls");
		printf("����Ϊ�㷵����ҳ�棬��ȴ�1s");
		Sleep(3000);
		return;
	}
}
int s;
void MAP2() {
	system("cls");
	getchar();
	printf("#����Χǽ	*����ʬ�������ĵط�\n\n");
	printf("----------------------------------------------------------------\n");
	printf("|........����******....        ��¥         #      ...   ...  .|\n");
	printf("|..............***...       ............    #   ...�칫��... . ..|\n");
	printf("|    ...........*********     ..���� ....   #   ....... .. . ..|\n");
	printf("|  .........                  ... ...........    #   ##    ..  |\n");
	printf("|                 ...... ..                                    |\n");
	printf("|        ... .......��¥......              .. ....            |\n");
	printf("|               . ........                  ....���� ........  |\n");
	printf("|                  .........                 ......  ... ..... |\n");
	printf("|....С¥.......                                 ...           |\n");
	printf("| ... .....  .                                       ... .     |\n");
	printf("|##################### #  #   ##### #                #         |\n");
	printf("|   ��ȫ¥. .. ... .. . ....   ..             #########        |\n");
	printf("|..... .................                     .... ........ .   |\n");
	printf("|....                                           ��ȫ¥......     |\n");
	printf("| ..   ...... ...                       .......................|\n");
	printf("|........... . .. .... . . . .                                 |\n");
	printf("----------------------------------------------------------------\n");
	printf("�����������...\n\n");
	if (mz == 20086 && zuo[20] == 1 && s > 10) {
		printf("���Ѿ������ռ�����");
	}
	getchar();
	system("cls");
	return;
}
void AND() {
	system("cls");
	system("color 0F");
	memset(zuo, 0, sizeof(zuo));
	rong = 0;
qq:
	if (zuo[1] == 1 && rong < 1) {
		system("cls");
		system("color 0F");
		printf("��������ƺţ������ٽ�");
		rong = 1;
	}
	if (zuo[3] == 1 && rong < 2) {
		system("cls");
		system("color 0F");
		printf("��������ƺţ������н�");
		rong = 2;
	}
	if (zuo[7] == 1 && rong < 3) {
		system("cls");
		system("color 05");
		printf("��������ƺţ������Ͻ�");
		rong = 3;
	}
	if (zuo[10] == 1 && rong < 4) {
		system("cls");
		system("color 05");
		printf("��������ƺţ�����ٽ�");
		rong = 4;
	}
	if (zuo[13] == 1 && rong < 5) {
		system("cls");
		system("color 04");
		printf("��������ƺţ�����н�");
		rong = 5;
	}
	if (zuo[15] == 1 && rong < 6) {
		system("cls");
		system("color 04");
		printf("��������ƺţ�����Ͻ�");
		rong = 6;
	}
	if (zuo[17] == 1 && rong < 7) {
		system("cls");
		system("color 02");
		printf("��������ƺţ���սI");
		rong = 7;
	}
	if (zuo[19] == 1 && rong < 8) {
		system("cls");
		system("color 02");
		printf("��������ƺţ���սII");
		rong = 8;
	}
	if (zuo[20] == 1 && rong < 9) {
		system("cls");
		system("color 06");
		printf("��������ƺţ���սIII");
		rong = 9;
	}
	xue = man;
	getchar();
	if (x == 0 && flag == 0) getchar();
	system("cls");
	printf("��������ѩ\n\n");
	Sleep(300);
	printf("��λ��");
	if (rong == 1) printf("�����ٽ�\n\n");
	else if (rong == 2) printf("�����н�\n\n");
	else if (rong == 3) printf("�����Ͻ�\n\n");
	else if (rong == 4) printf("����ٽ�\n\n");
	else if (rong == 5) printf("����н�\n\n");
	else if (rong == 6) printf("����Ͻ�\n\n");
	else if (rong == 7) printf("��սI\n\n");
	else if (rong == 8) printf("��սII\n\n");
	else if (rong == 9) printf("��սIII\n\n");
	else if (rong == 0) printf("�ε�֮��\n\n");
	Sleep(300);
	printf("�����½�:\n--------------------------\n");
	Sleep(300);
	printf("-1| ����ģʽ(������)\n");
	Sleep(300);
	printf("0| �鿴��ͼ\n");
	Sleep(300);
	printf("1| ��¥��Σ��\n");
	Sleep(300);
	printf("2| ��������\n");
	Sleep(300);
	printf("3| �ض�����\n");
	Sleep(300);
	printf("4| ��������\n");
	Sleep(300);
	printf("5| ����\n");
	Sleep(300);
	printf("6| ����(2)\n");
	Sleep(300);
	printf("7| ���ͱ�����\n");
	Sleep(300);
	printf("8| OTA\n");
	Sleep(300);
	printf("9| ��������\n");
	Sleep(300);
	printf("10| ��������\n");
	Sleep(300);
	printf("11| ����ԭ��\n");
	Sleep(300);
	printf("12| �ټ����Ҵ��߻���\n");
	Sleep(300);
	printf("13| Χǽ֮ս\n");
	Sleep(300);
	printf("14| ��ʬ������\n");
	Sleep(300);
	printf("15| �𲽴��\n");
	Sleep(300);
	printf("16| Ѱ�Ҹ�Դ\n");
	Sleep(300);
	printf("17| ���صĿ�Ͷ\n");
	Sleep(300);
	printf("18| ��ֵĽ�ʬ\n");
	Sleep(300);
	printf("19| �����\n");
	Sleep(300);
	printf("20| ���Ļ���\n");
	Sleep(300);
	scanf("%d", &x);
	if (flag == 0) flag = 1;
	if (x == 0) MAP2();
	else if (x == 1 && zuo[1] == 0) Level_1();
	else if (x == 2 && zuo[2] == 0) Level_2();
	else if (x == 3 && zuo[3] == 0) Level_3();
	else if (x == -1 && zuo[0] == 0) wu_jin();
	else if (x == 4 && zuo[4] == 0) Level_4();
	else if (x == 5 && zuo[5] == 0) Level_5();
	else if (x == 6 && zuo[6] == 0) Level_6();
	else if (x == 7 && zuo[7] == 0) Level_7();
	else if (x == 8 && zuo[8] == 0) Level_8();
	else if (x == 9 && zuo[9] == 0) Level_9();
	else if (x == 10 && zuo[10] == 0) Level_10();
	else if (x == 11 && zuo[11] == 0) Level_11();
	else if (x == 12 && zuo[12] == 0) Level_12();
	else if (x == 13 && zuo[13] == 0) Level_13();
	else if (x == 14 && zuo[14] == 0) Level_14();
	else if (x == 15 && zuo[15] == 0) Level_15();
	else if (x == 16 && zuo[16] == 0) Level_16();
	else if (x == 17 && zuo[17] == 0) Level_17();
	else if (x == 18 && zuo[18] == 0) Level_18();
	else if (x == 19 && zuo[19] == 0) Level_19();
	else if (x == 20 && zuo[20] == 0) Level_20();
	else {
		getchar();
		system("cls");
		printf("���ɶ");
		getchar();
		s++;
		system("cls");
	}
	goto qq;
}
void Start() {
	system("cls");
	printf("׼��������...\n����  10");
	Sleep(500);
	system("cls");
	printf("����exe��...\n������  15");
	Sleep(100);
	system("cls");
	printf("����������...\n��������  20");
	Sleep(400);
	system("cls");
	printf("������Դ��...\n����������  25");
	Sleep(600);
	system("cls");
	printf("������Դ��...\n����������������������  55");
	Sleep(400);
	system("cls");
	printf("������Դ��...\n����������������������������  70");
	Sleep(300);
	system("cls");
	printf("������Դ��...\n������������������������������  75");
	Sleep(1500);
	system("cls");
	printf("���ڼ����½�...\n��������������������������������  90");
	Sleep(400);
	system("cls");
	printf("���ڼ����½�...\n��������������������������������������  100");
	Sleep(1000);
	system("cls");
	printf("���ڽ�����Ϸ...\n��������������������������������������  100");
	system("cls");
	printf("�����¼��...\n��  5");
	Sleep(500);
	system("cls");
	printf("���������...\n��������  20");
	Sleep(1400);
	system("cls");
	printf("��ҳ����...\n����������  25");
	Sleep(600);
	system("cls");
	printf("���°汾��...\n����������������������  55");
	Sleep(700);
	system("cls");
	printf("��ʼ����...\n����������������������������  68");
	Sleep(300);
	system("cls");
	printf("���������...\n������������������������������  75");
	Sleep(1500);
	system("cls");
	printf("���ڼ�������...\n��������������������������������  90");
	Sleep(400);
	system("cls");
	printf("���ڼ���ҳ��...\n��������������������������������������  100");
	Sleep(3000);
	system("cls");
	printf("���ڽ�����Ϸ...\n��������������������������������������  100");
	Sleep(4000);
	system("cls");
	if (zuo[20] == 1) AND();
	printf("���µ���");
	getchar();
	system("cls");
	printf("�Ƿ��������µ��룿\n 1.��	2.��\n");
	scanf("%d", &x);
	if (x == 1) {
		goto guo;
	}
	system("cls");
	getchar();
	printf("�������ѩ");
	getchar();
	system("cls");
	printf("������һ���еȵļ�ͥ��");
	getchar();
	system("cls");
	printf("ÿ�춼�Ὺ˽�ҳ�ȥMIR��˾�ϰ�");
	getchar();
	system("cls");
	printf("��MIR��˾��������ǵ���ҵ�����˾޴�Ĺ��ף������˶�������α�");
	getchar();
	system("cls");
	printf("����˶�ʮ�ֿ���");
	getchar();
	system("cls");
	printf("��һ�죬�ϰ�����㣺�����ܲð�������Ϊ���ǹ�˾Ҳ������ô�࣬��������Ĺ���ÿ��2��ɡ�");
	getchar();
	system("cls");
	printf("��лл�ϰ壬���������ҵ�������˵��");
	getchar();
	system("cls");
	printf("��Ӧ���ǵ�֮���������ϰ�Ц��˵");
	getchar();
	system("cls");
	printf("��ҲЦ�ˣ�����һ�������õ����鰡");
	getchar();
	system("cls");
	printf("��Ȼ���ڶ��죬��Ĺ��ʾͱ���������2��");
	getchar();
	system("cls");
	printf("����ô��Ц�Ĺ�������3��");
	getchar();
	system("cls");
	printf("����26����4��23��");
	getchar();
	system("cls");
	printf("�㻹��������һ�����ϰ���");
	getchar();
	system("cls");
	printf("����һ��...");
	getchar();
	system("cls");
	printf("ǰ����ϣ��밴���������\n");
	getchar();
	system("cls");
guo:
	if (zuo[1] == 1 && rong < 1) {
		system("cls");
		system("color 0F");
		printf("��������ƺţ�Ӣ����ξ");
		rong = 1;
	}
	if (zuo[3] == 1 && rong < 2) {
		system("cls");
		system("color 0F");
		printf("��������ƺţ�������У");
		rong = 2;
	}
	if (zuo[7] == 1 && rong < 3) {
		system("cls");
		system("color 05");
		printf("��������ƺţ��������");
		rong = 3;
	}
	if (zuo[10] == 1 && rong < 4) {
		system("cls");
		system("color 05");
		printf("��������ƺţ�����ɸ�");
		rong = 4;
	}
	if (zuo[13] == 1 && rong < 5) {
		system("cls");
		system("color 04");
		printf("��������ƺţ����ǲ���");
		rong = 5;
	}
	if (zuo[15] == 1 && rong < 6) {
		system("cls");
		system("color 04");
		printf("��������ƺţ��컯֮��");
		rong = 6;
	}
	if (zuo[17] == 1 && rong < 7) {
		system("cls");
		system("color 02");
		printf("��������ƺţ���������");
		rong = 7;
	}
	if (zuo[19] == 1 && rong < 8) {
		system("cls");
		system("color 02");
		printf("��������ƺţ�����֮��");
		rong = 8;
	}
	if (zuo[20] == 1 && rong < 9) {
		system("cls");
		system("color 06");
		printf("��������ƺţ��ε�֮��");
		rong = 9;
	}
	xue = man;
	getchar();
	if (x == 0 && flag == 0) getchar();
	system("cls");
	printf("��������ѩ\n\n");
	Sleep(300);
	printf("��λ��");
	if (rong == 0) printf("��ǿ�Ա�\n\n");
	else if (rong == 1) printf("Ӣ����ξ\n\n");
	else if (rong == 2) printf("������У\n\n");
	else if (rong == 3) printf("�������\n\n");
	else if (rong == 4) printf("����ɸ�\n\n");
	else if (rong == 5) printf("���ǲ���\n\n");
	else if (rong == 6) printf("�컯֮��\n\n");
	else if (rong == 7) printf("��������\n\n");
	else if (rong == 8) printf("����֮��\n\n");
	else if (rong == 9) printf("�ε�֮��\n\n");
	Sleep(300);
	printf("�����½�:\n--------------------------\n");
	Sleep(300);
	printf("-1| ����ģʽ(������)\n");
	Sleep(300);
	printf("0| �鿴��ͼ\n");
	Sleep(300);
	printf("1| MIR��˾\n");
	Sleep(300);
	printf("2| S��\n");
	Sleep(300);
	printf("3| S��(2)\n");
	Sleep(300);
	printf("4| Surviver\n");
	Sleep(300);
	printf("5| ����\n");
	Sleep(300);
	printf("6| �׶�\n");
	Sleep(300);
	printf("7| �׶�(2)\n");
	Sleep(300);
	printf("8| ����\n");
	Sleep(300);
	printf("9| ATO����\n");
	Sleep(300);
	printf("10| ATO����(2)\n");
	Sleep(300);
	printf("11| ���Ĵ��\n");
	Sleep(300);
	printf("12| ����\n");
	Sleep(300);
	printf("13| ���滹�ǻ���\n");
	Sleep(300);
	printf("14| �ٱ��׶�\n");
	Sleep(300);
	printf("15| ����̮��\n");
	Sleep(300);
	printf("16| X������\n");
	Sleep(300);
	printf("17| ��������\n");
	Sleep(300);
	printf("18| ���ص�ֱ����\n");
	Sleep(300);
	printf("19| ���ļ�԰\n");
	Sleep(300);
	printf("20| ���˵�ʬ��\n");
	Sleep(300);
	scanf("%d", &x);
	if (flag == 0) flag = 1;
	if (x == 0) MAP();
	else if (x == 1 && zuo[1] == 0) level_1();
	else if (x == 2 && zuo[2] == 0) level_2();
	else if (x == 3 && zuo[3] == 0) level_3();
	else if (x == -1 && zuo[0] == 0) wu_jin();
	else if (x == 4 && zuo[4] == 0) level_4();
	else if (x == 5 && zuo[5] == 0) level_5();
	else if (x == 6 && zuo[6] == 0) level_6();
	else if (x == 7 && zuo[7] == 0) level_7();
	else if (x == 8 && zuo[8] == 0) level_8();
	else if (x == 9 && zuo[9] == 0) level_9();
	else if (x == 10 && zuo[10] == 0) level_10();
	else if (x == 11 && zuo[11] == 0) level_11();
	else if (x == 12 && zuo[12] == 0) level_12();
	else if (x == 13 && zuo[13] == 0) level_13();
	else if (x == 14 && zuo[14] == 0) level_14();
	else if (x == 15 && zuo[15] == 0) level_15();
	else if (x == 16 && zuo[16] == 0) level_16();
	else if (x == 17 && zuo[17] == 0) level_17();
	else if (x == 18 && zuo[18] == 0) level_18();
	else if (x == 19 && zuo[19] == 0) level_19();
	else if (x == 20 && zuo[20] == 0) level_20();
	else {
		if (zuo[20] == 1) {
			getchar();
			system("cls");
			printf("���ڵȴ������ŵĴ���...");
			getchar();
			system("cls");
			printf("�Ѵ���");
			getchar();
			system("cls");
			DIERJI();
		}
		system("cls");
		printf("���ǲ������˰�");
		getchar();
		system("cls");
	}
	goto guo;
}
int main() {
	srand(time(0));
	printf("�Ƿ����ع�꣨���鲻��\n 1. ��	 2.��\n");
	scanf("%d", &x);
	if (x == 1) HideCursor(1);
	if (x == 3) mz = 10086;
	system("cls");
	Sleep(1500);
	printf("������Ϸ������ĩ�ա�ɥʬΣ������һ����\n\n");
	Sleep(1500);
	printf("��Ʒ��:FwbAway(��Ⱥ�)\n\n");
	Sleep(1500);
	printf("��Ʒʱ�䣺2021/5/2 ~ 2022/5/14\n\n");
	Sleep(1500);
	printf("�ر���л���µ�����\n\n");
	Sleep(1500);
	printf("�汾8.4.16�����������ƺ�\n\n");
	Sleep(1500);
	printf("��ӭָ������Ŷ");
	Sleep(3500);
	getchar();
	system("cls");
	printf("��Enter����ʼ����Ϸ�е����еط�������Enter����\n\n");
	getchar();
	system("cls");
	Start();
	return 0;
}