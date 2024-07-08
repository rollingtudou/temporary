#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// 联系人结构体
struct Contact {
    string name;
    string phoneNumber;
};

// 函数：将联系人保存到文件
void saveContactsToFile(const vector<Contact>& contacts, const string& filename)
{
    ofstream file(filename); // 打开文件流
    if (file.is_open()) // 如果文件打开成功
    {
        for (const auto& contact : contacts) // 遍历联系人列表
        {
            file << contact.name << "," << contact.phoneNumber << "\n"; // 将联系人信息写入文件
        }
        file.close(); // 关闭文件流
        cout << "联系人已保存到文件！" << endl; // 输出提示信息
    }
    else // 如果文件打开失败
    {
        cerr << "无法打开文件！" << endl; // 输出错误信息
    }
}

// 函数：从文件中加载联系人
vector<Contact> loadContactsFromFile(const string& filename)
{
    vector<Contact> contacts; // 创建联系人列表
    ifstream file(filename); // 打开文件流
    if (file.is_open()) // 如果文件打开成功
    {
        string line;
        while (getline(file, line)) // 逐行读取文件内容
        {
            size_t pos = line.find(","); // 查找逗号位置
            Contact contact;
            contact.name = line.substr(0, pos); // 提取姓名
            contact.phoneNumber = line.substr(pos + 1); // 提取电话号码
            contacts.push_back(contact); // 将联系人添加到列表
        }
        file.close(); // 关闭文件流
    }
    else // 如果文件打开失败
    {
        cerr << "无法打开文件！" << endl; // 输出错误信息
    }
    return contacts; // 返回联系人列表
}

// 函数：显示所有联系人
void displayContacts(const vector<Contact>& contacts)
{
    for (const auto& contact : contacts) // 遍历联系人列表
    {
        cout << "姓名：" << contact.name << ", 电话：" << contact.phoneNumber << endl; // 输出联系人信息
    }
}

// 函数：按姓名查询联系人
void searchByName(const vector<Contact>& contacts, const string& name)
{
    for (const auto& contact : contacts) // 遍历联系人列表
    {
        if (contact.name == name) // 如果找到匹配姓名的联系人
        {
            cout << "姓名：" << contact.name << ", 电话：" << contact.phoneNumber << endl; // 输出联系人信息
        }
    }
}

// 函数：按电话查询联系人
void searchByPhoneNumber(const vector<Contact>& contacts, const string& phoneNumber)
{
    for (const auto& contact : contacts) // 遍历联系人列表
    {
        if (contact.phoneNumber == phoneNumber) // 如果找到匹配电话号码的联系人
        {
            cout << "姓名：" << contact.name << ", 电话：" << contact.phoneNumber << endl; // 输出联系人信息
        }
    }
}

// 函数：添加联系人
void addContact(vector<Contact>& contacts)
{
    Contact contact; // 创建新的联系人对象
    cout << "请输入联系人姓名：";
    cin >> contact.name; // 输入联系人姓名
    cout << "请输入联系人电话：";
    cin >> contact.phoneNumber; // 输入联系人电话
    contacts.push_back(contact); // 将联系人添加到列表
    cout << "联系人添加成功！" << endl; // 输出添加成功信息
}

// 函数：删除联系人
void deleteContact(vector<Contact>& contacts, const string& name)
{
    // 使用 remove_if 和 erase 算法删除匹配姓名的联系人
    contacts.erase(remove_if(contacts.begin(), contacts.end(), [&name](const Contact& contact) { return contact.name == name; }), contacts.end());
    cout << "联系人删除成功！" << endl; // 输出删除成功信息
}

// 函数：修改联系人信息
void editContact(vector<Contact>& contacts, const string& name)
{
    for (auto& contact : contacts) // 遍历联系人列表
    {
        if (contact.name == name) // 如果找到匹配姓名的联系人
        {
            cout << "请输入新的联系人姓名：";
            cin >> contact.name; // 输入新的联系人姓名
            cout << "请输入新的联系人电话：";
            cin >> contact.phoneNumber; // 输入新的联系人电话
            cout << "联系人信息修改成功！" << endl; // 输出修改成功信息
            return;
        }
    }
    cerr << "未找到对应的联系人！" << endl; // 输出错误信息
}

// 函数：显示联系人数量
void displayContactCount(const vector<Contact>& contacts)
{
    cout << "当前联系人数量：" << contacts.size() << endl; // 输出联系人数量
}

// 函数：按姓名排序联系人
void sortContactsByName(vector<Contact>& contacts)
{
    sort(contacts.begin(), contacts.end(), [](const Contact& a, const Contact& b)
        {
            return a.name < b.name; // 按姓名排序
        });
    cout << "联系人已按姓名排序！" << endl; // 输出排序成功信息
}

// 函数：按电话排序联系人
void sortContactsByPhoneNumber(vector<Contact>& contacts)
{
    sort(contacts.begin(), contacts.end(), [](const Contact& a, const Contact& b)
        {
            return a.phoneNumber < b.phoneNumber; // 按电话排序
        });
    cout << "联系人已按电话排序！" << endl; // 输出排序成功信息
}

// 函数：从文件中批量导入联系人
void batchImportContacts(vector<Contact>& contacts, const string& filename)
{
    // 加载指定文件中的联系人列表并添加到当前列表中
    vector<Contact> newContacts = loadContactsFromFile(filename);
    contacts.insert(contacts.end(), newContacts.begin(), newContacts.end());
    cout << "联系人已批量导入！" << endl; // 输出导入成功信息
}

// 函数：从文件中批量删除联系人
void batchDeleteContacts(vector<Contact>& contacts, const string& filename)
{
    // 加载指定文件中的联系人列表并逐个删除
    vector<Contact> contactsToDelete = loadContactsFromFile(filename);
    for (const auto& contact : contactsToDelete)
    {
        deleteContact(contacts, contact.name); // 调用删除联系人函数
    }
    cout << "联系人已批量删除！" << endl; // 输出删除成功信息
}

int main()
{
    vector<Contact> contacts = loadContactsFromFile("contacts.csv"); // 从文件加载联系人列表
    while (true) // 循环显示菜单
    {
        // 显示
        cout << "\n===== 通讯录管理系统 =====" << endl;
        cout << "1. 显示所有记录" << endl;
        cout << "2. 按姓名查询记录" << endl;
        cout << "3. 按电话查询记录" << endl;
        cout << "4. 添加联系人" << endl;
        cout << "5. 删除联系人" << endl;
        cout << "6. 修改联系人信息" << endl;
        cout << "7. 保存记录" << endl;
        cout << "8. 显示联系人数量" << endl;
        cout << "9. 按姓名排序联系人" << endl;
        cout << "10. 按电话排序联系人" << endl;
        cout << "11. 批量导入联系人" << endl;
        cout << "12. 批量删除联系人" << endl;
        cout << "13. 退出系统" << endl;
        cout << "请输入您的选择：";
        int choice;
        cin >> choice; // 接受用户输入的选择
        switch (choice) // 根据用户选择执行相应操作
        {
        case 1: // 显示所有记录
            displayContacts(contacts);
            break;
        case 2: // 按姓名查询记录
        {
            string name;
            cout << "请输入要查询的联系人姓名：" << endl;
            cin >> name;
            searchByName(contacts, name);
            break;
        }
        case 3: // 按电话查询记录
        {
            string phoneNumber;
            cout << "请输入要查询的联系人电话：" << endl;
            cin >> phoneNumber;
            searchByPhoneNumber(contacts, phoneNumber);
            break;
        }
        case 4: // 添加联系人
            addContact(contacts);
            break;
        case 5: // 删除联系人
        {
            string name;
            cout << "请输入要删除的联系人姓名：" << endl;
            cin >> name;
            deleteContact(contacts, name);
            break;
        }
        case 6: // 修改联系人信息
        {
            string name;
            cout << "请输入要修改的联系人姓名：" << endl;
            cin >> name;
            editContact(contacts, name);
            break;
        }
        case 7: // 保存记录
            saveContactsToFile(contacts, "contacts.csv");
            break;
        case 8: // 显示联系人数量
            displayContactCount(contacts);
            break;
        case 9: // 按姓名排序联系人
            sortContactsByName(contacts);
            break;
        case 10: // 按电话排序联系人
            sortContactsByPhoneNumber(contacts);
            break;
        case 11: // 批量导入联系人
        {
            string filename;
            cout << "请输入批量导入的文件名：" << endl;
            cin >> filename;
            batchImportContacts(contacts, filename);
            break;
        }
        case 12: // 批量删除联系人
        {
            string filename;
            cout << "请输入批量删除的文件名：" << endl;
            cin >> filename;
            batchDeleteContacts(contacts, filename);
            break;
        }
        case 13: // 退出系统
            cout << "感谢使用！再见！" << endl;
            return 0;
        default: // 无效的选择
            cerr << "无效的选择，请重新输入！" << endl;
        }
    }
    return 0;
}
