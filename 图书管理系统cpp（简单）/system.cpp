#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <limits>

using namespace std;

// Book class definition
class Book {
    string title;
    string isbn;
    string author;

public:
    void setTitle(string title) { this->title = title; }
    void setIsbn(string isbn) { this->isbn = isbn; }
    void setAuthor(string author) { this->author = author; }
    string getTitle() { return title; }
    string getIsbn() { return isbn; }
    string getAuthor() { return author; }
    Book(string title = "Unknown", string isbn = "0000", string author = "Unknown");
    void input(istringstream& iss);
    void output(ofstream& ofile);
};

Book::Book(string title, string isbn, string author) {
    this->title = title;
    this->isbn = isbn;
    this->author = author;
}

void Book::input(istringstream& iss) {
    cout << "������ͼ����Ϣ��������ISBN�����ߣ�:" << endl;
    string t, i, a;
    iss >> t >> i >> a;
    setTitle(t);
    setIsbn(i);
    setAuthor(a);
}

void Book::output(ofstream& ofile) {
    ofile << getTitle() << '\t' << getIsbn() << '\t' << getAuthor() << '\t';
}

// BorrowInfo class definition
class BorrowInfo : public Book {
    string borrowDate;
    int duration;
    string returnDate;
    float fine;

public:
    void setBorrowDate(string borrowDate) { this->borrowDate = borrowDate; }
    void setDuration(int duration) { this->duration = duration; }
    void setReturnDate(string returnDate) { this->returnDate = returnDate; }
    void setFine(float fine) { this->fine = fine; }
    string getBorrowDate() { return borrowDate; }
    int getDuration() { return duration; }
    string getReturnDate() { return returnDate; }
    float getFine() { return fine; }
    BorrowInfo(string title = "Unknown", string isbn = "0000", string author = "Unknown", string borrowDate = "00", int duration = 0, string returnDate = "00", float fine = 0);
    void input(istringstream& iss);
    void output(ofstream& ofile);
};

BorrowInfo::BorrowInfo(string title, string isbn, string author, string borrowDate, int duration, string returnDate, float fine)
    : Book(title, isbn, author) {
    this->borrowDate = borrowDate;
    this->duration = duration;
    this->returnDate = returnDate;
    this->fine = fine;
}

void BorrowInfo::input(istringstream& iss) {
    cout << "�����������Ϣ���������ڣ������������������ڣ����:" << endl;
    string bd, rd;
    int d;
    float f;
    iss >> bd >> d >> rd >> f;
    setBorrowDate(bd);
    setDuration(d);
    setReturnDate(rd);
    setFine(f);
}

void BorrowInfo::output(ofstream& ofile) {
    ofile << getBorrowDate() << '\t' << getDuration() << '\t' << getReturnDate() << '\t' << getFine() << '\t';
}

// LibraryInfo class definition
class LibraryInfo : public BorrowInfo {
    string section;
    string genre;

public:
    void setSection(string section) { this->section = section; }
    void setGenre(string genre) { this->genre = genre; }
    string getSection() { return section; }
    string getGenre() { return genre; }
    LibraryInfo(string title = "Unknown", string isbn = "0000", string author = "Unknown", string borrowDate = "00", int duration = 0, string returnDate = "00", float fine = 0, string section = "00", string genre = "00");
    void input(istringstream& iss);
    void output(ofstream& ofile);
};

LibraryInfo::LibraryInfo(string title, string isbn, string author, string borrowDate, int duration, string returnDate, float fine, string section, string genre)
    : BorrowInfo(title, isbn, author, borrowDate, duration, returnDate, fine) {
    this->section = section;
    this->genre = genre;
}

void LibraryInfo::input(istringstream& iss) {
    cout << "������ݲ���Ϣ���ݲ�λ�ã����:" << endl;
    string sec, gen;
    iss >> sec >> gen;
    setSection(sec);
    setGenre(gen);
}

void LibraryInfo::output(ofstream& ofile) {
    ofile << getSection() << '\t' << getGenre() << endl;
}

// Reader class definition
class Reader {
    string id;
    string name;
    string department;

public:
    void setId(string id) { this->id = id; }
    void setName(string name) { this->name = name; }
    void setDepartment(string department) { this->department = department; }
    string getId() { return id; }
    string getName() { return name; }
    string getDepartment() { return department; }
    Reader(string id = "0", string name = "Unknown", string department = "Unknown");
    friend ostream& operator<<(ostream& os, const Reader& r);
    friend istream& operator>>(istream& is, Reader& r);
};

Reader::Reader(string id, string name, string department) {
    this->id = id;
    this->name = name;
    this->department = department;
}

ostream& operator<<(ostream& os, const Reader& r) {
    os << r.id << '\t' << r.name << '\t' << r.department;
    return os;
}

istream& operator>>(istream& is, Reader& r) {
    is >> r.id >> r.name >> r.department;
    return is;
}

// LibrarySystem class definition
class LibrarySystem {
    Book books[100];
    BorrowInfo borrowInfos[100];
    LibraryInfo libraryInfos[100];
    Reader readers[100];
    int count;
    int readerCount;

public:
    LibrarySystem(int c = 0) { count = c; readerCount = 0; }
    void input();
    void inputReaders();
    void saveToFile();
    void loadFromFile();
    void searchBook();
    void deleteBook();
    void updateBook();
    void displayBooks();
};

void LibrarySystem::input() {
    char ch;
    string inputLine;

    do {
        cout << "������ͼ����Ϣ��������ISBN�����ߣ���������Ϣ֮���ÿո����:" << endl;
        getline(cin, inputLine);
        istringstream iss(inputLine);

        books[count].input(iss);

        cout << "�����������Ϣ���������ڣ������������������ڣ������������Ϣ֮���ÿո����:" << endl;
        getline(cin, inputLine);
        iss.str(inputLine);
        iss.clear();
        borrowInfos[count].input(iss);

        cout << "������ݲ���Ϣ���ݲ�λ�ã���𣩣�������Ϣ֮���ÿո����:" << endl;
        getline(cin, inputLine);
        iss.str(inputLine);
        iss.clear();
        libraryInfos[count].input(iss);

        count++;
        cout << "�Ƿ�������룿(y/n): ";
        cin >> ch;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (ch == 'y' || ch == 'Y');
}

void LibrarySystem::inputReaders() {
    char ch;
    do {
        cout << "�����������Ϣ��ѧ�ţ�������Ժϵ����������Ϣ֮���ÿո����:" << endl;
        cin >> readers[readerCount];
        readerCount++;
        cout << "�Ƿ�������룿(y/n): ";
        cin >> ch;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (ch == 'y' || ch == 'Y');
}

void LibrarySystem::saveToFile() {
    ofstream ofile("libraryinfo.txt", ios::out);
    if (!ofile) {
        cerr << "�ļ���ʧ��!" << endl;
        exit(1);
    }

    for (int i = 0; i < count; ++i) {
        books[i].output(ofile);
        borrowInfos[i].output(ofile);
        libraryInfos[i].output(ofile);
    }

    for (int i = 0; i < readerCount; ++i) {
        ofile << readers[i] << endl;
    }

    ofile.close();
}

void LibrarySystem::loadFromFile() {
    ifstream ifile("libraryinfo.txt", ios::in);
    if (!ifile) {
        cerr << "�ļ���ʧ��!" << endl;
        exit(1);
    }

    string line;
    while (getline(ifile, line
    )) {
        istringstream iss(line);
        string title, isbn, author, borrowDate, returnDate, section, genre, readerId, readerName, readerDepartment;
        int duration;
        float fine;

        if (iss >> title >> isbn >> author >> borrowDate >> duration >> returnDate >> fine >> section >> genre) {
            books[count].setTitle(title);
            books[count].setIsbn(isbn);
            books[count].setAuthor(author);

            borrowInfos[count].setBorrowDate(borrowDate);
            borrowInfos[count].setDuration(duration);
            borrowInfos[count].setReturnDate(returnDate);
            borrowInfos[count].setFine(fine);

            libraryInfos[count].setSection(section);
            libraryInfos[count].setGenre(genre);

            count++;
        }
        else if (iss >> readerId >> readerName >> readerDepartment) {
            readers[readerCount].setId(readerId);
            readers[readerCount].setName(readerName);
            readers[readerCount].setDepartment(readerDepartment);

            readerCount++;
        }
    }

    ifile.close();
}

void LibrarySystem::searchBook() {
    string query;
    cout << "������������ISBN��������: ";
    getline(cin, query);

    for (int i = 0; i < count; ++i) {
        if (books[i].getTitle() == query || books[i].getIsbn() == query) {
            cout << "�ҵ�ͼ��: " << books[i].getTitle() << ", ISBN: " << books[i].getIsbn() << ", ����: " << books[i].getAuthor() << endl;
            return;
        }
    }
    cout << "δ�ҵ�ƥ���ͼ�顣" << endl;
}

void LibrarySystem::deleteBook() {
    string query;
    cout << "������Ҫɾ����������ISBN: ";
    getline(cin, query);

    for (int i = 0; i < count; ++i) {
        if (books[i].getTitle() == query || books[i].getIsbn() == query) {
            for (int j = i; j < count - 1; ++j) {
                books[j] = books[j + 1];
                borrowInfos[j] = borrowInfos[j + 1];
                libraryInfos[j] = libraryInfos[j + 1];
            }
            count--;
            cout << "ͼ��ɾ���ɹ���" << endl;
            return;
        }
    }
    cout << "δ�ҵ�ƥ���ͼ�顣" << endl;
}

void LibrarySystem::updateBook() {
    string query;
    cout << "������Ҫ���µ�������ISBN: ";
    getline(cin, query);

    for (int i = 0; i < count; ++i) {
        if (books[i].getTitle() == query || books[i].getIsbn() == query) {
            cout << "�������µ�ͼ����Ϣ��������ISBN�����ߣ���������Ϣ֮���ÿո����:" << endl;
            string inputLine;
            getline(cin, inputLine);
            istringstream iss(inputLine);
            books[i].input(iss);

            cout << "�������µĽ�����Ϣ���������ڣ������������������ڣ������������Ϣ֮���ÿո����:" << endl;
            getline(cin, inputLine);
            iss.str(inputLine);
            iss.clear();
            borrowInfos[i].input(iss);

            cout << "�������µĹݲ���Ϣ���ݲ�λ�ã���𣩣�������Ϣ֮���ÿո����:" << endl;
            getline(cin, inputLine);
            iss.str(inputLine);
            iss.clear();
            libraryInfos[i].input(iss);

            cout << "ͼ����Ϣ���³ɹ���" << endl;
            return;
        }
    }
    cout << "δ�ҵ�ƥ���ͼ�顣" << endl;
}

void LibrarySystem::displayBooks() {
    cout << "����ͼ����Ϣ:" << endl;
    for (int i = 0; i < count; ++i) {
        cout << "����: " << books[i].getTitle() << ", ISBN: " << books[i].getIsbn() << ", ����: " << books[i].getAuthor() << endl;
        cout << "��������: " << borrowInfos[i].getBorrowDate() << ", ��������: " << borrowInfos[i].getDuration() << ", ��������: " << borrowInfos[i].getReturnDate() << ", ����: " << borrowInfos[i].getFine() << endl;
        cout << "�ݲ�λ��: " << libraryInfos[i].getSection() << ", ���: " << libraryInfos[i].getGenre() << endl;
        cout << "---------------------" << endl;
    }
}

int main() {
    LibrarySystem libSys;
    char choice;

    do {
        cout << "1. ����ͼ����Ϣ" << endl;
        cout << "2. ���������Ϣ" << endl;
        cout << "3. ������Ϣ���ļ�" << endl;
        cout << "4. ���ļ�������Ϣ" << endl;
        cout << "5. ����ͼ��" << endl;
        cout << "6. ɾ��ͼ��" << endl;
        cout << "7. ����ͼ��" << endl;
        cout << "8. ��ʾ����ͼ��" << endl;
        cout << "0. �˳�" << endl;
        cout << "������ѡ��: ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
        case '1':
            libSys.input();
            break;
        case '2':
            libSys.inputReaders();
            break;
        case '3':
            libSys.saveToFile();
            break;
        case '4':
            libSys.loadFromFile();
            break;
        case '5':
            libSys.searchBook();
            break;
        case '6':
            libSys.deleteBook();
            break;
        case '7':
            libSys.updateBook();
            break;
        case '8':
            libSys.displayBooks();
            break;
        case '0':
            cout << "�˳�����" << endl;
            break;
        default:
            cout << "��Чѡ����������롣" << endl;
        }
    } while (choice != '0');

    return 0;
}
