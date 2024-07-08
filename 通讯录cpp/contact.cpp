#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// ��ϵ�˽ṹ��
struct Contact {
    string name;
    string phoneNumber;
};

// ����������ϵ�˱��浽�ļ�
void saveContactsToFile(const vector<Contact>& contacts, const string& filename)
{
    ofstream file(filename); // ���ļ���
    if (file.is_open()) // ����ļ��򿪳ɹ�
    {
        for (const auto& contact : contacts) // ������ϵ���б�
        {
            file << contact.name << "," << contact.phoneNumber << "\n"; // ����ϵ����Ϣд���ļ�
        }
        file.close(); // �ر��ļ���
        cout << "��ϵ���ѱ��浽�ļ���" << endl; // �����ʾ��Ϣ
    }
    else // ����ļ���ʧ��
    {
        cerr << "�޷����ļ���" << endl; // ���������Ϣ
    }
}

// ���������ļ��м�����ϵ��
vector<Contact> loadContactsFromFile(const string& filename)
{
    vector<Contact> contacts; // ������ϵ���б�
    ifstream file(filename); // ���ļ���
    if (file.is_open()) // ����ļ��򿪳ɹ�
    {
        string line;
        while (getline(file, line)) // ���ж�ȡ�ļ�����
        {
            size_t pos = line.find(","); // ���Ҷ���λ��
            Contact contact;
            contact.name = line.substr(0, pos); // ��ȡ����
            contact.phoneNumber = line.substr(pos + 1); // ��ȡ�绰����
            contacts.push_back(contact); // ����ϵ����ӵ��б�
        }
        file.close(); // �ر��ļ���
    }
    else // ����ļ���ʧ��
    {
        cerr << "�޷����ļ���" << endl; // ���������Ϣ
    }
    return contacts; // ������ϵ���б�
}

// ��������ʾ������ϵ��
void displayContacts(const vector<Contact>& contacts)
{
    for (const auto& contact : contacts) // ������ϵ���б�
    {
        cout << "������" << contact.name << ", �绰��" << contact.phoneNumber << endl; // �����ϵ����Ϣ
    }
}

// ��������������ѯ��ϵ��
void searchByName(const vector<Contact>& contacts, const string& name)
{
    for (const auto& contact : contacts) // ������ϵ���б�
    {
        if (contact.name == name) // ����ҵ�ƥ����������ϵ��
        {
            cout << "������" << contact.name << ", �绰��" << contact.phoneNumber << endl; // �����ϵ����Ϣ
        }
    }
}

// ���������绰��ѯ��ϵ��
void searchByPhoneNumber(const vector<Contact>& contacts, const string& phoneNumber)
{
    for (const auto& contact : contacts) // ������ϵ���б�
    {
        if (contact.phoneNumber == phoneNumber) // ����ҵ�ƥ��绰�������ϵ��
        {
            cout << "������" << contact.name << ", �绰��" << contact.phoneNumber << endl; // �����ϵ����Ϣ
        }
    }
}

// �����������ϵ��
void addContact(vector<Contact>& contacts)
{
    Contact contact; // �����µ���ϵ�˶���
    cout << "��������ϵ��������";
    cin >> contact.name; // ������ϵ������
    cout << "��������ϵ�˵绰��";
    cin >> contact.phoneNumber; // ������ϵ�˵绰
    contacts.push_back(contact); // ����ϵ����ӵ��б�
    cout << "��ϵ����ӳɹ���" << endl; // �����ӳɹ���Ϣ
}

// ������ɾ����ϵ��
void deleteContact(vector<Contact>& contacts, const string& name)
{
    // ʹ�� remove_if �� erase �㷨ɾ��ƥ����������ϵ��
    contacts.erase(remove_if(contacts.begin(), contacts.end(), [&name](const Contact& contact) { return contact.name == name; }), contacts.end());
    cout << "��ϵ��ɾ���ɹ���" << endl; // ���ɾ���ɹ���Ϣ
}

// �������޸���ϵ����Ϣ
void editContact(vector<Contact>& contacts, const string& name)
{
    for (auto& contact : contacts) // ������ϵ���б�
    {
        if (contact.name == name) // ����ҵ�ƥ����������ϵ��
        {
            cout << "�������µ���ϵ��������";
            cin >> contact.name; // �����µ���ϵ������
            cout << "�������µ���ϵ�˵绰��";
            cin >> contact.phoneNumber; // �����µ���ϵ�˵绰
            cout << "��ϵ����Ϣ�޸ĳɹ���" << endl; // ����޸ĳɹ���Ϣ
            return;
        }
    }
    cerr << "δ�ҵ���Ӧ����ϵ�ˣ�" << endl; // ���������Ϣ
}

// ��������ʾ��ϵ������
void displayContactCount(const vector<Contact>& contacts)
{
    cout << "��ǰ��ϵ��������" << contacts.size() << endl; // �����ϵ������
}

// ������������������ϵ��
void sortContactsByName(vector<Contact>& contacts)
{
    sort(contacts.begin(), contacts.end(), [](const Contact& a, const Contact& b)
        {
            return a.name < b.name; // ����������
        });
    cout << "��ϵ���Ѱ���������" << endl; // �������ɹ���Ϣ
}

// ���������绰������ϵ��
void sortContactsByPhoneNumber(vector<Contact>& contacts)
{
    sort(contacts.begin(), contacts.end(), [](const Contact& a, const Contact& b)
        {
            return a.phoneNumber < b.phoneNumber; // ���绰����
        });
    cout << "��ϵ���Ѱ��绰����" << endl; // �������ɹ���Ϣ
}

// ���������ļ�������������ϵ��
void batchImportContacts(vector<Contact>& contacts, const string& filename)
{
    // ����ָ���ļ��е���ϵ���б���ӵ���ǰ�б���
    vector<Contact> newContacts = loadContactsFromFile(filename);
    contacts.insert(contacts.end(), newContacts.begin(), newContacts.end());
    cout << "��ϵ�����������룡" << endl; // �������ɹ���Ϣ
}

// ���������ļ�������ɾ����ϵ��
void batchDeleteContacts(vector<Contact>& contacts, const string& filename)
{
    // ����ָ���ļ��е���ϵ���б����ɾ��
    vector<Contact> contactsToDelete = loadContactsFromFile(filename);
    for (const auto& contact : contactsToDelete)
    {
        deleteContact(contacts, contact.name); // ����ɾ����ϵ�˺���
    }
    cout << "��ϵ��������ɾ����" << endl; // ���ɾ���ɹ���Ϣ
}

int main()
{
    vector<Contact> contacts = loadContactsFromFile("contacts.csv"); // ���ļ�������ϵ���б�
    while (true) // ѭ����ʾ�˵�
    {
        // ��ʾ
        cout << "\n===== ͨѶ¼����ϵͳ =====" << endl;
        cout << "1. ��ʾ���м�¼" << endl;
        cout << "2. ��������ѯ��¼" << endl;
        cout << "3. ���绰��ѯ��¼" << endl;
        cout << "4. �����ϵ��" << endl;
        cout << "5. ɾ����ϵ��" << endl;
        cout << "6. �޸���ϵ����Ϣ" << endl;
        cout << "7. �����¼" << endl;
        cout << "8. ��ʾ��ϵ������" << endl;
        cout << "9. ������������ϵ��" << endl;
        cout << "10. ���绰������ϵ��" << endl;
        cout << "11. ����������ϵ��" << endl;
        cout << "12. ����ɾ����ϵ��" << endl;
        cout << "13. �˳�ϵͳ" << endl;
        cout << "����������ѡ��";
        int choice;
        cin >> choice; // �����û������ѡ��
        switch (choice) // �����û�ѡ��ִ����Ӧ����
        {
        case 1: // ��ʾ���м�¼
            displayContacts(contacts);
            break;
        case 2: // ��������ѯ��¼
        {
            string name;
            cout << "������Ҫ��ѯ����ϵ��������" << endl;
            cin >> name;
            searchByName(contacts, name);
            break;
        }
        case 3: // ���绰��ѯ��¼
        {
            string phoneNumber;
            cout << "������Ҫ��ѯ����ϵ�˵绰��" << endl;
            cin >> phoneNumber;
            searchByPhoneNumber(contacts, phoneNumber);
            break;
        }
        case 4: // �����ϵ��
            addContact(contacts);
            break;
        case 5: // ɾ����ϵ��
        {
            string name;
            cout << "������Ҫɾ������ϵ��������" << endl;
            cin >> name;
            deleteContact(contacts, name);
            break;
        }
        case 6: // �޸���ϵ����Ϣ
        {
            string name;
            cout << "������Ҫ�޸ĵ���ϵ��������" << endl;
            cin >> name;
            editContact(contacts, name);
            break;
        }
        case 7: // �����¼
            saveContactsToFile(contacts, "contacts.csv");
            break;
        case 8: // ��ʾ��ϵ������
            displayContactCount(contacts);
            break;
        case 9: // ������������ϵ��
            sortContactsByName(contacts);
            break;
        case 10: // ���绰������ϵ��
            sortContactsByPhoneNumber(contacts);
            break;
        case 11: // ����������ϵ��
        {
            string filename;
            cout << "����������������ļ�����" << endl;
            cin >> filename;
            batchImportContacts(contacts, filename);
            break;
        }
        case 12: // ����ɾ����ϵ��
        {
            string filename;
            cout << "����������ɾ�����ļ�����" << endl;
            cin >> filename;
            batchDeleteContacts(contacts, filename);
            break;
        }
        case 13: // �˳�ϵͳ
            cout << "��лʹ�ã��ټ���" << endl;
            return 0;
        default: // ��Ч��ѡ��
            cerr << "��Ч��ѡ�����������룡" << endl;
        }
    }
    return 0;
}
