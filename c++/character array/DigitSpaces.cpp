#include <iostream>
using namespace std;
int main() {

    char ch;

    ch=cin.get();

    int alpha=0;
    int digit=0;
    int space=0;

    //count alphabets, digits, spaces in input statement.
    while(ch!='\n'){
        if(ch>='0' and ch<='9'){
             digit++;
        }
        else if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z')){
            alpha++;
        }
        else if(ch==' ' or ch=='\t'){
            space++;
        }
        ch=cin.get();
    }

    cout<<"alpha"<<alpha<<endl;
    cout<<"digit"<<digit<<endl;
    cout<<"space"<<space<<endl;
     return 0;
}