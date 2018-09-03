#ifndef HOSPITALPERSONNELDATA_H_INCLUDED
#define HOSPITALPERSONNELDATA_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;
//creates struct with all needed variables in h file to be used in main
struct HospitalPersonnelData{

    char FirstName[26]; //= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char LastName[26]; //= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int ID[10]={0,1,2,3,4,5,6,7,8,9};
    int counts=0;
    int specialcounter=1000;
    int specialcounter2=0;
    string counter="";
    string Role[3]={"MD", "NP", "PT"};
    string DutyDays[10]={"1","0","M","T","W","TH","F","SA","SU",};
    string Dummystring=" ";
    string Dummystring2=" ";
    string DummystringDay1=" ";
    string dummy=":";
    string ExitFlag[2]= {"Y", "N"};
    string YYYY = "2015";
};

#endif // HOSPITALPERSONNELDATA_H_INCLUDED
