#include <iostream>
#include <cstdlib>
#include <cstring>

int counter[] = {0,0,0,0,0,0};
std::string str_all_marks;
char *all_marks = new char[1];

void Input(){
	
	//Получение всех оценок в строке и преобразование в массив
	std::cout<<"\nМои оценки: ";
	std::getline(std::cin, str_all_marks);                     
  all_marks = new char[str_all_marks.length()+1];
  strcpy(all_marks, str_all_marks.c_str());
	}

void Money(){
	for (int i = 0; i < str_all_marks.length(); i++){
          switch(all_marks[i]){
                  case '2':
                  counter[2]++;
                  break;

                  case '3':
                  counter[3]++;
                  break;

                  case '4':
                  counter[4]++;
                  break;

                  case '5':
                  counter[5]++;
                  break;        

                  default:
                  std::cout<<"---Warning! Check your marks! Mark number: " << i+1 << "\n Mark: " << all_marks[i] << " is not in range---\n\n";
                  break;        
          }
}

  std::cout<< "Результат подсчета д/с за пооученные оценки: " <<counter[2]*(-100) + counter[3]*(-50)+ counter[4]*50 + counter[5]*100;
}

int main(){

std::cout<<"Привет! Это программа для подсчета\nсредненго балла и денег за оценки!\n" << "Прежде всего введи все свои оценки ниже\n";
    Input();
system("cls");
std::cout<<"Ты ввел: " << str_all_marks << std::endl;
std::cout << "Что будеи считать? \n" << "а - деньги \n" << "b - средний балл \n" << "Введи значение: ";
char choice;
std::cin>>choice;
std::cout<<"\n";
   switch(choice){ 
   
       case 'a':
         Money();
         break;
         
       case 'b':
          std::cout << "---пока не реализовано---";
          break;
   }
  


}