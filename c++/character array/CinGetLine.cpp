#include <iostream>
using namespace std;
int main() {

 char sentence[10];

//3 para; 1-read inside ; 2- max character hold ; 3- termination character(default '\n')
 cin.getline(sentence, 100,'#');

 cout<<sentence;


     return 0;
}