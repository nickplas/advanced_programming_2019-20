#include<iostream>
int main(){
int prime[100];
prime[0]=2;
int c;
int k=1;
for(size_t i=3; i<100; ++i){            //I prefer to allocate a big array
   c=0;                                 //instead to allocate everytime a  
   for(size_t j=2; j<i; ++j){           //new array when a new element is
      if((i%j)==0){                     //added just because I want to 
        break;                          //limit the accesses to the Heap
      }else{
        c+=1;
      }
   }
   if(c==(i-2)){
     prime[k]=i;
     k+=1;
   }
}                                           
for(size_t i=0; i<k; ++i){
   std::cout<<prime[i]<<"\n";
}
}
