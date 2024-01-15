#include <iostream>
using namespace std;
int main(){
int i, j;

i = 4;
j = 2 * i++;
i = 2 * --j;

cout<<"el valor de:"<<j<<"\n"<<i<<endl;

return 0;
}