#include <iostream>
#include <string>
using namespace std;
int o,x;
char* a = new char[o+1];
double* b = new double[o];


void input(int v)
{
    if (v == 1) {
        cout << "Введите количество оценок: ";
        cin >> o;
        cout << endl;
        x = o;
        for (int i = 0; i < o; i++)
        {
            cout << "Введите оценку " << i+1 << ": ";
            cin >> b[i];
        }
       
    }
    else if(v == 0) {
        string x;
        cout << "Введите все оценки без пробелов:";
        cin >> x;
        o = x.length();
        strcpy(a, x.c_str());
    }
}
void math()
{
    int five, fore, three, two;
    five = fore = three = two = 0;
    bool k = false;
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
            k = true;
            break;
        }
    }
    if (k == true) {
        cout << "Ошибка: число не является областью определения [2;5]";
    }
    else {
        five *= 100;
        fore *= 50;
        three *= 50;
        two *= 100;
        int sum = fore + five - two - three;
        cout << "Итого: " << sum;
    }
}

int main()
{
    int q;
    cout <<"Что вы хотите сделать? 1 - Посчитать средний балл , 2 - узнать количество денег за треместр:  ";
    cin >> q;
    cout << endl;
    if (q == 1) {
        input(1);
        double sum = 0;
        for (int i = 0; i < o; i++) {
            
            sum = sum + b[i];
            
        }
        for (int i = 0; i < 25; i++)
            cout << "|/";
        cout << endl;
        sum = sum / x;
        cout << "Вш средний балл = " << sum  << endl;
        system("pause");
    }
    else {
        input(0);
        math();
        system("pause");
    }
    return 0;
}
