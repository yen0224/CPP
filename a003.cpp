#include<iostream>
using namespace std;

int main()
{
int M;
int D;
int S;

cin>>M>>D;
S=(M*2+D)%3;
switch(S){
	case 0:
		cout<<"���q"<<endl;
		break;
	case 1:
		cout<<"�N"<<endl;
		break;
	case 2:
		cout<<"�j�N"<<endl;
		break;
	}
  return 0;
}