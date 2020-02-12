#include<cstdio>  //use printf
#include<map>     //use map
#include<iostream>
enum class month {Jan=1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

class Date {
  private:
   int d;
   month m;
   int y;
   std::map<month, int> d_m = {   //pairs the month with 
    {month::Jan, 31},             //the number of days
    {month::Feb, 28},
    {month::Mar, 31},
    {month::Apr, 30},
    {month::May, 31},
    {month::Jun, 30},
    {month::Jul, 31},
    {month::Aug, 31},
    {month::Sep, 30},
    {month::Oct, 31},
    {month::Nov, 30},
    {month::Dec, 31}

   };

   public:
    const unsigned int day() const {return d;}
    const month month() const {return m;}
    const unsigned int year() const {return y;}
    void add_one_day(){
         if(d==d_m[m]){
            d=1;
            if(m==month::Dec){
               m=month::Jan;
               ++y;
            }else{
            int num =static_cast<int>(m);
            ++num;
            m=static_cast<enum month>(num);
            } 
         }else{
          ++d;  
         }
         
    }  
   void add_days(const unsigned int n){
       for(size_t i=0; i<n; ++i){
          add_one_day();
       }
   }
   Date(int day, enum month mon, int year){
       d = day;
       m = mon;
       y = year;
   }
};
bool operator==(const Date& lhs, const Date& rhs){
     return lhs.day()==rhs.day() && lhs.month()==rhs.month() && lhs.year()==rhs.year();
}

bool operator!=(const Date& lhs, const Date& rhs){
     return lhs.day()!=rhs.day() || lhs.month()!=rhs.month() || lhs.year()!=rhs.year();
}

std::ostream& operator<<(std::ostream& os, const Date& d){
   os<<d.day()<<"/"<<static_cast<int>(d.month())<<"/"<<d.year()<<"\n";
   return os;
}


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
