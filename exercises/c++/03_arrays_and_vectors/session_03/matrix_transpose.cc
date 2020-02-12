#include<iostream>
#include<utility>
#include<array>

std::array<double, 12>& transpose(std::array<double, 12>& v,std::array<double, 12>& v1, int& rows, int& col){
   if(rows==col){
     for(size_t i=0; i<rows; ++i){
       for(size_t j=0; j<col; ++j){
          if (i!=j && i<j){
             std::swap(v[i*col+j], v[j*rows+i]);
          }
       }
    }
   std::swap(rows, col);
   return v;
   }else{
   for(size_t i=0; i<rows; ++i ){
      for(size_t j=0; j<col; ++j){
         v1[j*rows+i]=v[i*col+j];                
         }        
      }
   std::swap(rows, col);      
   return v1;
   } 
}

int main(){
int rows=4;
int col=3;
int size=rows*col;
std::array<double, 12> matrix={1,2,3,4,5,6,7,8,9,10,11,12};
std::array<double, 12> matrix1;
//std::cout<<matrix.size()<<"\n";
for(size_t i=0; i<rows; ++i){
   for(size_t j=0; j<col; ++j ){
   std::cout<<matrix[i*col+j]<<" ";
   }
   std::cout<<"\n";
 }
std::cout<<"The transposed matrix is \n";   
transpose(matrix,matrix1, rows, col);
for(size_t i=0; i<rows; ++i){
   for(size_t j=0; j<col; ++j){
   std::cout<<matrix1[i*col+j]<<" ";
   }
   std::cout<<"\n";
 }

}

