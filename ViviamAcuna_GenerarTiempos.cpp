#include <iostream>
#include <ctime>

using namespace std;

//Se declaran las funciones
int fibonacci(int N);
float get_time(int N);
//Funcion de fibonacci
int fibonacci(int N){
  if (N== 0 || N==1 ){
    
    return N;
  }
  
  else{
    return fibonacci(N-2)+ fibonacci(N-1);
  }
 }
//Calculo de tiempo

float get_time(int N){
  clock_t t;
  t = clock();
// SOME CODE THAT TAKES TIME
  fibonacci(N);
  t = clock() - t;
  float time = ((float)t)/CLOCKS_PER_SEC;
  return time;

}
//Funcion main

int main(){

  int N;
   
  fibonacci(N);
  
  get_time(N);
  N=35;
  for(int i=0;i<=N;i++){
 cout << i <<" "<< get_time(i) << endl;

  }
  
  return 0;
}
