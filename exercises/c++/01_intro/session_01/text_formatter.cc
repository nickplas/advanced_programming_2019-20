#include<iostream>
#include<string.h>
void text(){
  std::string line;
  std::string s;
  int d;
  std::cout<<"Write your text\n";
  std::cin>> line;
  std::cout<<"How many characters so you want?\n";
  std::cin>> d;  
  int i=0;
  int c;
  int f;
  char x;
  int end = line.length();
  while (i<end){ 
    x=line[i+d];
    if(isspace(x)){
      s=line.substr(i,d);
      std::cout<<s<<"\n";
      f=d;
      } else{
      for(c=d; c>i; --c){
        x=line[i+c];
        if(isspace(x)){
	  s=line.substr(i, c);
          std::cout<<s<<"\n";
          f=c;
          break;     
          }
         }
      }
    i=i+f;
    if(i>end){
      s=line.substr(i-f, end);
      std::cout<< s << "\n";
    }
     }
}
int main(){
  text();
}
