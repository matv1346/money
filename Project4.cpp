#include <iostream>
using namespace std;
int o;
char* a = new char[o];

void input()
{
    cout << "Введите количество оценок:";
    cin >> o;
    cout << "Введите все оценки без пробелов:";
    for (int i = 0; i < o; i++)
    {
        cin >> a[i];
    }
    
}
void math()
{
    int five, fore, three, two;
    five = fore = three = two = 0;
    for (int i = 0; i < o; i++)
    {
        switch (a[i]) {
        case '5':
            five++;
            break;
        case '4':
            fore++;
            break;
        case'3':
            three++;
            break;
        case'2':
            two++;
            break;
        default:
            cout << "Ошибка: число не является областью определения [2;5]";
            break;
        }
    }

    five *= 100;
    fore *= 50;
    three *= 50;
    two *= 100;
    int sum =  fore + five - two - three;
    cout << sum;
}
int main()
{
    input();
    math();
    delete[]a;
    a = nullptr;
    return 0;
}

