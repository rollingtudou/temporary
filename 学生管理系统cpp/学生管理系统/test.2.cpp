#include "select.h"
#include <iostream>
#include <limits>

// ���������Ѿ��ṩ�Ĳ˵�������ԭ������
void menu1();
void menu2();
void menu3();
void menu4();
void menu5();
void menu6();
void menu7();
//...

// ����Ա�γ̹���˵�������
void handleAdminCourseMenu(select& m) {
    // ʾ����������Ա�γ̹���˵���ʵ���߼�
    int choice;
    do {
        menu3(); // ��ʾ����Ա�γ̹���˵�
        std::cout << "������ѡ�" << std::endl;
        std::cin >> choice;

        switch (choice) {
        case 1:
            // ��ѯ�γ���Ϣ��ʵ��
            break;
        case 2:
            // ���ӿγ���Ϣ��ʵ��
            m.input(); // ʾ�������� select ��� input ����
            break;
            // ���� case
        case 7: // ������һ���Ĵ���
            return;
        default:
            std::cout << "��Чѡ�����������롣\n";
            break;
        }
    } while (choice != 7);
}

// ����Աѧ������˵�������
void handleAdminStudentMenu(select& m) {
    // ʾ����������Աѧ������˵���ʵ���߼�
}

// �������ṩ�������˵������������Ӧ�Ĵ�����
//...

int main() {
    select m; // ʵ����������
    menu1(); // ��ʾ��һ���˵�

    int entryChoice;
    std::cout << "��ѡ�������ڣ�" << std::endl;
    std::cin >> entryChoice;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ������뻺����

    switch (entryChoice) {
    case 1:
        // �������Ա���棬����Ա����ʵ�֣�����������ʾ���ṩ�Ļ����ϼ���ʵ��
        handleAdminCourseMenu(m); // ʾ�������ù���Ա�γ̹���˵�������
        break;
    case 2:
        // ����ѧ�����棬ѧ������ʵ��
        break;
    default:
        std::cout << "��Чѡ�����������롣\n";
        break;
    }

    return 0;
}