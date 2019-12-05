#include <iostream>
using namespace std;

int main()
{

    int n1,n2,ch,r;

    do{
    cout<<"\n1.ADDITION\n 2.SUBSTRACTION\n 3.MULTIPLY\n 4.DIVISION\n 5.EXIT"<<endl;
    cout<<"Enter your choice ";
    cin>>ch;

        switch(ch)
        {
                    case 1:  cout<<"\n Enter 2 nos ";
                            cin>>n1>>n2;
                            r = n1 + n2;
                            cout<<"ADDITION "<<r;
                            break;

                    case 2: cout<<"\n Enter 2 nos ";
                            cin>>n1>>n2;
                            r = n1 - n2;
                            cout<<"SUBSTRACTION "<<r;
                            break;

                    case 3: cout<<"\n Enter 2 nos ";
                            cin>>n1>>n2;
                            r = n1 * n2;
                            cout<<"MULTIPLY "<<r;
                            break;

                    case 4: cout<<"\n Enter 2 nos ";
                            cin>>n1>>n2;
                            r = n1 / n2;
                            cout<<"DIVISION "<<r;
                            break;

                    case 5: break;
        }


    }while(ch<5);

return 0;
}