#include<iostream>
#include<vector>
int main(){
std::vector<int> v;
v.push_back(2);
int c;
for(size_t i=3; i<100; ++i){          
   c=0;                                
   for(size_t j=2; j<i; ++j){       
      if((i%j)==0){                     
        break;                         
      }else{
        c+=1;
      }
   }
   if(c==(i-2)){
     v.push_back(i);
   }
}
int k=v.size();   
for(size_t i=0; i<k; ++i){
   std::cout<<v[i]<<"\n";
}  
}
