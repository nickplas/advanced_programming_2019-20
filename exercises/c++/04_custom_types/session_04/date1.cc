#include<iostream>
#include "libr.hpp" //is the name of the file


int main(){
    Date d1 = Date(20, month::Jan, 1929);
    Date d2 = Date(19, month::Jan, 1929);
    Date d3 = Date(11, month::Oct, 2001);
    d1.add_one_day();
    std::cout<<d1<<"\n";
    std::cout<<d2<<"\n";
    d1.add_days(2);
    d2.add_days(4);
    d1==d2 ? std::cout<<"They are the same"<<"\n" : std::cout<<"They are different"<<"\n" ;
    d1!=d3 ? std::cout<<"They are different"<<"\n" : std::cout<<"They are the same"<<"\n" ;
    std::cout<<d2<<"\n";
    std::cout<<d1<<"\n";

}

