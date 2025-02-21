//ترتیب نویت در اولین خط آمده است    در هر پرانتز عدد اول عدد تاس و عدد بعدی خانه ای است که بازیکن در آن قرار دارد
//
//                      39  40  1
//                      38 |41| 2
//         Ariyan       37 |42| 3        Amir
//                      36 |43| 4
//  31   32   33   34   35 |44| 5    6    7    8   9            
//  30  |71| |72| |73| |74||||||54| |53| |52| |51| 10           <-- صفحه منچ
//  29   28   27   26   25 |64| 15   14   13   12  11
//                      24 |63| 16
//          Reza        23 |62| 17        Ali
//                      22 |61| 18
//                      21  20  19


#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int amir=0,ali=10,reza=20,ariyan=30,randomnumber;
int ali1=0,ali2=0,ali3=0,ali4=0;
int amir1=0,amir2=0,amir3=0,amir4=0;
int reza1=0,reza2=0,reza3=0,reza4=0;
int ariyan1=0,ariyan2=0,ariyan3=0,ariyan4=0;
bool amir_in=false,ali_in=false,reza_in=false,ariyan_in=false;
bool alibar1=false,rezabar1=false,ariyanbar1=false;
bool EndGame=false;

void amirturn()
{
    cout<<"( ";
    randomnumber=(rand() % 6)+1;
    cout<<randomnumber<<" - ";
    if(randomnumber==6 && !amir_in || amir_in)
    {
        if(!amir_in)
        {
            amir+=1;
        }
        else
        {
            amir+=randomnumber;
        }
        amir_in=true;
        cout<<amir<<" ";
        if(amir>=45)
        {
            cout<<" --> Illegal attempt! Wait for next chance ";
            amir-=randomnumber;
        }
        if(amir>=41 && amir<=44 )
        {
            if(amir1==0)
            {
                amir1=amir;
                amir=0;
                cout<<"( Amir first nut: "<<amir1<<" )";
                amir_in=false;
            }
            if(amir1!=0 && amir!=amir1 && amir2==0 && amir!=0)
            {
                amir2=amir;
                amir=0;
                cout<<"( Amir second nut: "<<amir2<<" )";
                amir_in=false;
            }
            else if(amir2==0 && amir_in)
            {
                
                amir-=randomnumber;
            }
            if(amir2!=0 && amir!=amir1 && amir!=amir2 && amir3==0 && amir!=0)
            {
                amir3=amir;
                amir=0;
                cout<<"( Amir third nut: "<<amir3<<" )";
                amir_in=false;
            }
            else if(amir3==0 && amir_in)
            {
                
                amir-=randomnumber;
            }
            if(amir3!=0 && amir!=amir1 && amir!=amir2 && amir!=amir3 && amir4==0 && amir!=0)
            {
                cout<<"( Amir final nut: "<<amir<<" )";
                cout<<endl<<"Amir won the game!";
                EndGame=true;
            }
            else if(amir4==0  && amir_in)
            {
                
                amir-=randomnumber;
            }
        }
        if(amir==reza && reza_in && amir_in)
        {
            cout<<"( reza out )";
            reza_in=false;
            reza=20;
            rezabar1=false;
        }
        if(amir==ali && ali_in && amir_in)
        {
            cout<<"( ali out )";
            ali_in=false;
            ali=10;
            alibar1=false;
        }
        if(amir==ariyan && ariyan_in && amir_in)
        {
            cout<<"( ariyan out )";
            ariyan_in=false;
            ariyan=30;
            ariyanbar1=false;
        }
    }
    cout<<")  ";
}
void aliturn()
{
    randomnumber=(rand() % 6)+1;
    cout<<"  ( ";
    cout<<randomnumber<<" - ";
    if(randomnumber==6 && !ali_in || ali_in)
    {
        if(!ali_in)
        {
            ali+=1;
        }
        else
        {
            ali+=randomnumber;
        }
        ali_in=true;
        if(ali>40)
        {
            ali-=40;
            alibar1=true;
        }
        if(ali>10 && alibar1)
        {
            cout<<ali+40<<" ";
        }
        else
        {
            cout<<ali<<" ";
        }
        if(ali>=15 && alibar1)
        {
            cout<<" --> Illegal attempt! Wait for next chance ";
            ali-=randomnumber;
        }
        if(ali>=11 && ali<=14 && alibar1)
        {
            if(ali1==0)
            {
                ali1=ali+40;
                ali=10;
                alibar1=false;
                cout<<" ( Ali first nut: "<<ali1<<" )";
                ali_in=false;
            }
            if(ali1!=0 && ali+40!=ali1 && ali2==0 && alibar1)
            {
                ali2=ali+40;
                ali=10;
                alibar1=false;
                cout<<" ( Ali second nut: "<<ali2<<" )";
                ali_in=false;
            }
            else if(alibar1 && ali2==0)
            {
                ali-=randomnumber;
            }
            if(ali2!=0 && ali+40!=ali1 && ali+40!=ali2 && ali3==0 && alibar1)
            {
                ali3=ali+40;
                ali=10;
                alibar1=false;
                cout<<" ( Ali third nut: "<<ali3<<" )";
                ali_in=false;
            }
            else if(alibar1 && ali3==0)
            {
                ali-=randomnumber;
            }
            if(ali3!=0 && ali+40!=ali1 && ali+40!=ali2 && ali+40!=ali3 && ali4==0 && alibar1)
            {
                cout<<" ( Ali final nut: "<<ali+40<<" )";
                cout<<endl<<"Ali won the game!";
                EndGame=true;
            }
            else if(alibar1 && ali4==0)
            {
                ali-=randomnumber;
            }
        }
        if(ali==reza && reza_in && ali_in)
        {
            cout<<"( reza out )";
            reza_in=false;
            reza=20;
            rezabar1=false;
        }
        if(ali==amir && amir_in && ali_in)
        {
            cout<<"( amir out )";
            amir_in=false;
            amir=0;
        }
        if(ali==ariyan && ariyan_in && ali_in)
        {
            cout<<"( ariyan out )";
            ariyan_in=false;
            ariyan=30;
            ariyanbar1=false;
        }
    }
    cout<<")  ";
}

void rezaturn()
{
    randomnumber=(rand() % 6)+1;
    cout<<"  ( ";
    cout<<randomnumber<<" - ";
    if(randomnumber==6 && !reza_in || reza_in)
    {
        if(!reza_in)
        {
            reza+=1;
        }
        else
        {
            reza+=randomnumber;
        }
        reza_in=true;
        if(reza>40)
        {
            reza-=40;
            rezabar1=true;
        }
        if(reza>20 && rezabar1)
        {
            cout<<reza+40<<" ";
        }
        else
        {
            cout<<reza<<" ";
        }
        if(reza>=25 && rezabar1)
        {
            cout<<" --> Illegal attempt! Wait for next chance ";
            reza-=randomnumber;
        }
        if(reza>=21 && reza<=24 && rezabar1)
        {
            if(reza1==0)
            {
                reza1=reza+40;
                reza=20;
                rezabar1=false;
                cout<<" ( Reza first nut: "<<reza1<<" )";
                reza_in=false;
            }
            if(reza1!=0 && reza+40!=reza1 && reza2==0 && rezabar1)
            {
                reza2=reza+40;
                reza=20;
                rezabar1=false;
                cout<<" ( Reza second nut: "<<reza2<<" )";
                reza_in=false;
            }
            else if(rezabar1 && reza2==0)
            {
                reza-=randomnumber;
            }
            if(reza2!=0 && reza+40!=reza1 && reza+40!=reza2 && reza3==0 && rezabar1)
            {
                reza3=reza+40;
                reza=20;
                rezabar1=false;
                cout<<" ( Reza third nut: "<<reza3<<" )";
                reza_in=false;
            }
            else if(rezabar1 && reza3==0)
            {
                reza-=randomnumber;
            }
            if(reza3!=0 && reza+40!=reza1 && reza+40!=reza2 && reza+40!=reza3 && reza4==0 && rezabar1)
            {
                cout<<" ( Reza final nut: "<<reza+40<<" )";
                cout<<endl<<"Reza won the game!";
                EndGame=true;
            }
            else if(rezabar1 && reza4==0)
            {
                reza-=randomnumber;
            }
        }
        if(reza==ali && reza_in && ali_in)
        {
            cout<<"( ali out )";
            ali_in=false;
            ali=10;
            alibar1=false;
        }
        if(reza==amir && amir_in && reza_in)
        {
            cout<<"( amir out )";
            amir_in=false;
            amir=0;
        }
        if(reza==ariyan && ariyan_in && reza_in)
        {
            cout<<"( ariyan out )";
            ariyan_in=false;
            ariyan=30;
            ariyanbar1=false;
        }
    }
    cout<<")  ";
}

void ariyanturn()
{
    randomnumber=(rand() % 6)+1;
    cout<<"  ( ";
    cout<<randomnumber<<" - ";
    if(randomnumber==6 && !ariyan_in || ariyan_in)
    {
        if(!ariyan_in)
        {
            ariyan+=1;
        }
        else
        {
            ariyan+=randomnumber;
        }
        ariyan_in=true;
        if(ariyan>40)
        {
            ariyan-=40;
            ariyanbar1=true;
        }
        if(ariyan>30 && ariyanbar1)
        {
            cout<<ariyan+40<<" ";
        }
        else
        {
            cout<<ariyan<<" ";
        }
        if(ariyan>=35 && ariyanbar1)
        {
            cout<<" --> Illegal attempt! Wait for next chance ";
            ariyan-=randomnumber;
        }
        if(ariyan>=31 && ariyan<=34 && ariyanbar1)
        {
            if(ariyan1==0)
            {
                ariyan1=ariyan+40;
                ariyan=30;
                ariyanbar1=false;
                cout<<" ( Ariyan first nut: "<<ariyan1<<" )";
                ariyan_in=false;
            }
            if(ariyan1!=0 && ariyan+40!=ariyan1 && ariyan2==0 && ariyanbar1)
            {
                ariyan2=ariyan+40;
                ariyan=30;
                ariyanbar1=false;
                cout<<" ( Ariyan second nut: "<<ariyan2<<" )";
                ariyan_in=false;
            }
            else if(ariyanbar1 && ariyan2==0)
            {
                ariyan-=randomnumber;
            }
            if(ariyan2!=0 && ariyan+40!=ariyan1 && ariyan+40!=ariyan2 && ariyan3==0 && ariyanbar1)
            {
                ariyan3=ariyan+40;
                ariyan=30;
                ariyanbar1=false;
                cout<<" ( Ariyan third nut: "<<ariyan3<<" )";
                ariyan_in=false;
            }
            else if(ariyanbar1 && ariyan3==0)
            {
                ariyan-=randomnumber;
            }
            if(ariyan3!=0 && ariyan+40!=ariyan1 && ariyan+40!=ariyan2 && ariyan+40!=ariyan3 && ariyan4==0 && ariyanbar1)
            {
                cout<<" ( Ariyan final nut: "<<ariyan+40<<" )";
                cout<<endl<<"Ariyan won the game!";
                EndGame=true;
            }
            else if(ariyanbar1 && ariyan4==0)
            {
                ariyan-=randomnumber;
            }
        }
        if(ariyan==ali && ariyan_in && ali_in)
        {
            cout<<"( ali out )";
            ariyan_in=false;
            ali=10;
            ariyanbar1=false;
        }
        if(ariyan==amir && amir_in && ariyan_in)
        {
            cout<<"( amir out )";
            amir_in=false;
            amir=0;
        }
        if(ariyan==reza && ariyan_in && reza_in)
        {
            cout<<"( reza out )";
            reza_in=false;
            reza=20;
            rezabar1=false;
        }
    }
    cout<<")  ";
}

int main()
{
    
    srand(time(0));
    cout<<"              amir        ali       reza       ariyan"<<endl;
    for(int i=1 ;  ; i++)
    {
        cout<<"Round "<<i<<" --> ";
        amirturn(); if(EndGame) return 0; 
        aliturn(); if(EndGame) return 0; 
        rezaturn(); if(EndGame) return 0;
        ariyanturn(); if(EndGame) return 0;
        cout<<endl;                        
    }
}