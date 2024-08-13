#define _CRT_SECURE_NO_WARNINGS 1
//#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
using namespace std;
int x;//判断均用 
int flag = 0, mz;
int gongji = 50, xue = 100, man = 100;
int qiang = 0;
int zuo[40];
int rong = 0;
void level_1() {
	int go = gongji;
	system("cls");
	getchar();
	printf("很平常的，你这天清晨，6:00准时起床");
	getchar();
	system("cls");
	printf("吃了很不错的早餐");
	getchar();
	system("cls");
	printf("在微暗的天空下走到了自己的车旁");
	getchar();
	system("cls");
	printf("用手划去车玻璃上的雪");
	getchar();
	system("cls");
	printf("然后用嘴使劲在手上哈了口气");
	getchar();
	system("cls");
	printf("这是什么鬼天气啊，你想");
	getchar();
	system("cls");
	printf("于是你走进了车里，车在呕哑嘲哳声音中启动了");
	getchar();
	system("cls");
	printf("半小时后，你的车停在了MIR公司门口");
	getchar();
	system("cls");
	printf("“哎，这种天气，简直都不是人住的！你看门口保安也没来”你打了个哈欠");
	getchar();
	system("cls");
	printf("你抬头望了望天：“今天天亮的也晚”");
	getchar();
	system("cls");
	printf("你停下车，走进了MIR");
	getchar();
	system("cls");
	printf("你一路哼着小曲，沿着墙走了进去，来到了电梯口");
	getchar();
	system("cls");
	printf("你：“啊啊？不是吧，我这么倒霉的吗，电梯都坏了”");
	getchar();
	system("cls");
	printf("于是你心情闷闷的走上了楼梯");
	getchar();
	system("cls");
	printf("但是你发现，三楼的楼道都没有开灯，一切黑洞洞的");
	getchar();
	system("cls");
	printf("“有人吗？？？？？”你大喊");
	getchar();
	system("cls");
	printf("有人吗……有人吗……有人吗……所有的回音都在楼道里荡漾");
	getchar();
	system("cls");
	printf("于是，你静悄悄的走了上去");
	getchar();
	system("cls");
	printf("慢慢的打开办公室的门");
	getchar();
	system("cls");
	printf("里面也一片漆黑...");
	getchar();
	system("cls");
	printf("“有人吗——————”你大声喊道");
	getchar();
	system("cls");
	printf("呃^^^^^^^^&#$哈呼...");
	getchar();
	system("cls");
	printf("按任意键开始战斗");
	getchar();
	system("cls");
	printf("僵尸情况：打药僵尸\n\n");
	printf("血量：200 攻击力：20（左右） 特效：无\n");
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按1发起战斗	按2逃避（30%几率）\n");
	scanf("%d", &x);
	system("cls");
	if (x == 2) {
		int k = rand() % 10;
		if (k <= 4) printf("你逃跑了...");
		else printf("你在逃跑的过程中，被丧尸咬到了...");
		getchar();
		system("cls");
		if (k > 4) {
			printf("按任意键返回章节...");
			getchar();
			return;
		}
		else {
			printf("你跑出来一看，世界的一切的一切都变化了...");
			getchar();
			system("cls");
			printf("到处都散布着血腥的味道，全是僵尸的呃^^^^声");
			getchar();
			system("cls");
			printf("你望见远处有一只大僵尸发现了你");
			getchar();
			system("cls");
			printf("现在逃跑还有机会！");
			getchar();
			system("cls");
			printf("1.逃跑	2.算了硬刚");
			scanf("%d", &x);
			if (x == 1) {
				printf("你逃回了自己的家...");
				getchar();
				system("cls");
				printf("但是僵尸的数量实在是太多了，满城都是的");
				getchar();
				system("cls");
				printf("终于有一天，你倒下了");
				getchar();
				system("cls");
				printf("远处有一个声音传来：“或许早应该放弃了呢...”");
				getchar();
				system("cls");
				printf("按任意键返回章节");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("但是你手无寸铁，根本打不过僵尸的");
				getchar();
				system("cls");
				printf("“哎哟”你没有躲过僵尸的袭击");
				getchar();
				system("cls");
				printf("这不是本章一个好的结局......");
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
		printf("你向僵尸发起攻击，僵尸血量减少%d", gongji);
		getchar();
		system("cls");
		shixue -= gongji;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 5;
		else gongni -= rand() % 5;
		int t = rand() % 100;//可能不会攻击你 
		if (t > 30) printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		else {
			int f = rand() % 37;
			f += rand() % 5;
			printf("僵尸正在打药，血量恢复%d", f);
			shixue += f;
		}
		if (t > 30) xue -= gongni;
		if (xue <= 0) {
			printf("凉凉...");
			getchar();
			system("cls");
			printf("倒下前，只听见僵尸哈哈大笑的声音...");
			getchar();
			system("cls");
			return;
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	int z1 = 0, z2 = 0;
	getchar();
	system("cls");
	printf("你打开了办公室的灯");
	getchar();
thi:
	system("cls");
	printf("你要找：\n");
	Sleep(300);
	printf("1.办公桌旁\n");
	Sleep(300);
	printf("2.箱子里\n");
	Sleep(300);
	printf("-1.不找了\n");
	while (scanf("%d", &x) == 1) {
		if (x == -1) break;
		if (x == 1) {
			if (z1 == 1) {
				printf("找过了");
				getchar();
				getchar();
				system("cls");
				goto thi;
			}
			z1 = 1;
			printf("你发现了一根满血针，血量回满");
			xue = man;
			getchar();
			getchar();
			system("cls");
			goto thi;
		}
		else {
			if (z2 == 1) {
				printf("找过了");
				getchar();
				getchar();
				system("cls");
				goto thi;
			}
			z2 = 1;
			int k = rand() % 10 + 20;
			printf("你发现了一种进化武器，攻击力+%d\n\n", k);
			getchar();
			getchar();
			gongji += k;
			printf("你现在的攻击力是：%d", gongji);
			getchar();
			system("cls");
			goto thi;
		}
	}
	getchar();
	system("cls");
	printf("终于你在打掉了这只僵尸以后，休息了半晌");
	getchar();
	system("cls");
	man += 20;
	xue = man;
	printf("恭喜完成第一章：MIR！血量上限+20，现在你的血量是%d", xue);
	getchar();
	system("cls");
	zuo[1] = 1;
	printf("按任意键返回...");
	getchar();
	system("cls");
	return;
}
void level_2() {
	int go = gongji;
	if (zuo[1] == 0) {
		system("cls");
		printf("请先完成第一章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("你找完了所有地方，走出了办公室");
	getchar();
	system("cls");
	printf("“嘿，吹雪”有人叫你");
	getchar();
	system("cls");
	printf("你猛地一回头，啊！原来是老王");
	getchar();
	system("cls");
	printf("你：呀！老王，你来的正是时候");
	getchar();
	system("cls");
	printf("老王：哎，现在外面僵尸泛滥成灾，已经没有了任何的网络");
	getchar();
	system("cls");
	printf("老王：只有仅存的几台收音机，但也在僵尸手中...");
	getchar();
	system("cls");
	printf("你：现在还有多少幸存者？");

	getchar();
	system("cls");
	printf("老王深深的叹了口气");
	getchar();
	system("cls");
	printf("老王：你我，皆是幸存者啊");
	getchar();
	system("cls");
	printf("你：那现在还能拯救人类吗");
	getchar();
	system("cls");
	printf("老王：能，但希望渺茫");
	getchar();
	system("cls");
	printf("你：哎，我们先走吧");
	getchar();
	system("cls");
	printf("老王：去哪里啊");
	getchar();
	system("cls");
	printf("你：emm，S城离我们这里最近，去S城吧！");
	getchar();
	system("cls");
	printf("老王：也只有这样了");
	getchar();
	system("cls");
	printf("老王：给你，吹雪，这是物资");
	getchar();
	system("cls");
	printf("你：谢谢");
	getchar();
	system("cls");
	printf("你的弹药：∞");
	getchar();
	system("cls");
	printf("老王：楼梯那里好像有什么东西上来了");
	getchar();
	system("cls");
	printf("你：什么，不会是...");
	getchar();
	system("cls");
	printf("呃&……#^^^");
	getchar();
	system("cls");
	printf("按任意键开始战斗");
	getchar();
	system("cls");
	printf("僵尸情况：中级僵尸\n\n");
	printf("血量：250 攻击力：30（左右） 特效：旋风	难度：高（对于你血量来说）\n");
	int shixue = 250;
	int gongni = 30, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		printf("你向僵尸发起攻击，僵尸血量减少%d", gongji);
		getchar();
		system("cls");
		shixue -= gongji;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 5;
		else gongni -= rand() % 5;
		int t = rand() % 100;//会攻击你 
		if (t > 5) printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		else {
			system("cls");
			int k = rand() % 100;
			printf("僵尸使用狂暴技能，你的血量减少%d", min(k * 2, 100));
			getchar();
			system("cls");
			xue -= k;
		}
		if (t > 5) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			printf("凉凉...");
			getchar();
			system("cls");
			printf("倒下前，只听见老王说：吹雪！...");
			getchar();
			system("cls");
			return;
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("老王：行，收拾一下，我们出发！");
	getchar();
	system("cls");
	printf("三小时以后，你们到达了S城");
	getchar();
	system("cls");
	printf("那里已经不能用荒无人烟与破旧不堪形容了");
	getchar();
	system("cls");
	printf("真是惨不忍睹");
	getchar();
	system("cls");
	printf("老王：那里有一个破屋子，要不要去看看");
	getchar();
	system("cls");
	printf("1.要	2.不要了吧\n");
	scanf("%d", &x);
	if (x == 2) goto no;
	getchar();
	system("cls");
	printf("你们发现了一个角落里有一个匣子");
	getchar();
	system("cls");
	printf("你们打开了它");
	getchar();
	system("cls");
	printf("老王：快看快看啊！！食物！");
	getchar();
	system("cls");
	printf("你们吃完了食物，血量回满");
	xue = man;
	getchar();
	system("cls");
no:
	if (x == 1) {
		printf("你：哎呀，现在可有精神多了啊");
		getchar();
		system("cls");
	}
	printf("老王：走我们接着去看其他地方");
	getchar();
	system("cls");
	printf("“等等...我”");
	getchar();
	system("cls");
	printf("有一个声音传来了");
	getchar();
	system("cls");
	printf("老王：啊，班长！");
	getchar();
	system("cls");
	printf("班长：啊你们怎么在这里啊");
	getchar();
	system("cls");
	printf("你：这不是爆发了丧尸病毒，到这里寻找吗");
	getchar();
	system("cls");
	printf("班长：走，那我们一起");
	getchar();
	system("cls");
	printf("你们三个一同出发了");
	getchar();
	system("cls");
	int k = rand() % 30;
	printf("恭喜完成第二章，S城，血量上线+%d", k);
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
		printf("请先完成第二章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("老王：哎，你们快看看那是什么啊");
	getchar();
	system("cls");
	printf("你拿起了望远镜，看了看：“那是个瓶子”");
	getchar();
	system("cls");
	printf("班长：什么瓶子呢");
	getchar();
	system("cls");
	printf("你：上面有两行字，是舔毛尽离？我看不清");
	getchar();
	system("cls");
	printf("天猫精灵：哎，我在");
	getchar();
	system("cls");
	printf("老王：？");
	getchar();
	system("cls");
	printf("班长：？");
	getchar();
	system("cls");
	printf("你：？");
	getchar();
	system("cls");
	printf("班长：有网络？");
	getchar();
	system("cls");
	printf("你：我这个是不连的");
	getchar();
	system("cls");
	printf("老王：...");
	getchar();
	system("cls");
	printf("班长：...");
	getchar();
	system("cls");
	printf("你：算了我们去看看那个瓶子吧");
	getchar();
	system("cls");
	printf("于是，你们三人一路来到了那个瓶子面前");
	getchar();
	system("cls");
	printf("瓶子上写的：千万...不要&回头.*D");
	getchar();
	system("cls");
	printf("老王：你没看错吗");
	getchar();
	system("cls");
	printf("班长：老...老王。你...回头...看看");
	getchar();
	system("cls");
	printf("呃……#&￥*%￥^");
	getchar();
	system("cls");
	printf("僵尸情况：魔法僵尸\n\n");
	printf("血量：250 攻击力：25（左右） 特效：召唤冰袭	难度：中（对于你血量来说）\n");
	int shixue = 250;
	int gongni = 25, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		printf("你向僵尸发起攻击，僵尸血量减少%d", gongji);
		getchar();
		system("cls");
		shixue -= gongji;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 5;
		else gongni -= rand() % 5;
		int t = rand() % 100;//会攻击你 
		if (t > 5) printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 70) {
				printf("僵尸使用魔法技能，召唤冰袭，你的血量减少%d", k);
				getchar();
				system("cls");
				xue -= k;
			}
			else {
				printf("僵尸使用魔法技能，召唤焰袭，你的血量减少%d", 3 * k);
				getchar();
				system("cls");
				xue -= 3 * k;
			}
		}
		if (t > 5) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			printf("凉凉...");
			getchar();
			system("cls");
			printf("倒下前，只听见老王和班长大呼：吹雪！...");
			getchar();
			system("cls");
			return;
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("你：班长你可是救了我们，让我们回头看了");
	getchar();
	system("cls");
	printf("班长：听你这话怪怪的");
	getchar();
	system("cls");
	printf("老王：哈哈哈哈哈哈哈");
	getchar();
	system("cls");
	printf("你：哈哈哈，不管了，继续前进吧");
	getchar();
	system("cls");
	printf("老王和班长都很奇怪的看着你");
	getchar();
	system("cls");
	printf("班长：去哪里");
	getchar();
	system("cls");
	printf("你：不知道");
	getchar();
	system("cls");
	printf("老王：……*……&*&");
	getchar();
	system("cls");
	printf("你：我们可以到S城边上的围墙那里");
	getchar();
	system("cls");
	printf("你：暂且寻找幸存者躲避僵尸的袭击");
	getchar();
	system("cls");
	printf("老王：好主意");
	getchar();
	system("cls");
	printf("班长：车快没油了");
	getchar();
	system("cls");
	printf("你：没事到那里够了");
	getchar();
	system("cls");
	printf("前方是一个三岔路口，班长：吹雪，往哪里走啊");
	getchar();
	system("cls");
	printf("1.直行	2.左转	3.右转\n");
	scanf("%d", &x);
	if (x == 1) {
		goto yes;
	}
	else {
		printf("你们向那里走去了...");
		getchar();
		system("cls");
		printf("这时候，一群又一群的僵尸包围了你们");
		getchar();
		system("cls");
		printf("你们寡不敌众");
		getchar();
		system("cls");
		printf("终于死在了僵尸底下...");
		getchar();
		system("cls");
		printf("重来一次吧！");
		getchar();
		system("cls");
		return;
	}
yes:
	printf("你们来到了围墙旁边");
	getchar();
	system("cls");
	printf("你（拍拍围墙）：这围墙有点结实吧");
	getchar();
	system("cls");
	printf("老王：要不送你上去？");
	getchar();
	system("cls");
	printf("你：&*&#￥……%￥");
	getchar();
	system("cls");
	printf("班长：哈哈哈");
	getchar();
	system("cls");
	printf("你（气呼呼的）：你们...");
	getchar();
	system("cls");
	printf("老王（笑嘻嘻）：好了，不生气啦");
	getchar();
	system("cls");
	printf("班长：我们去找幸存者吧！");
	getchar();
	system("cls");
	printf("你：好！");
	getchar();
	system("cls");
	printf("于是，你们沿着这一路走了下去...");
	getchar();
	system("cls");
	int k = rand() % 30;
	man += k;
	xue += k;
	if (xue > man) xue = man;
	printf("恭喜完成第三章，S城(2)，血量上限+%d，现在你的血量是%d", k, xue);
	getchar();
	system("cls");
	zuo[3] = 1;
	printf("按任意键继续...");
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
	printf("#代表围墙\n\n");
	printf("----------------------------------------------------------------\n");
	printf("|......MIR公司.....           ...........   #      ...   ...  .|\n");
	printf("|....................   家  ...S城.......   #   ...监狱... . ..|\n");
	printf("|    ............             ..   ......   #   ....... .. . ..|\n");
	printf("|  .........                  ... ...........    #   ##    ..  |\n");
	printf("|                 ...... ..                                    |\n");
	printf("|        ... .......第四大街......          .. ....            |\n");
	printf("|               . ........                  ............X城..  |\n");
	printf("|                  .........                 ......  ... ..... |\n");
	printf("|....D机场.......                                ...           |\n");
	printf("| ... .....  .                                       ... .     |\n");
	printf("|##################### #  #   ##### #                #         |\n");
	printf("|   不明区域. .. ... .. . .... ..             #########        |\n");
	printf("|..... .................                     .... 废墟.... .   |\n");
	printf("|....                                            .........     |\n");
	printf("| ..   生化场所... ...                  .......................|\n");
	printf("|........... . .. .... . . . .                                 |\n");
	printf("----------------------------------------------------------------\n");
	printf("按任意键返回...");
	getchar();
	system("cls");
	return;
}
void wu_jin() {
	getchar();
	system("cls");
	printf("此模式正在开发期...");
	getchar();
	system("cls");
	printf("按任意键返回...");
	getchar();
	system("cls");
	return;
}
void level_4() {
	if (zuo[3] == 0) {
		system("cls");
		printf("请先完成第三章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("你们沿着这一条路走了下去");
	getchar();
	system("cls");
	printf("一路都是破烂不堪的杂草与尸体");
	getchar();
	system("cls");
	printf("突然，你们发现了一群黑洞洞的东西向你们奔来");
	getchar();
	system("cls");
	printf("你：呀！");
	getchar();
	system("cls");
	printf("班长：交给你了，加油！吹雪");
	getchar();
	system("cls");
	printf("僵尸情况：自爆僵尸\n\n");
	printf("血量：500 攻击力：40（左右） 特效：快死时自爆	难度：高（对于你血量来说）\n");
	int shixue = 500;
	int gongni = 40, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		printf("你向僵尸发起攻击，僵尸血量减少%d", gongji);
		getchar();
		system("cls");
		shixue -= gongji;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 50;//会攻击你 
		if (shixue >= t) printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 70) {
				printf("僵尸即将自爆！！！！情做好心理准备！！！！");
				getchar();
				system("cls");
			}
			else {
				printf("轰！！！！！！！！！");
				getchar();
				system("cls");
				printf("你：啊^&&*^%^$......");
				getchar();
				system("cls");
				printf("老王：吹雪！");
				getchar();
				system("cls");
				printf("班长：吹雪！");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 40) {
					printf("死亡不可免的");
					getchar();
					system("cls");
					printf("要不...听我的，再开一把");
					getchar();
					system("cls");
					printf("按任意键继续");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("在他们一段扫射之后，你被救起来了");
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
				printf("凉凉...");
				getchar();
				system("cls");
				printf("倒下前，只听见老王和班长大呼：吹雪！...");
				getchar();
				system("cls");
			}
			else {
				printf("你S了");
				getchar();
				system("cls");
				printf("但在他们一段扫射之后，你被救起来了");
				getchar();
				system("cls");
				xue += 100;
				printf("血量恢复100");
				break;
			}
			return;
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("你：我们打败它了！！");
	getchar();
	system("cls");
	printf("你：耶呼！！");
	getchar();
	system("cls");
	printf("僵尸：别高兴太早，哈哈哈...");
	getchar();
	system("cls");
	printf("你：？？？？？");
	getchar();
	system("cls");
	printf("老王：？？？？？");
	getchar();
	system("cls");
	printf("班长：？？？？？");
	getchar();
	system("cls");
	printf("按任意键开始战斗");
	getchar();
	system("cls");
	printf("僵尸情况：人类僵尸\n\n");
	printf("血量：100 攻击力：10（左右） 特效：无	难度：低（只是测试你的血量够不够用的）\n");
	shixue = 100;
	gongni = 10, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		printf("你向僵尸发起攻击，僵尸血量减少%d", gongji);
		getchar();
		system("cls");
		shixue -= gongji;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 20;
		else gongni -= rand() % 5;
		printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			printf("凉凉...");
			getchar();
			system("cls");
			printf("远处有一个声音传来...：这怎么能凉凉呢...");
			getchar();
			system("cls");
			return;
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("你：吓我一跳，这僵尸好蒻啊");
	getchar();
	system("cls");
	printf("老王：也吓我一跳");
	getchar();
	system("cls");
	printf("班长：也吓我一跳");
	getchar();
	system("cls");
	printf("老王：给你，急救包");
	getchar();
	system("cls");
	printf("你：谢谢");
	getchar();
	system("cls");
	int k = 190 + rand() % 20;
	man = k;
	xue = k;
	printf("你现在的血量是：%d", xue);
	getchar();
	system("cls");
	printf("班长：这里有一把手枪欸！");
	getchar();
	system("cls");
	if (qiang == 0) printf("你：谢谢");
	else printf("你：我有了");
	getchar();
	system("cls");
	printf("班长：*&￥*W&%……");
	getchar();
	system("cls");
	int o = rand() % 100;
	gongji += o;
	if (qiang == 1) gongji -= o;
	qiang = 1;
	printf("你现在的攻击力是%d", gongji);
	getchar();
	system("cls");
	printf("僵尸：还吓我一跳哈哈哈");
	getchar();
	system("cls");
	printf("按任意键发起战斗");
	getchar();
	system("cls");
	printf("僵尸情况：高级僵尸\n\n");
	printf("血量：1000 攻击力：50（左右） 特效：无	难度：高（对于你血量来说）\n");
	shixue = 1000;
	gongni = 50, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		printf("你向僵尸发起攻击，僵尸血量减少%d", gongji);
		getchar();
		system("cls");
		shixue -= gongji;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 50;//会攻击你 
		printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 50) {
				printf("凉凉...");
				getchar();
				system("cls");
				printf("倒下前，只听见老王和班长大呼：吹雪！...");
				getchar();
				system("cls");
			}
			else {
				printf("你S了");
				getchar();
				system("cls");
				printf("但在他们一段扫射之后，你被救起来了");
				getchar();
				system("cls");
				xue += 100;
				printf("血量恢复100");
				break;
			}
			return;
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("“哇，你们好厉害啊”");
	getchar();
	system("cls");
	printf("你：？");
	getchar();
	system("cls");
	printf("班长：？");
	getchar();
	system("cls");
	printf("老王：？");
	getchar();
	system("cls");
	printf("你：这不会又是僵尸吧，人变的");
	getchar();
	system("cls");
	printf("老王：都被打怕了哈哈哈");
	getchar();
	system("cls");
	printf("“哎呀是我，总监！”");
	getchar();
	system("cls");
	printf("老王：啊总监你怎么来了");
	getchar();
	system("cls");
	printf("总监：哈哈，我一直就躲在这里，寻找幸存者呢");
	getchar();
	system("cls");
	printf("班长：哎，那我们正好一起走哈");
	getchar();
	system("cls");
	printf("总监：好的没问题");
	getchar();
	system("cls");
	printf("你：真开心，又增添了一个队友");
	getchar();
	system("cls");
	printf("老王：哈哈哈");
	getchar();
	system("cls");
	printf("你：那我们接下来去干什么呀，这里也就你一个幸存者了吧");
	getchar();
	system("cls");
	printf("总监：是的，我都找过了");
	getchar();
	system("cls");
	printf("班长：我记得废墟那面的地势都是山，居高临下好看东西，我们去废墟吧");
	getchar();
	system("cls");
	printf("你：好呀");
	getchar();
	system("cls");
	printf("总监：给，这是一些食物");
	getchar();
	system("cls");
	k = rand() % 10 + 30;
	xue += k;
	if (xue > man) xue = man;
	printf("你吃了那些食物，血量是%d", xue);
	getchar();
	system("cls");
	printf("恭喜完成第四章，幸存者");
	getchar();
	system("cls");
	s = 20 + rand() % 5;
	man += s;
	xue += s;
	printf("血量上线+%d", s);
	getchar();
	system("cls");
	zuo[4] = 1;
	printf("按任意键继续...");
	getchar();
	system("cls");
	return;
}
void level_5() {
	if (zuo[4] == 0) {
		system("cls");
		printf("请先完成第四章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("老王：你记不记得废墟那里有很多的城墙");
	getchar();
	system("cls");
	printf("班长：记得");
	getchar();
	system("cls");
	printf("总监：记得");
	getchar();
	system("cls");
	printf("你：嗯呐");
	getchar();
	system("cls");
	printf("老王：我们就在那个城墙的上面打僵尸吧");
	getchar();
	system("cls");
	printf("总监：好主意");
	getchar();
	system("cls");
	printf("班长（看了看表）：什么时候才能到啊");
	getchar();
	system("cls");
	printf("老王：你看那是什么");
	getchar();
	system("cls");
	printf("班长：这就到了？？？");
	getchar();
	system("cls");
	printf("你：我们快下车吧");
	getchar();
	system("cls");
	printf("总监等一下，车门旁边的那个东西是...");
	getchar();
	system("cls");
	printf("你：交给我了");
	getchar();
	system("cls");
	printf("老王：哎，对了，这是瓶红牛，给你");
	getchar();
	system("cls");
	printf("你：谢谢");
	getchar();
	system("cls");
	int k = rand() % 100;
	xue += k;
	if (xue > man) xue = man;
	printf("你的血量是：%d", xue);
	printf("僵尸情况：高级僵尸\n\n");
	printf("血量：1000 攻击力：50（左右） 特效：无	难度：高（对于你血量来说）\n");
	int shixue = 1000;
	int gongni = 50, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		printf("你向僵尸发起攻击，僵尸血量减少%d", gongji);
		getchar();
		system("cls");
		shixue -= gongji;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 50;//会攻击你 
		printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int d = rand() % 3;
			if (d == 2) {
				printf("你被僵尸击倒了");
				getchar();
				system("cls");
				printf("老王：班长，总监，我们上啊...");
				getchar();
				system("cls");
				printf("十分钟后，他们干掉了僵尸，救起了你");
				getchar();
				system("cls");
				int k = rand() % 200;
				xue += k;
				if (xue > man) xue = man;
				printf("他们给你了一点药药，你的血量回升到了%d", xue);
				getchar();
				system("cls");
				printf("血量上线+20");
				man += 20;
				getchar();
				system("cls");
				break;
			}
			printf("凉凉...");
			getchar();
			system("cls");
			printf("倒下前，只听见老王和班长大呼：吹雪！...");
			getchar();
			system("cls");
			return;
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("你：tmd怎么这么多的高级僵尸啊");
	getchar();
	system("cls");
	printf("老王：哎对对对");
	getchar();
	system("cls");
	printf("班长：哎对对对");
	getchar();
	system("cls");
	printf("总监：哎对对对");
	getchar();
	system("cls");
	printf("你：哎错错错");
	getchar();
	system("cls");
	printf("老王和班长说：走吧，别浪费时间了，围墙就在前面！");
	getchar();
	system("cls");
	printf("总监：我们爬到山上，埋伏在围墙后面");
	getchar();
	system("cls");
	printf("你：好，就是不知道僵尸会不会从后边偷袭我们");
	getchar();
	system("cls");
	printf("老王：没事我守着");
	getchar();
	system("cls");
	printf("班长：老王，你保重啊");
	getchar();
	system("cls");
	printf("老王到了围墙后面，注视着一切");
	getchar();
	system("cls");
	printf("你：走，我们到围墙后面");
	getchar();
	system("cls");
	printf("总监：给，我这里有个对讲机，老王，有消息告诉我们哈");
	getchar();
	system("cls");
	printf("走出老远的老王打了个ok的手势：没问题的");
	getchar();
	system("cls");
	printf("于是，你们各司其职去了");
	getchar();
	system("cls");
	k = rand() % 15;
	man += k;
	xue = man;
	printf("恭喜完成第五章，血量上线+%d，你现在的血量是%d", k, xue);
	getchar();
	system("cls");
	printf("按任意键继续...");
	zuo[5] = 1;
	getchar();
	system("cls");
	return;
}
void level_6() {
	if (zuo[5] == 0) {
		system("cls");
		printf("请先完成第五章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
	printf("你们仔细的听着对讲机里的动静");
	getchar();
	system("cls");
	printf("突然，老王：有一个黑洞洞的东西朝我们这里走来了");
	getchar();
	system("cls");
	printf("你：离你多远，大不大？");
	getchar();
	system("cls");
	printf("老王：离我200米，很小");
	getchar();
	system("cls");
	printf("班长：那就看你的了");
	getchar();
	system("cls");
	printf("老王：好的");
	getchar();
	system("cls");
	printf("过了一会...");
	getchar();
	system("cls");
	printf("你：你们看前面的那个是什么？");
	getchar();
	system("cls");
	printf("班长：是...");
	getchar();
	system("cls");
	printf("按任意键发起战斗");
	getchar();
	system("cls");
	printf("僵尸情况：自爆僵尸\n\n");
	printf("血量：500 攻击力：40（左右） 特效：快死时自爆	难度：高（对于你血量来说）\n");
	int shixue = 500;
	int gongni = 40, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		printf("你、班长、总监向僵尸发起攻击，僵尸血量减少%d", gongji * 3);
		getchar();
		system("cls");
		shixue -= gongji * 3;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 50;//会攻击你 
		if (shixue >= t) printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 70) {
				printf("僵尸即将自爆！！！！情做好心理准备！！！！");
				getchar();
				system("cls");
			}
			else {
				printf("轰！！！！！！！！！");
				getchar();
				system("cls");
				printf("你：啊^&&*^%^$......");
				getchar();
				system("cls");
				printf("老王：吹雪！");
				getchar();
				system("cls");
				printf("班长：吹雪！");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 40) {
					printf("死亡不可免的");
					getchar();
					system("cls");
					printf("要不...听我的，再开一把");
					getchar();
					system("cls");
					printf("按任意键继续");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("在他们一段扫射之后，你被救起来了");
					break;
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			printf("凉凉...");
			getchar();
			system("cls");
			printf("倒下前，只听见老王和班长大呼：吹雪！...");
			getchar();
			system("cls");
			return;
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("班长：还不是我们一起打的，给你点弹药与粮食");
	getchar();
	system("cls");
	xue = man + 20;
	man += 20;
	if (xue < man) xue = man;
	gongji += 18;
	printf("你：3Q");
	getchar();
	system("cls");
	printf("你：这个僵尸有点弱啊");
	getchar();
	system("cls");
	printf("“嘿嘿，如果它蒻...我就不弱了...”");
	getchar();
	system("cls");
	printf("按任意键发起战斗");
	getchar();
	system("cls");
	printf("僵尸情况：震天地僵尸\n\n");
	printf("血量：1500 攻击力：70（左右） 特效：无	难度：高（对于你们血量来说）\n");
	shixue = 1500;
	gongni = 70, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
	getchar();
	system("cls");
	s = rand() % 100;
	if (s & 1) shixue += rand() % 5;
	else shixue -= rand() % 5;
	getchar();
	while (1) {
		if (shixue <= 1000) {
			printf("老王：我来啦！！！！！");
			getchar();
			system("cls");
			printf("老王加入，攻击力+100");
			gongji += 100;
		}
		int k = rand() % 100, q = k;
		if (k < 50) gongji += rand() % 30;
		else gongji -= rand() % 10;
		printf("你、班长、总监向僵尸发起攻击，僵尸血量减少%d", gongji * 3);
		getchar();
		system("cls");
		shixue -= gongji * 3;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 50;//会攻击你 
		printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			printf("凉凉...");
			getchar();
			system("cls");
			printf("倒下前，只听见老王和班长大呼：吹雪！...");
			getchar();
			system("cls");
			return;
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	gongji -= 100;
	printf("总监：可算打死了");
	getchar();
	system("cls");
	printf("你：现在的僵尸吓死人了");
	getchar();
	system("cls");
	printf("老王：对了，我刚才从那个僵尸身上找到了一个收音机，快！我们一起听听");
	getchar();
	system("cls");
	printf("你们把耳朵凑了过去");
	getchar();
	system("cls");
	printf("“S...城作为...首都...”");
	getchar();
	system("cls");
	printf("遭到....重...打击");
	getchar();
	system("cls");
	printf("它...的沦陷...");
	getchar();
	system("cls");
	printf("只...时间...问题...");
	getchar();
	system("cls");
	printf("你们三人面面相觑");
	getchar();
	system("cls");
	printf("老王：哎，我们赶紧去支援首都吧，顺便找点幸存者！");
	getchar();
	system("cls");
	printf("你：好");
	getchar();
	system("cls");
	printf("班长：好");
	getchar();
	system("cls");
	printf("总监：好");
	getchar();
	system("cls");
	int k = rand() % 20;
	printf("恭喜完成第六章，首都，攻击力+%d，血量回满", k);
	xue = man;
	zuo[6] = 1;
	printf("按任意键继续...");
	getchar();
	system("cls");
	return;
}
void level_7() {
	if (zuo[6] == 0) {
		system("cls");
		printf("请先完成第六章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("你们找到了你们的车");
	getchar();
	system("cls");
	printf("班长：我就说吧，车没油了");
	getchar();
	system("cls");
	printf("老王：啊这");
	getchar();
	system("cls");
	printf("总监：我有啊");
	getchar();
	system("cls");
	printf("老王；？");
	getchar();
	system("cls");
	printf("班长：？");
	getchar();
	system("cls");
	printf("你：？");
	getchar();
	system("cls");
	printf("总监（笑嘻嘻）：就怪了");
	getchar();
	system("cls");
	printf("老王：md，这能开玩笑吗");
	getchar();
	system("cls");
	printf("班长：算了，S城离我们也很近，走过去吧");
	getchar();
	system("cls");
	printf("你：但是容易遭到僵尸的侵袭");
	getchar();
	system("cls");
	printf("老王：只要不出来那种能夺走你武器的僵尸就行");
	getchar();
	system("cls");
	printf("于是，你们四人朝着S城走去了");
	getchar();
	system("cls");
	printf("突然的，老王说：我怎么感觉有点害怕");
	getchar();
	system("cls");
	printf("班长：me too...");
	getchar();
	system("cls");
	printf("你：走吧，不用怕了");
	getchar();
	system("cls");
	printf("总监：是啊是啊");
	getchar();
	system("cls");
	printf("老王：我有点饿了");
	getchar();
	system("cls");
	printf("班长：我有食物");
	getchar();
	system("cls");
	printf("老王：算了，我忍忍，给吹雪留着吧");
	getchar();
	system("cls");
	printf("你：哎呀，老王，你也得吃啊");
	getchar();
	system("cls");
	printf("僵尸：给我吃吧...");
	getchar();
	system("cls");
	printf("按任意键发起战斗");
	getchar();
	system("cls");
	printf("僵尸情况：震天地僵尸\n\n");
	printf("血量：1500 攻击力：70（左右） 特效：每回合让你的攻击力少10（左右）	难度：高（对于你们血量来说）\n");
	int shixue = 1500;
	int gongni = 70, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		printf("你、班长、总监向僵尸发起攻击，僵尸血量减少%d", gongji * 3);
		getchar();
		system("cls");
		shixue -= gongji * 3;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^&^%E#$监狱SE&*$%第一墙SDF*(#*$)物资#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 50;//会攻击你 
		printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			printf("凉凉...");
			getchar();
			system("cls");
			int q = rand() % 100;
			if (q & 1) {
				printf("倒下前，只听见老王和班长大呼：吹雪！...");
				getchar();
				system("cls");
			}
			else {
				printf("最终你被他们救起来了...");
			}
			return;
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		int kk = rand() % 15;
		getchar();
		system("cls");
		printf("过了一个回合，僵尸使用技能，你的攻击力减少%d", kk);
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("老王：什么？它说什么");
	getchar();
	system("cls");
	printf("班长：监狱第一墙啥物资？");
	getchar();
	system("cls");
	printf("总监：监狱的一堵墙上有物资");
	getchar();
	system("cls");
	printf("你：那肯定都是我的啊！");
	getchar();
	system("cls");
	printf("班长：SDF(*$T%$)");
	getchar();
	system("cls");
	printf("老王：hhh");
	getchar();
	system("cls");
	printf("总监：*(%$IED)");
	getchar();
	system("cls");
	printf("老王：好啦，走吧");
	getchar();
	system("cls");
	printf("你：不是，我们不是要保护首都的吗");
	getchar();
	system("cls");
	printf("老王沉思半晌，说：总监，你和班长留下来保护首都，我和吹雪去找物资");
	getchar();
	system("cls");
	printf("总监、班长：ok");
	getchar();
	system("cls");
	printf("于是，你和老王一起去了监狱");
	getchar();
	system("cls");
	printf("而总监和班长就留在了首都");
	getchar();
	system("cls");
	printf("对了，经过刚才僵尸的撤销攻击力，你现在还剩%d的攻击力", gongji);
	getchar();
	system("cls");
	int qwq = rand() % 15;
	printf("奖励你攻击力%d", 2 * qwq);
	gongji += qwq * 2;
	getchar();
	system("cls");
	printf("什么？你还想要血量？？？");
	getchar();
	system("cls");
	xue = man;
	printf("好吧，你现在的血量是%d", xue);
	getchar();
	system("cls");
	int k = rand() % 30;
	man += k;
	printf("恭喜完成第7章，首都(2)，血量上线+%d", k);
	getchar();
	system("cls");
	printf("按任意键继续...");
	getchar();
	system("cls");
	zuo[7] = 1;
	return;
}
void level_8() {
	if (zuo[7] == 0) {
		system("cls");
		printf("请先完成第六章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("老王：你看，前面就到了");
	getchar();
	system("cls");
	printf("你：wcao，这么快");
	getchar();
	system("cls");
	printf("老王：满打满算，走了100min，你说这快");
	getchar();
	system("cls");
	printf("你：想当年我金戈铁马，1000min都不算啥。早上起床不洗脸，晚上睡觉不刷牙");
	getchar();
	system("cls");
	printf("老王：前两句凡尔赛，后两句有点拽");
	getchar();
	system("cls");
	printf("你：...");
	getchar();
	system("cls");
	printf("老王：去看看城墙上有什么好玩意");
	getchar();
	system("cls");
	printf("你：呜呜，我怕怕");
	getchar();
	system("cls");
	printf("老王：唉，算了，我去看看吧");
	getchar();
	system("cls");
	printf("老王：你女的男的");
	getchar();
	system("cls");
	printf("你：喵呜");
	getchar();
	system("cls");
	printf("老王（慢慢走远）：你你你");
	getchar();
	system("cls");
	printf("老王：你你你身后有个...");
	getchar();
	system("cls");
	printf("老王：快跑啊！！！");
	getchar();
	system("cls");
	printf("你：我跑不掉啦！！！");
	getchar();
	system("cls");
	printf("按任意键开始战斗...");
	getchar();
	system("cls");
	printf("僵尸情况：灭霸僵尸\n\n");
	printf("血量：∞ 攻击力：∞ 特效：无	难度：高\n");
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按1发起战斗	2逃跑\n");
	scanf("%d", &x);
	system("cls");
	getchar();
	if (x == 1) {
		printf("你觉得能跑掉是吧");
		getchar();
		system("cls");
		printf("你体力不支，S了");
		getchar();
		system("cls");
		printf("按任意键返回...");
		getchar();
		system("cls");
		return;
	}
	printf("请快速按Enter键！！！如果速度快则逃跑！！！");
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
		printf("你逃脱了...");
	}
	else {
		printf("你最终没能逃脱");
		getchar();
		system("cls");
		printf("远处传来一个声音：是不是该放弃了呢...");
		getchar();
		system("cls");
		printf("按任意键返回...");
		getchar();
		system("cls");
		return;
	}
	getchar();
	system("cls");
	printf("老王：快来快来！！！两个UZI！！！");
	getchar();
	system("cls");
	int k = rand() % 10 + 90;
	printf("获得UZI冲锋枪，攻击力+%d", k);
	getchar();
	system("cls");
	printf("你：这一下真是收获打了，我们快回去吧！！！");
	getchar();
	system("cls");
	printf("于是，你们回去了...");
	getchar();
	system("cls");
	k = rand() % 20;
	printf("恭喜完成第八章，监狱，血量上线+%d", k);
	man += k;
	xue = man;
	zuo[8] = 1;
	getchar();
	system("cls");
	printf("按任意键继续...");
	getchar();
	system("cls");
	return;
}
void level_9() {
	if (zuo[8] == 0) {
		system("cls");
		printf("请先完成第八章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("你们又经过了一路折腾，回到了他们那里");
	getchar();
	system("cls");
	printf("老王：恩木...我怎么没看到他们呢");
	getchar();
	system("cls");
	printf("你紧张起来：什么，难道...");
	getchar();
	system("cls");
	printf("你：现在是夜里，看不清东西，我们要不然到白天再说？");
	getchar();
	system("cls");
	printf("老王：机不可失，时不再来，必须立刻行动");
	getchar();
	system("cls");
	printf("你咬牙说到：我真的是累了啊！");
	getchar();
	system("cls");
	printf("老王慢慢的转过头，看着你：那我去了，你多保重");
	getchar();
	system("cls");
	printf("你：老王你...");
	getchar();
	system("cls");
	printf("老王：这是UZI，都给你，一定保重啊");
	getchar();
	system("cls");
	printf("你决定：1.算了，和他一起走	2.谢谢他，留下UZI\n");
	scanf("%d", &x);
	system("cls");
	if (x == 2) {
		printf("你：谢谢你");
		getchar();
		system("cls");
		printf("老王拍拍你的头说：多保重啊");
		getchar();
		system("cls");
		printf("......");
		getchar();
		system("cls");
		printf("“吹雪”“吹雪醒醒”");
		getchar();
		system("cls");
		printf("你慢慢的睁开眼睛，已经是第二天了");
		getchar();
		system("cls");
		printf("总监：你没事吧");
		getchar();
		system("cls");
		printf("你：我没事啊");
		getchar();
		system("cls");
		printf("班长突然大发雷霆：你拿着两把枪？？？两把枪？？？你连老王都不给他...他...他他...");
		getchar();
		system("cls");
		printf("总监：你真是的，哎...");
		getchar();
		system("cls");
		printf("你立刻紧张起来：老王他...");
		getchar();
		system("cls");
		printf("班长：他应为你死了！！！！");
		getchar();
		system("cls");
		printf("愤怒的班长一把抢过UZI，扫射死了你");
		getchar();
		system("cls");
		printf("你S了");
		getchar();
		system("cls");
		printf("按任意键返回...");
		getchar();
		system("cls");
		return;
	}
	printf("老王：好，那我们一起");
	getchar();
	system("cls");
	printf("你：快看...那是....");
	getchar();
	system("cls");
	printf("远处，一群黑压压的吸血蝙蝠飞来了");
	getchar();
	system("cls");
	printf("一直按Enter键和蝙蝠搏斗");
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
			printf("你在和蝙蝠搏斗中，受到重伤");
			getchar();
			int q = rand() % 10;
			if (q & 1) {
				system("cls");
				printf("但是，你最终被救起来了");
				break;
			}
			else {
				system("cls");
				printf("按任意键返回...");
				getchar();
				system("cls");
			}
			return;
		}
		printf("血量剩余：%d", xue);
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
		printf("恭喜达成彩蛋：0血复活！");
		getchar();
		system("cls");
		int k = rand() % 10000;
		xue += k * k;
		gongji += k * 2;
		printf("你的血量：%d	你的攻击力：%d", xue, gongji);
		getchar();
		system("cls");
	}
	printf("你：呼，好险");
	getchar();
	system("cls");
	printf("老王：是啊是啊");
	getchar();
	system("cls");
	printf("你：快看，总监他们在那里！");
	getchar();
	system("cls");
	printf("老王：哇！");
	getchar();
	system("cls");
	printf("总监：你们拿到了什么好东西啊？");
	getchar();
	system("cls");
	printf("你笑嘻嘻的递给总监：看，UZI！");
	getchar();
	system("cls");
	printf("班长：哇，你们真棒哦");
	getchar();
	system("cls");
	printf("总监心疼的摸摸你说：有没有遇到什么苦难啊");
	getchar();
	system("cls");
	printf("你：差点死了！");
	getchar();
	system("cls");
	printf("总监：啊啊啊？");
	getchar();
	system("cls");
	printf("总监：给你止血包");
	getchar();
	system("cls");
	xue = man;
	printf("血量：%d", xue);
	man += 10;
	getchar();
	system("cls");
	printf("老王：我们接下来的计划是...");
	getchar();
	system("cls");
	printf("班长和总监同时笑着说到：保卫首都啊！");
	getchar();
	system("cls");
	printf("班长：我们刚才还见到张报纸");
	getchar();
	system("cls");
	printf("你：写的什么");
	getchar();
	system("cls");
	printf("“现在，全世界布满着ATO病毒，造成了十分严重的伤害”");
	getchar();
	system("cls");
	printf("老王：ATO？");
	getchar();
	system("cls");
	printf("你：这是个专有名词吗");
	getchar();
	system("cls");
	printf("总监：是个转悠的名词");
	getchar();
	system("cls");
	printf("老王：&E*%$%#$ID");
	getchar();
	system("cls");
	printf("你：哈哈哈哈哈");
	getchar();
	system("cls");
	printf("班长：那我们就赶紧动身保护首都吧！");
	getchar();
	system("cls");
	printf("你：ok！");
	getchar();
	system("cls");
	int k = rand() % 100;
	printf("恭喜完成第9章，ATO病毒，血量上线+%d", k);
	getchar();
	system("cls");
	printf("按任意键继续...");
	getchar();
	system("cls");
	zuo[9] = 1;
	return;
}
void level_10() {
	if (zuo[9] == 0) {
		system("cls");
		printf("请先完成第九章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("老王：吹雪，你身后...");
	getchar();
	system("cls");
	printf("呃~~~~~````");
	getchar();
	system("cls");
	printf("按任意键开始战斗...");
	getchar();
	system("cls");
	printf("僵尸情况：幻影自爆僵尸\n\n");
	printf("血量：25500 攻击力：50（左右） 特效：快死时自爆	难度：高（对于你血量来说）\n");
	int shixue = 25500;
	int gongni = 50, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		printf("你、老王、班长、总监向僵尸发起攻击，僵尸疯狂承受伤害%d", gongji * 4);
		getchar();
		system("cls");
		shixue -= gongji;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 300;//会攻击你 
		if (shixue >= t) printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 70) {
				printf("僵尸即将自爆！！！！情做好心理准备！！！！");
				getchar();
				system("cls");
			}
			else {
				printf("轰！！！！！！！！！");
				getchar();
				system("cls");
				printf("你：啊^&&*^%^$......");
				getchar();
				system("cls");
				printf("老王：吹雪！");
				getchar();
				system("cls");
				printf("班长：吹雪！");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 60) {
					printf("死亡不可免的");
					getchar();
					system("cls");
					printf("要不...听我的，再开一把");
					getchar();
					system("cls");
					printf("按任意键继续");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("但在他们一段扫射之后，你被救起来了");
					getchar();
					system("cls");
					xue += 100;
					printf("血量恢复100");
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
				printf("凉凉...");
				getchar();
				system("cls");
				printf("倒下前，只听见老王和班长大呼：吹雪！...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("你被扫射倒了");
				getchar();
				system("cls");
				printf("但在他们一段扫射之后，你被救起来了，接着打！");
				getchar();
				system("cls");
				int qqq = rand() % 1000;
				xue += qqq;
				printf("血量恢复%d", qqq);
			}
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("老王：那里！");
	getchar();
	system("cls");
	getchar();
	system("cls");
	printf("僵尸情况：魔鬼自爆僵尸\n\n");
	printf("血量：50000 攻击力：100（左右） 特效：快死时自爆	难度：高（对于你血量来说）\n");
	shixue = 50000;
	gongni = 100, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		printf("你、老王、班长、总监向僵尸发起攻击，僵尸疯狂承受伤害%d", gongji * 4);
		getchar();
		system("cls");
		shixue -= gongji;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 300;//会攻击你 
		if (shixue >= t) printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 50) {
				printf("僵尸即将自爆！！！！情做好心理准备！！！！");
				getchar();
				system("cls");
			}
			else {
				printf("轰！！！！！！！！！");
				getchar();
				system("cls");
				printf("你：啊^&&*^%^$......");
				getchar();
				system("cls");
				printf("老王：吹雪！");
				getchar();
				system("cls");
				printf("班长：吹雪！");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 60) {
					printf("死亡不可免的");
					getchar();
					system("cls");
					printf("要不...听我的，再开一把");
					getchar();
					system("cls");
					printf("按任意键继续");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("但在他们一段扫射之后，你被救起来了");
					getchar();
					system("cls");
					xue += 100;
					printf("血量恢复100");
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
				printf("凉凉...");
				getchar();
				system("cls");
				printf("倒下前，只听见老王大呼：吹雪！...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("你被扫射倒了");
				getchar();
				system("cls");
				printf("但在他们一段扫射之后，你被救起来了，接着打！");
				getchar();
				system("cls");
				int qqq = rand() % 1000;
				xue += qqq;
				printf("血量恢复%d", qqq);
			}
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("班长：快快快，那里又来僵尸了，大家补点血！");
	getchar();
	system("cls");
	int k = rand() % 1000;
	xue += k;
	printf("血量为：%d", xue);
	getchar();
	system("cls");
	printf("僵尸情况：自爆僵尸BOSS\n\n");
	printf("血量：150000 攻击力：150（左右） 特效：实时自爆	难度：高（对于你血量来说）\n");
	shixue = 150000;
	gongni = 150, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		printf("你、老王、班长、总监向僵尸发起攻击，僵尸疯狂承受伤害%d", gongji * 4);
		getchar();
		system("cls");
		shixue -= gongji;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//会攻击你 
		if (shixue >= t) printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("僵尸即将自爆！！！！情做好心理准备！！！！");
				getchar();
				system("cls");
			}
			else {
				printf("轰！！！！！！！！！");
				getchar();
				system("cls");
				printf("你：啊^&&*^%^$......");
				getchar();
				system("cls");
				printf("老王：吹雪！");
				getchar();
				system("cls");
				printf("班长：吹雪！");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 80) {
					printf("死亡不可免的");
					getchar();
					system("cls");
					printf("要不...听我的，再开一把");
					getchar();
					system("cls");
					printf("按任意键继续");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("但在他们一段扫射之后，你被救起来了");
					getchar();
					system("cls");
					xue += 100;
					printf("血量恢复100");
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
				printf("凉凉...");
				getchar();
				system("cls");
				printf("倒下前，只听见老王大呼：吹雪！...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("你S了");
				getchar();
				system("cls");
				printf("但在他们一段扫射之后，你被救起来了");
				getchar();
				system("cls");
				xue += 10000;
				printf("血量恢复10000");
			}
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("总监：大家快吃点食物，补点子弹");
	getchar();
	system("cls");
	k = rand() % 1000;
	xue += k;
	gongji += k;
	printf("血量：%d	攻击力：%d", xue, gongji);
	getchar();
	system("cls");
	getchar();
	system("cls");
	printf("僵尸情况：自爆僵尸BOSS\n\n");
	printf("血量：150000 攻击力：150（左右） 特效：实时自爆，会屏蔽伤害	难度：高（对于你血量来说）\n");
	shixue = 150000;
	gongni = 150, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		if (k & 1) printf("你、老王、班长、总监向僵尸发起攻击，僵尸疯狂承受伤害%d", gongji * 8);
		else printf("僵尸屏蔽了你的伤害");
		getchar();
		system("cls");
		if (k & 1) shixue -= gongji;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//会攻击你 
		if (shixue >= t * 3) printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("僵尸即将自爆！！！！情做好心理准备！！！！");
				getchar();
				system("cls");
			}
			else {
				printf("轰！！！！！！！！！");
				getchar();
				system("cls");
				printf("你：啊^&&*^%^$......");
				getchar();
				system("cls");
				printf("老王：吹雪！");
				getchar();
				system("cls");
				printf("班长：吹雪！");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 70) {
					printf("死亡不可免的");
					getchar();
					system("cls");
					printf("要不...听我的，再开一把");
					getchar();
					system("cls");
					printf("按任意键继续");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("但在他们一段扫射之后，你被救起来了");
					getchar();
					system("cls");
					xue += 1000;
					printf("血量恢复1000");
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
				printf("凉凉...");
				getchar();
				system("cls");
				printf("倒下前，只听见老王大呼：吹雪！...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("你S了");
				getchar();
				system("cls");
				printf("但在他们一段扫射之后，你被救起来了");
				getchar();
				system("cls");
				xue += 10000;
				printf("血量恢复10000");
				break;
			}
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("总监：呼，终于打掉了几个BOSS...");
	getchar();
	system("cls");
	printf("班长：接下来，我们需要寻找更多的僵尸！");
	getchar();
	system("cls");
	printf("老王：好的！");
	getchar();
	system("cls");
	printf("于是，你们寻找了起来");
	getchar();
	system("cls");
	k = rand() % 2000;
	printf("恭喜完成第10章，ATO病毒(2)，这关最难了！！血量上限和攻击力+%d", k);
	man += k;
	gongji += k;
	getchar();
	system("cls");
	printf("按任意键继续...");
	zuo[10] = 1;
	xue = man;
	getchar();
	system("cls");
	return;
}
void level_11() {
	if (zuo[10] == 0) {
		system("cls");
		printf("请先完成第十章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("老王：这是什么？");
	getchar();
	system("cls");
	printf("班长把脑袋挤了进去：这是...收音机？");
	getchar();
	system("cls");
	printf("总监：快打开听听...");
	getchar();
	system("cls");
	printf("“你好...我是...”");
	getchar();
	system("cls");
	printf("我被所...困");
	getchar();
	system("cls");
	printf("于......第四大...街");
	getchar();
	system("cls");
	printf("有人救救...");
	getchar();
	system("cls");
	printf("你：有人求救！");
	getchar();
	system("cls");
	printf("老王：我们应该先去救他！");
	getchar();
	system("cls");
	printf("总监：快快！");
	getchar();
	system("cls");
	printf("班长：发车发车快快快");
	getchar();
	system("cls");
	printf("你：没油了好吧");
	getchar();
	system("cls");
	printf("班长：没事，还够用的");
	getchar();
	system("cls");
	printf("于是，你们发车去了第四大街");
	getchar();
	system("cls");
	printf("当天晚上，你们到达了第四大街");
	getchar();
	system("cls");
	printf("之间这里都是荒草，一片狼藉");
	getchar();
	system("cls");
	printf("总监摇了摇头");
	getchar();
	system("cls");
	printf("你们停下了车，一路前进");
	getchar();
	system("cls");
	printf("前方杂草丛生，可能有危险");
	getchar();
	system("cls");
	printf("系统：你决定怎么做呢");
	getchar();
	system("cls");
	printf("系统：当然是和老王、总监、班长并肩前行啦");
	getchar();
	system("cls");
	printf("你：...");
	getchar();
	system("cls");
	printf("老王：嘿，吹雪快来看这是什么！");
	getchar();
	system("cls");
	printf("你跑过去一看，发现是M27！！！");
	getchar();
	system("cls");
	printf("你：我草！");
	getchar();
	system("cls");
	printf("老王：正好四把，没人一把，来！");
	getchar();
	system("cls");
	int k = rand() % 1000;
	printf("收到M27，攻击力增加%d", k);
	gongji += k;
	getchar();
	system("cls");
	printf("你：快看，前面那是什么！！？？");
	getchar();
	system("cls");
	printf("呃``&&&`^FD");
	getchar();
	system("cls");
	printf("按任意键发起战斗...");
	getchar();
	system("cls");
	printf("僵尸情况：干扰僵尸\n\n");
	printf("血量：5000 攻击力：50（左右） 特效：干扰伤害，会屏蔽伤害	难度：高（对于你血量来说）\n");
	int shixue = 5000;
	int gongni = 50, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		if (k & 1) printf("你、老王、班长、总监向僵尸发起攻击，僵尸疯狂承受伤害%d", gongji * 4);
		else if (k > 50)printf("僵尸屏蔽了你的伤害");
		else {
			printf("僵尸使用技能：干扰");
			getchar();
			system("cls");
			printf("有被干扰到");
			getchar();
			system("cls");
			gongji /= 2;
			printf("你还剩余攻击力：%d", gongji);
		}
		getchar();
		system("cls");
		if (k & 1)shixue -= gongji;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//会攻击你 
		if (shixue >= t * 3) printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("僵尸即将自爆！！！！情做好心理准备！！！！");
				getchar();
				system("cls");
			}
			else {
				printf("轰！！！！！！！！！");
				getchar();
				system("cls");
				printf("你：啊^&&*^%^$......");
				getchar();
				system("cls");
				printf("老王：吹雪！");
				getchar();
				system("cls");
				printf("班长：吹雪！");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 40) {
					printf("死亡不可免的");
					getchar();
					system("cls");
					printf("要不...听我的，再开一把");
					getchar();
					system("cls");
					printf("按任意键继续");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("但在他们一段扫射之后，你被救起来了");
					getchar();
					system("cls");
					xue += 1000;
					printf("血量恢复1000");
					getchar();
					system("cls");
					printf("接着打！！！");
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("凉凉...");
				getchar();
				system("cls");
				printf("倒下前，只听见老王大呼：吹雪！...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("你死了");
				getchar();
				system("cls");
				printf("但在他们一段扫射之后，你被救起来了");
				getchar();
				system("cls");
				xue += 10000;
				printf("血量恢复10000");
				break;
			}
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
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
	printf("你还剩余攻击力：%d", gongji);
	getchar();
	system("cls");
	s = rand() % 1000;
	gongji += s;
	printf("赠你攻击力：%d", s);
	getchar();
	system("cls");
	printf("你：现在去哪里？");
	getchar();
	system("cls");
	printf("老王：陪我打基地");
	getchar();
	system("cls");
	printf("班长：萨瓦迪卡是问题");
	getchar();
	system("cls");
	printf("总监：万事还得我来袭");
	getchar();
	system("cls");
	printf("你：你们有病我在好好的问你们问题");
	getchar();
	system("cls");
	printf("老王：而我还梦幻在青青草原把马骑");
	getchar();
	system("cls");
	printf("你：你他妈，我们这是正经事滴");
	getchar();
	system("cls");
	printf("总监：好了不玩了，我们接着去找ATO的问题");
	getchar();
	system("cls");
	printf("你：...");
	getchar();
	system("cls");
	printf("班长：搭配不错");
	getchar();
	system("cls");
	printf("老王：那是当然滴");
	getchar();
	system("cls");
	printf("恭喜完成第11章，第四大街，血量上限+20");
	man += 20;
	xue = man;
	gongji += rand() % 100;
	getchar();
	system("cls");
	printf("你现在的攻击力是%d", gongji);
	getchar();
	system("cls");
	zuo[11] = 1;
	printf("按任意键继续...");
	getchar();
	system("cls");
	return;
}
void level_12() {
	if (zuo[11] == 0) {
		system("cls");
		printf("请先完成第十一章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("老王：嗯木……前面有一个感染者");
	getchar();
	system("cls");
	printf("你：不过...他看起来没有伤害我的意思");
	getchar();
	system("cls");
	printf("总监：老王你说什么玩意，那是幸存者啊！！");
	getchar();
	system("cls");
	printf("你向他招手：过来啊，过来啊");
	getchar();
	system("cls");
	printf("老王：好了，他来了");
	getchar();
	system("cls");
	printf("班长：不好！他是感染者！");
	getchar();
	system("cls");
	printf("僵尸情况：感染者\n\n");
	printf("血量：5000 攻击力：50（左右） 特效：自爆、屏蔽伤害 难度：高（对于你血量来说）\n");
	int shixue = 5000;
	int gongni = 50, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		if (k & 1) printf("你、老王、班长、总监向僵尸发起攻击，僵尸疯狂承受伤害%d", gongji * 4);
		else if (k > 50)printf("僵尸屏蔽了你的伤害");
		else {
			printf("僵尸使用技能：干扰");
			getchar();
			system("cls");
			printf("有被干扰到");
			getchar();
			system("cls");
			gongji = gongji - gongji / 10;
			printf("你还剩余攻击力：%d", gongji);
		}
		getchar();
		system("cls");
		if (k & 1)shixue -= gongji;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//会攻击你 
		if (shixue >= t * 3) printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("僵尸即将自爆！！！！情做好心理准备！！！！");
				getchar();
				system("cls");
			}
			else {
				printf("轰！！！！！！！！！");
				getchar();
				system("cls");
				printf("你：啊^&&*^%^$......");
				getchar();
				system("cls");
				printf("老王：吹雪！");
				getchar();
				system("cls");
				printf("班长：吹雪！");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 40) {
					printf("死亡不可免的");
					getchar();
					system("cls");
					printf("要不...听我的，再开一把");
					getchar();
					system("cls");
					printf("按任意键继续");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("但在他们一段扫射之后，你被救起来了");
					getchar();
					system("cls");
					xue += 1000;
					printf("血量恢复1000");
					getchar();
					system("cls");
					printf("接着打");
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("凉凉...");
				getchar();
				system("cls");
				printf("倒下前，只听见老王大呼：吹雪！...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("你S了");
				getchar();
				system("cls");
				printf("但在他们一段扫射之后，你被救起来了");
				getchar();
				system("cls");
				xue += 10000;
				printf("血量恢复10000");
				getchar();
				system("cls");
				printf("接着打！");
			}
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
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
	printf("你还剩余攻击力：%d", gongji);
	getchar();
	system("cls");
	printf("哈喽......");
	getchar();
	system("cls");
	printf("你：？？？");
	getchar();
	system("cls");
	printf("老王：？？？");
	getchar();
	system("cls");
	printf("班长：？？？");
	getchar();
	system("cls");
	printf("总监：？？？");
	getchar();
	system("cls");
	printf("你好，是我...");
	getchar();
	system("cls");
	printf("你：你是谁啊你你你的");
	getchar();
	system("cls");
	printf("我是格洛");
	getchar();
	system("cls");
	printf("你：你人呢？？");
	getchar();
	system("cls");
	printf("就在你对面");
	getchar();
	system("cls");
	printf("突然在你对面，出现了一只兔子");
	getchar();
	system("cls");
	printf("老王：啊？你是兔子");
	getchar();
	system("cls");
	printf("格洛：是啊，我是兔子");
	getchar();
	system("cls");
	printf("班长抱起了兔子：好可爱");
	getchar();
	system("cls");
	printf("格洛：嗯吾...唔");
	getchar();
	system("cls");
	printf("你：太可爱了，有被萌到");
	getchar();
	system("cls");
	printf("格洛：今后，我可以和你们一起走嘛");
	getchar();
	system("cls");
	printf("总监：当然可以啦");
	getchar();
	system("cls");
	printf("老王：我们很宠你的啦");
	getchar();
	system("cls");
	printf("班长：我这么喜欢你啦");
	getchar();
	system("cls");
	printf("总监：吹雪，你是不是吃醋啦");
	getchar();
	system("cls");
	printf("你：...");
	getchar();
	system("cls");
	printf("班长：好啦好啦，我们走吧");
	getchar();
	system("cls");
	printf("你：去哪？");
	getchar();
	system("cls");
	printf("老王：别别别...去了...，你你看看...看前面...");
	getchar();
	system("cls");
	printf("你：啊？？？？？？！！！！！！！");
	getchar();
	system("cls");
	printf("恭喜完成第12章，格洛，血量上限+30");
	man += 30;
	xue = man;
	getchar();
	zuo[12] = 1;
	system("cls");
	printf("按任意键继续...");
	getchar();
	system("cls");
	return;
}
void level_13() {
	if (zuo[12] == 0) {
		system("cls");
		printf("请先完成第十二章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("老王：快快，大家快分散开！！");
	getchar();
	system("cls");
	printf("总监：小心它一发导弹团灭啊啊啊！！！");
	getchar();
	system("cls");
	printf("你：我们该怎么做？？？");
	getchar();
	system("cls");
	printf("班长：来不及了，多保重吧");
	getchar();
	system("cls");
	printf("按任意键开始战斗...");
	getchar();
	system("cls");
	getchar();
	system("cls");
	printf("僵尸情况：未知僵尸\n\n");
	printf("血量：100000 攻击力：2000（左右） 特效：实时自爆，会屏蔽伤害，以及技能	难度：高（对于你血量来说）\n");
	int shixue = 100000;
	int gongni = 2000, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		if (k & 1) printf("你、老王、班长、总监向僵尸发起攻击，僵尸疯狂承受伤害%d", gongji * 4);
		else printf("僵尸屏蔽了你的伤害");
		getchar();
		system("cls");
		if (k & 1) shixue -= gongji;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//会攻击你 
		if (shixue >= t * 3) {
			x = rand() % 10;
			if (x < 20) printf("僵尸向你发起攻击，你的血量减少%d", gongni);
			else if (x < 50) printf("僵尸向你投放火焰弹，你的血量减少%d", gongni * 3);
			else if (x < 70) printf("僵尸向你们发射寒光，你的血量减少%d", gongni * 4);
			else if (x < 80) printf("僵尸使用技能：分身，新僵尸血量增加%d", x);
			else if (x < 90) printf("僵尸向你使用天阵，你的血量减少%d", gongni * 5);
			else printf("僵尸向你使用金针雨，你的血量减少%d", gongni * 7);
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
				printf("僵尸即将自爆！！！！情做好心理准备！！！！");
				getchar();
				system("cls");
			}
			else {
				printf("轰！！！！！！！！！");
				getchar();
				system("cls");
				printf("你：啊^&&*^%^$......");
				getchar();
				system("cls");
				printf("老王：吹雪！");
				getchar();
				system("cls");
				printf("班长：吹雪！");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 70) {
					printf("死亡不可免的");
					getchar();
					system("cls");
					printf("要不...听我的，再开一把");
					getchar();
					system("cls");
					printf("按任意键继续");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("但在他们一段扫射之后，你被救起来了");
					getchar();
					system("cls");
					xue += 1000;
					printf("血量恢复1000");
					break;
				}
			}
		}
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("凉凉...");
				getchar();
				system("cls");
				printf("倒下前，只听见老王大呼：吹雪！...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("你S了");
				getchar();
				system("cls");
				printf("但在他们一段扫射之后，你被救起来了");
				getchar();
				system("cls");
				xue += 10000;
				printf("血量恢复10000");
				break;
			}
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("老王：我草这什么玩意");
	getchar();
	system("cls");
	printf("总监：长得真丑");
	getchar();
	system("cls");
	printf("格洛：嘘……");
	getchar();
	system("cls");
	printf("格洛（嗅嗅）：我总感觉有股奇怪的味道");
	getchar();
	system("cls");
	printf("总监：你看那是什么？？");
	getchar();
	system("cls");
	printf("你：那是个收音机");
	getchar();
	system("cls");
	printf("老王：快看看能不能连上");
	getchar();
	system("cls");
	printf("呲~~~~~~~~~~~~~~~~");
	getchar();
	system("cls");
	printf("这几天...监狱...严重...");
	getchar();
	system("cls");
	printf("特别...渴望...支援...");
	getchar();
	system("cls");
	printf("有人...");
	getchar();
	system("cls");
	printf("呲~~~~~~~~~~~~~~~~");
	getchar();
	system("cls");
	printf("老王：难道...我们要立刻离开首都了吗");
	getchar();
	system("cls");
	printf("总监：哎。看来只能这样了");
	getchar();
	system("cls");
	printf("于是，你们五人对着首都喊道：“亲爱的首都！我们，后~会~有~期~...”");
	getchar();
	system("cls");
	zuo[13] = 1;
	printf("恭喜完成第13章，生存还是毁灭");
	getchar();
	system("cls");
	printf("攻击力+40");
	gongji += 40;
	getchar();
	system("cls");
	printf("按任意键继续...");
	getchar();
	system("cls");
	return;
}
void level_14() {
	if (zuo[13] == 0) {
		system("cls");
		printf("请先完成第十三章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("你们一路走下去，来到了监狱的附近");
	getchar();
	system("cls");
	printf("老王：这是哪里");
	getchar();
	system("cls");
	printf("班长沉重的说：监狱");
	getchar();
	system("cls");
	printf("总监：我们的监狱……就这个样子了？？？");
	getchar();
	system("cls");
	printf("格洛：唉，监狱已经这样了");
	getchar();
	system("cls");
	printf("你：那个求救信号是谁发的呢");
	getchar();
	system("cls");
	printf("格洛：不知道");
	getchar();
	system("cls");
	printf("格洛：你看那是什么");
	getchar();
	system("cls");
	printf("总监：那是吹雪的手机");
	getchar();
	system("cls");
	printf("总监：怎么还有电话");
	getchar();
	system("cls");
	printf("你：哦对无网连线可以");
	getchar();
	system("cls");
	printf("你：喂？");
	getchar();
	system("cls");
	printf("电话：救...救我");
	getchar();
	system("cls");
	printf("你：你在哪里啊？");
	getchar();
	system("cls");
	printf("电话：我在首都...");
	getchar();
	system("cls");
	printf("你：哈？我们刚从那里走");
	getchar();
	system("cls");
	printf("电话：求求你来救我吧...");
	getchar();
	system("cls");
	printf("你们五人面面相觑");
	getchar();
	system("cls");
	printf("你：难道又要回去了吗");
	getchar();
	system("cls");
	printf("格洛：我想还是回去好");
	getchar();
	system("cls");
	printf("老王：前面是个废弃车厂，去看看有什么车能开");
	getchar();
	system("cls");
	printf("你（笑嘻嘻）：你偷窃啊");
	getchar();
	system("cls");
	printf("总监：哈哈哈");
	getchar();
	system("cls");
	printf("于是，你们走进了废弃车场");
	getchar();
	system("cls");
	printf("但天算地算不如人算，前面出现了一只感染者"); getchar();
	system("cls");
	printf("僵尸情况：感染者\n\n");
	printf("血量：50000 攻击力：150（左右） 特效：自爆、屏蔽伤害 难度：高（对于你血量来说）\n");
	int shixue = 50000;
	int gongni = 150, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		if (k & 1) printf("你、老王、班长、总监向僵尸发起攻击，僵尸疯狂承受伤害%d", gongji * 4);
		else if (k > 50)printf("僵尸屏蔽了你的伤害");
		else {
			printf("僵尸使用技能：干扰");
			getchar();
			system("cls");
			printf("有被干扰到");
			getchar();
			system("cls");
			gongji = gongji / 2;
			printf("你还剩余攻击力：%d", gongji);
		}
		getchar();
		system("cls");
		if (k & 1)shixue -= gongji;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//会攻击你 
		if (shixue >= t * 3) printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("僵尸即将自爆！！！！情做好心理准备！！！！");
				getchar();
				system("cls");
			}
			else {
				printf("轰！！！！！！！！！");
				getchar();
				system("cls");
				printf("你：啊^&&*^%^$......");
				getchar();
				system("cls");
				printf("老王：吹雪！");
				getchar();
				system("cls");
				printf("班长：吹雪！");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 40) {
					printf("死亡不可免的");
					getchar();
					system("cls");
					printf("要不...听我的，再开一把");
					getchar();
					system("cls");
					printf("按任意键继续");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("但在他们一段扫射之后，你被救起来了");
					getchar();
					system("cls");
					xue += 1000;
					printf("血量恢复1000");
					getchar();
					system("cls");
					printf("接着打");
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("凉凉...");
				getchar();
				system("cls");
				printf("倒下前，只听见老王大呼：吹雪！...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("你S了");
				getchar();
				system("cls");
				printf("但在他们一段扫射之后，你被救起来了");
				getchar();
				system("cls");
				xue += 10000;
				printf("血量恢复10000");
				getchar();
				system("cls");
				printf("接着打！");
			}
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	if (gongji <= 1000) printf("老王：我草它把的UZI和M27都拿走了");
	else printf("你：还好两把枪都在");
	getchar();
	system("cls");
	printf("班长：...");
	getchar();
	system("cls");
	printf("总监：哈哈哈哈哈，你看那是什么");
	getchar();
	system("cls");
	printf("格洛：好像是，卡车？");
	getchar();
	system("cls");
	printf("你：哇哦！！赶紧走啦");
	getchar();
	system("cls");
	printf("你们一行人3h后来到了首都");
	getchar();
	system("cls");
	printf("但是，你们发现首都已经变成了僵尸的聚集地");
	getchar();
	system("cls");
	printf("所有的僵尸嚎叫着，咆哮着");
	getchar();
	system("cls");
	printf("十分的可怕");
	getchar();
	system("cls");
	printf("你：快跑啊！！");
	getchar();
	system("cls");
	printf("老王：不行，镇定");
	getchar();
	system("cls");
	printf("于是你们躲在了掩体后面，靠推拉体来扫射僵尸");
	getchar();
	system("cls");
	printf("僵尸和你们维持了很久很久");
	getchar();
	system("cls");
	printf("直到...");
	getchar();
	system("cls");
	printf("老王：哎呀没子弹了！");
	getchar();
	system("cls");
	printf("你：我当时就说赶紧走吧！");
	getchar();
	system("cls");
	int sf = rand() % 1000;
	printf("攻击力减少%d", sf);
	gongji -= sf;
	if (gongji < 100) gongji = 100;
	printf("总监：这时再逃还不晚");
	getchar();
	system("cls");
	printf("老王：你还记得我们之前说的什么话吗...保卫首都！！");
	getchar();
	system("cls");
	printf("老王：跟我一起杀吧...");
	getchar();
	system("cls");
	printf("你们一起冲了上去");
	getchar();
	system("cls");
	for (int i = 1; i <= rand() % 100; i++) {
		printf("你还剩余血量：%d\n\n", xue);
		printf("按1继续，2反悔");
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
		printf("格洛召唤空袭，对敌人造成237426319305734626612374342364632点伤害");
		getchar();
		system("cls");
		printf("格洛再次召唤空袭，敌人造成18348213947522490532485点伤害");
		getchar();
		system("cls");
		printf("格洛最后一次召唤空袭，敌人造成132490234757347536465626346124点伤害");
		getchar();
		system("cls");
		printf("僵尸渐渐远去，你们也渐渐疲倦");
		getchar();
		system("cls");
		printf("老王：快看，那里是Vector！！");
		getchar();
		system("cls");
		printf("持有vector，伤害+283");
		getchar();
		system("cls");
		gongji += 283;
	}
	getchar();
	system("cls");
	printf("总监：快点，大家补点血");
	getchar();
	system("cls");
	xue += 2000;
	printf("血 = %d", xue);
	getchar();
	system("cls");
	printf("总监：我们看来首都是守不住了，怎么办啊！！");
	getchar();
	system("cls");
	printf("老王：看来只有另寻他路了...");
	getchar();
	system("cls");
	printf("老王：再去监狱！");
	getchar();
	system("cls");
	printf("你、总监、班长、格洛：啊？");
	getchar();
	system("cls");
	int k = rand() % 100;
	printf("恭喜完成第14章，再别首都，攻击力+%d", k);
	gongji += k;
	getchar();
	system("cls");
	printf("按任意键继续...");
	zuo[14] = 1;
	getchar();
	system("cls");
	return;
}
void level_15() {
	if (zuo[14] == 0) {
		system("cls");
		printf("请先完成第十四章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("你们一路开着卡车来到了监狱");
	getchar();
	system("cls");
	printf("还如之前一样破烂");
	getchar();
	system("cls");
	printf("然后老王突然喊道：快看啊，这是什么");
	getchar();
	system("cls");
	printf("你：我草！！！RPG火箭筒！");
	getchar();
	system("cls");
	printf("总监：有几个？（坏笑）");
	getchar();
	system("cls");
	printf("你：只有一个槈【耨，语气词，同“咯”】");
	getchar();
	system("cls");
	printf("班长：总监，你想啥呢？");
	getchar();
	system("cls");
	printf("总监：我也想要有...");
	getchar();
	system("cls");
	printf("格洛偷偷的笑了");
	getchar();
	system("cls");
	printf("你：格洛你笑什么？");
	getchar();
	system("cls");
	printf("格洛立刻正脸道：我没笑");
	getchar();
	system("cls");
	printf("但是你刚才回头看的时候，发现了...");
	getchar();
	system("cls");
	printf("尸潮...");
	getchar();
	system("cls");
	printf("格洛：给我上，杀了老王、吹雪、总监、班长！");
	getchar();
	system("cls");
	printf("老王：糟糕，格洛是坏的");
	getchar();
	system("cls");
	printf("你：快给我火箭筒！！");
	getchar();
	system("cls");
	printf("但是现在已经来不及给你RPG了");
	getchar();
	system("cls");
	printf("班长拿着RPG朝着丧尸轰");
	getchar();
	system("cls");
	printf("然后没子弹了");
	getchar();
	system("cls");
	printf("看来...最后一只丧尸...就靠你了！");
	getchar();
	system("cls");
	printf("按任意键发起战斗...");
	getchar();
	system("cls");
	getchar();
	system("cls");
	printf("僵尸情况：感染者\n\n");
	printf("血量：50000 攻击力：150（左右） 特效：自爆、屏蔽伤害 难度：高（对于你血量来说）\n");
	int shixue = 50000;
	int gongni = 150, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		if (k & 1) printf("你、老王、班长、总监向僵尸发起攻击，僵尸疯狂承受伤害%d", gongji * 10);
		else if (k > 50)printf("僵尸屏蔽了你的伤害");
		else {
			printf("僵尸使用技能：干扰");
			getchar();
			system("cls");
			printf("有被干扰到");
			getchar();
			system("cls");
			gongji = gongji / 2;
			printf("你还剩余攻击力：%d", gongji);
		}
		getchar();
		system("cls");
		if (k & 1)shixue -= gongji;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//会攻击你 
		if (shixue >= t * 3) printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("僵尸即将自爆！！！！情做好心理准备！！！！");
				getchar();
				system("cls");
			}
			else {
				printf("轰！！！！！！！！！");
				getchar();
				system("cls");
				printf("你：啊^&&*^%^$......");
				getchar();
				system("cls");
				printf("老王：吹雪！");
				getchar();
				system("cls");
				printf("班长：吹雪！");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 40) {
					printf("死亡不可免的");
					getchar();
					system("cls");
					printf("要不...听我的，再开一把");
					getchar();
					system("cls");
					printf("按任意键继续");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("但在他们一段扫射之后，你被救起来了");
					getchar();
					system("cls");
					xue += 1000;
					printf("血量恢复1000");
					getchar();
					system("cls");
					printf("接着打");
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("凉凉...");
				getchar();
				system("cls");
				printf("倒下前，只听见老王大呼：吹雪！...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("你S了");
				getchar();
				system("cls");
				printf("但在他们一段扫射之后，你被救起来了");
				getchar();
				system("cls");
				xue += 10000;
				printf("血量恢复10000");
				getchar();
				system("cls");
				printf("接着打！");
			}
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("总监：呜呜，格洛竟然是坏的");
	getchar();
	system("cls");
	printf("你：啊驾啊驾啊驾驾驾");
	getchar();
	system("cls");
	printf("老王：？");
	getchar();
	system("cls");
	printf("总监：？");
	getchar();
	system("cls");
	printf("班长：？");
	getchar();
	system("cls");
	printf("你：驾啊驾啊驾哟吼！");
	getchar();
	system("cls");
	printf("老王：你疯了？");
	getchar();
	system("cls");
	printf("你：快看我发现了什么？");
	getchar();
	system("cls");
	printf("老王：你拿的什么？");
	getchar();
	system("cls");
	printf("班长：USB？");
	getchar();
	system("cls");
	printf("你：你他妈的，你才you SB呢");
	getchar();
	system("cls");
	printf("班长：哎呀我说的不是you SB，是USB！");
	getchar();
	system("cls");
	printf("你：什么you SB啊，这是USB！");
	getchar();
	system("cls");
	printf("班长：...");
	getchar();
	system("cls");
	printf("总监：快插到你的手机上试试");
	getchar();
	system("cls");
	printf("你：手机能插USB啊？");
	getchar();
	system("cls");
	printf("老王：我说可以就可以");
	getchar();
	system("cls");
	printf("老王：听好了，我说，不可以！");
	getchar();
	system("cls");
	printf("总监：你闲的吗");
	getchar();
	system("cls");
	printf("班长（滑稽）：别管他，他很闲");
	getchar();
	system("cls");
	printf("老王：（滑稽）");
	getchar();
	system("cls");
	printf("你：我们的下一步行动是");
	getchar();
	system("cls");
	printf("老王：接着寻找僵尸");
	getchar();
	system("cls");
	gongji += rand() % 1000;
	getchar();
	system("cls");
	printf("老王：等会我看下地图");
	getchar();
	system("cls");
	printf("过了一会...");
	getchar();
	system("cls");
	printf("总监：啊？？");
	getchar();
	system("cls");
	printf("总监：刚才那里的平原..原来就是原来的监狱啊！");
	getchar();
	system("cls");
	printf("老王：监狱已经坍塌了！");
	getchar();
	system("cls");
	printf("你：哦，USB插上了（");
	getchar();
	system("cls");
	printf("USB：现在若监狱还有人员");
	getchar();
	system("cls");
	printf("USB：请立即转移");
	getchar();
	system("cls");
	printf("USB：请勿自勿");
	getchar();
	system("cls");
	printf("老王：我们刚从首都回来");
	getchar();
	system("cls");
	printf("老王：首都坍塌...");
	getchar();
	system("cls");
	printf("总监：现在监狱又坍塌");
	getchar();
	system("cls");
	printf("你：我们到底该去哪？？？？？");
	getchar();
	system("cls");
	int k = rand() % 100;
	printf("恭喜完成第15章，血量上限+%d", k);
	getchar();
	system("cls");
	printf("按任意键继续...");
	getchar();
	system("cls");
	zuo[15] = 1;
	return;
}
void level_16() {
	if (zuo[15] == 0) {
		system("cls");
		printf("请先完成第十五章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("你：嗯……地图很有意思，现在H市的地方很不错...");
	getchar();
	system("cls");
	printf("老王：我们没去过那里，对那里都不熟吧");
	getchar();
	system("cls");
	printf("你：没去过不代表不能去");
	getchar();
	system("cls");
	printf("老王：说的也是");
	getchar();
	system("cls");
	printf("你：虽然H市的沦陷我们改变不了，但是我们能改变");
	getchar();
	system("cls");
	printf("老王和总监还有班长都奇怪的看着你");
	getchar();
	system("cls");
	printf("你：你tm看我干啥");
	getchar();
	system("cls");
	printf("班长：啊哈哈");
	getchar();
	system("cls");
	printf("你：啊？");
	getchar();
	system("cls");
	printf("你：啊不是，我说错了，我们可以去一探究竟（滑稽）");
	getchar();
	system("cls");
	printf("老王和班长给你竖起了二拇指");
	getchar();
	system("cls");
	printf("你：干...干什么");
	getchar();
	system("cls");
	printf("老王：我们快走吧！");
	getchar();
	system("cls");
	printf("总监：好呀");
	getchar();
	system("cls");
	printf("你：我们刚才的车呢？");
	getchar();
	system("cls");
	printf("老王：欸操，对啊，我们车呢");
	getchar();
	system("cls");
	printf("你：？？？");
	getchar();
	system("cls");
	printf("你：what's that？？？？");
	getchar();
	system("cls");
	printf("总监：那里怎么冒烟了？？？");
	getchar();
	system("cls");
	printf("老王：快过去看看");
	getchar();
	system("cls");
	printf("你们跑了过去");
	getchar();
	system("cls");
	printf("你：我草！空投");
	getchar();
	system("cls");
	printf("老王：快念念上面写的神什么");
	getchar();
	system("cls");
	printf("“给幸存者用的物资，已备不时之需”");
	getchar();
	system("cls");
	printf("老王：我们真是运气太好了");
	getchar();
	system("cls");
	printf("你：打开看看？");
	getchar();
	system("cls");
	printf("你们打开了空投");
	getchar();
	system("cls");
	int k = rand() % 700;
	printf("|汤姆逊冲锋枪 * 3 攻击力 + %d", k);
	gongji += k;
	getchar();
	system("cls");
	printf("|UMP45 * 4 攻击力 + %d", k * 2);
	gongji += k * 2;
	getchar();
	system("cls");
	printf("|M27狙击枪 * 2 攻击力 + %d", k * 3);
	getchar();
	system("cls");
	gongji += k * 3;
	printf("|狗杂 * 1 攻击力 + %d", k * 4);
	getchar();
	system("cls");
	gongji += k * 4;
	printf("|医疗箱 * 5 血量回升至%d", xue * 3 / 2);
	xue = xue * 3 / 2;
	getchar();
	system("cls");
	printf("|冰茶 * 3 血量回升至%d", xue * 2);
	xue = xue * 2;
	getchar();
	system("cls");
	printf("老王：哈哈，我们这叫什么");
	getchar();
	system("cls");
	printf("班长：一夜放屁！");
	getchar();
	system("cls");
	printf("老王：你tm什么一夜放屁啊");
	getchar();
	system("cls");
	printf("你：明明是一夜暴富！");
	getchar();
	system("cls");
	printf("老王：对！");
	getchar();
	system("cls");
	printf("你：那我们快看看空投上还写的什么");
	getchar();
	system("cls");
	printf("-------------------------------------------------------\n");
	printf("|          致亲爱的幸存者们                           |\n");
	printf("|    很抱歉，由于最近政府的疏忽，H市与监狱前后沦陷，而|\n");
	printf("|政府人员现在都在生化场所工作，这些物资都给你们       |\n");
	printf("|    而现在生化场所的危机也没有解除，接二连三的僵尸突 |\n");
	printf("|了层层防御，已经快进入我们的基地了！                 |\n");
	printf("|    不过目前的形式来看，僵尸对我们造成不了什么威胁   |\n");
	printf("|    所以请看到这个的幸存者，保护好自己！             |\n");
	printf("-------------------------------------------------------\n");
	getchar();
	system("cls");
	printf("你：我也是醉了");
	getchar();
	system("cls");
	printf("老王：...");
	getchar();
	system("cls");
	printf("班长：...");
	getchar();
	system("cls");
	printf("总监：...");
	getchar();
	system("cls");
	printf("你：唉");
	getchar();
	system("cls");
	man = xue;
	printf("老王：我们现在该怎么办");
	getchar();
	system("cls");
	printf("班长：问得好");
	getchar();
	system("cls");
	printf("你：要是知道这个了，我们不早跑了");
	getchar();
	system("cls");
	printf("你：我现在就特别想谈恋爱你们知道吗...你们能懂我现在的心情吗");
	getchar();
	system("cls");
	printf("总监：能懂能懂，能理解一只单身狗");
	getchar();
	system("cls");
	printf("你：唉");
	getchar();
	system("cls");
	printf("老王：我帮你介绍个对象（滑稽）");
	getchar();
	system("cls");
	printf("你一听来了精神：谁啊");
	getchar();
	system("cls");
	printf("老王：班长！");
	getchar();
	system("cls");
	printf("班长：&DS*&$W#..@$*$%&$...8&$%@.&$@@#(4)^#*@");
	getchar();
	system("cls");
	printf("老王：(滑稽)");
	getchar();
	system("cls");
	printf("你：...");
	getchar();
	system("cls");
	printf("你：所以我们要去生化场所了吗");
	getchar();
	system("cls");
	printf("恭喜完成第16章，H市沦陷，血量上限+%d", k * 3);
	xue += k * 3;
	man = xue;
	getchar();
	system("cls");
	printf("按任意键继续...");
	getchar();
	system("cls");
	zuo[16] = 1;
	return;
}
void level_17() {
	if (zuo[16] == 0) {
		system("cls");
		printf("请先完成第十六章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("老王：是的");
	getchar();
	system("cls");
	printf("总监：那里危险吗");
	getchar();
	system("cls");
	printf("老王：政府说那里有些僵尸");
	getchar();
	system("cls");
	printf("你：所以？");
	getchar();
	system("cls");
	printf("僵尸：所以我来了哈哈哈...");
	getchar();
	system("cls");
	printf("按任意键发起战斗...");
	getchar();
	system("cls");
	printf("僵尸情况：感染者\n\n");
	printf("血量：300000 攻击力：200（左右） 特效：自爆、屏蔽伤害 难度：高（对于你血量来说）\n");
	int shixue = 300000;
	int gongni = 200, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		if (k & 1) printf("你、老王、班长、总监向僵尸发起攻击，僵尸疯狂承受伤害%d", gongji * 6);
		else if (k > 50)printf("僵尸屏蔽了你的伤害");
		else {
			printf("僵尸使用技能：干扰");
			getchar();
			system("cls");
			printf("有被干扰到");
			getchar();
			system("cls");
			gongji = gongji / 2 + gongji / 3;
			printf("你还剩余攻击力：%d", gongji);
		}
		getchar();
		system("cls");
		if (k & 1)shixue -= gongji;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//会攻击你 
		if (shixue >= t * 3) printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("僵尸即将自爆！！！！情做好心理准备！！！！");
				getchar();
				system("cls");
			}
			else {
				printf("轰！！！！！！！！！");
				getchar();
				system("cls");
				printf("你：啊^&&*^%^$......");
				getchar();
				system("cls");
				printf("老王：吹雪！");
				getchar();
				system("cls");
				printf("班长：吹雪！");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 60) {
					printf("死亡不可免的");
					getchar();
					system("cls");
					printf("要不...听我的，再开一把");
					getchar();
					system("cls");
					printf("按任意键继续");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("但在他们一段扫射之后，你被救起来了");
					getchar();
					system("cls");
					xue += 1000;
					printf("血量恢复1000");
					getchar();
					system("cls");
					printf("接着打");
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("凉凉...");
				getchar();
				system("cls");
				printf("倒下前，只听见老王大呼：吹雪！...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("你S了");
				getchar();
				system("cls");
				printf("但在他们一段扫射之后，你被救起来了");
				getchar();
				system("cls");
				xue += rand() % 10000;
				printf("血量恢复%d", xue);
				getchar();
				system("cls");
				printf("接着打！");
			}
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("老王：好像是首都的僵尸跟上了");
	getchar();
	system("cls");
	printf("总监：快开车走啊！！！");
	getchar();
	system("cls");
	printf("你们一路开车来到了生化场所的附近");
	getchar();
	system("cls");
	printf("只见你们眼前矗立着一栋高楼");
	getchar();
	system("cls");
	printf("白色的漆已经退的不行了");
	getchar();
	system("cls");
	printf("楼顶有个圆形的雷达塔");
	getchar();
	system("cls");
	printf("楼里面黑漆漆的，十分恐怖");
	getchar();
	system("cls");
	printf("这时候，你们看到里面有一个人影闪过");
	getchar();
	system("cls");
	printf("你们慢慢的走进了生化场所");
	getchar();
	system("cls");
	printf("只见里面黑漆漆的一片...");
	getchar();
	system("cls");
	printf("你们手持UMP，一路扫射着进去了");
	getchar();
	system("cls");
	printf("僵尸们根部抵挡不住UMP的扫射，所以纷纷倒下");
	getchar();
	system("cls");
	printf("你们一路进去的时候也有满地的尸体...");
	getchar();
	system("cls");
	printf("班长：你说政府是不是都把物资供给我们了啊？");
	getchar();
	system("cls");
	printf("老王：你看政府的这人死的");
	getchar();
	system("cls");
	printf("你、总监、班长轻轻碰了碰老王");
	getchar();
	system("cls");
	printf("老王：啊不好意思");
	getchar();
	system("cls");
	printf("你：...");
	getchar();
	system("cls");
	printf("班长：...");
	getchar();
	system("cls");
	printf("总监：...");
	getchar();
	system("cls");
	printf("老王：我们再上去看看");
	getchar();
	system("cls");
	printf("你：前面那个黑漆漆的是...");
	getchar();
	system("cls");
	printf("僵尸：是我...");
	getchar();
	system("cls");
	printf("僵尸情况：粘液丧尸\n\n");
	printf("血量：500000 攻击力：200（左右） 特效：黏住武器 难度：高（对于你血量来说）\n");
	shixue = 500000;
	gongni = 200, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		if (k & 1) printf("你、老王、班长、总监向僵尸发起攻击，僵尸疯狂承受伤害%d", gongji * 6);
		else if (k > 50)printf("僵尸屏蔽了你的伤害");
		else {
			printf("僵尸使用技能：黏土");
			getchar();
			system("cls");
			printf("黏住了你的枪");
			int sq = rand() % 600;
			getchar();
			system("cls");
			printf("你的攻击力减少%d", sq);
			getchar();
			system("cls");
			printf("僵尸的攻击力增加%d", sq);
			gongji -= sq;
			gongni += sq;
			getchar();
			system("cls");
			printf("你还剩余攻击力：%d", gongji);
			getchar();
			system("cls");
			printf("丧尸的攻击力是：%d", gongni);
		}
		getchar();
		system("cls");
		if (k & 1)shixue -= gongji;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//会攻击你 
		if (shixue >= t * 3) printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("僵尸即将自爆！！！！情做好心理准备！！！！");
				getchar();
				system("cls");
			}
			else {
				printf("轰！！！！！！！！！");
				getchar();
				system("cls");
				printf("你：啊^&&*^%^$......");
				getchar();
				system("cls");
				printf("老王：吹雪！");
				getchar();
				system("cls");
				printf("班长：吹雪！");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 80) {
					printf("死亡不可免的");
					getchar();
					system("cls");
					printf("要不...听我的，再开一把");
					getchar();
					system("cls");
					printf("按任意键继续");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("但在他们一段扫射之后，你被救起来了");
					getchar();
					system("cls");
					xue += 1000;
					printf("血量恢复1000");
					getchar();
					system("cls");
					printf("接着打");
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("凉凉...");
				getchar();
				system("cls");
				printf("倒下前，只听见老王大呼：吹雪！...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("你S了");
				getchar();
				system("cls");
				printf("但在他们一段扫射之后，你被救起来了");
				getchar();
				system("cls");
				xue += rand() % 10000;
				printf("血量恢复%d", xue);
				getchar();
				system("cls");
				printf("接着打！");
			}
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("你：现在的僵尸越来越可怕了");
	getchar();
	system("cls");
	printf("老王：的确啊");
	getchar();
	system("cls");
	printf("总监：快，上去看看");
	getchar();
	system("cls");
	printf("老王：好的");
	getchar();
	system("cls");
	printf("“你们好”");
	getchar();
	system("cls");
	printf("总监：欸，你好你好");
	getchar();
	system("cls");
	printf("那个人说：你们是幸存者吗");
	getchar();
	system("cls");
	printf("你：我们是的");
	getchar();
	system("cls");
	printf("那个人哈哈大笑：现在这个世界里，怎么可能有幸存者呢");
	getchar();
	system("cls");
	printf("说罢向你举起了枪");
	getchar();
	system("cls");
	printf("你决定：\n-----------------------\n1.用RPG把他轰了\n");
	printf("2.用UMP把他扫了\n");
	printf("3.试图劝劝他\n\n\n");
	scanf("%d", &x);
	if (x == 1) {
		system("cls");
		printf("但是你自己也被轰死了");
		getchar();
		system("cls");
		printf("按任意键返回...");
		getchar();
		system("cls");
		return;
	}
	else if (x == 3) {
		system("cls");
		printf("哪知此人并不听你的话，几下子扫倒了你");
		getchar();
		system("cls");
		printf("按任意键返回...");
		getchar();
		system("cls");
		return;
	}
	getchar();
	system("cls");
	printf("于是你们拿到了那个人的武器");
	getchar();
	system("cls");
	int k = rand() % 100;
	printf("|获得MK-14激光导弹 * 1	攻击 + %d", k * k * k);
	getchar();
	system("cls");
	printf("|获得RS-23追踪导弹 * 1	攻击 + %d", k * k * k * k);
	getchar();
	system("cls");
	printf("|获得医疗针 * 1	血量 + %d", k * 5);
	xue += k * 5;
	getchar();
	system("cls");
	gongji += k * k * k;
	gongji += k * k * k * k;
	printf("老王：好肥啊");
	getchar();
	system("cls");
	printf("你：这政府什么玩意啊");
	getchar();
	system("cls");
	printf("总监：是啊是啊");
	getchar();
	system("cls");
	printf("恭喜完成第17章，生化场所，血量上限 + %d", k * 3);
	xue += k * 3;
	man = xue;
	getchar();
	system("cls");
	zuo[17] = 1;
	printf("按任意键继续...");
	getchar();
	system("cls");
	return;
}
void level_18() {
	if (zuo[17] == 0) {
		system("cls");
		printf("请先完成第十七章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("你：我们接着上去看看");
	getchar();
	system("cls");
	printf("老王：好好");
	getchar();
	system("cls");
	printf("总监：上面好像有收音机的声音");
	getchar();
	system("cls");
	printf("你：我们不可以轻举妄动，小心上面再有那种憨憨小伙子被拿捏");
	getchar();
	system("cls");
	printf("老王：《憨憨小伙子》");
	getchar();
	system("cls");
	printf("你：我们需要小声点...");
	getchar();
	system("cls");
	printf("“自从我归田卸甲”\n");
	getchar();
	printf("“平定了天下”");
	getchar();
	printf("\n“无人问道今夕荒无人烟”\n");
	getchar();
	printf("“征战多年未还愿不值三两钱”\n");
	getchar();
	printf("“征战多年未还愿不值三两钱”\n");
	getchar();
	printf("“谁愿与我共看江山无限”\n");
	getchar();
	system("cls");
	printf("你：哎呀，这谁放的一首《将军泪》唱的好感人啊");
	getchar();
	system("cls");
	printf("老王：你你你你那不是你唱的吗...");
	getchar();
	system("cls");
	printf("你：哈？");
	getchar();
	system("cls");
	printf("总监：老王说的对");
	getchar();
	system("cls");
	printf("班长：总监说的对");
	getchar();
	system("cls");
	printf("你：班长言差矣");
	getchar();
	system("cls");
	printf("老王：吹雪言极是矣");
	getchar();
	system("cls");
	printf("你：(滑稽)");
	getchar();
	system("cls");
	printf("僵尸：萨瓦迪卡~");
	getchar();
	system("cls");
	printf("按任意键发起战斗...");
	getchar();
	system("cls");
	printf("僵尸情况：粘液丧尸\n\n");
	printf("血量：500000 攻击力：200（左右） 特效：黏住武器 难度：高（对于你血量来说）\n");
	int shixue = 500000;
	int gongni = 200, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		if (k & 1) printf("你、老王、班长、总监向僵尸发起攻击，僵尸疯狂承受伤害%d", gongji * 6);
		else if (k > 50)printf("僵尸屏蔽了你的伤害");
		else {
			printf("僵尸使用技能：黏土");
			getchar();
			system("cls");
			printf("黏住了你的枪");
			int sq = rand() % 600;
			getchar();
			system("cls");
			printf("你的攻击力减少%d", sq);
			getchar();
			system("cls");
			printf("僵尸的攻击力增加%d", sq);
			gongji -= sq;
			gongni += sq;
			getchar();
			system("cls");
			printf("你还剩余攻击力：%d", gongji);
			getchar();
			system("cls");
			printf("丧尸的攻击力是：%d", gongni);
		}
		getchar();
		system("cls");
		if (k & 1)shixue -= gongji;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//会攻击你 
		if (shixue >= t * 3) printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("僵尸即将自爆！！！！情做好心理准备！！！！");
				getchar();
				system("cls");
			}
			else {
				printf("轰！！！！！！！！！");
				getchar();
				system("cls");
				printf("你：啊^&&*^%^$......");
				getchar();
				system("cls");
				printf("老王：吹雪！");
				getchar();
				system("cls");
				printf("班长：吹雪！");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 40) {
					printf("死亡不可免的");
					getchar();
					system("cls");
					printf("要不...听我的，再开一把");
					getchar();
					system("cls");
					printf("按任意键继续");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("但在他们一段扫射之后，你被救起来了");
					getchar();
					system("cls");
					xue += 1000;
					printf("血量恢复1000");
					getchar();
					system("cls");
					printf("接着打");
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("凉凉...");
				getchar();
				system("cls");
				printf("倒下前，只听见老王大呼：吹雪！...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("你S了");
				getchar();
				system("cls");
				printf("但在他们一段扫射之后，你被救起来了");
				getchar();
				system("cls");
				xue += rand() % 10000;
				printf("血量恢复%d", xue);
				getchar();
				system("cls");
				printf("接着打！");
			}
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("你：我就说要小心点吧");
	getchar();
	system("cls");
	printf("老王：嗯，快上阁楼看看");
	getchar();
	system("cls");
	printf("你们一行人来到了阁楼上面，只见有一个庞然大物矗立在前面");
	getchar();
	system("cls");
	printf("你们定睛一看，是一架直升机");
	getchar();
	system("cls");
	printf("总监：快，我们开着它走了");
	getchar();
	system("cls");
	printf("你们向直升机跑去，但奇怪的是你们一直都追不上直升机");
	getchar();
	system("cls");
	printf("老王：我草什么情况");
	getchar();
	system("cls");
	printf("总监：但是实际上我们跑了啊");
	getchar();
	system("cls");
	printf("突然，直升机里传出了一段声音...");
	getchar();
	system("cls");
	printf("-勇士们");
	getchar();
	system("cls");
	printf("-你们找到了最终的根源");
	getchar();
	system("cls");
	printf("-你们即将可以坐上我");
	getchar();
	system("cls");
	printf("-去保卫家园");
	getchar();
	system("cls");
	printf("你们四人一听欣喜若狂");
	getchar();
	system("cls");
	printf("你：现在我们可以在空中轰僵尸啦？");
	getchar();
	system("cls");
	int st = rand() % 1000;
	printf("恭喜完成第18章，神秘的直升机，攻击力 + %d", st);
	gongji += st;
	getchar();
	system("cls");
	printf("按任意键继续...");
	getchar();
	system("cls");
	zuo[18] = 1;
	return;
}
void level_19() {
	if (zuo[18] == 0) {
		system("cls");
		printf("请先完成第十八章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("你们几个快速跑上了直升机");
	getchar();
	system("cls");
	printf("由老王开着，你、总监、班长每人手持AT-X激光导弹");
	getchar();
	system("cls");
	printf("你们从上空俯视的时候，底下的情景让你们目瞪口呆...");
	getchar();
	system("cls");
	printf("那里已经不是之前那种的高楼了");
	getchar();
	system("cls");
	printf("整个世界乌烟瘴气都漂浮着僵尸的气息");
	getchar();
	system("cls");
	printf("所有的楼房都已坍塌成为一片平原...");
	getchar();
	system("cls");
	printf("唯一能看见的...就是远处...那最后的家园，那个不为人知的地方");
	getchar();
	system("cls");
	printf("你：...");
	getchar();
	system("cls");
	printf("总监：...");
	getchar();
	system("cls");
	printf("班长：...");
	getchar();
	system("cls");
	printf("你：僵尸来啦！！！！！！！！！");
	getchar();
	system("cls");
	printf("按任意键发起空袭...");
	getchar();
	system("cls");
	printf("僵尸情况：追踪丧尸\n\n");
	printf("血量：1000000 攻击力：250（左右） 特效：发射追踪导弹 难度：高（对于你血量来说）\n");
	int shixue = 1000000;
	int gongni = 250, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		if (k & 1) printf("你、老王、班长、总监向僵尸发起攻击，僵尸受击范围是%d", gongji * 6);
		else if (k > 50)printf("僵尸屏蔽了你的伤害");
		else {
			printf("僵尸使用技能：空袭");
			getchar();
			system("cls");
			printf("僵尸向你发射了追踪导弹");
			getchar();
			system("cls");
			printf("警告：你已被导弹锁定");
			getchar();
			system("cls");
			printf("你也在同一时间发射了一枚AT-X，想去冲撞追踪弹");
			getchar();
			system("cls");
			int sss = rand() % 10;
			if (sss & 1) {
				printf("但是追踪导弹闪过了你，冲向了直升机");
				getchar();
				system("cls");
				printf("轰！！！！！");
				getchar();
				system("cls");
				printf("按任意键返回...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("你成功拦截导弹");
			}
		}
		getchar();
		system("cls");
		if (k & 1)shixue -= gongji * 3;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//会攻击你 
		if (shixue >= t * 3) printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("僵尸即将自爆！！！！情做好心理准备！！！！");
				getchar();
				system("cls");
			}
			else {
				printf("轰！！！！！！！！！");
				getchar();
				system("cls");
				printf("你：啊^&&*^%^$......");
				getchar();
				system("cls");
				printf("老王：吹雪！");
				getchar();
				system("cls");
				printf("班长：吹雪！");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 40) {
					printf("死亡不可免的");
					getchar();
					system("cls");
					printf("要不...听我的，再开一把");
					getchar();
					system("cls");
					printf("按任意键继续");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("但在他们一段扫射之后，你被救起来了");
					getchar();
					system("cls");
					xue += 1000;
					printf("血量恢复1000");
					getchar();
					system("cls");
					printf("接着打");
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("凉凉...");
				getchar();
				system("cls");
				printf("倒下前，只听见老王大呼：吹雪！...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("你S了");
				getchar();
				system("cls");
				printf("但在他们一段扫射之后，你被救起来了");
				getchar();
				system("cls");
				xue += rand() % 10000;
				printf("血量恢复%d", xue);
				getchar();
				system("cls");
				printf("接着打！");
			}
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("老王：好险啊...");
	getchar();
	system("cls");
	printf("吃点食物，血量恢复");
	xue = man;
	getchar();
	system("cls");
	printf("你现在的攻击力是：%d", gongji);
	getchar();
	system("cls");
	printf("突然，前方又一次的落下空投...");
	getchar();
	system("cls");
	printf("按任意键\n|捡");
	getchar();
	system("cls");
	int some = rand() % 5000;
	printf("|追踪导弹 * 1 攻击力 + %d", some);
	gongji += some;
	getchar();
	system("cls");
	printf("|MG3 * 5 攻击力+ %d", some * 2);
	getchar();
	system("cls");
	printf("|盾牌 * 2 飞机拥有盾牌，被炸的几率更小了！");
	getchar();
	system("cls");
	printf("捡完了空投\n按任意键\n|起飞");
	getchar();
	system("cls");
	printf("你：哇，现在装备又丰富了！");
	getchar();
	system("cls");
	printf("老王：是啊是啊");
	getchar();
	system("cls");
	printf("你们一路飞到了那个所谓《最后的家园》的地方");
	getchar();
	system("cls");
	printf("总监：我感觉世界就要结束了一样，唉...");
	getchar();
	system("cls");
	printf("你：（不做声）");
	getchar();
	system("cls");
	printf("老王：（不做声）");
	getchar();
	system("cls");
	printf("班长：（不做声）");
	getchar();
	system("cls");
	printf("在半个小时以后，你们停到了那个仅剩的幸存者区");
	getchar();
	system("cls");
	printf("由保护罩包围，僵尸进不来");
	getchar();
	system("cls");
	printf("大概是一个城市的大小，6000多人");
	getchar();
	system("cls");
	printf("于是，你们也准备在里面生活一段时间");
	getchar();
	system("cls");
	printf("调整身心");
	getchar();
	system("cls");
	printf("但是，你们同时也知道");
	getchar();
	system("cls");
	printf("总有一天，丧尸是能进来的");
	getchar();
	system("cls");
	printf("恭喜完成第19章，最后的家园，血量上限+%d", gongji / xue);
	xue += gongji / xue;
	zuo[19] = 1;
	getchar();
	system("cls");
	printf("按任意键继续...");
	getchar();
	system("cls");
	return;
}
void level_20() {
	if (zuo[19] == 0) {
		system("cls");
		printf("请先完成第十九章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("里面有政府的人出来迎接");
	getchar();
	system("cls");
	printf("你：你们好");
	getchar();
	system("cls");
	printf("“你好你好”");
	getchar();
	system("cls");
	printf("“你们也是幸存者是吧”");
	getchar();
	system("cls");
	printf("老王：是的");
	getchar();
	system("cls");
	printf("“我们马上就给你们找个住处”");
	getchar();
	system("cls");
	printf("“你们要在一起吗”");
	getchar();
	system("cls");
	printf("你们四人相视而笑");
	getchar();
	system("cls");
	printf("“当然的啦”");
	getchar();
	system("cls");
	printf("于是，你们被带到了一个很大的屋子");
	getchar();
	system("cls");
	printf("里面的东西也比较的新");
	getchar();
	system("cls");
	printf("住着也算舒适");
	getchar();
	system("cls");
	printf("转眼间，又过了两周");
	getchar();
	system("cls");
	printf("到了第三周的时候...");
	getchar();
	system("cls");
	printf("“报！！！！！防护罩被丧尸用先进的武器攻破了！！！”");
	getchar();
	system("cls");
	printf("你、老王、总监、班长：什么？？");
	getchar();
	system("cls");
	printf("你们急忙出去看看");
	getchar();
	system("cls");
	printf("那么，你们将会看到什么场景？");
	getchar();
	system("cls");
	printf("僵尸到底会不会最终侵入幸存者营地？");
	getchar();
	system("cls");
	printf("你们又会结实那些新的队员呢");
	getchar();
	system("cls");
	printf("敬请期待《人类末日·丧尸危机·第二季》！");
	getchar();
	system("cls");
	printf("按任意键继续...");
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
	printf("剧情游戏《人类末日·丧尸危机·第二季》\n\n");
	Sleep(1500);
	printf("出品人:やわざなども\n\n");
	Sleep(1500);
	printf("出品时间：2021/5/20 ~ 2023/5/14\n\n");
	Sleep(1500);
	printf("特别鸣谢Pair的赞助\n\n");
	Sleep(1500);
	printf("版本2.4.16，增加荣誉称号\n\n");
	Sleep(1500);
	printf("欢迎指出问题哦");
	Sleep(3500);
	Start();
}
void Level_1() {
	getchar();
	system("cls");
	printf("你们飞快的扛起武器，向外跑去");
	getchar();
	system("cls");
	printf("却发现僵尸拿的武器你们已经不认识了");
	getchar();
	system("cls");
	printf("僵尸已经不是原来柔柔弱弱的傻瓜了");
	getchar();
	system("cls");
	printf("现在几乎每一个僵尸都有AT4-X激光导弹（别想到和**英上去）");
	getchar();
	system("cls");
	printf("而扛着追踪导弹的你也奈何不了跟着你来的子弹");
	getchar();
	system("cls");
	printf("只见形式十分危机，马上你们就被占领了");
	getchar();
	system("cls");
	printf("你们立刻聚在一起商议对策");
	getchar();
	system("cls");
	printf("老王：我们可以在顶楼上发射追踪导弹追踪僵尸");
	getchar();
	system("cls");
	printf("老王：然后诱导他们发出激光导弹");
	getchar();
	system("cls");
	printf("老王：我们再趴下，躲过导弹");
	getchar();
	system("cls");
	printf("老王：这样一直下去，迟早有一天僵尸的子弹会没有的");
	getchar();
	system("cls");
	printf("总监：你觉得僵尸就不会用他们自己的武器吗");
	getchar();
	system("cls");
	printf("班长：但是至少比激光导弹的攻击力要低吧");
	getchar();
	system("cls");
	printf("你：也是也是");
	getchar();
	system("cls");
	printf("谁知隔墙有耳，你们的对话被在窗户外面偷听的僵尸听到了");
	getchar();
	system("cls");
	printf("呃~~~~~~~~");
	getchar();
	system("cls");
	printf("僵尸情况：追踪丧尸\n\n");
	printf("血量：6666666 攻击力：666（左右） 特效：发射追踪导弹 难度：高（对于你血量来说）\n");
	int shixue = 6666666;
	int gongni = 666, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		if (k & 1) printf("你、老王、班长、总监向僵尸发起攻击，僵尸受击范围是%d", gongji * 6);
		else if (k > 50)printf("僵尸屏蔽了你的伤害");
		else {
			printf("僵尸向你发射了追踪导弹");
			getchar();
			system("cls");
			printf("警告：你已被导弹锁定");
			getchar();
			system("cls");
			printf("你也在同一时间发射了一枚AT-X，想去冲撞追踪弹");
			getchar();
			system("cls");
			int sss = rand() % 10;
			if (sss & 1) {
				printf("但是追踪导弹闪过了你发射的导弹，冲向了你！");
				getchar();
				system("cls");
				printf("轰！！！！！");
				getchar();
				system("cls");
				printf("按任意键返回...");
				getchar();
				system("cls");
				return;
			}
			else {
				int ss = rand() % 500;
				printf("你成功拦截导弹，但是由于你离导弹太近，血量减少%d", ss);
			}
		}
		getchar();
		system("cls");
		if (k & 1)shixue -= gongji * 6;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//会攻击你 
		if (shixue >= t * 3) printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("僵尸即将自爆！！！！情做好心理准备！！！！");
				getchar();
				system("cls");
			}
			else {
				printf("轰！！！！！！！！！");
				getchar();
				system("cls");
				printf("你：啊^&&*^%^$......");
				getchar();
				system("cls");
				printf("老王：吹雪！");
				getchar();
				system("cls");
				printf("班长：吹雪！");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 40) {
					printf("死亡不可免的");
					getchar();
					system("cls");
					printf("要不...听我的，再开一把");
					getchar();
					system("cls");
					printf("按任意键继续");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("但在他们一段扫射之后，你被救起来了");
					getchar();
					system("cls");
					xue += 1000;
					printf("血量恢复1000");
					getchar();
					system("cls");
					printf("接着打");
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("凉凉...");
				getchar();
				system("cls");
				printf("倒下前，只听见老王大呼：吹雪！...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("你S了");
				getchar();
				system("cls");
				printf("但在他们一段扫射之后，你被救起来了");
				getchar();
				system("cls");
				xue += rand() % 10000;
				printf("血量恢复%d", xue);
				getchar();
				system("cls");
				printf("接着打！");
			}
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("老王：我去吓死了，这里不会不安全吧");
	getchar();
	system("cls");
	printf("你：那肯定啦");
	getchar();
	system("cls");
	printf("总监：走换个位置去");
	getchar();
	system("cls");
	printf("你：好的");
	getchar();
	system("cls");
	printf("你们来到了另一个桌子前面");
	getchar();
	system("cls");
	printf("却发现了一块纸条");
	getchar();
	system("cls");
	printf("看纸条上面写的什么\n|1 看\n|2 不看");
	scanf("%d", &x);
	system("cls");
	if (x == 1) {
		printf("|怕僵尸吗？");
		getchar();
		system("cls");
		printf("|回头看看？");
	}
	else if (x == 2) {
		printf("但你终究没有逃过回头看一眼的命运");
		getchar();
		system("cls");
		printf("你回过了头");
	}
	if (x != 3) {
		getchar();
		system("cls");
		printf("之间一个人手里拿个刀，狠狠的盯着你");
		getchar();
		system("cls");
		printf("你完了，兄弟");
		getchar();
		system("cls");
		printf("按任意键返回");
		return;
	}
	getchar();
	system("cls");
	printf("草你怎么知道要按3的？？？");
	getchar();
	system("cls");
	printf("好吧不论如何你过了这一关");
	getchar();
	system("cls");
	int ss = rand() % 3000;
	printf("恭喜完成第1关！血量上限 + %d", ss);
	xue += ss;
	man = xue;
	getchar();
	system("cls");
	printf("按任意键继续...");
	getchar();
	system("cls");
	zuo[1] = 1;
	return;
}
void Level_2() {
	if (zuo[1] == 0) {
		system("cls");
		printf("请先完成第一章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
	getchar();
	system("cls");
	printf("“我也曾经为某人痴狂”\n\n");
	getchar();
	system("cls");
	printf("“来不及坚强”\n\n");
	getchar();
	system("cls");
	printf("老王：嘘...");
	getchar();
	system("cls");
	printf("你：...");
	getchar();
	system("cls");
	printf("班长：嗨哟！耶乎！乌拉！");
	getchar();
	system("cls");
	printf("总监：？？？你哪个国家的人？");
	getchar();
	system("cls");
	printf("班长：快看那里！05式微声冲锋枪！");
	getchar();
	system("cls");
	printf("你：...");
	getchar();
	system("cls");
	printf("你：你觉得在火力对决时代还用得着冲锋枪？");
	getchar();
	system("cls");
	printf("班长：...");
	getchar();
	system("cls");
	printf("僵尸：“嗯...或许会用到”");
	getchar();
	system("cls");
	printf("按任意键发起战斗");
	getchar();
	system("cls");
	printf("僵尸情况：追踪丧尸\n\n");
	printf("血量：6666666 攻击力：666（左右） 特效：发射追踪导弹 难度：高（对于你血量来说）\n");
	int shixue = 6666666;
	int gongni = 666, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		if (k & 1) printf("你、老王、班长、总监向僵尸发起攻击，僵尸受击范围是%d", gongji * 6);
		else if (k > 50)printf("僵尸屏蔽了你的伤害");
		else {
			printf("僵尸向你发射了追踪导弹");
			getchar();
			system("cls");
			printf("警告：你已被导弹锁定");
			getchar();
			system("cls");
			printf("你也在同一时间发射了一枚AT-X，想去冲撞追踪弹");
			getchar();
			system("cls");
			int sss = rand() % 10;
			if (sss & 1) {
				printf("但是追踪导弹闪过了你发射的导弹，冲向了你！");
				getchar();
				system("cls");
				printf("轰！！！！！");
				getchar();
				system("cls");
				printf("按任意键返回...");
				getchar();
				system("cls");
				return;
			}
			else {
				int ss = rand() % 500;
				printf("你成功拦截导弹，但是由于你离导弹太近，血量减少%d", ss);
			}
		}
		getchar();
		system("cls");
		if (k & 1)shixue -= gongji * 6;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//会攻击你 
		if (shixue >= t * 3) printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("僵尸即将自爆！！！！情做好心理准备！！！！");
				getchar();
				system("cls");
			}
			else {
				printf("轰！！！！！！！！！");
				getchar();
				system("cls");
				printf("你：啊^&&*^%^$......");
				getchar();
				system("cls");
				printf("老王：吹雪！");
				getchar();
				system("cls");
				printf("班长：吹雪！");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 40) {
					printf("死亡不可免的");
					getchar();
					system("cls");
					printf("要不...听我的，再开一把");
					getchar();
					system("cls");
					printf("按任意键继续");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("但在他们一段扫射之后，你被救起来了");
					getchar();
					system("cls");
					xue += 1000;
					printf("血量恢复1000");
					getchar();
					system("cls");
					printf("接着打");
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("凉凉...");
				getchar();
				system("cls");
				printf("倒下前，只听见老王大呼：吹雪！...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("你S了");
				getchar();
				system("cls");
				printf("但在他们一段扫射之后，你被救起来了");
				getchar();
				system("cls");
				xue += rand() % 10000;
				printf("血量恢复%d", xue);
				getchar();
				system("cls");
				printf("接着打！");
			}
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
	}
	getchar();
	system("cls");
	printf("就在这个时候，丧尸危机突然解除了...");
	getchar();
	system("cls");
	printf("不是你解除的");
	getchar();
	system("cls");
	printf("而是他自己慢慢就没有了...");
	getchar();
	system("cls");
	printf("你可能会问，接下来的关卡和成就是干啥的");
	getchar();
	system("cls");
	printf("我：我闹着玩的");
	getchar();
	system("cls");
	printf("总之，谢谢你来到这里");
	getchar();
	system("cls");
	printf("也谢谢你玩这个游戏");
	getchar();
	system("cls");
	printf("所以，僵尸即将来袭！");
	getchar();
	system("cls");
	getchar();
	system("cls");
	printf("僵尸情况：追踪丧尸\n\n");
	printf("血量：66666666 攻击力：666（左右） 特效：发射追踪导弹 难度：高（对于你血量来说）\n");
	shixue = 66666666;
	gongni = 666, yuan = gongji, ni = gongni;
	printf("你的血量：%d，你的攻击力：%d\n", xue, gongji);
	printf("按任意键发起战斗\n");
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
		if (k & 1) printf("你、老王、班长、总监向僵尸发起攻击，僵尸受击范围是%d", gongji * 6);
		else if (k > 50)printf("僵尸屏蔽了你的伤害，你被丧尸的冲击波整出了脑震荡，血量扣半"), xue /= 2, shixue += xue * xue;
		else {
			printf("僵尸向你发射了追踪导弹");
			getchar();
			system("cls");
			printf("警告：你已被导弹锁定");
			getchar();
			system("cls");
			printf("你也在同一时间发射了一枚AT-X，想去冲撞追踪弹");
			getchar();
			system("cls");
			int sss = rand() % 10;
			if (sss & 1) {
				printf("但是追踪导弹闪过了你发射的导弹，冲向了你！");
				getchar();
				system("cls");
				printf("轰！！！！！");
				getchar();
				system("cls");
				int s = rand() % 10;
				if (s == 1 || s % 2 == 0)printf("按任意键返回..."), getchar(), system("cls");
				else printf("你被揪了起来，僵尸闻了闻你，啊呜~~~~，嗯，真香"), getchar(), system("cls");
				return;
			}
			else {
				int ss = rand() % 500;
				printf("你成功拦截导弹，但是由于你离导弹太近，血量减少%d", ss);
				xue = xue - x + dun;
			}
		}
		getchar();
		system("cls");
		if (k & 1)shixue -= gongji * 6;
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		getchar();
		system("cls");
		if (shixue <= 0) {
			printf("呃^^#@%");
			getchar();
			system("cls");
			printf("僵尸倒下了");
			break;
		}
		k = rand() % 100;
		if (k & 1) gongni += rand() % 10;
		else gongni -= rand() % 10;
		int t = rand() % 200000;//会攻击你 
		if (shixue >= t * 3) printf("僵尸向你发起攻击，你的血量减少%d", gongni);
		else {
			getchar();
			system("cls");
			int k = rand() % 100;
			if (k > 40) {
				printf("僵尸即将自爆！！！！情做好心理准备！！！！");
				getchar();
				system("cls");
			}
			else {
				printf("轰！！！！！！！！！");
				getchar();
				system("cls");
				printf("你：啊^&&*^%^$......");
				getchar();
				system("cls");
				printf("老王：吹雪！");
				getchar();
				system("cls");
				printf("班长：吹雪！");
				getchar();
				system("cls");
				int s = rand() % 100;
				if (s > 40) {
					printf("死亡不可免的");
					getchar();
					system("cls");
					printf("要不...听我的，再开一把");
					getchar();
					system("cls");
					printf("按任意键继续");
					getchar();
					system("cls");
					return;
				}
				else {
					printf("但在他们一段扫射之后，你被救起来了");
					getchar();
					system("cls");
					xue += 1000;
					printf("血量恢复1000");
					getchar();
					system("cls");
					printf("接着打");
				}
			}
		}
		if (shixue >= t) xue -= gongni;
		if (xue <= 0) {
			getchar();
			system("cls");
			int s = rand() % 100;
			if (s > 80) {
				printf("凉凉...");
				getchar();
				system("cls");
				printf("倒下前，只听见老王大呼：吹雪！...");
				getchar();
				system("cls");
				return;
			}
			else {
				printf("你被僵尸击败了");
				getchar();
				system("cls");
				printf("但在他们一段轰射之后，你被救起来了");
				getchar();
				system("cls");
				xue += rand() % 10000;
				printf("血量恢复%d", xue);
				getchar();
				system("cls");
				printf("接着打！");
			}
		}
		getchar();
		system("cls");
		printf("僵尸血量：%d	你的血量：%d", shixue, xue);
		gongji = yuan;
		gongni = ni;
		getchar();
		system("cls");
		if (dun > xue)xue += dun;
		else {
			printf("僵尸暴怒，感觉收到了侮辱，你的血量至原血量的1/3");
			xue /= 3;
			xue += dun;
			getchar(), system("cls");
		}
	}
	getchar();
	system("cls");
	if (mz = 10086) {
		printf("这个时候，突然所有世界发出了一道白光\n");
		printf("你面前死去的丧尸突然奇迹般的活了过来\n");
		printf("变成了...\n人！所有的僵尸在这一时刻突然的咆哮了起来\n\n");
		printf("这是好呢还是坏呢\n僵尸们的身上慢慢出现伤痕，露出了一些痕迹");
		printf("\n你走近了去看，【2680-8-17】迷失\n僵尸们突然惊恐的捂住这些字眼\n\n");
		printf("他们像你咆哮起来，疯了一般的像你冲过来\n老王在旁边看的目瞪口呆，然而，你们都免不了被丧尸要死的命运\n\n");
		getchar();
		system("cls");
		printf("世界毁灭了...\n世界毁灭了...\n世界毁灭了...\n僵尸咆哮着，死咬着\n\n");
		printf("等你醒来的时候，突然发现你在一个屋子里\n里面的一切都消失了...\n是吗...因该这样吗\n\n");
		getchar();
		system("cls");
		mz = 20086;
		printf("怕是吧");
		getchar();
		system("cls");
		return;
	}
	return;
}
void Level_3() {
	if (zuo[2] == 0) {
		system("cls");
		printf("请先完成第二章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
}
void Level_4() {
	if (zuo[3] == 0) {
		system("cls");
		printf("请先完成第三章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
}
void Level_5() {
	if (zuo[4] == 0) {
		system("cls");
		printf("请先完成第四章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
}
void Level_6() {
	if (zuo[3] == 0) {
		system("cls");
		printf("请先完成第五章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
}
void Level_7() {
	if (zuo[3] == 0) {
		system("cls");
		printf("请先完成第六章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
}
void Level_8() {
	if (zuo[3] == 0) {
		system("cls");
		printf("请先完成第七章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
}
void Level_9() {
	if (zuo[3] == 0) {
		system("cls");
		printf("请先完成第八章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
}
void Level_10() {
	if (zuo[3] == 0) {
		system("cls");
		printf("请先完成第九章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
}
void Level_11() {
	if (zuo[3] == 0) {
		system("cls");
		printf("请先完成第十章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
}
void Level_12() {
	if (zuo[3] == 0) {
		system("cls");
		printf("请先完成第十一章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
}
void Level_13() {
	if (zuo[3] == 0) {
		system("cls");
		printf("请先完成第十二章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
}
void Level_14() {
	if (zuo[3] == 0) {
		system("cls");
		printf("请先完成第十三章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
}
void Level_15() {
	if (zuo[3] == 0) {
		system("cls");
		printf("请先完成第十四章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
}
void Level_16() {
	if (zuo[3] == 0) {
		system("cls");
		printf("请先完成第十五章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
}
void Level_17() {
	if (zuo[3] == 0) {
		system("cls");
		printf("请先完成第十六章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
}
void Level_18() {
	if (zuo[3] == 0) {
		system("cls");
		printf("请先完成第十七章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
}
void Level_19() {
	if (zuo[3] == 0) {
		system("cls");
		printf("请先完成第十八章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
}
void Level_20() {
	if (zuo[3] == 0) {
		system("cls");
		printf("请先完成第十九章");
		getchar();
		getchar();
		system("cls");
		printf("即将为你返回主页面，请等待1s");
		Sleep(3000);
		return;
	}
}
int s;
void MAP2() {
	system("cls");
	getchar();
	printf("#代表围墙	*代表僵尸攻进来的地方\n\n");
	printf("----------------------------------------------------------------\n");
	printf("|........大门******....        主楼         #      ...   ...  .|\n");
	printf("|..............***...       ............    #   ...办公厅... . ..|\n");
	printf("|    ...........*********     ..你们 ....   #   ....... .. . ..|\n");
	printf("|  .........                  ... ...........    #   ##    ..  |\n");
	printf("|                 ...... ..                                    |\n");
	printf("|        ... .......后楼......              .. ....            |\n");
	printf("|               . ........                  ....无人 ........  |\n");
	printf("|                  .........                 ......  ... ..... |\n");
	printf("|....小楼.......                                 ...           |\n");
	printf("| ... .....  .                                       ... .     |\n");
	printf("|##################### #  #   ##### #                #         |\n");
	printf("|   安全楼. .. ... .. . ....   ..             #########        |\n");
	printf("|..... .................                     .... ........ .   |\n");
	printf("|....                                           安全楼......     |\n");
	printf("| ..   ...... ...                       .......................|\n");
	printf("|........... . .. .... . . . .                                 |\n");
	printf("----------------------------------------------------------------\n");
	printf("按任意键返回...\n\n");
	if (mz == 20086 && zuo[20] == 1 && s > 10) {
		printf("你已经解锁终极剧情");
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
		printf("获得荣誉称号：荣誉少将");
		rong = 1;
	}
	if (zuo[3] == 1 && rong < 2) {
		system("cls");
		system("color 0F");
		printf("获得荣誉称号：荣誉中将");
		rong = 2;
	}
	if (zuo[7] == 1 && rong < 3) {
		system("cls");
		system("color 05");
		printf("获得荣誉称号：荣誉上将");
		rong = 3;
	}
	if (zuo[10] == 1 && rong < 4) {
		system("cls");
		system("color 05");
		printf("获得荣誉称号：光辉少将");
		rong = 4;
	}
	if (zuo[13] == 1 && rong < 5) {
		system("cls");
		system("color 04");
		printf("获得荣誉称号：光辉中将");
		rong = 5;
	}
	if (zuo[15] == 1 && rong < 6) {
		system("cls");
		system("color 04");
		printf("获得荣誉称号：光辉上将");
		rong = 6;
	}
	if (zuo[17] == 1 && rong < 7) {
		system("cls");
		system("color 02");
		printf("获得荣誉称号：决战I");
		rong = 7;
	}
	if (zuo[19] == 1 && rong < 8) {
		system("cls");
		system("color 02");
		printf("获得荣誉称号：决战II");
		rong = 8;
	}
	if (zuo[20] == 1 && rong < 9) {
		system("cls");
		system("color 06");
		printf("获得荣誉称号：决战III");
		rong = 9;
	}
	xue = man;
	getchar();
	if (x == 0 && flag == 0) getchar();
	system("cls");
	printf("姓名：吹雪\n\n");
	Sleep(300);
	printf("段位：");
	if (rong == 1) printf("荣誉少将\n\n");
	else if (rong == 2) printf("荣誉中将\n\n");
	else if (rong == 3) printf("荣誉上将\n\n");
	else if (rong == 4) printf("光辉少将\n\n");
	else if (rong == 5) printf("光辉中将\n\n");
	else if (rong == 6) printf("光辉上将\n\n");
	else if (rong == 7) printf("决战I\n\n");
	else if (rong == 8) printf("决战II\n\n");
	else if (rong == 9) printf("决战III\n\n");
	else if (rong == 0) printf("肝胆之人\n\n");
	Sleep(300);
	printf("输入章节:\n--------------------------\n");
	Sleep(300);
	printf("-1| 创造模式(开发中)\n");
	Sleep(300);
	printf("0| 查看地图\n");
	Sleep(300);
	printf("1| 主楼的危机\n");
	Sleep(300);
	printf("2| 政府机构\n");
	Sleep(300);
	printf("3| 地洞穿梭\n");
	Sleep(300);
	printf("4| 再遇格洛\n");
	Sleep(300);
	printf("5| 内乱\n");
	Sleep(300);
	printf("6| 内乱(2)\n");
	Sleep(300);
	printf("7| 新型变异体\n");
	Sleep(300);
	printf("8| OTA\n");
	Sleep(300);
	printf("9| 外界的力量\n");
	Sleep(300);
	printf("10| 神秘武器\n");
	Sleep(300);
	printf("11| 格洛原型\n");
	Sleep(300);
	printf("12| 再见，幸存者基地\n");
	Sleep(300);
	printf("13| 围墙之战\n");
	Sleep(300);
	printf("14| 僵尸新种族\n");
	Sleep(300);
	printf("15| 逐步打击\n");
	Sleep(300);
	printf("16| 寻找根源\n");
	Sleep(300);
	printf("17| 神秘的空投\n");
	Sleep(300);
	printf("18| 奇怪的僵尸\n");
	Sleep(300);
	printf("19| 是与非\n");
	Sleep(300);
	printf("20| 最后的基地\n");
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
		printf("你干啥");
		getchar();
		s++;
		system("cls");
	}
	goto qq;
}
void Start() {
	system("cls");
	printf("准备加载中...\n▊▊  10");
	Sleep(500);
	system("cls");
	printf("加载exe中...\n▊▊▊  15");
	Sleep(100);
	system("cls");
	printf("加载网络中...\n▊▊▊▊  20");
	Sleep(400);
	system("cls");
	printf("加载资源中...\n▊▊▊▊▊  25");
	Sleep(600);
	system("cls");
	printf("加载资源中...\n▊▊▊▊▊▊▊▊▊▊▊  55");
	Sleep(400);
	system("cls");
	printf("加载资源中...\n▊▊▊▊▊▊▊▊▊▊▊▊▊▊  70");
	Sleep(300);
	system("cls");
	printf("加载资源中...\n▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊  75");
	Sleep(1500);
	system("cls");
	printf("正在加载章节...\n▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊  90");
	Sleep(400);
	system("cls");
	printf("正在加载章节...\n▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊  100");
	Sleep(1000);
	system("cls");
	printf("正在进入游戏...\n▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊  100");
	system("cls");
	printf("清理记录中...\n▊  5");
	Sleep(500);
	system("cls");
	printf("网络调试中...\n▊▊▊▊  20");
	Sleep(1400);
	system("cls");
	printf("打开页面中...\n▊▊▊▊▊  25");
	Sleep(600);
	system("cls");
	printf("更新版本中...\n▊▊▊▊▊▊▊▊▊▊▊  55");
	Sleep(700);
	system("cls");
	printf("初始化中...\n▊▊▊▊▊▊▊▊▊▊▊▊▊▊  68");
	Sleep(300);
	system("cls");
	printf("撤销光标中...\n▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊  75");
	Sleep(1500);
	system("cls");
	printf("正在加载文章...\n▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊  90");
	Sleep(400);
	system("cls");
	printf("正在加载页面...\n▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊  100");
	Sleep(3000);
	system("cls");
	printf("正在进入游戏...\n▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊▊  100");
	Sleep(4000);
	system("cls");
	if (zuo[20] == 1) AND();
	printf("故事导入");
	getchar();
	system("cls");
	printf("是否跳过故事导入？\n 1.是	2.否\n");
	scanf("%d", &x);
	if (x == 1) {
		goto guo;
	}
	system("cls");
	getchar();
	printf("你叫做吹雪");
	getchar();
	system("cls");
	printf("生活在一个中等的家庭里");
	getchar();
	system("cls");
	printf("每天都会开私家车去MIR公司上班");
	getchar();
	system("cls");
	printf("在MIR公司，你对他们的生业做出了巨大的贡献，所有人都对你如嘉宾");
	getchar();
	system("cls");
	printf("你因此而十分快乐");
	getchar();
	system("cls");
	printf("有一天，老板告诉你：“副总裁啊，看你为我们公司也做了这么多，我提升你的工资每月2万吧”");
	getchar();
	system("cls");
	printf("“谢谢老板，但我愧不敢当啊”你说到");
	getchar();
	system("cls");
	printf("“应该是当之无愧啊”老板笑着说");
	getchar();
	system("cls");
	printf("你也笑了，又是一件多美好的事情啊");
	getchar();
	system("cls");
	printf("果然，第二天，你的工资就被提升到了2万");
	getchar();
	system("cls");
	printf("就这么含笑的光阴过了3年");
	getchar();
	system("cls");
	printf("到了26世纪4月23日");
	getchar();
	system("cls");
	printf("你还是如往常一样来上班了");
	getchar();
	system("cls");
	printf("又是一天...");
	getchar();
	system("cls");
	printf("前言完毕，请按任意键继续\n");
	getchar();
	system("cls");
guo:
	if (zuo[1] == 1 && rong < 1) {
		system("cls");
		system("color 0F");
		printf("获得荣誉称号：英勇上尉");
		rong = 1;
	}
	if (zuo[3] == 1 && rong < 2) {
		system("cls");
		system("color 0F");
		printf("获得荣誉称号：坚韧中校");
		rong = 2;
	}
	if (zuo[7] == 1 && rong < 3) {
		system("cls");
		system("color 05");
		printf("获得荣誉称号：临阵决绝");
		rong = 3;
	}
	if (zuo[10] == 1 && rong < 4) {
		system("cls");
		system("color 05");
		printf("获得荣誉称号：不朽干戈");
		rong = 4;
	}
	if (zuo[13] == 1 && rong < 5) {
		system("cls");
		system("color 04");
		printf("获得荣誉称号：机智铂金");
		rong = 5;
	}
	if (zuo[15] == 1 && rong < 6) {
		system("cls");
		system("color 04");
		printf("获得荣誉称号：造化之神");
		rong = 6;
	}
	if (zuo[17] == 1 && rong < 7) {
		system("cls");
		system("color 02");
		printf("获得荣誉称号：硝烟主宰");
		rong = 7;
	}
	if (zuo[19] == 1 && rong < 8) {
		system("cls");
		system("color 02");
		printf("获得荣誉称号：不死之躯");
		rong = 8;
	}
	if (zuo[20] == 1 && rong < 9) {
		system("cls");
		system("color 06");
		printf("获得荣誉称号：肝胆之人");
		rong = 9;
	}
	xue = man;
	getchar();
	if (x == 0 && flag == 0) getchar();
	system("cls");
	printf("姓名：吹雪\n\n");
	Sleep(300);
	printf("段位：");
	if (rong == 0) printf("顽强猎兵\n\n");
	else if (rong == 1) printf("英勇上尉\n\n");
	else if (rong == 2) printf("坚韧中校\n\n");
	else if (rong == 3) printf("临阵决绝\n\n");
	else if (rong == 4) printf("不朽干戈\n\n");
	else if (rong == 5) printf("机智铂金\n\n");
	else if (rong == 6) printf("造化之神\n\n");
	else if (rong == 7) printf("硝烟主宰\n\n");
	else if (rong == 8) printf("不死之躯\n\n");
	else if (rong == 9) printf("肝胆之人\n\n");
	Sleep(300);
	printf("输入章节:\n--------------------------\n");
	Sleep(300);
	printf("-1| 创造模式(开发中)\n");
	Sleep(300);
	printf("0| 查看地图\n");
	Sleep(300);
	printf("1| MIR公司\n");
	Sleep(300);
	printf("2| S城\n");
	Sleep(300);
	printf("3| S城(2)\n");
	Sleep(300);
	printf("4| Surviver\n");
	Sleep(300);
	printf("5| 废墟\n");
	Sleep(300);
	printf("6| 首都\n");
	Sleep(300);
	printf("7| 首都(2)\n");
	Sleep(300);
	printf("8| 监狱\n");
	Sleep(300);
	printf("9| ATO病毒\n");
	Sleep(300);
	printf("10| ATO病毒(2)\n");
	Sleep(300);
	printf("11| 第四大街\n");
	Sleep(300);
	printf("12| 格洛\n");
	Sleep(300);
	printf("13| 生存还是毁灭\n");
	Sleep(300);
	printf("14| 再别首都\n");
	Sleep(300);
	printf("15| 监狱坍塌\n");
	Sleep(300);
	printf("16| X城沦陷\n");
	Sleep(300);
	printf("17| 生化场所\n");
	Sleep(300);
	printf("18| 神秘的直升机\n");
	Sleep(300);
	printf("19| 最后的家园\n");
	Sleep(300);
	printf("20| 再扑的尸潮\n");
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
			printf("正在等待传送门的传送...");
			getchar();
			system("cls");
			printf("已传达");
			getchar();
			system("cls");
			DIERJI();
		}
		system("cls");
		printf("你是不想玩了吧");
		getchar();
		system("cls");
	}
	goto guo;
}
int main() {
	srand(time(0));
	printf("是否隐藏光标（建议不）\n 1. 是	 2.否\n");
	scanf("%d", &x);
	if (x == 1) HideCursor(1);
	if (x == 3) mz = 10086;
	system("cls");
	Sleep(1500);
	printf("剧情游戏《人类末日·丧尸危机·第一季》\n\n");
	Sleep(1500);
	printf("出品人:FwbAway(洛谷号)\n\n");
	Sleep(1500);
	printf("出品时间：2021/5/2 ~ 2022/5/14\n\n");
	Sleep(1500);
	printf("特别鸣谢明月的赞助\n\n");
	Sleep(1500);
	printf("版本8.4.16，增加荣誉称号\n\n");
	Sleep(1500);
	printf("欢迎指出问题哦");
	Sleep(3500);
	getchar();
	system("cls");
	printf("按Enter键开始（游戏中的所有地方均采用Enter键）\n\n");
	getchar();
	system("cls");
	Start();
	return 0;
}