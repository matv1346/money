 

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

     int  marks[4] = {0, 0 , 0, 0}; 

     bool k = false; 

     for (int i = 0; i < o; i++) 

     { 

         switch (a[i]) { 

         case '5': 

             marks[3]++; 

             break; 

         case '4': 

           marks[2]++; 

             break; 

         case'3': 

             marks[1]++; 

             break; 

         case'2': 

             marks[0]++; 

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

        marks[3] *= 100; 

        marks[2] *= 50; 

        marks[1] *= 50; 

        marks[0] *= 100; 

         int sum = marks[2] + marks[3] - marks[0] - marks[1]; 

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
      


    


