//New version of the programm
#include <iostream>
#include <cstdlib>
#include <cstring>

int counter[] = {0,0,0,0,0,0};
std::string str_all_marks;

int main()
{
 
  //Получение всех оценок в строке и преобразование в массив
  std::getline(std::cin, str_all_marks);                     
  char *all_marks = new char[str_all_marks.length()+1];
  strcpy(all_marks, str_all_marks.c_str());
  
  
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
  		std::cout<<"Warning! Check your marks! Mark number: " << i+1 << "\n Mark: " << all_marks[i] << " is not in range" << std::endl;
  		break;	
  	}
  	
  }
  
  std::cout<< counter[2] << counter[3];
  

}
