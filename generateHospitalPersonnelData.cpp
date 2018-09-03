#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include "HospitalPersonnelData.h"
#include "GENERATEHOSPITALPERSONNELDATA.H"

using namespace std;

int main(){
    //uses time from the time clock for the random functions
    srand(time(NULL));
    //string copy from arrays in my struct for first and last name
    strcpy(Hospeeps.FirstName, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    strcpy(Hospeeps.LastName, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    //opens out file and appends it with running count of record output
    Outfile.open("hospitalPersonnelData.txt", std::ios_base::app);
    Outfile << Hospeeps.specialcounter<<"  " << "total records so far!"<< endl;

 //do while loop to count 1000 lines  to out file
 do{//set counter for loop
         Hospeeps.counts = Hospeeps.counts +1;
    //print out first names randomly to file
    for (int i = 1; i <=rand()%20 + 6; i++){
         Outfile << (Hospeeps.FirstName[rand()%26]);
        }
         Outfile << "  ";
    //print out last names randomly to file
    for (int i = 1; i <=rand()%25 + 7; i++){
          Outfile << (Hospeeps.LastName[rand()%26]);
        }
          Outfile << "  ";
    //print out ID numbers randomly to file
    for (int i = 0; i <5; i++){
          Outfile << (Hospeeps.ID[rand()%9]);
        }
          Outfile << "  ";
          //load dummy string to print out random Role
          Hospeeps.Dummystring=Hospeeps.Role[rand()%3];
    //print out MD role if that role chosen
    if (Hospeeps.Dummystring == "MD")
      {
          Outfile << (Hospeeps.Role[0]);
          Outfile << "  ";
          for (int i=0;i<3;i++)
          {
                bool check;  //variable to check if day is already used
                do
                {//load string randomly for comparison
                Hospeeps.DummystringDay1=Hospeeps.DutyDays[rand()%9];
                //check if day is already used:
                check=true;
                for (int j=0;j<i;j++)
                    if (Hospeeps.DummystringDay1 == Hospeeps.DutyDays[j]) //if day is already used
                    {
                        check=false; //set check to false
                        break; //no need to check the other elements of Hospeeps.DutyDays[]
                    }
                } while (!check); //loop until new, unique day is found
                Hospeeps.DutyDays[i]=Hospeeps.DummystringDay1;
                //store the generated day in the array
                Outfile << Hospeeps.DutyDays[i];
                Outfile << " ";
          }
                Outfile << endl;
      }
    //print out NP role if that role chosen
    else if ( Hospeeps.Dummystring == "NP")
      {
          Outfile << (Hospeeps.Role[1]);
          Outfile << "  ";
          for (int i=0;i<3;i++)
          {
                bool check; //variable to check if day is already used
                do
                {//load string randomly for comparison
                Hospeeps.DummystringDay1=Hospeeps.DutyDays[rand()%9];
                //check if day is already used:
                check=true;
                for (int j=0;j<i;j++)
                    if (Hospeeps.DummystringDay1 == Hospeeps.DutyDays[j]) //if day is already used
                    {
                        check=false; //set check to false
                        break; //no need to check the other elements of Hospeeps.DutyDays[]
                    }
                } while (!check); //loop until new, unique day is found
                //store the generated day in the array
                Hospeeps.DutyDays[i]=Hospeeps.DummystringDay1;
                Outfile << Hospeeps.DutyDays[i];
                Outfile << " ";
          }
                Outfile << endl;
      }
    //print out PT role if that role chosen
    else if (Hospeeps.Dummystring == "PT")
       {
          Outfile << (Hospeeps.Role[2]);
          Outfile << "  ";
          //set random string to choose between Yes or NO for exit date
          Hospeeps.Dummystring2=Hospeeps.ExitFlag[rand()%2];
          //if statement to print out Yes exit flag and dates if randomly chosen
          if(Hospeeps.Dummystring2== "Y")
          {
              Outfile << Hospeeps.ExitFlag[0];
              Outfile << "   ";
              Outfile <<  rand()%12 + 1;//randomly sets month 1-12
              Outfile <<  Hospeeps.dummy;
              Outfile <<  rand()%28 + 1;//randomly sets day between 1-28
              Outfile <<  Hospeeps.dummy;
              Outfile << (Hospeeps.YYYY);
              Outfile << "   ";
              Outfile <<  rand()%12 + 1;//randomly sets month 1-12
              Outfile <<  Hospeeps.dummy;
              Outfile <<  rand()%28 + 1;//randomly sets day between 1-28
              Outfile <<  Hospeeps.dummy;
              Outfile << (Hospeeps.YYYY);//prints out year to out file
              Outfile << endl;
          }
         //if statement to print out NO exit flag and dates if randomly chosen
         else if (Hospeeps.Dummystring2 == "N")
          {
              Outfile << Hospeeps.ExitFlag[1];
              Outfile << "   ";
              Outfile <<  rand()%12 + 1;//randomly sets month 1-12
              Outfile <<  Hospeeps.dummy;
              Outfile <<  rand()%28 + 1;//randomly sets day between 1-28
              Outfile <<  Hospeeps.dummy;
              Outfile << (Hospeeps.YYYY);//prints out year to out file
              Outfile << endl;
          }

       }

 } while (Hospeeps.counts < 1000);//end do while loop and set it to 1000 entries to out file

Outfile.close();//close out file

    return 0;

}
