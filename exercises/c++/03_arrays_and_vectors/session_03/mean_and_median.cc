#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>

int main(){
double value;
double sum=0.0;
double mean=0.0;
double median=0.0;
std::vector<double> v;
std::ifstream temp("temperatures.txt");
while(temp>>value){
     v.push_back(value);
}
temp.close();
std::sort( v.begin(), v.end() );
for(size_t i=0; i<v.size(); ++i){
  // std::cout<<v[i]<<"\n";
   sum+=v[i];
}
mean=sum/v.size();
std::cout<<"The mean is: "<<mean<<"\n";
if(v.size()%2==0){
   median=(v[v.size()/2]+v[(v.size()/2)-1])/2;
   std::cout<<"The median is: "<<median <<"\n";
}else{
   median=v[ceil(v.size()/2)];
    std::cout<<"The median is: "<<median <<"\n";
}
}
