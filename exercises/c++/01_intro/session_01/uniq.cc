#include<iostream>
int main(int argc,  char *argv){
  int i=0;
  int j;
  int k;
  int h;
  std::string a[100]; 
  //std::string line;
  // while(std::getline(std::cin,line)){
  //  a[i]=line;         //every cell has a line
  //  i+=1;              //counts the number of lines
  //   }
   for(std::string line; std::getline(std::cin,line);){
     a[i]=line;          //every cell has a line
     i+=1;               //counts the number of lines
  }
  std::cout<<"The words are: \n";
  for(j=0; j<i; ++j){
    if(a[j]==" "){  //check if a line is empty
      continue;
    }
    int c=1;
    for(k=j+1; k<i; ++k){
      if(a[k]==" "){
	continue;
      }
      if(a[j]==a[k]){ //comparison between lines
        c+=1;
        a[k]=" ";
      }
      
     
    }
    std::cout<<a[j]<<" "<<c<< std::endl; //prints the words with the counter      
      c=1;
}
}
