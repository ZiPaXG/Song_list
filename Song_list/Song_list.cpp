// Song_list.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <string>
#include <string.h>
#include <fstream>

using namespace std;

struct Song
{
    string name_song;
    string author_song;
    string year;
    string text_song;
};

void save_text(Song song);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Song song;
    int a = 0;

    cout << "Введите что вы хотите сделать: " << endl;
    cout << "1 - если вы хотите добавить текст, " << endl;
    cout << "2 - если вы хотите удалить текст, " << endl;
    cout << "3 - если вы хотите изменить текст, " << endl;
    cout << "4 - если вы хотите отобразить текста на экране, " << endl;
    cout << "5 - если вы хотите сохранить текст в текстовый файл, " << endl;
    cout << "6 - если вы хотите найти все песни одного автора, " << endl;
    cout << "7 - если вы хотите найти во всех песнях определенный текст: " << endl;
    cin >> a;
    switch (a)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        save_text(song);
        break;
    case 6:
        break;
    case 7:
        break;
    }
}

void save_text(Song song)
{
    ofstream out;
    out.open("Song.txt", ios::app);
    getchar();
    for (;;)
    {
        cout << "Введите текст песни(если захотите остановиться нажмите ~): " << endl;
        string text_song;
        //getchar();
        getline(cin, text_song);
        cout << text_song << endl;
        if (text_song == "~")
        {
            cout << "ERROR" << endl;
            break;
        }
        else
        {
            out << text_song << endl;
        }
    }
    out.close();
}