#include<iostream>

using namespace std;



main(){
string barang[10],member,nama[5]={"Bayu","Irvan","Susiati","Diana","Roni"},nomor[5]={"A001","A002","A003","A007","A008"};
int harga[10],jmlB,total,jml[10],totalD;

    cout<<" Apakah memiliki member : ";cin>>member;
if(member=="tidak"||member=="t")
{
    cout<<" Inputkan nama : ";cin>>nama[0];
}
if(member=="punya"||member=="ya"||member=="y")
{nama[0]="Bayu";nama[1]="Irvan";nama[2]="Susiati";nama[3]="Diana";nama[4]="Roni";
    cout<<" Inputkan no identitas : ";cin>>nomor[0];
    if(nomor[0]=="A001")
        {cout<<"Nama :"<<nama[0]<<endl;
         cout<<"Nomor:"<<nomor[0]<<endl;}
    if(nomor[0]=="A002")
        {cout<<"Nama :"<<nama[1]<<endl;
         cout<<"Nomor:"<<nomor[0]<<endl;}
    if(nomor[0]=="A003")
        {cout<<"Nama :"<<nama[2]<<endl;
         cout<<"Nomor:"<<nomor[0]<<endl;}
    if(nomor[0]=="A007")
        {cout<<"Nama :"<<nama[3]<<endl;
         cout<<"Nomor:"<<nomor[0]<<endl;}
    if(nomor[0]=="A008")
        {cout<<"Nama :"<<nama[4]<<endl;
         cout<<"Nomor:"<<nomor[0]<<endl;}
}

//OUTPUT
cout<<"Inputkan jumlah macam barang yang dibeli :";cin>>jmlB;
for(int i=0;i<jmlB;i++){
cout<<" Data ke-"<<i+1<<endl;
cout<<" Barang yang akan dibeli : ";cin>>barang[i];
cout<<" Inputkan harga barang   Rp. ";cin>>harga[i];
cout<<" jumlah yang akan dibeli : ";cin>>jml[i];cout<<endl;
total=harga[i]*jml[i];
totalD=harga[i]*jml[i]-((5*harga[i])/100);
}
if(member=="tidak"||member=="t")
{

    cout<<"jumlah barang yang dibeli :"<<jmlB<<endl;
    //cout<<"Harga barang       :"<<harga<<endl;
    cout<<"Total pembayaran   Rp. "<<total<<endl;
}
else if(member=="punya"||member=="ya"||member=="y")
{
    cout<<"jumlah barang yang dibeli :"<<jmlB<<endl;
    //cout<<"Harga barang       Rp."<<harga<<endl;
    //cout<<"Diskon sebesar     Rp."<<diskon<<endl;
    cout<<"Total pembayaran   Rp."<<totalD<<endl;
}
}
