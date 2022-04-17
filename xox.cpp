#include <iostream>
#include <conio.h>

using namespace std;

void tablo(char dizi1[]){
cout<<"\t\t\t\t\t\t\t*******"<<endl;
cout<<"\t\t\t\t\t\t\t|"<<dizi1[0]<<"|"<<dizi1[1]<<"|"<<dizi1[2]<<"|"<<endl;
cout<<"\t\t\t\t\t\t\t*******"<<endl;
cout<<"\t\t\t\t\t\t\t|"<<dizi1[3]<<"|"<<dizi1[4]<<"|"<<dizi1[5]<<"|"<<endl;
cout<<"\t\t\t\t\t\t\t*******"<<endl;
cout<<"\t\t\t\t\t\t\t|"<<dizi1[6]<<"|"<<dizi1[7]<<"|"<<dizi1[8]<<"|"<<endl;
cout<<"\t\t\t\t\t\t\t*******"<<endl;


}
bool kontrol(char dizi[]){
    if(dizi[0]==dizi[4]&&dizi[4]==dizi[8])
        return false;
    else if(dizi[2]==dizi[4]&&dizi[4]==dizi[6])
        return false;
    else if(dizi[1]==dizi[4]&&dizi[4]==dizi[7])
        return false;
    else if(dizi[0]==dizi[3]&&dizi[3]==dizi[6])
        return false;
    else if(dizi[0]==dizi[1]&&dizi[1]==dizi[2])
        return false;
    else if(dizi[2]==dizi[5]&&dizi[5]==dizi[8])
        return false;
    else if(dizi[3]==dizi[4]&&dizi[4]==dizi[5])
        return false;
    else if(dizi[0]==dizi[3]&&dizi[3]==dizi[6])
        return false;

}


int main()
{
    char al;
    int lokasyon,i=0,lokasyon2,hamle=0,kontrolxo=0;;
    bool m=true;
    char dizi[9]={'1','2','3','4','5','6','7','8','9'};
    int oynandi[9]={0,0,0,0,0,0,0,0,0};
    while(m==true){
    while(kontrolxo==0){
        tablo(dizi);
        cout<<"x yer gir"<<endl;
        cin>>lokasyon;
        if(oynandi[lokasyon-1]==0){
        dizi[lokasyon-1]='X';
        hamle++;
        oynandi[lokasyon-1]++;
        kontrolxo=1;
    }
    else{
        cout<<"bu boslukta zaten oynandi"<<endl;
    }
    }
     if(hamle==9){
    cout<<"9 Hamle gecildigi icin oyun bitti"<<endl;
        break;
}

    system("cls");
    m=kontrol(dizi);
    kontrolxo=0;

    while(kontrolxo==0){
        tablo(dizi);
        cout<<"o yer gir"<<endl;
        cin>>lokasyon2;
        if(oynandi[lokasyon2-1]==0){
        dizi[lokasyon2-1]='O';
        hamle++;
        oynandi[lokasyon2-1]++;
        kontrolxo=1;
    }
    else{
        cout<<"bu boslukta zaten oynandi"<<endl;

    }

}
if(hamle==9){
    cout<<"9 Hamle gecildigi icin oyun bitti"<<endl;
        break;
}


system("cls");
m=kontrol(dizi);
kontrolxo=0;

    }
cout<<hamle<<" hamlede bitirdin"<<endl;

    return 0;
}
