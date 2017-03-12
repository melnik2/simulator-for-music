// ряд случайных чисел 
//#include <windows.h>
//#include <locale.h>      //русск шрифты

#include <iostream>      //ввод-вывод  'cout'
#include <stdio.h>       // 'printf'
#include <conio.h>       // 'getch'
#include <math.h>        // вычисление
#include <cstdlib>       // случайн число
#include <ctime>         // инициализация функции rand значением функции time

int main(int argc, char* argv[]) {

/*
setlocale(LC_ALL, "Russian");
system("chcp 1251");
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
*/

std::cout << "Google+ http://plus.google.com/107022365509369805155\temail: haxi.ru";

  using namespace std; // называется - раскрытием пространства имен 'std::'

  srand (time(NULL));  // инициализация функции rand значением функции time

  int a1,a2,a3,a4,a5,a6,a7;
  int b1,b2;
  int k1,k2;
  int q1,q2,q3,q4;
  char N,M,L;
  char J1,J2,J3,J4;
  char U1,U2,U3,U4;
  char m1[8]={'c','d','e','f','g','a','h'};
  int m2[8];

do{

  a1=a5=a7= rand() % 7 +0;
  a2= rand() % 7 +0;
  k1=0;
  k2=0;
  a3=-1;
  a6=7;

  m2[a2]=a1;
  for (int i=1; a2+i<7; i++){
  if (a1<6 && k1==0)a1++;
  else a3++, a1=a3, k1=1;
  m2[a2+i]=a1;
  }

  for (int i=1; a2-i>-1; i++){
  if (a5>0 && k2==0)--a5;
  else --a6, a5=a6, k2=1;
  m2[a2-i]=a5;
  }
/*
  for (int i=0; i<7; i++){
  cout << m2[i] << " ";
  }
*/

  cout <<endl<<endl<<m1[a7]<<" "<<a2+1<<endl<<endl;

  b1= rand() % 6 +1;
  cout<<"Input "<<b1+1<<endl;
  const time_t t1 = time(NULL);
  q1=m2[b1];
  N= m1[q1];
  while(N!=M){
  cin >>  M;
  if (N==M) cout <<"good"<<endl;
  else M=' ', cout <<"bad"<<endl;
  }

  b2= rand() % 6 +1;
  if (b2==b1)b2= rand() % 6 +1;

  cout<<"Input "<<b2+1<<endl;
  q1=m2[b2];
  N= m1[q1];
  while(N!=M){
  cin >>  M;
  if (N==M) cout <<"good"<<endl;
  else M=' ', cout <<"bad"<<endl;
  }

  q1=m2[0];
  q2=m2[2];
  q3=m2[4];
  q4=m2[3];
  J1=m1[q1];
  J2=m1[q2];
  J3=m1[q3];
  J4=m1[q4];

  cout <<"Input stable sounds - 1,3,5"<<endl;

  while(U1!=J1 && U2!=J2 && U3!=J3 ){
  cin >>  U1 >> U2 >> U3;
  if (U1==J1 && U2==J2 && U3==J3) cout <<"good"<<endl;
  else U1=U2=U3=' ', cout <<"bad"<<endl;
  }

U1=U2=U3=' ';

  cout <<"Input TSD - 1,4,5"<<endl;

  while(U1!=J1 && U4!=J4 && U3!=J3 ){
  cin >>  U1 >> U4 >> U3;
  if (U1==J1 && U4==J4 && U3==J3) cout <<"good"<<endl;
  else U1=U4=U3=' ', cout <<"bad"<<endl;
  }

 //----------------------------

  const time_t t2 = time(NULL);
  cout <<"Time "<<t2-t1<<" c"<<endl;

  for (int i=0; i<7; i++){
  q1=m2[i];
  cout << m1[q1] << " ";
  }
  q1=m2[0];
  cout <<m1[q1]<<" ";
  for (int i=6; i>-1; --i){
  q1=m2[i];
  cout << m1[q1] << " ";
  }
  cout <<endl;

cout <<endl<<"Repeat ";
cin >> L;
}while(L=='y');

  delete [] m2;
  U1=U2=U3=U4=M=L=' ';
  cout<<endl<<endl<<endl<<endl<<endl;
  system("PAUSE");
  return 0;
 }

