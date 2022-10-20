#include<iostream>
#include<map>
#include<string>
using namespace std;
string intToRoman(int num) {
        string res;
    while(num>=1000){
        num-=1000;
        res+='M';
    }
    if(num>=900){
         num-=900;
        res+="CM";
    }
   // cout<<res;
    if(num>=500){
    num-=500;
        res+="D";
    }
    if(num>=400){
         num-=400;
        res+="CD";
    }
    while(num>=100){
    num-=100;
        res+='C';
    }


    if(num>=90){
         num-=90;
        res+="XC";
    }
   // cout<<res;
    if(num>=50){
    num-=50;
        res+="L";
    }
    if(num>=40){
         num-=40;
        res+="XL";
    }
    while(num>=10){
    num-=10;
        res+='X';
    }

    //-------------------
    if(num>=9){
         num-=9;
        res+="IX";
    }
   // cout<<res;
    if(num>=5){
    num-=5;
        res+="V";
    }
    if(num>=4){
         num-=4;
        res+="IV";
    }
    while(num>=1){
    num-=1;
        res+='I';
    }
return res;
    }
int main(){
   // map<int,char> m={{1000,'M'},{900,'Cm'},{500,'D'},{100,'C'},{50,'L'},{10,'X'},{5,'V'},{1,'I'}};
    int num=1994;
    string res;
    while(num>=1000){
        num-=1000;
        res+='M';
    }
    if(num>=900){
         num-=900;
        res+="CM";
    }
   // cout<<res;
    if(num>=500){
    num-=500;
        res+="D";
    }
    if(num>=400){
         num-=400;
        res+="CD";
    }
    while(num>=100){
    num-=100;
        res+='C';
    }


    if(num>=90){
         num-=90;
        res+="XC";
    }
   // cout<<res;
    if(num>=50){
    num-=50;
        res+="L";
    }
    if(num>=40){
         num-=40;
        res+="XL";
    }
    while(num>=10){
    num-=10;
        res+='X';
    }

    //-------------------
    if(num>=9){
         num-=9;
        res+="IX";
    }
   // cout<<res;
    if(num>=5){
    num-=5;
        res+="V";
    }
    if(num>=4){
         num-=4;
        res+="IV";
    }
    while(num>=1){
    num-=1;
        res+='I';
    }
cout<<res;
}
