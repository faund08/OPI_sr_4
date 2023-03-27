#include <iostream>
using namespace std;
//	Для введеного числа n в одному циклі обчислити n!
int main()
{
    int N, i, fact=1;
    cout << "Введите число для вычисления факториала: ";
    cin >> N;
     for (int i = 2; i <= N; i++) {
       fact *= i;
     }
  cout << "Факториал числа " << N << " = " << fact;
}