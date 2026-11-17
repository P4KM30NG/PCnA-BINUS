#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class studentList
{
    private: 
        string studentNames[10];
        int count = 0; // fungsi buat ngecek, udah sampe limit ukuran arraynya belum

    public:
        void inputName(string name)
        {
           if (count < 10){  // kalau belum ya masukkan ke array dengan index ke count lalu count++
            studentNames[count] = name; 
            count++;
           } else { // kalo full ya gak ditambah
            cout << "List is full," << name << " was not added into the list" << endl;
           }
        }
       
        void searchName(string keyword)
        {
            string* result = find(studentNames, studentNames + count, keyword); // rumus cari resultnya, awal, akhirnya, dan apa yang dicari, ngereturn nilai

            if (result != studentNames + count) // ngecek memorinya, karena array nyimpennya kek memori, kalau memorinya gak sama dengan memori yang ditambah dengan count maka mengeluarkan found
            {
                cout << "Found " << *result << endl;
            }
            else // kalau memorinya sama, maka gaada
            {
                cout << keyword << " was not found." << endl;
            }
        }
};

int main()
{
    string name;
    string findName;
    studentList list;
    for (int i = 0; i < 10; i++){
        cout << "Input Student Name:";
        getline(cin, name);
        list.inputName(name);
    }

    cout << "What name do you want to find:";
    getline(cin, findName);
    list.searchName(findName);
}