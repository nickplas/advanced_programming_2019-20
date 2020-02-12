#include<iostream>
#include<vector>
int main(){
int k;
int m=2;
std::cout<<"insert number: \n";
std::cin>>k;
std::vector<int> v;
for(int i=0; i<(k+1); ++i){
   v.push_back(i);
}
std::cout<<"The prime numbers are: \n";
for(size_t j=2; j<(k+1); ++j){
   if(v[j]==0){
     continue;
   }else{
    std::cout<<v[j]<<"\n";
    while((j*m)<k+1){
        v[j*m]=0;
        m+=1;
    }
   m=2;
   }
}
}
