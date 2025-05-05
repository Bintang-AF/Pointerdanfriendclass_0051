#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{
private:
    string nama;

public:
    void setnama(string pnama);
    friend class siswa;
};

class siswa
{
private:
    int id;

public :
    void setid(int pid );
    void displayAll(orang &a);
};

void siswa::displayAll(orang &a)
{
    cout << id << endl << a.nama;
}
void orang::setnama(string pnama)
{
    nama = pnama ;

}
void siswa::setid(int pid)
{
    id = pid ;
}