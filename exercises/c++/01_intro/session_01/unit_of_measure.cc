#include<iostream>
void unit (){
  double m;
  double i;
  int c;
  int c1;
  std::cout<<"Write the number \n";
  std::cin>>i;
  std::cout<<"In which measure you want to convert your data?\n";
  std::cout<<"Press: 1 metres; 2 kilograms; 3 seconds; 4 Celsius\n"; 
  std::cin>>c;
 
  switch(c){
  case(1):  std::cout<< "Which is the unit of measure of your data?\n";
            std::cout<< "Press: 1 km; 2 hm; 3 dam; 4 m; 5 dm; 6 cm; 7 mm; 8 inch; 9 ft\n "; 
            std::cin>>c1;
            switch(c1){
            case(1): std::cout<< i << " km are " << i*1000 << "metres\n"; break;
            case(2): std::cout<< i << " hm are " << i*100 << "metres\n"; break;
            case(3): std::cout<< i << " dam are " << i*10 << "metres\n"; break;
            case(4): std::cout<< i << " m are " << i << "metres\n"; break;
            case(5): std::cout<< i << " dm are " << i*0.1 << "metres\n"; break;
            case(6): std::cout<< i << " cm are " << i*0.01 << "metres\n"; break;
            case(7): std::cout<< i << " mm are " << i*0.001 << "metres\n"; break;
            case(8): std::cout<< i << " inch are " << i*0.0254 << " metres\n"; break;
            case(9): std::cout<< i << " ft are " << i*0.3048 << " metres\n"; break;
	    default: std::cout<<"Invalid input\n"; break;
            }; break;
  case(2):  std::cout<< "Which is the unit of measure of your data?\n";
            std::cout<< "Press: 1 mg; 2 g; 3 lb; 4 kg; 5 q; 6 t;\n "; 
            std::cin>>c1;
            switch(c1){ 
            case(1): std::cout<< i << " mg are " << i*0.000001 << " kilograms\n"; break;
            case(2): std::cout<< i << " g are " << i*0.001 << " kilograms\n"; break;
            case(3): std::cout<< i << " lb are " << i*0.4536 << " kilograms\n"; break;
            case(4): std::cout<< i << " kg are " << i << " kilograms\n"; break;
            case(5): std::cout<< i << " q  are " << i*100 << " kilograms\n"; break;
            case(6): std::cout<< i << " t  are " << i*1000 << " kilograms\n"; break;
            default: std::cout<<"Invalid input \n"; break;
	    }; break;
  case(3):  std::cout<< "Which is the unit of measure of your data?\n";
            std::cout<< "Press: 1 ms; 2 s; 3 m; 4 h; 5 day; 6 year \n "; 
            std::cin>>c1;
            switch(c1){ 
            case(1): std::cout<< i << " ms are " << i*0.001 << " seconds\n"; break;
            case(2): std::cout<< i << " s   are " << i << " seconds\n"; break;
            case(3): std::cout<< i << " m are " << i*60 << " seconds\n"; break;
            case(4): std::cout<< i << " h are " << i*3600 << " seconds\n"; break;
            case(5): std::cout<< i << " days are " << i*86400 << " seconds\n"; break;
            case(6): std::cout<< i << " years are " << i*31536000 << " seconds\n"; break;
	    default: std::cout<<"Invalid input \n"; break;
            }; break;
  case(4):  std::cout<< "Which is the unit of measure of your data?\n";
            std::cout<< "Press: 1 C; 2 K; 3 F; \n "; 
            std::cin>>c1;
            switch(c1){ 
            case(1): std::cout<< i << " C are " << i << " Celsius\n"; break;
            case(2): std::cout<< i << " K  are " << i-273.15 << " Celsius\n"; break;
            case(3): std::cout<< i << " F  are " << (i-32)/1.8 << " Celsius\n"; break;  
	    default: std::cout<<"Invalid input\n"; break;
            }; break;
  default: std::cout<<"Invalid input \n"; break; 
 };
}

int main(){
  unit();
}
