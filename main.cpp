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
    char choise[2];
    cout << "::Meniu:: CONVERTOR" << endl<<endl;
    cout << "(A) - Arie" << endl;
    cout << "(B) - Consum combustibil" << endl;
    cout << "(C) - Densitate" << endl;
    cout << "(D) - Energie" << endl;
    cout << "(E) - Lungime" << endl;
    cout << "(F) - Masa" << endl;
    cout << "(G) - Presiune" << endl;
    cout << "(H) - Temperatura" << endl;
    cout << "(I) - Timp" << endl;
    cout << "(J) - Viteza" << endl;
    cout << "(K) - Volum" << endl;
    cout << "(X) - Exit"<<endl<<endl;
    cout << "Alegerea dumneavoastra -> ";
    cin >> choise;

    if((choise[0]=='A' || choise[0]=='a') && choise[1]==0)
    {
        system("CLS");
        arieAll();
    }
    else if((choise[0]=='B' || choise[0]=='b') && choise[1]==0)
    {
        system("CLS");
        combustibilAll();
    }
    else if((choise[0]=='C' || choise[0]=='c') && choise[1]==0)
    {
        system("CLS");
        densitateAll();
    }
    else if((choise[0]=='D' || choise[0]=='d') && choise[1]==0)
    {
        system("CLS");
        energieAll();
    }
    else if((choise[0]=='E' || choise[0]=='e') && choise[1]==0)
    {
        system("CLS");
        lungimeAll();
    }
    else if((choise[0]=='F' || choise[0]=='f') && choise[1]==0)
    {
        system("CLS");
        masaAll();
    }
    else if((choise[0]=='G' || choise[0]=='g') && choise[1]==0)
    {
        system("CLS");
        presiuneAll();
    }
    else if((choise[0]=='H' || choise[0]=='h') && choise[1]==0)
    {
        system("CLS");
        temperaturaAll();
    }
    else if((choise[0]=='I' || choise[0]=='i') && choise[1]==0)
    {
        system("CLS");
        timpAll();
    }
    else if((choise[0]=='J' || choise[0]=='j') && choise[1]==0)
    {
        system("CLS");
        vitezaAll();
    }
    else if((choise[0]=='K' || choise[0]=='k') && choise[1]==0)
    {
        system("CLS");
        volumAll();
    }
    else if((choise[0]=='X' || choise[0]=='x') && choise[1]==0)
    {
        system("CLS");
        cout<<"SFARSITUL PROGRAMULUI"<<endl;
        cout<<"Trinca Ioana-Alexandra"<<endl;
        cout<<"Proiect Introducere in programare"<<endl;
        cout<<"CONVERTOR"<<endl;
        cout<<"2017"<<endl;
        return 0;
    }
    else
    {
        system("CLS");
        invalid();
    }

    return 0;
}

void lungimeAll()
{
    cout<<"::Lungime::"<<endl<<endl;
    char raspuns[2],unitate[2];
    double value,in,mi,nmi,yd,ft,valueM,valueCM,valueMM,valueKM,valueIN,valueMI,valueNMI,valueYD,valueFT;
    in=0.0254;//1in=m
    mi=1609.344;//1mi=m
    nmi=1852;//1nmi=m
    yd=0.9144002494;//1yd=m
    ft=0.3048;//1ft=m
    cout<<"Pentru a alege o unitate de masura"<<endl;
    cout<<"selectati o litera -> a - i"<<endl<<endl;
    cout<<"a. metru - m"<<endl;
    cout<<"b. centimetru - cm"<<endl;
    cout<<"c. milimetru - mm"<<endl;
    cout<<"d. kilometru - km"<<endl;
    cout<<"e. inch - in"<<endl;
    cout<<"f. mila - mi"<<endl;
    cout<<"g. mila marina - nmi"<<endl;
    cout<<"h. yard - yd"<<endl;
    cout<<"i. foot/picior - ft"<<endl;
    cout<<endl<<"Pentru a reveni la meniul principal -> P"<<endl<<endl;
    cout<<"Selectia dumneavoastra -> ";
    cin>>unitate;
    system("CLS");
    if((unitate[0] == 'P' || unitate[0]  == 'p') && unitate[1]==0)
    {
        system("CLS");
        main();
    }
    if((unitate[0] == 'a' || unitate[0] == 'A') && unitate[1]==0)
    {
        cout<<"Introduceti valoarea -> ";
        while (!(cin >> value))
        {
            system("CLS");
            cout<<"Valoarea este invalida"<<endl;
            cout << "Va rog introduceti o valoare numerica -> ";
            cin.clear();
            cin.ignore(50,'\n');
        }
        system("CLS");
        cout<<value;
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
    else if((unitate[0] == 'b' || unitate[0] == 'B') && unitate[1] ==0)
    {
        cout<<"Introduceti valoarea -> ";
        while (!(cin >> value))
        {
            system("CLS");
            cout<<"Valoarea este invalida"<<endl;
            cout << "Va rog introduceti o valoare numerica -> ";
            cin.clear();
            cin.ignore(50,'\n');
        }
        system("CLS");
        cout<<value;
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
    else if((unitate[0] == 'c' || unitate[0] == 'C') && unitate[1] ==0)
    {
        cout<<"Introduceti valoarea -> ";
        while (!(cin >> value))
        {
            system("CLS");
            cout<<"Valoarea este invalida"<<endl;
            cout << "Va rog introduceti o valoare numerica -> ";
            cin.clear();
            cin.ignore(50,'\n');
        }
        system("CLS");
        cout<<value;
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
    else if((unitate[0] == 'd' || unitate[0] == 'D') && unitate[1] ==0)
    {
        cout<<"Introduceti valoarea -> ";
        while (!(cin >> value))
        {
            system("CLS");
            cout<<"Valoarea este invalida"<<endl;
            cout << "Va rog introduceti o valoare numerica -> ";
            cin.clear();
            cin.ignore(50,'\n');
        }
        system("CLS");
        cout<<value;
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
    else if((unitate[0] == 'e' || unitate[0] == 'E') && unitate[1] ==0)
    {
        cout<<"Introduceti valoarea -> ";
        while (!(cin >> value))
        {
            system("CLS");
            cout<<"Valoarea este invalida"<<endl;
            cout << "Va rog introduceti o valoare numerica -> ";
            cin.clear();
            cin.ignore(50,'\n');
        }
        system("CLS");
        cout<<value;
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
    else if((unitate[0] == 'f' || unitate[0] == 'F') && unitate[1] ==0)
    {
        cout<<"Introduceti valoarea -> ";
        while (!(cin >> value))
        {
            system("CLS");
            cout<<"Valoarea este invalida"<<endl;
            cout << "Va rog introduceti o valoare numerica -> ";
            cin.clear();
            cin.ignore(50,'\n');
        }
        system("CLS");
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
    else if((unitate[0] == 'g' || unitate[0] == 'G') && unitate[1] ==0)
    {
        cout<<"Introduceti valoarea -> ";
        while (!(cin >> value))
        {
            system("CLS");
            cout<<"Valoarea este invalida"<<endl;
            cout << "Va rog introduceti o valoare numerica -> ";
            cin.clear();
            cin.ignore(50,'\n');
        }
        system("CLS");
        cout<<value;
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
    else if((unitate[0] == 'h' || unitate[0] == 'H') && unitate[1] ==0)
    {
        cout<<"Introduceti valoarea -> ";
        while (!(cin >> value))
        {
            system("CLS");
            cout<<"Valoarea este invalida"<<endl;
            cout << "Va rog introduceti o valoare numerica -> ";
            cin.clear();
            cin.ignore(50,'\n');
        }
        system("CLS");
        cout<<value;
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
    else if((unitate[0] == 'i' || unitate[0] == 'I') && unitate[1] ==0)
    {
        cout<<"Introduceti valoarea -> ";
        while (!(cin >> value))
        {
            system("CLS");
            cout<<"Valoarea este invalida"<<endl;
            cout << "Va rog introduceti o valoare numerica -> ";
            cin.clear();
            cin.ignore(50,'\n');
        }
        system("CLS");
        cout<<value;
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
    else         cout<<"Selectie invalida";
    /*{
        system("CLS");
        cout<<"Selectie invalida";
        cout<<endl<<"Incercati din nou -> A"<<endl;
        cin>>raspuns;
        if(raspuns[0] == 'A' || raspuns[0]  == 'a')
        {
            system("CLS");
            lungimeAll();
        }
    */
    cout<<endl<<"Pentru a reveni la meniul principal -> P"<<endl;
    cout<<"Pentru a reveni la meniul anterior -> A"<<endl;
    cout<<"Pentru a iesi din convertor -> orice tasta"<<endl;
    cin>>raspuns;
    if((raspuns[0] == 'P' || raspuns[0]  == 'p') && raspuns[1]==0)
    {
        system("CLS");
        main();
    }
    else if((raspuns[0] == 'A' || raspuns[0]  == 'a') && raspuns[1]==0)
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
    cout<<"::Arie::"<<endl;
    char raspuns[2],unitate[2];
    double value,in,yd,ft,valueM2,valueIN2,valueYD2,valueFT2,valueHA;
    in=0.0006452;//1in=m
    yd=0.836127816;//1yd=m
    ft=0.0929;//1ft=m
    cout<<"Alege ce unitate de masura vrei ?"<<endl<<endl;
    cout<<"a. metru patrat - m^2"<<endl;
    cout<<"b. hectar - ha"<<endl;
    cout<<"c. foot/picior patrat - ft^2"<<endl;
    cout<<"d. inch patrat - in^2"<<endl;
    cout<<"e. yard patrat - yd^2"<<endl;
    cout<<"Unitatea de masura -> ";
    cin>>unitate[0];
    cout<<"Introdu valoare -> ";
    cin>>value;
    system("CLS");
    cout<<value;
    cout<<fixed<<setprecision(9);
    if((unitate[0] == 'a' || unitate[0] == 'A') && unitate[1] ==0)
    {
        cout<<"m^2="<<endl<<endl;
        valueHA = value/10000;
        cout<<'='<<valueHA<<" ha"<<endl;
        valueFT2=value/ft;
        cout<<'='<<valueFT2<<" ft^2"<<endl;
        valueIN2 = value/in;
        cout<<'='<<valueIN2<<" in^2"<<endl;
        valueYD2 = value/yd;
        cout<<'='<<valueYD2<<" yd^2"<<endl;
    }
    else if((unitate[0] == 'b' || unitate[0] == 'B') && unitate[1] ==0)
    {
        cout<<"ha="<<endl<<endl;
        valueM2 = value*10000;
        cout<<'='<<valueM2<<" m^2"<<endl;
        valueFT2=valueM2/ft;
        cout<<'='<<valueFT2<<" ft^2"<<endl;
        valueIN2 = valueM2/in;
        cout<<'='<<valueIN2<<" in^2"<<endl;
        valueYD2 = valueM2/yd;
        cout<<'='<<valueYD2<<" yd^2"<<endl;
    }
    else if((unitate[0] == 'c' || unitate[0] == 'C') && unitate[1] ==0)
    {
        cout<<"ft^2="<<endl<<endl;
        valueM2 = value*ft;
        cout<<'='<<valueM2<<" m^2"<<endl;
        valueHA = valueM2/10000;
        cout<<'='<<valueHA<<" ha"<<endl;
        valueIN2 = valueM2/in;
        cout<<'='<<valueIN2<<" in^2"<<endl;
        valueYD2 = valueM2/yd;
        cout<<'='<<valueYD2<<" yd^2"<<endl;
    }
    else if((unitate[0] == 'd' || unitate[0] == 'D') && unitate[1] ==0)
    {
        cout<<"in^2="<<endl<<endl;
        valueM2 = value*in;
        cout<<'='<<valueM2<<" m^2"<<endl;
        valueHA = valueM2/10000;
        cout<<'='<<valueHA<<" ha"<<endl;
        valueFT2=valueM2/ft;
        cout<<'='<<valueFT2<<" ft^2"<<endl;
        valueYD2 = valueM2/yd;
        cout<<'='<<valueYD2<<" yd^2"<<endl;
    }
    else if((unitate[0] == 'e' || unitate[0] == 'E') && unitate[1] ==0)
    {
        cout<<"yd^2="<<endl<<endl;
        valueM2 = value*yd;
        cout<<'='<<valueM2<<" m^2"<<endl;
        valueHA = valueM2/10000;
        cout<<'='<<valueHA<<" ha"<<endl;
        valueFT2=valueM2/ft;
        cout<<'='<<valueFT2<<" ft^2"<<endl;
        valueIN2 = valueM2/in;
        cout<<'='<<valueIN2<<" in^2"<<endl;
    }
    cout<<endl<<"Pentru a reveni la meniul principal -> P"<<endl;
    cout<<"Pentru a reveni la meniul anterior -> A"<<endl;
    cout<<"Pentru a iesi din convertor -> orice tasta"<<endl;
    cin>>raspuns;
    if((raspuns[0] == 'P' || raspuns[0]  == 'p') && raspuns[1]==0)
    {
        system("CLS");
        main();
    }
    else if((raspuns[0] == 'A' || raspuns[0]  == 'a') && raspuns[1]==0)
    {
        system("CLS");
        volumAll();
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
void volumAll()
{
    cout<<"::Volum::"<<endl;
    char raspuns[2],unitate[2];
    double value,in,yd,ft,gal,valueM3,valueIN3,valueYD3,valueFT3,valueGAL,valueLIT;
    in=0.000016387064;//1in=m
    yd=0.76456;//1yd=m
    ft=0.02832;//1ft=m
    gal=0.003785;//1gal=m
    cout<<"Alege ce unitate de masura vrei ?"<<endl<<endl;
    cout<<"a. metru cub - m^3"<<endl;
    cout<<"b. litru - l"<<endl;
    cout<<"c. galon "<<endl;
    cout<<"d. foot/picior cub - ft^3"<<endl;
    cout<<"e. inch cub - in^3"<<endl;
    cout<<"f. yard cub - yd^3"<<endl;
    cout<<"Unitatea de masura -> ";
    cin>>unitate[0];
    cout<<"Introdu valoare -> ";
    cin>>value;
    system("CLS");
    cout<<value;
    cout<<fixed<<setprecision(9);
    if((unitate[0] == 'a' || unitate[0] == 'A') && unitate[1] ==0)
    {
        cout<<"m^3="<<endl<<endl;
        valueLIT = value*1000;
        cout<<'='<<valueLIT<<" litri"<<endl;
        valueGAL = value/gal;
        cout<<'='<<valueGAL<<" gal"<<endl;
        valueFT3=value/ft;
        cout<<'='<<valueFT3<<" ft^3"<<endl;
        valueIN3 = value/in;
        cout<<'='<<valueIN3<<" in^3"<<endl;
        valueYD3 = value/yd;
        cout<<'='<<valueYD3<<" yd^3"<<endl;
    }
    else if((unitate[0] == 'b' || unitate[0] == 'B') && unitate[1] ==0)
    {
        cout<<"l="<<endl<<endl;
        valueM3 = value/1000;
        cout<<'='<<valueM3<<" m^3"<<endl;
        valueGAL = valueM3/gal;
        cout<<'='<<valueGAL<<" gal"<<endl;
        valueFT3=valueM3/ft;
        cout<<'='<<valueFT3<<" ft^3"<<endl;
        valueIN3 = valueM3/in;
        cout<<'='<<valueIN3<<" in^3"<<endl;
        valueYD3 = valueM3/yd;
        cout<<'='<<valueYD3<<" yd^3"<<endl;

    }
    else if((unitate[0] == 'c' || unitate[0] == 'C') && unitate[1] ==0)
    {
        cout<<"gal="<<endl<<endl;
        valueM3 = value*gal;
        cout<<'='<<valueM3<<" m^3"<<endl;
        valueLIT = valueM3*1000;
        cout<<'='<<valueLIT<<" litri"<<endl;
        valueFT3=valueM3/ft;
        cout<<'='<<valueFT3<<" ft^3"<<endl;
        valueIN3 = valueM3/in;
        cout<<'='<<valueIN3<<" in^3"<<endl;
        valueYD3 = valueM3/yd;
        cout<<'='<<valueYD3<<" yd^3"<<endl;
    }
    else if((unitate[0] == 'd' || unitate[0] == 'D') && unitate[1] ==0)
    {
        cout<<"ft^3="<<endl<<endl;
        valueM3 = value*ft;
        cout<<'='<<valueM3<<" m^3"<<endl;
        valueLIT = valueM3*1000;
        cout<<'='<<valueLIT<<" litri"<<endl;
        valueGAL = valueM3/gal;
        cout<<'='<<valueGAL<<" gal"<<endl;
        valueIN3 = valueM3/in;
        cout<<'='<<valueIN3<<" in^3"<<endl;
        valueYD3 = valueM3/yd;
        cout<<'='<<valueYD3<<" yd^3"<<endl;
    }
    else if((unitate[0] == 'e' || unitate[0] == 'E') && unitate[1] ==0)
    {
        cout<<"in^3="<<endl<<endl;
        valueM3 = value*in;
        cout<<'='<<valueM3<<" m^3"<<endl;
        valueLIT = valueM3*1000;
        cout<<'='<<valueLIT<<" litri"<<endl;
        valueGAL = valueM3/gal;
        cout<<'='<<valueGAL<<" gal"<<endl;
        valueFT3=valueM3/ft;
        cout<<'='<<valueFT3<<" ft^3"<<endl;
        valueYD3 = valueM3/yd;
        cout<<'='<<valueYD3<<" yd^3"<<endl;
    }
    else if((unitate[0] == 'f' || unitate[0] == 'F') && unitate[1] ==0)
    {
        cout<<"yd^3="<<endl<<endl;
        valueM3 = value*yd;
        cout<<'='<<valueM3<<" m^3"<<endl;
        valueLIT = valueM3*1000;
        cout<<'='<<valueLIT<<" litri"<<endl;
        valueGAL = valueM3/gal;
        cout<<'='<<valueGAL<<" gal"<<endl;
        valueFT3=valueM3/ft;
        cout<<'='<<valueFT3<<" ft^3"<<endl;
        valueIN3 = valueM3/in;
        cout<<'='<<valueIN3<<" in^3"<<endl;
    }
    cout<<endl<<"Pentru a reveni la meniul principal -> P"<<endl;
    cout<<"Pentru a reveni la meniul anterior -> A"<<endl;
    cout<<"Pentru a iesi din convertor -> orice tasta"<<endl;
    cin>>raspuns;
    if((raspuns[0] == 'P' || raspuns[0]  == 'p') && raspuns[1]==0)
    {
        system("CLS");
        main();
    }
    else if((raspuns[0] == 'A' || raspuns[0]  == 'a') && raspuns[1]==0)
    {
        system("CLS");
        volumAll();
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
void timpAll()
{
    cout<<"Timp";
    char raspuns[2],unitate[2];
    double value,valueS,valueMIN,valueH,valueD,valueWK,valueMO,valueYE,valueDEC,valueMIL,valueSEC,ziLuna;
    ziLuna=30.416666666666668;
    cout<<"Alege ce unitate de masura vrei ?"<<endl<<endl;
    cout<<"a. secunda - s"<<endl;
    cout<<"b. minut - min"<<endl;
    cout<<"c. ora - h"<<endl;
    cout<<"d. zi"<<endl;
    cout<<"e. saptamana"<<endl;
    cout<<"f. luna"<<endl;
    cout<<"g. an"<<endl;
    cout<<"h. deceniu"<<endl;
    cout<<"i. secol"<<endl;
    cout<<"j. mileniu"<<endl;
    cout<<"Unitatea de masura -> ";
    cin>>unitate[0];
    cout<<"Introdu valoare -> ";
    cin>>value;
    system("CLS");
    cout<<fixed<<setprecision(9);
    cout<<value;

    if((unitate[0] == 'a' || unitate[0] == 'A') && unitate[1] ==0)
    {
        cout<<"s="<<endl<<endl;
        valueMIN = value/60;
        cout<<'='<<valueMIN<<" min"<<endl;
        valueH=valueMIN/60;
        cout<<'='<<valueH<<" h"<<endl;
        valueD = valueH/24;
        cout<<'='<<valueD<<" zile"<<endl;
        valueWK= valueD/7;
        cout<<'='<<valueWK<<" saptamani"<<endl;
        valueMO = valueD/ziLuna;
        cout<<'='<<valueMO<<" luni"<<endl;
        valueYE = valueD/365;
        cout<<'='<<valueYE<<" ani"<<endl;
        valueDEC = valueYE/10;
        cout<<'='<<valueDEC<<" decenii"<<endl;
        valueSEC = valueYE/100;
        cout<<'='<<valueSEC<<" secole"<<endl;
        valueMIL = valueYE/1000;
        cout<<'='<<valueMIL<<" milenii"<<endl;
    }
    else if((unitate[0] == 'b' || unitate[0] == 'B') && unitate[1] ==0)
    {
        cout<<"min="<<endl<<endl;
        valueS = value*60;
        cout<<'='<<valueS<<" s"<<endl;
        valueH=value/60;
        cout<<'='<<valueH<<" h"<<endl;
        valueD = valueH/24;
        cout<<'='<<valueD<<" zile"<<endl;
        valueWK= valueD/7;
        cout<<'='<<valueWK<<" saptamani"<<endl;
        valueMO = valueD/ziLuna;
        cout<<'='<<valueMO<<" luni"<<endl;
        valueYE = valueD/365;
        cout<<'='<<valueYE<<" ani"<<endl;
        valueDEC = valueYE/10;
        cout<<'='<<valueDEC<<" decenii"<<endl;
        valueSEC = valueYE/100;
        cout<<'='<<valueSEC<<" secole"<<endl;
        valueMIL = valueYE/1000;
        cout<<'='<<valueMIL<<" milenii"<<endl;
    }
    else if((unitate[0] == 'c' || unitate[0] == 'C') && unitate[1] ==0)
    {
        cout<<"h="<<endl<<endl;
        valueMIN = value*60;
        valueS = valueMIN*60;
        cout<<'='<<valueS<<" s"<<endl;
        cout<<'='<<valueMIN<<" min"<<endl;
        valueD = value/24;
        cout<<'='<<valueD<<" zile"<<endl;
        valueWK= valueD/7;
        cout<<'='<<valueWK<<" saptamani"<<endl;
        valueMO = valueD/ziLuna;
        cout<<'='<<valueMO<<" luni"<<endl;
        valueYE = valueD/365;
        cout<<'='<<valueYE<<" ani"<<endl;
        valueDEC = valueYE/10;
        cout<<'='<<valueDEC<<" decenii"<<endl;
        valueSEC = valueYE/100;
        cout<<'='<<valueSEC<<" secole"<<endl;
        valueMIL = valueYE/1000;
        cout<<'='<<valueMIL<<" milenii"<<endl;
    }
    else if((unitate[0] == 'd' || unitate[0] == 'D') && unitate[1] ==0)
    {
        cout<<"zile="<<endl<<endl;

        valueH=value*24;
        valueMIN = valueH*60;
        valueS = valueMIN*60;
        cout<<'='<<valueS<<" s"<<endl;
        cout<<'='<<valueMIN<<" min"<<endl;
        cout<<'='<<valueH<<" h"<<endl;
        valueWK= value/7;
        cout<<'='<<valueWK<<" saptamani"<<endl;
        valueMO = value/ziLuna;
        cout<<'='<<valueMO<<" luni"<<endl;
        valueYE = value/365;
        cout<<'='<<valueYE<<" ani"<<endl;
        valueDEC = valueYE/10;
        cout<<'='<<valueDEC<<" decenii"<<endl;
        valueSEC = valueYE/100;
        cout<<'='<<valueSEC<<" secole"<<endl;
        valueMIL = valueYE/1000;
        cout<<'='<<valueMIL<<" milenii"<<endl;
    }
    else if((unitate[0] == 'e' || unitate[0] == 'F') && unitate[1] ==0)
    {
        cout<<"saptamani="<<endl<<endl;

        valueD=value*7;
        valueH=valueD*24;
        valueMIN = valueH*60;
        valueS = valueMIN*60;
        cout<<'='<<valueS<<" s"<<endl;
        cout<<'='<<valueMIN<<" min"<<endl;
        cout<<'='<<valueH<<" h"<<endl;
        cout<<'='<<valueD<<" zile"<<endl;
        valueMO = valueD/ziLuna;
        cout<<'='<<valueMO<<" luni"<<endl;
        valueYE = valueD/365;
        cout<<'='<<valueYE<<" ani"<<endl;
        valueDEC = valueYE/10;
        cout<<'='<<valueDEC<<" decenii"<<endl;
        valueSEC = valueYE/100;
        cout<<'='<<valueSEC<<" secole"<<endl;
        valueMIL = valueYE/1000;
        cout<<'='<<valueMIL<<" milenii"<<endl;
    }
    else if((unitate[0] == 'f' || unitate[0] == 'F') && unitate[1] ==0)
    {
        cout<<"luni="<<endl<<endl;
        valueD=value*ziLuna;
        valueH=valueD*24;
        valueMIN = valueH*60;
        valueS = valueMIN*60;
        cout<<'='<<valueS<<" s"<<endl;
        cout<<'='<<valueMIN<<" min"<<endl;
        cout<<'='<<valueH<<" h"<<endl;
        cout<<'='<<valueD<<" zile"<<endl;
        valueWK=valueD/7;
        cout<<'='<<valueWK<<" saptamani"<<endl;
        valueYE = valueD/365;
        cout<<'='<<valueYE<<" ani"<<endl;
        valueDEC = valueYE/10;
        cout<<'='<<valueDEC<<" decenii"<<endl;
        valueSEC = valueYE/100;
        cout<<'='<<valueSEC<<" secole"<<endl;
        valueMIL = valueYE/1000;
        cout<<'='<<valueMIL<<" milenii"<<endl;
    }
    else if((unitate[0] == 'g' || unitate[0] == 'G') && unitate[1] ==0)
    {
        cout<<"ani="<<endl<<endl;
        valueD=value*365;
        valueH=valueD*24;
        valueMIN = valueH*60;
        valueS = valueMIN*60;
        cout<<'='<<valueS<<" s"<<endl;
        cout<<'='<<valueMIN<<" min"<<endl;
        cout<<'='<<valueH<<" h"<<endl;
        cout<<'='<<valueD<<" zile"<<endl;
        valueWK=valueD/7;
        cout<<'='<<valueWK<<" saptamani"<<endl;
        valueMO = valueD/ziLuna;
        cout<<'='<<valueMO<<" luni"<<endl;
        valueDEC = value/10;
        cout<<'='<<valueDEC<<" decenii"<<endl;
        valueSEC = value/100;
        cout<<'='<<valueSEC<<" secole"<<endl;
        valueMIL = value/1000;
        cout<<'='<<valueMIL<<" milenii"<<endl;
    }
    else if((unitate[0] == 'h' || unitate[0] == 'H') && unitate[1] ==0)
    {
        cout<<"decenii="<<endl<<endl;
        valueYE=value*10;
        valueD=valueYE*365;
        valueH=valueD*24;
        valueMIN = valueH*60;
        valueS = valueMIN*60;
        cout<<'='<<valueS<<" s"<<endl;
        cout<<'='<<valueMIN<<" min"<<endl;
        cout<<'='<<valueH<<" h"<<endl;
        cout<<'='<<valueD<<" zile"<<endl;
        valueWK=valueD/7;
        cout<<'='<<valueWK<<" saptamani"<<endl;
        valueMO = valueD/ziLuna;
        cout<<'='<<valueMO<<" luni"<<endl;
        cout<<'='<<valueYE<<" ani"<<endl;
        valueSEC = valueYE/100;
        cout<<'='<<valueSEC<<" secole"<<endl;
        valueMIL = valueYE/1000;
        cout<<'='<<valueMIL<<" milenii"<<endl;
    }
    else if((unitate[0] == 'i' || unitate[0] == 'I') && unitate[1] ==0)
    {
        cout<<"=secole"<<endl;
        valueYE=value*100;
        valueD=valueYE*365;
        valueH=valueD*24;
        valueMIN = valueH*60;
        valueS = valueMIN*60;
        cout<<'='<<valueS<<" s"<<endl;
        cout<<'='<<valueMIN<<" min"<<endl;
        cout<<'='<<valueH<<" h"<<endl;
        cout<<'='<<valueD<<" zile"<<endl;
        valueWK=valueD/7;
        cout<<'='<<valueWK<<" saptamani"<<endl;
        valueMO = valueD/ziLuna;
        cout<<'='<<valueMO<<" luni"<<endl;
        cout<<'='<<valueYE<<" ani"<<endl;
        valueDEC = valueYE/10;
        cout<<'='<<valueDEC<<" decenii"<<endl;
        valueMIL = valueYE/1000;
        cout<<'='<<valueMIL<<" milenii"<<endl;
    }
    else if((unitate[0] == 'j' || unitate[0] == 'J') && unitate[1] ==0)
    {
        cout<<"=milenii"<<endl;
        valueYE=value*1000;
        valueD=valueYE*365;
        valueH=valueD*24;
        valueMIN = valueH*60;
        valueS = valueMIN*60;
        cout<<'='<<valueS<<" s"<<endl;
        cout<<'='<<valueMIN<<" min"<<endl;
        cout<<'='<<valueH<<" h"<<endl;
        cout<<'='<<valueD<<" zile"<<endl;
        valueWK=valueD/7;
        cout<<'='<<valueWK<<" saptamani"<<endl;
        valueMO = valueD/ziLuna;
        cout<<'='<<valueMO<<" luni"<<endl;
        cout<<'='<<valueYE<<" ani"<<endl;
        valueDEC = value*100;
        cout<<'='<<valueDEC<<" decenii"<<endl;
        valueSEC = value*10;
        cout<<'='<<valueSEC<<" secole"<<endl;
    }
    cout<<endl<<"Pentru a reveni la meniul principal -> P"<<endl;
    cout<<"Pentru a reveni la meniul anterior -> A"<<endl;
    cout<<"Pentru a iesi din convertor -> orice tasta"<<endl;
    cin>>raspuns;
if((raspuns[0] == 'P' || raspuns[0]  == 'p') && raspuns[1]==0)
    {
        system("CLS");
        main();
    }
    else if((raspuns[0] == 'A' || raspuns[0]  == 'a') && raspuns[1]==0)
    {
        system("CLS");
        timpAll();
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
void vitezaAll()
{
    cout<<"::Viteza::";
    char raspuns[2],unitate[2];
    double value,valueMS,valueMPH,valueKMH,ms,mph;
    ms=3.5999999712000004;
    mph=1.6093439871252482;
    cout<<"Alege ce unitate de masura vrei ?"<<endl<<endl;
    cout<<"a. Kilometrii pe ora - km/h"<<endl;
    cout<<"b. Metri pe secunda - m/s"<<endl;
    cout<<"c. Mile pe ora - mph"<<endl;
    cin>>unitate[0];
    cout<<"Introdu valoare -> ";
    cin>>value;
    system("CLS");
    cout<<value;
    cout<<fixed<<setprecision(9);
    if((unitate[0] == 'a' || unitate[0] == 'A') && unitate[1] ==0)
    {
        cout<<"=km/h"<<endl;
        valueMS=value/ms;
        cout<<'='<<valueMS<<" m/s"<<endl;
        valueMPH=value/mph;
        cout<<'='<<valueMPH<<" mph"<<endl;
    }

    else    if((unitate[0] == 'b' || unitate[0] == 'B') && unitate[1] ==0)
    {
        cout<<"=m/s"<<endl;
        valueKMH=value*ms;
        cout<<'='<<valueKMH<<" km/h"<<endl;
        valueMPH=valueKMH/mph;
        cout<<'='<<valueMPH<<" mph"<<endl;
    }
    else    if((unitate[0] == 'c' || unitate[0] == 'C') && unitate[1] ==0)
    {
        cout<<"=mph"<<endl;
        valueKMH=value*mph;
        cout<<'='<<valueKMH<<" km/h"<<endl;
        valueMS=valueKMH/ms;
        cout<<'='<<valueMS<<" m/s"<<endl;
    }
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
    if((unitate[0] == 'a' || unitate[0] == 'A') && unitate[1] ==0)
    {
        cout<<"C="<<endl<<endl;
        valueF =value*1.8+32;
        cout<<'='<<valueF<<" F"<<endl;
        valueK =value+273.15 ;
        cout<<'='<<valueK<<" K"<<endl;
        valueR =(value+273.15)*1.8 ;
        cout<<'='<<valueR<<" R"<<endl;
    }
    else if((unitate[0] == 'b' || unitate[0] == 'B') && unitate[1] ==0)
    {
        cout<<"F="<<endl<<endl;
        valueC =(value-32)/1.8 ;
        cout<<'='<<valueC<<" C"<<endl;
        valueK =(value+459.67)/1.8 ;
        cout<<'='<<valueK<<" K"<<endl;
        valueR =value+459.67;
        cout<<'='<<valueR<<" R"<<endl;
    }
    else if((unitate[0] == 'c' || unitate[0] == 'C') && unitate[1] ==0)
    {
        cout<<"K="<<endl<<endl;
        valueC =value-273.15 ;
        cout<<'='<<valueC<<" C"<<endl;
        valueF =value*1.8-459.67 ;
        cout<<'='<<valueF<<" F"<<endl;
        valueR =value*1.8 ;
        cout<<'='<<valueR<<" R"<<endl;
    }
    else if((unitate[0] == 'd' || unitate[0] == 'D') && unitate[1] ==0)
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
    if((raspuns[0] == 'P' || raspuns[0]  == 'p') && raspuns[1]==0)
    {
        system("CLS");
        main();
    }
    else if((raspuns[0] == 'A' || raspuns[0]  == 'a') && raspuns[1]==0)
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
    cout<<"::Masa::"<<endl;
    char raspuns[2],unitate[2];
    double value,valueG,valueMG,valueKG,valueT,valueLB,valueSLUG,valueAV,valueTROY,lb,slug,av,troy;
    lb=453.592;//1lb=g
    slug=14.593903;//1slug=kg
    av=28.3495;
    troy=31.103499999999997777;
    cout<<"Alege ce unitate de masura vrei ?"<<endl<<endl;
    cout<<"a. gram - g"<<endl;
    cout<<"b. miligram - mg"<<endl;
    cout<<"c. kilogram - kg"<<endl;
    cout<<"d. tona - t"<<endl;
    cout<<"e. Livre - lb"<<endl;
    cout<<"f. slug"<<endl;
    cout<<"g. oz (Av)"<<endl;
    cout<<"h. oz (Troy)"<<endl;
    cout<<"Unitatea de masura -> ";
    cin>>unitate[0];
    cout<<"Introdu valoare -> ";
    cin>>value;
    system("CLS");
    cout<<value;
    cout<<fixed<<setprecision(9);
    if((unitate[0] == 'a' || unitate[0] == 'A') && unitate[1] ==0)
    {
        cout<<"g="<<endl<<endl;
        valueMG= 1000*value;
        cout<<'='<<valueMG<<" mg"<<endl;
        valueKG=value/1000;
        cout<<'='<<valueKG<<" kg"<<endl;
        valueT=value/1000000;
        cout<<'='<<valueT<<" t"<<endl;
        valueLB = value/lb;
        cout<<'='<<valueLB<<" lb"<<endl;
        valueSLUG = valueKG/slug;
        cout<<'='<<valueSLUG<<" slug"<<endl;
        valueAV = value/av;
        cout<<'='<<valueAV<<" av"<<endl;
        valueTROY = value/troy;
        cout<<'='<<valueTROY<<" troy"<<endl;
    }
    else if((unitate[0] == 'b' || unitate[0] == 'B') && unitate[1] ==0)
    {
        cout<<"mg="<<endl<<endl;
        valueG= value/1000;
        cout<<'='<<valueG<<" g"<<endl;
        valueKG=valueG/1000;
        cout<<'='<<valueKG<<" kg"<<endl;
        valueT=valueKG/1000;
        cout<<'='<<valueT<<" t"<<endl;
        valueLB = valueG/lb;
        cout<<'='<<valueLB<<" lb"<<endl;
        valueSLUG = valueKG/slug;
        cout<<'='<<valueSLUG<<" slug"<<endl;
        valueAV = valueG/av;
        cout<<'='<<valueAV<<" av"<<endl;
        valueTROY = valueG/troy;
        cout<<'='<<valueTROY<<" troy"<<endl;


    }
    else if((unitate[0] == 'c' || unitate[0] == 'C') && unitate[1] ==0)
    {
        cout<<"kg="<<endl<<endl;
        valueG= value*1000;
        cout<<'='<<valueG<<" g"<<endl;
        valueMG= valueG*1000;
        cout<<'='<<valueMG<<" mg"<<endl;
        valueT=value/1000;
        cout<<'='<<valueT<<" t"<<endl;
        valueLB = valueG/lb;
        cout<<'='<<valueLB<<" lb"<<endl;
        valueSLUG = value/slug;
        cout<<'='<<valueSLUG<<" slug"<<endl;
        valueAV = valueG/av;
        cout<<'='<<valueAV<<" av"<<endl;
        valueTROY = valueG/troy;
        cout<<'='<<valueTROY<<" troy"<<endl;

    }
    else if((unitate[0] == 'd' || unitate[0] == 'D') && unitate[1] ==0)
    {
        cout<<"t="<<endl<<endl;
        valueG= value*1000000;
        cout<<'='<<valueG<<" g"<<endl;
        valueMG= valueG*1000;
        cout<<'='<<valueMG<<" mg"<<endl;
        valueKG=value*1000;
        cout<<'='<<valueKG<<" kg"<<endl;
        valueLB = valueG/lb;
        cout<<'='<<valueLB<<" lb"<<endl;
        valueSLUG = valueKG/slug;
        cout<<'='<<valueSLUG<<" slug"<<endl;
        valueAV = valueG/av;
        cout<<'='<<valueAV<<" av"<<endl;
        valueTROY = valueG/troy;
        cout<<'='<<valueTROY<<" troy"<<endl;
    }
    else if((unitate[0] == 'e' || unitate[0] == 'E') && unitate[1] ==0)
    {
        cout<<"lb="<<endl<<endl;
        valueG= value*lb;
        cout<<'='<<valueG<<" g"<<endl;
        valueMG= valueG*1000;
        cout<<'='<<valueMG<<" mg"<<endl;
        valueKG=valueG/1000;
        cout<<'='<<valueKG<<" kg"<<endl;
        valueT=valueG/1000000;
        cout<<'='<<valueT<<" t"<<endl;
        valueSLUG = valueKG/slug;
        cout<<'='<<valueSLUG<<" slug"<<endl;
        valueAV = valueG/av;
        cout<<'='<<valueAV<<" av"<<endl;
        valueTROY = valueG/troy;
        cout<<'='<<valueTROY<<" troy"<<endl;
    }
    else if((unitate[0] == 'f' || unitate[0] == 'F') && unitate[1] ==0)
    {
        cout<<"slug="<<endl<<endl;
        valueG= value*slug/1000;
        cout<<'='<<valueG<<" g"<<endl;
        valueMG= valueG*1000;
        cout<<'='<<valueMG<<" mg"<<endl;
        valueKG=valueG/1000;
        cout<<'='<<valueKG<<" kg"<<endl;
        valueT=valueG/1000000;
        cout<<'='<<valueT<<" t"<<endl;
        valueLB = valueG/lb;
        cout<<'='<<valueLB<<" lb"<<endl;
        valueAV = valueG/av;
        cout<<'='<<valueAV<<" av"<<endl;
        valueTROY = valueG/troy;
        cout<<'='<<valueTROY<<" troy"<<endl;
    }
    else if((unitate[0] == 'g' || unitate[0] == 'G') && unitate[1] ==0)
    {
        cout<<"oz (Av)="<<endl<<endl;
        valueG= value*av;
        cout<<'='<<valueG<<" g"<<endl;
        valueMG= valueG*1000;
        cout<<'='<<valueMG<<" mg"<<endl;
        valueKG=valueG/1000;
        cout<<'='<<valueKG<<" kg"<<endl;
        valueT=valueG/1000000;
        cout<<'='<<valueT<<" t"<<endl;
        valueLB = valueG/lb;
        cout<<'='<<valueLB<<" lb"<<endl;
        valueSLUG = valueKG/slug;
        cout<<'='<<valueSLUG<<" slug"<<endl;
        valueTROY = valueG/troy;
        cout<<'='<<valueTROY<<" troy"<<endl;
    }
    else if((unitate[0] == 'h' || unitate[0] == 'H') && unitate[1] ==0)
    {
        cout<<"oz (Troy)="<<endl<<endl;
        valueG= value*troy;
        cout<<'='<<valueG<<" g"<<endl;
        valueMG= valueG*1000;
        cout<<'='<<valueMG<<" mg"<<endl;
        valueKG=valueG/1000;
        cout<<'='<<valueKG<<" kg"<<endl;
        valueT=valueG/1000000;
        cout<<'='<<valueT<<" t"<<endl;
        valueLB = valueG/lb;
        cout<<'='<<valueLB<<" lb"<<endl;
        valueSLUG = valueKG/slug;
        cout<<'='<<valueSLUG<<" slug"<<endl;
        valueAV = valueG/av;
        cout<<'='<<valueAV<<" av"<<endl;
    }
    cout<<endl<<"Pentru a reveni la meniul principal -> P"<<endl;
    cout<<"Pentru a reveni la meniul anterior -> A"<<endl;
    cout<<"Pentru a iesi din convertor -> orice tasta"<<endl;
    cin>>raspuns;
    if((raspuns[0] == 'P' || raspuns[0]  == 'p') && raspuns[1]==0)
    {
        system("CLS");
        main();
    }
    else if((raspuns[0] == 'A' || raspuns[0]  == 'a') && raspuns[1]==0)
    {
        system("CLS");
        masaAll();
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
void energieAll()
{
    cout<<"Energie"<<endl;
    char raspuns[2],unitate[2];
    double value,valueJ,valueKJ,valueWH,valueWS;
    cout<<"Alege ce unitate de masura vrei ?"<<endl<<endl;
    cout<<"a. Joule - J"<<endl;
    cout<<"b. Kilojoule - kJ"<<endl;
    cout<<"c. Watt ora - w*h"<<endl;
    cout<<"d. Watt secunda - w*s"<<endl;
    cin>>unitate[0];
    cout<<"Introdu valoare -> ";
    cin>>value;
    system("CLS");
    cout<<value;
    cout<<fixed<<setprecision(9);
    if((unitate[0] == 'a' || unitate[0] == 'A') && unitate[1] ==0)
    {
        cout<<"J="<<endl;
        valueKJ= value/1000;
        cout<<'='<<valueKJ<<" kJ"<<endl;
        cout<<'='<<value<<" w*s"<<endl;
        valueWH= value/3600;
        cout<<'='<<valueWH<<" w*h"<<endl;
    }
    else if((unitate[0] == 'b' || unitate[0] == 'B') && unitate[1] ==0)
    {
        cout<<"kJ="<<endl;
        valueJ= value*1000;
        cout<<'='<<valueJ<<" J"<<endl;
        cout<<'='<<valueJ<<" w*s"<<endl;
        valueWH= valueJ/3600;
        cout<<'='<<valueWH<<" w*h"<<endl;
    }
    else if((unitate[0] == 'c' || unitate[0] == 'C') && unitate[1] ==0)
    {
        cout<<"w*s="<<endl;
        cout<<'='<<value<<" J"<<endl;
        valueKJ= value/1000;
        cout<<'='<<valueKJ<<" kJ"<<endl;
        valueWH= value/3600;
        cout<<'='<<valueWH<<" w*h"<<endl;
    }
    else if((unitate[0] == 'd' || unitate[0] == 'D') && unitate[1] ==0)
    {
        cout<<"w*h="<<endl;
        valueJ= value*3600;
        cout<<'='<<valueJ<<" J"<<endl;
        valueKJ= valueJ/1000;
        cout<<'='<<valueKJ<<" kJ"<<endl;
        cout<<'='<<valueJ<<" w*s"<<endl;
    }
    cout<<endl<<"Pentru a reveni la meniul principal -> P"<<endl;
    cout<<"Pentru a reveni la meniul anterior -> A"<<endl;
    cout<<"Pentru a iesi din convertor -> orice tasta"<<endl;
    cin>>raspuns;
    if((raspuns[0] == 'P' || raspuns[0]  == 'p') && raspuns[1]==0)
    {
        system("CLS");
        main();
    }
    else if((raspuns[0] == 'A' || raspuns[0]  == 'a') && raspuns[1]==0)
    {
        system("CLS");
        energieAll();
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
void presiuneAll()
{
    cout<<"::Presiune::"<<endl;
    char raspuns[2],unitate[2];
    double value,valueBAR,valuePSI,valueATM,valuePA,valueTORR,psi,atm,torr,bar;
    psi=6894.75729317;
    atm=101325.2738;
    torr=133.322368421;
    bar=98000;
    cout<<"Alege ce unitate de masura vrei ?"<<endl<<endl;
    cout<<"a. Pa"<<endl;
    cout<<"b. bar"<<endl;
    cout<<"c. psi"<<endl;
    cout<<"d. atm"<<endl;
    cout<<"e. torr"<<endl;
    cin>>unitate[0];
    cout<<"Introdu valoare -> ";
    cin>>value;
    system("CLS");
    cout<<value;
    cout<<fixed<<setprecision(9);
    if((unitate[0] == 'a' || unitate[0] == 'A') && unitate[1] ==0)
    {
        cout<<"=Pa"<<endl;
        valueBAR= value/bar;
        cout<<'='<<valueBAR<<" bar"<<endl;
        valuePSI= value/psi;
        cout<<'='<<valuePSI<<" psi"<<endl;
        valueATM= value/atm;
        cout<<'='<<valueATM<<" atm"<<endl;
        valueTORR= value/torr;
        cout<<'='<<valueTORR<<" torr"<<endl;
    }
    else if((unitate[0] == 'b' || unitate[0] == 'B') && unitate[1] ==0)
    {
        cout<<"=bar"<<endl;
        valuePA=value*bar;
        cout<<'='<<valuePA<<" pa"<<endl;
        valuePSI= valuePA/psi;
        cout<<'='<<valuePSI<<" psi"<<endl;
        valueATM= valuePA/atm;
        cout<<'='<<valueATM<<" atm"<<endl;
        valueTORR= valuePA/torr;
        cout<<'='<<valueTORR<<" torr"<<endl;
    }
    else if((unitate[0] == 'c' || unitate[0] == 'C') && unitate[1] ==0)
    {
        cout<<"=psi"<<endl;
        valuePA=value*psi;
        cout<<'='<<valuePA<<" pa"<<endl;
        valueBAR= valuePA/bar;
        cout<<'='<<valueBAR<<" bar"<<endl;
        valueATM= valuePA/atm;
        cout<<'='<<valueATM<<" atm"<<endl;
        valueTORR= valuePA/torr;
        cout<<'='<<valueTORR<<" torr"<<endl;
    }
    else if((unitate[0] == 'd' || unitate[0] == 'D') && unitate[1] ==0)
    {
        cout<<"=atm"<<endl;
        valuePA=value*atm;
        cout<<'='<<valuePA<<" pa"<<endl;
        valueBAR= valuePA/bar;
        cout<<'='<<valueBAR<<" bar"<<endl;
        valuePSI= valuePA/psi;
        cout<<'='<<valuePSI<<" psi"<<endl;;
        valueTORR= valuePA/torr;
        cout<<'='<<valueTORR<<" torr"<<endl;
    }
    else if((unitate[0] == 'e' || unitate[0] == 'E') && unitate[1] ==0)
    {
        cout<<"=torr"<<endl;
        valuePA=value*torr;
        cout<<'='<<valuePA<<" pa"<<endl;
        valueBAR= valuePA/bar;
        cout<<'='<<valueBAR<<" bar"<<endl;
        valuePSI= valuePA/psi;
        cout<<'='<<valuePSI<<" psi"<<endl;
        valueATM= valuePA/atm;
        cout<<'='<<valueATM<<" atm"<<endl;
    }
    cout<<endl<<"Pentru a reveni la meniul principal -> P"<<endl;
    cout<<"Pentru a reveni la meniul anterior -> A"<<endl;
    cout<<"Pentru a iesi din convertor -> orice tasta"<<endl;
    cin>>raspuns;
    if((raspuns[0] == 'P' || raspuns[0]  == 'p') && raspuns[1]==0)
    {
        system("CLS");
        main();
    }
    else if((raspuns[0] == 'A' || raspuns[0]  == 'a') && raspuns[1]==0)
    {
        system("CLS");
        presiuneAll();
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
void densitateAll()
{
    cout<<"::Densitate::"<<endl;
    char raspuns[2],unitate[2];
    double value,valueKMm3,valueFUNTin,valueFUNTgal,valueKGl,valueUNCIE,funtIN,funtGAL,uncie;
    funtIN=27679.89858;
    funtGAL=119.8264273;
    uncie=1.001153961;
    cout<<"Alege ce unitate de masura vrei ?"<<endl<<endl;
    cout<<"a. kg/m^3"<<endl;
    cout<<"b. funt/inch^3 - lb/in^3"<<endl;
    cout<<"c. funt/galon - lb/gal"<<endl;
    cout<<"d. kg/l"<<endl;
    cout<<"e. uncie (Avoirdupois)/foot^3 - oz(Av)/ft^3"<<endl;
    cin>>unitate[0];
    cout<<"Introdu valoare -> ";
    cin>>value;
    system("CLS");
    cout<<value;
    cout<<fixed<<setprecision(9);
    if((unitate[0] == 'a' || unitate[0] == 'A') && unitate[1] ==0)
    {
        cout<<"kg/m^3="<<endl;
        valueFUNTin= value/funtIN;
        cout<<'='<<valueFUNTin<<" lb/in^3"<<endl;
        valueFUNTgal= value/funtGAL;
        cout<<'='<<valueFUNTgal<<" lb/gal"<<endl;
        valueKGl= value/1000;
        cout<<'='<<valueKGl<<" kg/l"<<endl;
        valueUNCIE= value/uncie;
        cout<<'='<<valueUNCIE<<" oz(Av)/ft^3"<<endl;
    }
    else if((unitate[0] == 'b' || unitate[0] == 'B') && unitate[1] ==0)
    {
        cout<<"lb/in^3="<<endl;
        valueKMm3=value*funtIN;
        cout<<'='<<valueKMm3<<" kg/m^3"<<endl;;
        valueFUNTgal= valueKMm3/funtGAL;
        cout<<'='<<valueFUNTgal<<" lb/gal"<<endl;
        valueKGl= valueKMm3/1000;
        cout<<'='<<valueKGl<<" kg/l"<<endl;
        valueUNCIE= valueKMm3/uncie;
        cout<<'='<<valueUNCIE<<" oz(Av)/ft^3"<<endl;

    }
    else if((unitate[0] == 'c' || unitate[0] == 'C') && unitate[1] ==0)
    {
        cout<<"lb/gal="<<endl;
        valueKMm3=value*funtGAL;
        cout<<'='<<valueKMm3<<" kg/m^3"<<endl;
        valueFUNTin= valueKMm3/funtIN;
        cout<<'='<<valueFUNTin<<" lb/in^3"<<endl;
        valueKGl= valueKMm3/1000;
        cout<<'='<<valueKGl<<" kg/l"<<endl;
        valueUNCIE= valueKMm3/uncie;
        cout<<'='<<valueUNCIE<<" oz(Av)/ft^3"<<endl;

    }
    else if((unitate[0] == 'd' || unitate[0] == 'D') && unitate[1] ==0)
    {
        cout<<"kg/l="<<endl;
        valueKMm3=value*1000;
        cout<<'='<<valueKMm3<<" kg/m^3"<<endl;
        valueFUNTin= valueKMm3/funtIN;
        cout<<'='<<valueFUNTin<<" lb/in^3"<<endl;
        valueFUNTgal= valueKMm3/funtGAL;
        cout<<'='<<valueFUNTgal<<" lb/gal"<<endl;
        valueUNCIE= valueKMm3/uncie;
        cout<<'='<<valueUNCIE<<" oz(Av)/ft^3"<<endl;
    }
    else if((unitate[0] == 'e' || unitate[0] == 'E') && unitate[1] ==0)
    {
        cout<<"oz(Av)/ft^3="<<endl;
        valueKMm3=value*uncie;
        cout<<'='<<valueKMm3<<" kg/m^3"<<endl;
        valueFUNTin= valueKMm3/funtIN;
        cout<<'='<<valueFUNTin<<" lb/in^3"<<endl;
        valueFUNTgal= valueKMm3/funtGAL;
        cout<<'='<<valueFUNTgal<<" lb/gal"<<endl;
        valueKGl= valueKMm3/1000;
        cout<<'='<<valueKGl<<" kg/l"<<endl;
    }
    cout<<endl<<"Pentru a reveni la meniul principal -> P"<<endl;
    cout<<"Pentru a reveni la meniul anterior -> A"<<endl;
    cout<<"Pentru a iesi din convertor -> orice tasta"<<endl;
    if((raspuns[0] == 'P' || raspuns[0]  == 'p') && raspuns[1]==0)
    {
        system("CLS");
        main();
    }
    else if((raspuns[0] == 'A' || raspuns[0]  == 'a') && raspuns[1]==0)
    {
        system("CLS");
        combustibilAll();
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
void combustibilAll()
{
    cout<<"::Combustibli::";
    char raspuns[2],unitate[2];
    double value,valueL,valueK,valueG,l,g;
    g=0.4251437075;
    cout<<"Alege ce unitate de masura vrei ?"<<endl<<endl;
    cout<<"a. km/l"<<endl;
    cout<<"b. l/100km"<<endl;
    cout<<"c. mile/galon"<<endl;
    cin>>unitate[0];
    cout<<"Introdu valoare -> ";
    cin>>value;
    system("CLS");
    cout<<value;
    cout<<fixed<<setprecision(9);
    if((unitate[0] == 'a' || unitate[0] == 'A') && unitate[1] ==0)
    {
        cout<<"km/l="<<endl;
        valueL= 100/value;
        cout<<'='<<valueL<<" l/100km"<<endl;
        valueG= value/g;
        cout<<'='<<valueG<<" mile/galon"<<endl;
    }
    else if((unitate[0] == 'b' || unitate[0] == 'B') && unitate[1] ==0)
    {
        cout<<"l/100km="<<endl;
        valueK= 100/value;
        cout<<'='<<valueK<<" km/l"<<endl;
        valueG= valueK/g;
        cout<<'='<<valueG<<" mile/galon"<<endl;
    }
    else if((unitate[0] == 'c' || unitate[0] == 'C') && unitate[1] ==0)
    {
        cout<<"mile/galon="<<endl;
        valueK= value*g;
        cout<<'='<<valueK<<" km/l"<<endl;
        valueL= 100/valueK;
        cout<<'='<<valueL<<" l/100km"<<endl;
    }

    cout<<endl<<"Pentru a reveni la meniul principal -> P"<<endl;
    cout<<"Pentru a reveni la meniul anterior -> A"<<endl;
    cout<<"Pentru a iesi din convertor -> orice tasta"<<endl;
    if((raspuns[0] == 'P' || raspuns[0]  == 'p') && raspuns[1]==0)
    {
        system("CLS");
        main();
    }
    else if((raspuns[0] == 'A' || raspuns[0]  == 'a') && raspuns[1]==0)
    {
        system("CLS");
        combustibilAll();
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
