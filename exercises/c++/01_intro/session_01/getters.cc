#include<iostream>
int get_int(){
  int i;
  std::cout<<"Write an integer \n";
  while (!(std::cin>>i)){ 
      std::cout<< "Is not an integer\n";
      std::cin.clear();
      std::cin.ignore();
  }
  return i;
}

double get_double(){
  double j;
  std::cout<<"Write a double \n";
  while (!(std::cin>>j)){
      std::cout<< "Is not a double\n";
      std::cin.clear();
      std::cin.ignore();
  }
  return j;
}


int main () {
  int i;
  double j;
  j=get_double();
  std::cout<<j<< " is the double\n";
  i=get_int();
  std::cout<<i<<" is the integer\n";
}
