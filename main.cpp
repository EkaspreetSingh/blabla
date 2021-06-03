#include <iostream>
#include<cstdlib>
#include<ctime>
#include<string.h>

using namespace std;

int main()
{
    srand(time(0));

    int aiRun,myRun,out=0,x,y,x1,y1;
    char toss[5], toss2[5];


    cout<<"choose odd or even? ";
    cin>>toss;

    cout<<"\n enter any number ";
    cin>>myRun;

    aiRun=(rand()%6)+1;

    cout<<"\n ai entered "<<aiRun;

    if((aiRun+myRun) %2 ==0)
        {cout<<"\n that's even";
         strcpy(toss2,"even");}

    else
       {cout<<"\n that's odd";
         strcpy(toss2,"odd");}


    if(strcmp(toss,toss2)==0)
        {cout<<"\n bol kya lega?(bat or bowl) ";
        cin>>toss;}

    else
       {
        x=(rand()%2);
        if (x==0)
            strcpy(toss,"bat");
        else
            strcpy(toss,"bowl");
        cout<<"\n ai said that u should "<<toss<<" first";

       }




    myRun=0;
    aiRun=0;

    for(int ball=0;out!=2;ball++)
    {
        if (strcmp(toss,"bat")==0)
        {
            cout<<"\n chal batting kar";
            cout<<"\n enter any number ";
            cin>>x;
            if(x>6)
            {
                cout<<"\n hai pagal cricket me ek ball me kabhi 6 se zyada run thoke hai?\n jaa yaar mai nhi khelta tere saath\n cheater kahi ka";
                break;
            }
            myRun+=x;

            x1=(rand()%6)+1;
            cout<<"\n ai entered "<<x1;

            cout<<"\n your total runs is "<<myRun;

            if (myRun>aiRun && out==1)
                break;

            if (x1==x)
                {
                    out+=1;
                    strcpy(toss,"bowl");
                    cout<<"\n tu out hogaya";
                }

                if(out==2)
                break;


        }

        if (strcmp(toss,"bowl")==0)
        {
            cout<<"\n chal bowling kar";
            cout<<"\n enter any number ";
            cin>>y1;
            if(y1>6)
            {
                cout<<"\n hai pagal cricket me ek ball me kabhi 6 se zyada run thoke hai?\n jaa yaar mai nhi khelta tere saath\n cheater kahi ka";
                break;
            }
            y=(rand()%6)+1;
            cout<<"\n ai entered "<<y;
            aiRun+=y;

            cout<<"\n total runs of ai is "<<aiRun;

            if (aiRun>myRun && out==1)
                break;

            if (y==y1)
                {
                    out+=1;
                    strcpy(toss,"bat");
                    cout<<"\n ai out hogaya";

                }

            if(out==2)
                break;


        }
    }

    if(myRun>aiRun)
            cout<<"\n\n CONGRATS YOU WIN\n";
        else if (aiRun>myRun)
            cout<<"\n\n SORRY YOU LOOSE\n";
        else
            cout<<"\n\n LOL ITS TIME FOR SUPER OVER\n";

    return 0;
}
