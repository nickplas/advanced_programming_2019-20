#include<iostream>
int main(){
int k;
int m=2;
std::cout<<"insert number: \n";
std::cin>>k;
int* a{new int[k]};
for(int i=0; i<(k+1); ++i){
   a[i]=i;
}
std::cout<<"The prime numbers are: \n";
for(size_t j=2; j<(k+1); ++j){
   if(a[j]==0){
     continue;
   }else{
    std::cout<<a[j]<<"\n"; 
    while((j*m)<k+1){
        a[j*m]=0;
        m+=1;     
    }
   m=2;
   }
}
delete[] a;
}

