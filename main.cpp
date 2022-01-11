//Solicitar al usuario una fecha (dd:mm:aaaa) y comprobar si es correcta. Para que una fecha sea
//correcta es
// necesario:
// El año debe ser mayor que cero.
// El mes debe estar entre 1 y 12.
// Dependiendo del mes que sea, el día debe estar dentro de los límites válidos. Los meses que
//tienen 31 días son 1, 3, 5, 7, 8, 10 y 12. Los meses de 30 días son 4, 6, 9 y 11. El mes de 28
//días es 2, excepto en un año bisiesto que es 29 días.



#include <math.h>
#include <iostream>
#include <conio.h>


using namespace std;

int main()
{
    int dd, mm, aaaa;

    cout<<"===========================================================================\n";
    cout<<"===================Programa para verificar la inexistencia=================\n";
    cout<<"===============================o existencia================================\n";
    cout<<"===============================de una fecha!===============================\n";
    cout<<"===========================================================================\n\n";

    cout<<"Ingrese el dia: "<<endl;//Se solicita al usuario que ingrese el día
    cin>>dd;
    while (dd<=0 || dd > 31){//While para poder darle mayor firmeza al programa.
        cout<<"Ingrese un dia valido del 1 al 31: "<<dd<<" no es valido"<<endl;//Solicita un nuevo reingreso de
                                                                               //la fecha en caso de no cumplir la condición
        cin>>dd;
    }
    cout<<"Ingrese el mes: "<<endl;//Se solicita el ingreso del mes
    cin>>mm;
    while(mm >= 13 || mm <= 0){//Al igual que arriba este while funciona con la misma finalidad.
        cout<<"Ingrese un mes valido del 1 al 12: "<<mm<<" no es valido"<<endl;
        cin>>mm;
    }

    cout<<"Ingrese el anio: "<<endl;
    cin>>aaaa;

    while(aaaa == 0){//Este while entra para dar una explicación al usuario del porque, el año cero no se lo cuenta.
        cout<<"\nIngrese un anio valido, el anio ingresado "<<aaaa<<" no es valido.\n"<<endl;
        cout<<"Por que en el calendario gregoriano y en el juliano no existe el anio 0, \n"<<endl;
        cout<<"dado que el 1 a.C. precede inmediatamente al 1 d.C. Asi, el dia posterior al \n"<<endl;
        cout<<"31 de diciembre del 1 a.C. fue el 1 de enero del 1 d.C. "<<endl;
        cin>>aaaa;
    };



    if (aaaa % 4 == 0 || aaaa % 400 == 0){//Se crea un *if* y un *else*, logrando tener una mayor lógixa del programa.
                                          //Para calcular la fecha de un año bisiesto o no bisiesto
    switch (mm){
        case 1:
            cout<<"\nFecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\nAdemas tambien es anio bisiesto\n";
    //Se escribe el texto para que pueda ofrecer una respuesta adecuada en pantalla. Asi en todos.
            break;
        case 2:
            if (dd > 29){
                cout<<"\nEl día: "<<dd<<" en el mes "<<mm<<" del año "<<aaaa<<" no existe, porque el anio es bisiesto,\n y solo tiene 29 días en el mes de \n febrero."<<endl;
                cout<<"\nLa fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es inexistente\n\n";
            } else {
                cout<<"\nLa fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\nAdemas tambien es anio bisiesto.\nSi el valor es negativo, debe interpretarse como si fuese antes de cristo, (a.C.)";
            }
            break;
        case 3:
            cout<<"\nLa fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\nAdemas tambien es anio bisiesto.\nSi el valor es negativo, debe interpretarse como si fuese antes de cristo, (a.C.)";
            break;
        case 4:
            if (dd > 30){
                cout<<"\nEl día: "<<dd<<" en el mes "<<mm<<" del año "<<aaaa<<" no existe, porque el mes de abril solo tiene 30 dias."<<endl;
                cout<<"\nLa fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es inexistente.\n\n";
            } else {
                cout<<"\nLa fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\nAdemas tambien es anio bisiesto.\nSi el valor es negativo, debe interpretarse como si fuese antes de cristo, (a.C.)";
            }
            break;
        case 5:
            cout<<"\nLa fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\nAdemas tambien es anio bisiesto.\nSi el valor es negativo, debe interpretarse como si fuese antes de cristo, (a.C.)";
            break;
        case 6:
            if (dd > 30){
                cout<<"\nEl día: "<<dd<<" en el mes "<<mm<<" del año "<<aaaa<<" no existe, porque el mes de junio solo tiene 30 dias."<<endl;
                cout<<"\nLa fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es inexistente.\n\n";
            } else {
                cout<<"\nLa fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\nAdemas tambien es anio bisiesto.\nSi el valor es negativo, debe interpretarse como si fuese antes de cristo, (a.C.)";
            }
            break;
        case 7:
            cout<<"\nLa fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\nAdemas tambien es anio bisiesto.\nSi el valor es negativo, debe interpretarse como si fuese antes de cristo, (a.C.)";
            break;
        case 8:
            cout<<"\nLa fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\nAdemas tambien es anio bisiesto.\nSi el valor es negativo, debe interpretarse como si fuese antes de cristo, (a.C.)";
            break;
        case 9:
            if (dd > 30){
                cout<<"\nEl día: "<<dd<<" en el mes "<<mm<<" del año "<<aaaa<<" no existe, porque el mes de septiembre solo tiene 30 dias."<<endl;
                cout<<"\nLa fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es inexistente.\n\n";
            } else {
                cout<<"\nLa fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\nAdemas tambien es anio bisiesto.\nSi el valor es negativo, debe interpretarse como si fuese antes de cristo, (a.C.)";
            }
            break;
        case 10:
            cout<<"\nLa fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\nAdemas tambien es anio bisiesto.\nSi el valor es negativo, debe interpretarse como si fuese antes de cristo, (a.C.)";
           break;
        case 11:
            if (dd > 30){
                cout<<"\nEl día: "<<dd<<" en el mes "<<mm<<" del anio "<<aaaa<<" no existe, porque el mes de octubre solo tiene 30 dias."<<endl;
                cout<<"\nLa fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es inexistente.\n\n";
            } else {
                cout<<"\nLa fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\nAdemas tambien es anio bisiesto.\nSi el valor es negativo, debe interpretarse como si fuese antes de cristo, (a.C.)";
            }
            break;
        case 12:
            cout<<"\nLa fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\nAdemas tambien es anio bisiesto.\nSi el valor es negativo, debe interpretarse como si fuese antes de cristo, (a.C.)\n\n";
            break;
        default://Default para dar mayor estabilidad al switch.
            cout<<""<<endl;
    }

    } else {
    switch (mm){
        case 1:
            cout<<"Fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\n\n";
            break;
        case 2:
            if (dd > 28){
                cout<<"El día: "<<dd<<" en el mes "<<mm<<" del año "<<aaaa<<" no existe, porque el mes de febrero solo tiene 28 días\n"<<endl;
                cout<<"La fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es inexistente\n\n";
            } else {
                cout<<"La fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\n\nSi el valor es negativo, debe interpretarse como si fuese antes de cristo, (a.C.)";
            }
            break;
        case 3:
            cout<<"La fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\n\nSi el valor es negativo, debe interpretarse como si fuese antes de cristo, (a.C.)";
            break;
        case 4:
            if (dd > 30){
                cout<<"El día: "<<dd<<" en el mes "<<mm<<" del año "<<aaaa<<" no existe, porque el mes de abril solo tiene 30 dias."<<endl;
                cout<<"La fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es inexistente.\n\n";
            } else {
                cout<<"La fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\n\nSi el valor es negativo, debe interpretarse como si fuese antes de cristo, (a.C.)";
            }
            break;
        case 5:
            cout<<"La fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\n\nSi el valor es negativo, debe interpretarse como si fuese antes de cristo, (a.C.)";
            break;
        case 6:
            if (dd > 30){
                cout<<"El día: "<<dd<<" en el mes "<<mm<<" del año "<<aaaa<<" no existe, porque el mes de junio solo tiene 30 dias."<<endl;
                cout<<"La fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es inexistente.\n\n";
            } else {
                cout<<"La fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\n\nSi el valor es negativo, debe interpretarse como si fuese antes de cristo, (a.C.)";
            }
            break;
        case 7:
            cout<<"La fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\nAdemas tambien es anio bisiesto.\nSi el valor es negativo, debe interpretarse como si fuese antes de cristo, (a.C.)";
            break;
        case 8:
            cout<<"La fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\nAdemas tambien es anio bisiesto.\nSi el valor es negativo, debe interpretarse como si fuese antes de cristo, (a.C.)";
            break;
        case 9:
            if (dd > 30){
                cout<<"El día: "<<dd<<" en el mes "<<mm<<" del año "<<aaaa<<" no existe, porque el mes de septiembre solo tiene 30 dias."<<endl;
                cout<<"La fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es inexistente.\n\n";
            } else {
                cout<<"La fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\nAdemas tambien es anio bisiesto.\nSi el valor es negativo, debe interpretarse como si fuese antes de cristo, (a.C.)";
            }
            break;
        case 10:
            cout<<"La fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\nAdemas tambien es anio bisiesto.\nSi el valor es negativo, debe interpretarse como si fuese antes de cristo, (a.C.)";
           break;
        case 11:
            if (dd > 30){
                cout<<"El día: "<<dd<<" en el mes "<<mm<<" del anio "<<aaaa<<" no existe, porque el mes de octubre solo tiene 30 dias."<<endl;
                cout<<"La fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es inexistente.\n\n";
            } else {
                cout<<"La fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\nAdemas tambien es anio bisiesto.\nSi el valor es negativo, debe interpretarse como si fuese antes de cristo, (a.C.)";
            }
            break;
        case 12:
            cout<<"La fecha digitada: "<<dd<<"/"<<mm<<"/"<<aaaa<<" es existente.\nAdemas tambien es anio bisiesto.\nSi el valor es negativo, debe interpretarse como si fuese antes de cristo, (a.C.)\n\n";
            break;
        default:
            cout<<""<<endl;//Default para dar mayor estabilidad al switch.
    }
    }

    cout<<"\nLa fecha digitada fue: "<<dd<<"/"<<mm<<"/"<<aaaa<<endl;//Por último se lanza en pantalla la fecha ingresada.

    getch ();
    return 0;
}
