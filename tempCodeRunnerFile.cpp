#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(int argc, char const *argv[])
{
    srand( time(NULL) );
    int ra=rand()%1000+1;
    cout<<ra;
    int userinput;
    cin>>userinput;
    int condition=1;
    char check=89;
    while (check==89)
    {
        if(userinput==ra){
            cout<<"restart?(Y/N)\n";
            cin>>check;
            if(check=='Y'){
                srand( time(NULL) );
                ra=rand()%1000+1;
                cout<<ra;
                cin>>userinput;
            }
            else{
                check=0;
            }
        }
        else if(userinput>ra){
            cout<<"too high\n";
            cin>>userinput;
        }
        else{
            cout<<"too low\n";
            cin>>userinput;
        }
    }
    
    
    /* code */
    return 0;
}
