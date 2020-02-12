#include<vector>
#include<iostream>
#include<cstdio>

int main(){
    std::vector<std::string> a;
    printf("write your words\n"); 
    for(std::string line; std::getline(std::cin,line);){
        a.push_back(line);      
    }
    printf("The words are: \n");
    for(size_t i=0; i<a.size(); ++i){
       if(a[i]==""){
          continue;
        }else{
         std::cout<<a[i]<<"\n"; 
        }
        for(size_t j=i+1; j<a.size(); ++j){
            if(a[j]==""){
              continue;
            }
            if(a[i]==a[j]){
              a[j]=""; 
            }
                
        }
    }
}
