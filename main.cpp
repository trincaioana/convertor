#include <iostream>
#include<cstdlib>
#include <iomanip>
using namespace std;
void lungimeAll();
void arieAll();
void volumAll();
void timpAll();
void vitezaAll();
void temperaturaAll();
void masaAll();
void energieAll();
void presiuneAll();
void densitateAll();
void combustibilAll();
void invalid();
int main()
{

    unsigned int choise=19;

    cout << "::Meniu:: CONVERTOR" << endl<<endl;
    cout << "1. Lungime" << endl;
    cout << "2. Arie" << endl;
    cout << "3. Volum" << endl;
    cout << "4. Timp" << endl;
    cout << "5. Viteza" << endl;
    cout << "6. Temperatura" << endl;
    cout << "7. Masa" << endl;
    cout << "8. Energie" << endl;
    cout << "9. Presiune" << endl;
    cout << "10.Densitate" << endl;
    cout << "11.Consum combustibil" << endl;
    cout << "0. Exit"<<endl<<endl;
    cout << "Alegerea dumneavoastra -> ";
    cin >> choise;
    if(choise==1)
    {
        system("CLS");
        lungimeAll();
    }

    else if(choise==2)
    {
        system("CLS");
        arieAll();
    }

    else if(choise==3)
    {
        system("CLS");
        volumAll();
    }
    else if(choise==4)
    {
        system("CLS");
        timpAll();
    }
    else if(choise==5)
    {
        system("CLS");
        vitezaAll();
    }
    else if(choise==6)
    {
        system("CLS");
        temperaturaAll();
    }
    else if(choise==7)
    {
        system("CLS");
        masaAll();
    }
    else if(choise==8)
    {
        energieAll();
    }
    else if(choise==9)
    {
        system("CLS");
        presiuneAll();
    }
    else if(choise==10)
    {
        system("CLS");
        densitateAll();
    }
    else if(choise==11)
    {
        system("CLS");
        combustibilAll();
    }
    else if(choise==0)
    {
        system("CLS");
        cout<<"SFARSITUL PROGRAMULUI"<<endl;
        cout<<"Trinca Ioana-Alexandra"<<endl;
        cout<<"Proiect Introducere in programare"<<endl;
        cout<<"CONVERTOR"<<endl;
        cout<<"2017"<<endl;
        return 0;
    }
    else if(choise>11 || choise<0)
    {
        system("CLS");
        invalid();
    }

    return 0;
}

void lungimeAll()
{
    cout<<"::Lungime::"<<endl;
    char raspuns[2],unitate[2];
    double value,in,mi,nmi,yd,ft,valueM,valueCM,valueMM,valueKM,valueIN,valueMI,valueNMI,valueYD,valueFT;
    in=0.0254;//1in=m
    mi=1609.344;//1mi=m
    nmi=1852;//1nmi=m
    yd=0.9144002494;//1yd=m
    ft=0.3048;//1ft=m
    cout<<"Alege ce unitate de masura vrei ?"<<endl<<endl;
    cout<<"a. metru - m"<<endl;
    cout<<"b. centimetru - cm"<<endl;
    cout<<"c. milimetru - mm"<<endl;
    cout<<"d. kilometru - km"<<endl;
    cout<<"e. inch - in"<<endl;
    cout<<"f. mila - mi"<<endl;
    cout<<"g. mila marina - nmi"<<endl;
    cout<<"h. yard - yd"<<endl;
    cout<<"i. foot/picior - ft"<<endl;
    cout<<"Unitatea de masura -> ";
    cin>>unitate[0];
    cout<<"Introdu valoare -> ";
    cin>>value;
    system("CLS");
    cout<<value;
        cout<<fixed<<setprecision(9);
    if(unitate[0] == 'a' || unitate[0] == 'A' && unitate[1] ==0)
    {
        cout<<"m="<<endl<<endl;
        valueCM = 100*value;
        cout<<'='<<valueCM<<" cm"<<endl;
        valueMM = 1000*value;
        cout<<'='<<valueMM<<" mm"<<endl;
        valueKM=value/1000;
        cout<<'='<<valueKM<<" km"<<endl;
        valueIN = value/in;
        cout<<'='<<valueIN<<" in"<<endl;
        valueMI = value/mi;
        cout<<'='<<valueMI<<" mi"<<endl;
        valueNMI = value/nmi;
        cout<<'='<<valueNMI<<" nmi"<<endl;
        valueYD = value/yd;
        cout<<'='<<valueYD<<" yd"<<endl;
        valueFT = value/ft;
        cout<<'='<<valueFT<<" ft"<<endl;
    }
    else if(unitate[0] == 'b' || unitate[0] == 'B' && unitate[1] ==0)
    {
        cout<<"cm="<<endl<<endl;
        valueM = value/100;
        cout<<'='<<valueM<<" m"<<endl;
        valueMM = 10*value;
        cout<<'='<<valueMM<<" mm"<<endl;
        valueKM=value/100000;
        cout<<'='<<valueKM<<" km"<<endl;
        valueIN = value/in;
        cout<<'='<<valueIN/100<<" in"<<endl;
        valueMI = value/mi;
        cout<<'='<<valueMI/100<<" mi"<<endl;
        valueNMI = value/nmi;
        cout<<'='<<valueNMI/100<<" nmi"<<endl;
        valueYD = value/yd;
        cout<<'='<<valueYD/100<<" yd"<<endl;
        valueFT = value/ft;
        cout<<'='<<valueFT/100<<" ft"<<endl;
    }
    else if(unitate[0] == 'c' || unitate[0] == 'C' && unitate[1] ==0)
    {
        cout<<"mm="<<endl<<endl;
        valueM = value/1000;
        cout<<'='<<valueM<<" m"<<endl;
        valueCM = value/10;
        cout<<'='<<valueCM<<" cm"<<endl;
        valueKM=value/1000000;
        cout<<'='<<valueKM<<" km"<<endl;
        valueIN = value/in;
        cout<<'='<<valueIN/1000<<" in"<<endl;
        valueMI = value/mi;
        cout<<'='<<valueMI/1000<<" mi"<<endl;
        valueNMI = value/nmi;
        cout<<'='<<valueNMI/1000<<" nmi"<<endl;
        valueYD = value/yd;
        cout<<'='<<valueYD/1000<<" yd"<<endl;
        valueFT = value/ft;
        cout<<'='<<valueFT/1000<<" ft"<<endl;
    }
    else if(unitate[0] == 'd' || unitate[0] == 'D' && unitate[1] ==0)
    {
        cout<<"km="<<endl<<endl;
        valueM = value*1000;
        cout<<'='<<valueM<<" m"<<endl;
        valueCM = value*100000;
        cout<<'='<<valueCM<<" cm"<<endl;
        valueMM=value*1000000;
        cout<<'='<<valueMM<<" mm"<<endl;
        valueIN = value/in;
        cout<<'='<<valueIN*1000<<" in"<<endl;
        valueMI = value/mi;
        cout<<'='<<valueMI*1000<<" mi"<<endl;
        valueNMI = value/nmi;
        cout<<'='<<valueNMI*1000<<" nmi"<<endl;
        valueYD = value/yd;
        cout<<'='<<valueYD*1000<<" yd"<<endl;
        valueFT = value/ft;
        cout<<'='<<valueFT*1000<<" ft"<<endl;
    }
    else if(unitate[0] == 'e' || unitate[0] == 'E' && unitate[1] ==0)
    {
        cout<<"in="<<endl<<endl;
        valueM = value*in;
        cout<<'='<<valueM<<" m"<<endl;
        valueCM = valueM*100;
        cout<<'='<<valueCM<<" cm"<<endl;
        valueMM = valueCM*10;
        cout<<'='<<valueMM<<" mm"<<endl;
        valueKM=valueM/1000;
        cout<<'='<<valueKM<<" km"<<endl;
        valueMI = valueM/mi;
        cout<<'='<<valueMI<<" mi"<<endl;
        valueNMI = valueM/nmi;
        cout<<'='<<valueNMI<<" nmi"<<endl;
        valueYD = valueM/yd;
        cout<<'='<<valueYD<<" yd"<<endl;
        valueFT = value/12;
        cout<<'='<<valueFT<<" ft"<<endl;
    }
    else if(unitate[0] == 'f' || unitate[0] == 'F' && unitate[1] ==0)
    {
        cout<<"mi="<<endl<<endl;
        valueM = value*mi;
        cout<<'='<<valueM<<" m"<<endl;
        valueCM = valueM*100;
        cout<<'='<<valueCM<<" cm"<<endl;
        valueMM = valueCM*10;
        cout<<'='<<valueMM<<" mm"<<endl;
        valueKM=valueM/1000;
        cout<<'='<<valueKM<<" km"<<endl;
        valueIN = valueM/in;
        cout<<'='<<valueIN<<" in"<<endl;
        valueNMI = valueM/nmi;
        cout<<'='<<valueNMI<<" nmi"<<endl;
        valueYD = valueM/yd;
        cout<<'='<<valueYD<<" yd"<<endl;
        valueFT = valueM/ft;
        cout<<'='<<valueFT<<" ft"<<endl;
    }
    else if(unitate[0] == 'g' || unitate[0] == 'G' && unitate[1] ==0)
    {
        cout<<"nmi="<<endl<<endl;
        valueM = value*nmi;
        cout<<'='<<valueM<<" m"<<endl;
        valueCM = valueM*100;
        cout<<'='<<valueCM<<" cm"<<endl;
        valueMM = valueCM*10;
        cout<<'='<<valueMM<<" mm"<<endl;
        valueKM=valueM/1000;
        cout<<'='<<valueKM<<" km"<<endl;
        valueIN = valueM/in;
        cout<<'='<<valueIN<<" in"<<endl;
        valueMI = valueM/mi;
        cout<<'='<<valueMI<<" mi"<<endl;
        valueYD = valueM/yd;
        cout<<'='<<valueYD<<" yd"<<endl;
        valueFT = valueM/ft;
        cout<<'='<<valueFT<<" ft"<<endl;
    }
    else if(unitate[0] == 'h' || unitate[0] == 'H' && unitate[1] ==0)
    {
        cout<<"yd="<<endl<<endl;
        valueM = value*yd;
        cout<<'='<<valueM<<" m"<<endl;
        valueCM = valueM*100;
        cout<<'='<<valueCM<<" cm"<<endl;
        valueMM = valueCM*10;
        cout<<'='<<valueMM<<" mm"<<endl;
        valueKM=valueM/1000;
        cout<<'='<<valueKM<<" km"<<endl;
        valueIN = valueM/in;
        cout<<'='<<valueIN<<" in"<<endl;
        valueMI = valueM/mi;
        cout<<'='<<valueMI<<" mi"<<endl;
        valueNMI = valueM/nmi;
        cout<<'='<<valueNMI<<" nmi"<<endl;
        valueFT = valueM/ft;
        cout<<'='<<valueFT<<" ft"<<endl;
    }
    else if(unitate[0] == 'i' || unitate[0] == 'I' && unitate[1] ==0)
    {
        cout<<"ft="<<endl<<endl;
        valueM = value*ft;
        cout<<'='<<valueM<<" m"<<endl;
        valueCM = valueM*100;
        cout<<'='<<valueCM<<" cm"<<endl;
        valueMM = valueCM*10;
        cout<<'='<<valueMM<<" mm"<<endl;
        valueKM=valueM/1000;
        cout<<'='<<valueKM<<" km"<<endl;
        valueIN = valueM/in;
        cout<<'='<<valueIN<<" in"<<endl;
        valueMI = valueM/mi;
        cout<<'='<<valueMI<<" mi"<<endl;
        valueNMI = valueM/nmi;
        cout<<'='<<valueNMI<<" nmi"<<endl;
        valueYD = valueM/yd;
        cout<<'='<<valueYD<<" yd"<<endl;
    }

    cout<<endl<<"Pentru a reveni la meniul principal -> P"<<endl;
    cout<<"Pentru a reveni la meniul anterior -> A"<<endl;
    cout<<"Pentru a iesi din convertor -> orice tasta"<<endl;
    cin>>raspuns;
    if(raspuns[0] == 'P' || raspuns[0]  == 'p')
    {
        system("CLS");
        main();
    }
    else if(raspuns[0] == 'A' || raspuns[0]  == 'a')
    {
        system("CLS");
        lungimeAll();
    }

    else
    {
        system("CLS");
        cout<<"SFARSITUL PROGRAMULUI"<<endl;
        cout<<"Trinca Ioana-Alexandra"<<endl;
        cout<<"Proiect Introducere in programare"<<endl;
        cout<<"CONVERTOR"<<endl;
        cout<<"2017"<<endl;
        exit (EXIT_FAILURE);
    }
}
void arieAll()
{
    cout<<"Arie";
}
void volumAll()
{
    cout<<"Volum";
}
void timpAll()
{
    cout<<"Timp";
}
void vitezaAll()
{
    cout<<"Viteza";
}
void temperaturaAll()
{
    cout<<"::Temperatura::";
    char raspuns[2],unitate[2];
    double value,valueC,valueF,valueK,valueR,r;
    r=0.5555555556;
    cout<<"Alege ce unitate de masura vrei ?"<<endl<<endl;
    cout<<"a. Celsius - C"<<endl;
    cout<<"b. Fahrenheit - F"<<endl;
    cout<<"c. Kelvin - K"<<endl;
    cout<<"d. Rankine - R"<<endl;

    cout<<"Unitatea de masura -> ";
    cin>>unitate[0];
    cout<<"Introdu valoare -> ";
    cin>>value;
    system("CLS");
    cout<<value;
cout<<fixed<<setprecision(9);
    if(unitate[0] == 'a' || unitate[0] == 'A' && unitate[1] ==0)
    {
        cout<<"C="<<endl<<endl;
        valueF =value*1.8+32;
        cout<<'='<<valueF<<" F"<<endl;
        valueK =value+273.15 ;
        cout<<'='<<valueK<<" K"<<endl;
        valueR =(value+273.15)*1.8 ;
        cout<<'='<<valueR<<" R"<<endl;
    }
    else if(unitate[0] == 'b' || unitate[0] == 'B' && unitate[1] ==0)
    {
        cout<<"F="<<endl<<endl;
        valueC =(value-32)/1.8 ;
        cout<<'='<<valueC<<" C"<<endl;
        valueK =(value+459.67)/1.8 ;
        cout<<'='<<valueK<<" K"<<endl;
        valueR =value+459.67;
        cout<<'='<<valueR<<" R"<<endl;
    }
    else if(unitate[0] == 'c' || unitate[0] == 'C' && unitate[1] ==0)
    {
        cout<<"K="<<endl<<endl;
        valueC =value-273.15 ;
        cout<<'='<<valueC<<" C"<<endl;
        valueF =value*1.8-459.67 ;
        cout<<'='<<valueF<<" F"<<endl;
        valueR =value*1.8 ;
        cout<<'='<<valueR<<" R"<<endl;
    }
    else if(unitate[0] == 'd' || unitate[0] == 'D' && unitate[1] ==0)
    {
        cout<<"R="<<endl<<endl;
        valueC =(value-491.67)*r;
        cout<<'='<<valueC<<" C"<<endl;
        valueF =value-459.67 ;
        cout<<'='<<valueF<<" F"<<endl;
        valueK =value*r ;
        cout<<'='<<valueK<<" K"<<endl;
    }
        cout<<endl<<"Pentru a reveni la meniul principal -> P"<<endl;
    cout<<"Pentru a reveni la meniul anterior -> A"<<endl;
    cout<<"Pentru a iesi din convertor -> orice tasta"<<endl;
    cin>>raspuns;
    if(raspuns[0] == 'P' || raspuns[0]  == 'p')
    {
        system("CLS");
        main();
    }
    else if(raspuns[0] == 'A' || raspuns[0]  == 'a')
    {
        system("CLS");
        temperaturaAll();
    }

    else
    {
        system("CLS");
        cout<<"SFARSITUL PROGRAMULUI"<<endl;
        cout<<"Trinca Ioana-Alexandra"<<endl;
        cout<<"Proiect Introducere in programare"<<endl;
        cout<<"CONVERTOR"<<endl;
        cout<<"2017"<<endl;
        exit (EXIT_FAILURE);
    }
}
void masaAll()
{
    cout<<"Masa";
}
void energieAll()
{
    cout<<"Energie";
}
void presiuneAll()
{
    cout<<"Presiune";
}
void densitateAll()
{
    cout<<"Densitate";
}
void combustibilAll()
{
    cout<<"Combustibli";
}
void invalid()
{
    char raspuns[2];
    cout << "Selectie invalida" << endl;
    cout<<endl<<"Vrei sa continui? (Y/N)"<<endl;
    cin>>raspuns;
    if(raspuns[0] == 'Y' || raspuns[0]  == 'y')
    {
        system("CLS");
        main();
    }
    else
    {
        system("CLS");
        cout<<"SFARSITUL PROGRAMULUI"<<endl;
        cout<<"Trinca Ioana-Alexandra"<<endl;
        cout<<"Proiect Introducere in programare"<<endl;
        cout<<"CONVERTOR"<<endl;
        cout<<"2017"<<endl;

        exit (EXIT_FAILURE);
    }

}
