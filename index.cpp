
#include<iostream>
using namespace std;
int main()
{
    cout<<"\t\t\t\t\t\t\t\b\b*WITH THE NAME OF ALLAH ALMIGHT!\n";
    cout<<"\t\t\t\t\t\b*WHO IS THE MOST MERCIFUL & THE MOST BENIFICIAL!*\n";
     cout<<"\t\t\t\t\t\t\t\b*ASSALAM-U-ALAIKUM!\n";
    cout<<"\t\t\t\t\t\t\t\t\b\b\b*--Welcome to our CAR'S SHOWROOM!--*\n";
    cout<<"\n\n\n";
    cout<<"\t1. A CAR.\n\n";
    int a;
    cout<<"\tPlease select the number:";
    cin>>a;
    if (a==1)
    {
        cout<<"\n";
        type:
        cout<<"\tWhich type of car do you want?\n\n\n";
        cout<<"\t1. A SUV Car.\n";
        cout<<"\t2. A HATCHBACK Car.\n";
        cout<<"\t3. A SEDAN Car.\n";
        cout<<"\t4. A COUPE Car.\n";
        cout<<"\t5. A SPORT Car.\n";
        cout<<"\t6. A MINI Car.\n";
        cout<<"\t7. A LUXURY Car.\n";
        cout<<"\t8. AN ELECTRIC Car.\n\n";
        int type;
        cout<<"\tPlease select the type:";
        cin>>type;
        cout<<"\n";
        switch (type)
        case 1:
            {
                suvcompany:
        cout<<"\tWhich company you would like to prefer for SUV Car?\n\n\n";
        cout<<"\t1. A TOYOTA Company.\n";
        cout<<"\t2. A HONDA Company.\n";
        cout<<"\t3. A HYUNDAI Company.\n";
        cout<<"\t4. A KIA Company.\n";
        cout<<"\t5. A MG Company.\n";
        cout<<"\t6. A BMW Company.\n";
        cout<<"\t7. A CHERY Company.\n";
        cout<<"\t8. A LEXUS Company.\n";
        cout<<"\t9. A AUDI Company.\n";
        cout<<"\t10. For go back to types.\n\n";
        int suv;
        cout<<"\tPlease select the company:";
        cin>>suv;
        cout<<"\tWe are showing you cars with prices!\n";
        cout<<"\n";
        int b;
        if(suv==1)
            {
               cout<<"\t1. Toyota Fortuner & its price is PKR 21,100,000.\n";
               cout<<"\t2. Toyota Land Cruiser & its price is PKR 156,800,000.\n";
               cout<<"\t3. Toyota Hilux & its price is PKR 16,200,000.\n";
               cout<<"\t4. Toyota Rush & its price is PKR 8,300,000.\n";
               cout<<"\t5. For go back to companies.\n\n";

               int toyota;
              cout<<"\tPlease select the car & number :";
              cin>>toyota;
              cout<<"\n\n";
              if(toyota==5)
              {
                goto suvcompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }


            }

         else if(suv==2)
            {
               cout<<"\t1. Honda Vezel & its price is PKR 13,900,000.\n";
               cout<<"\t2. Honda CRV & its price is PKR 10,700,000.\n";
               cout<<"\t3. Honda BRV & its price is PKR 8,200,000. \n";
               cout<<"\t4. For go back to companies.\n\n";
               int honda;
               cout<<"\tPlease select the car & number :";
               cin>>honda;
               cout<<"\n\n";
                 if(honda==4)
              {
                goto suvcompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }


            }

         else if(suv==3)
            {
               cout<<"\t1. Hyundai Tucson & its price is PKR 8,859,000.\n";
               cout<<"\t2. Hyundai Staria & its price is PKR 11,009,000.\n";
               cout<<"\t3. For go back to companies.\n\n";
               int hyundai;
               cout<<"\tPlease select the car & number:";
               cin>>hyundai;
               cout<<"\n\n";
                   if(hyundai==3)
              {
                goto suvcompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

             else if(suv==4)
            {
               cout<<"\t1. Kia Sorento & its price is PKR 7,499,000.\n";
               cout<<"\t2. Kia Picanto & its price is PKR 4,500,000.\n";
               cout<<"\t3. Kia Sportage & its price is PKR 9,210,000.\n";
               cout<<"\t4. Kia Stonic & its price is PKR 6,500,000.\n";
               cout<<"\t5. For go back to companies.\n\n";
               int kia;
               cout<<"\tPlease select the car & number:";
               cin>>kia;
               cout<<"\n\n";
                     if(kia==5)
              {
                goto suvcompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

            else if(suv==5)
            {
               cout<<"\t1. MG 4 & its price is PKR 7,000,000.\n";
               cout<<"\t2. MG Marvel R & its price is PKR 7,000,000.\n";
               cout<<"\t3. MG RX8 & its price is PKR 8,000,000.\n";
               cout<<"\t4. MG ZS & its price is PKR 8,699,000.\n";
               cout<<"\t5. MG HS & its price is PKR 8,880,000.\n";
               cout<<"\t6. For go back to companies.\n\n";
               int mg;
               cout<<"\tPlease select the car & number:";
               cin>>mg;
               cout<<"\n\n";
                     if(mg==6)
              {
                goto suvcompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

             else if(suv==6)
            {
               cout<<"\t1. BMW IX3 & its price is PKR 22,200,000.\n";
               cout<<"\t2. BMW IX & its price is PKR 28,000,000.\n";
               cout<<"\t3. BMW X7 & its price is PKR 77,300,000.\n";
               cout<<"\t4. BMW X5 & its price is PKR 104,600,000.\n";
               cout<<"\t5. For go back to companies.\n\n";
               int bmw;
               cout<<"\tPlease select the car & number:";
               cin>>bmw;
               cout<<"\n\n";
                          if(bmw==5)
              {
                goto suvcompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

            else if(suv==7)
            {
               cout<<"\t1. Chery Tiggo 4Pro & its price is PKR 6,399,000.\n";
               cout<<"\t2. Chery Tiggo 8Pro & its price is PKR 10,399,000.\n";
               cout<<"\t3. For go back to companies.\n\n";
               int chery;
               cout<<"\tPlease select the car & number:";
               cin>>chery;
               cout<<"\n\n";
                          if(chery==3)
              {
                goto suvcompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

            else if(suv==8)
            {
               cout<<"\t1. Lexus X600 & its price is PKR 120,000,000.\n";
                cout<<"\t2. For go back to companies.\n\n";
               int lexus;
               cout<<"\tPlease select the car & number:";
               cin>>lexus;
               cout<<"\n\n";
                                if(lexus==2)
              {
                goto suvcompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

            else if(suv==9)
            {
               cout<<"\t1. Audi Q3 & its price is PKR 6,600,000.\n";
               cout<<"\t2. For go back to companies.\n\n";
               int audi;
               cout<<"\tPlease select the car & number:";
               cin>>audi;
               cout<<"\n\n";
                                if(audi==2)
              {
                goto suvcompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

            else if(suv==10)
            {
               goto type;
               cout<<"\n\n";
            }


        break;

        case 2:
        cout<<"\tWhich company you would like to prefer for HATCHBACK Car?\n\n\n";
        hatchbackcompany:
        cout<<"\t1. A TOYOTA Company.\n";
        cout<<"\t2. A SUZUKI Company.\n";
        cout<<"\t3. A PRINCE Company.\n";
        cout<<"\t4. A KIA Company.\n";
        cout<<"\t5. A MG Company.\n";
        cout<<"\t6. A UNITED Company.\n";
        cout<<"\t7. A HONDA Company.\n";
        cout<<"\t8. A HYUNDAI Company.\n";
        cout<<"\t9. For go back to types.\n\n";
        int hatchback;
        cout<<"\tPlease select the company:";
        cin>>hatchback;
        cout<<"\tWe are showing you cars with prices!\n";
        cout<<"\n";
        if(hatchback==1)
            {
               cout<<"\t1. Toyota Vitz & its price is PKR 4,100,000.\n";
               cout<<"\t2. Toyota Yaris & its price is PKR 5,300,000.\n";
               cout<<"\t3. Toyota Passo & its price is PKR 3,200,000.\n";
                cout<<"\t4. For go back to companies.\n\n";
               int toyota;
              cout<<"\tPlease select the car & number:";
              cin>>toyota;
              cout<<"\n\n";
                if(toyota==4)
              {
                goto hatchbackcompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }


            }

             if(hatchback==2)
            {
               cout<<"\t1. Suzuki Swift & its price is PKR 4,960,000.\n";
               cout<<"\t2. Suzuki Wagon R & its price is PKR 3,741,000.\n";
               cout<<"\t3. Suzuki Alto & its price is PKR 2,935,000.\n";
               cout<<"\t4. Suzuki Cultus  & its price is PKR 4,366,000.\n";
               cout<<"\t5. Suzuki Mehran & its price is PKR 860,000.\n";
               cout<<"\t6. Suzuki Kyber & its price is PKR 375,000.\n";
               cout<<"\t7. For go back to companies.\n\n";
               int suzuki;
              cout<<"\tPlease select the car & number:";
              cin>>suzuki;
              cout<<"\n\n";
                if(suzuki==7)
              {
                goto hatchbackcompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }
            }

             if(hatchback==3)
            {
               cout<<"\t1. Prince Pearl & its price is PKR 1,990,000.\n";
                   cout<<"\t2. For go back to companies.\n\n";
               int prince;
              cout<<"\tPlease select the car & number:";
              cin>>prince;
              cout<<"\n\n";
                  if(prince==2)
              {
                goto hatchbackcompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }
            }

             if(hatchback==4)
            {
               cout<<"\t1. KIA Picanto & its price is PKR 3,625,000.\n";
               cout<<"\t2. KIA Rio & its price is PKR 2,600,000.\n";
               cout<<"\t3. For go back to companies.\n\n";
               int kia;
              cout<<"\tPlease select the car & number:";
              cin>>kia;
              cout<<"\n\n";
              if(kia==2)
              {
                goto hatchbackcompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

             if(hatchback==5)
            {
               cout<<"\t1. MG 3 & its price is PKR 2,200,000.\n";
               cout<<"\t2. For go back to companies.\n\n";
               int mg;
              cout<<"\tPlease select the car & number:";
              cin>>mg;
              cout<<"\n\n";
                  if(mg==2)
              {
                goto hatchbackcompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

             if(hatchback==6)
            {
               cout<<"\t1. United Alpha & its price is PKR 1,769,000.\n";
               cout<<"\t2. United Bravo & its price is PKR 1,519,000.\n";
               cout<<"\t3. For go back to companies.\n\n";
               int united;
              cout<<"\tPlease select the car & number:";
              cin>>united;
              cout<<"\n\n";
                    if(united==2)
              {
                goto hatchbackcompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

            if(hatchback==7)
            {
               cout<<"\t1. Honda Brio & its price is PKR 1,200,000.\n";
               cout<<"\t2. For go back to companies.\n\n";
               int honda;
              cout<<"\tPlease select the car & number:";
              cin>>honda;
              cout<<"\n\n";
                    if(honda==2)
              {
                goto hatchbackcompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

            if(hatchback==8)
            {
               cout<<"\t1. Hyundai Accent & its price is PKR 1,375,000.\n";
                cout<<"\t2. For go back to companies.\n\n";
               int hyundai;
              cout<<"\tPlease select the car & number:";
              cin>>hyundai;
              cout<<"\n\n";
                if(hyundai==2)
              {
                goto hatchbackcompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

             else if(hatchback==9)
            {
               goto type;
               cout<<"\n\n";
            }

        break;
        case 3:
        cout<<"\tWhich company you would like to prefer for SEDAN Car?\n\n\n";
        sedancompany:
        cout<<"\t1. A TOYOTA Company.\n";
        cout<<"\t2. A HONDA Company.\n";
        cout<<"\t3. A HYUNDAI Company.\n";
        cout<<"\t4. A PROTON Company.\n";
        cout<<"\t5. A CHANGAN Company.\n";
        cout<<"\t6. A KIA Company.\n";
        cout<<"\t7. A MG Company.\n";
        cout<<"\t8. A SUZUKI Company.\n";
        cout<<"\t9. For go back to types.\n";
        cout<<"\t10. For go back to companies.\n\n";
        int sedan;
        cout<<"\tPlease select the company:";
        cin>>sedan;
        cout<<"\tWe are showing you cars with prices!\n";
        cout<<"\n";
         if(sedan==1)
            {
               cout<<"\t1. Toyota Corolla & its price is PKR 5,799,000.\n";
               cout<<"\t2 .Toyota Yaris & its price is PKR 5,769,000.\n";
               cout<<"\t3. Toyota Belta & its price is PKR 2,500,000.\n";
               cout<<"\t4 .Toyota Premio & its price is PKR 3,250,000.\n";
               cout<<"\t5. Toyota Crown & its price is PKR 12,600,000.\n";
               cout<<"\t6. Toyota Mark X & its price is PKR 9,500,000.\n";
               cout<<"\t7 .Toyota Vios & its price is PKR 3,200,000.\n";
               cout<<"\t8. Toyota Prius & its price is PKR 9,270,000.\n";
               cout<<"\t9. For go back to companies.\n\n";
               int toyota;
              cout<<"\tPlease select the car & number:";
              cin>>toyota;
              cout<<"\n\n";
                     if(toyota==9)
              {
                goto sedancompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

              if(sedan==2)
            {
               cout<<"\t1. Honda Civic & its price is lies between PKR 8,859,000 to PKR 10,199,000.\n";
               cout<<"\t2. Honda Accord & its price is PKR 11,999,000.\n";
               cout<<"\t3. Honda City & its price is PKR 5,979,000.\n";
               cout<<"\t4. Honda Grace & its price is PKR 2,525,000.\n";
               cout<<"\t5. Honda Insight & its price is PKR 4,150,000.\n";
               cout<<"\t6. For go back to companies.\n\n";
               int honda;
              cout<<"\tPlease select the car & number:";
              cin>>honda;
              cout<<"\n\n";
                          if(honda==6)
              {
                goto sedancompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }
            }

             if(sedan==3)
            {
               cout<<"\t1. Hyundai Elantra & its price is PKR 7,199,000.\n";
               cout<<"\t2. Hyundai Sonata & its price is PKR 11,280,000.\n";
               cout<<"\t For go back to companies.\n\n";
               int hyundai;
              cout<<"\tPlease select the car & number:";
              cin>>hyundai;
              cout<<"\n\n";
             if(hyundai==3)
              {
                goto sedancompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

            if(sedan==4)
            {
               cout<<"\t1. Proton Saga & its price is PKR 2,399,000.\n";
               cout<<"\t2. Proton Saga MT & its price is PKR 2,824,000.\n";
               cout<<"\t3. Proton Saga AT & its price is PKR 2,999,000.\n";
               cout<<"\t4. For go back to companies.\n\n";
               int proton;
              cout<<"\tPlease select the car & number:";
              cin>>proton;
              cout<<"\n\n";
                   if(proton==4)
              {
                goto sedancompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

            if(sedan==5)
            {
               cout<<"\t1. Changan Alsvin & its price is PKR 5,000,000.\n";
               cout<<"\t2. For go back to companies.\n\n";
               int changan;
              cout<<"\tPlease select the car & number:";
              cin>>changan;
              cout<<"\n\n";
                       if(changan==2)
              {
                goto sedancompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

              if(sedan==6)
            {
               cout<<"\t1. Kia Cerato & its price is PKR 4,599,000.\n";
               cout<<"\t2. Kia Stinger & its price is PKR 5,857,660.\n";
               cout<<"\t3. For go back to companies.\n\n";
               int kia;
              cout<<"\tPlease select the car & number:";
              cin>>kia;
              cout<<"\n\n";
                if(kia==3)
              {
                goto sedancompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

             if(sedan==7)
            {
               cout<<"\t1. MG 6 & its price is PKR 5,00,000.\n";
               cout<<"\t2. MG 5  & its price is PKR 4,000,000.\n";
               cout<<"\t3. For go back to companies.\n\n";
               int mg;
              cout<<"\tPlease select the car & number:";
              cin>>mg;
              cout<<"\n\n";
                 if(mg==3)
              {
                goto sedancompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

             if(sedan==8)
            {
               cout<<"\t1. Suzuki Ciaz  & its price is PKR 2,500,000.\n";
               cout<<"\t2.  Suzuki Liana & its price is PKR 850,660.\n";
               cout<<"\t3. Suzuki Baleno  & its price is PKR 550,000.\n";
               cout<<"\t4.  Suzuki Margalla & its price is PKR 395,660.\n";
               cout<<"\t5. For go back to companies.\n\n";
               int suzuki;
              cout<<"\tPlease select the car & number:";
              cin>>suzuki;
              cout<<"\n\n";
                     if(suzuki==5)
              {
                goto sedancompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

             else if(sedan==9)
            {
               goto type;
               cout<<"\n\n";
            }

        break;
        case 4:
         cout<<"\tWhich company you would like to prefer for COUPE Car?\n\n\n";
         coupecompany:
        cout<<"\t1. A LAMBORGHINI Company.\n";
        cout<<"\t2. A NISSAN Company.\n";
        cout<<"\t3. A AUDI Company.\n";
        cout<<"\t4. A BMW Company.\n";
        cout<<"\t5. For go back to types.\n\n";
        int coupe;
        cout<<"\tPlease select the number:";
        cin>>coupe;
        cout<<"\tWe are showing you cars with prices!\n";
        cout<<"\n";
        if(coupe==1)
            {
               cout<<"\t1. Lamborghini Aventador & its price is PKR 267,440,000.\n";
               cout<<"\t2. Lamborghini Huracan & its price is PKR 156,717,000. \n";
               cout<<"\t3. For go back to companies.\n\n";
               int lamborghini ;
              cout<<"\tPlease select the car & number :";
              cin>>lamborghini;
              cout<<"\n\n";
            if(lamborghini==3)
              {
                goto coupecompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

             if(coupe==2)
            {
               cout<<"\t1.  Nissan Dayz X & its price is PKR 3,900,000.\n";
               cout<<"\t2.  Nissan GT-R & its price is PKR 414,000,000. \n";
               cout<<"\t3. For go back to companies.\n\n";
               int nissan  ;
              cout<<"\tPlease select the car & number :";
              cin>>nissan;
              cout<<"\n\n";
                 if(nissan==3)
              {
                goto coupecompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

            if(coupe==3)
            {
               cout<<"\t1. Audi  R8 & its price is PKR 71,200,000.\n";
               cout<<"\t2. Audi A7 & its price is PKR 16,000,000. \n";
               cout<<"\t3. For go back to companies.\n\n";
               int audi  ;
              cout<<"\tPlease select the car & number :";
              cin>>audi;
              cout<<"\n\n";
                      if(audi==3)
              {
                goto coupecompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }


            }

         if(coupe==4)
            {
               cout<<"\t1.  BMW 2 Series & its price is PKR 35,900,000.\n";
               cout<<"\t2.  BMW I8 & its price is PKR 22,500,000.\n";
               cout<<"\t3. For go back to companies.\n\n";
               int bmw  ;
              cout<<"\tPlease select the car & number :";
              cin>>bmw;
              cout<<"\n\n";
                if(bmw==3)
              {
                goto coupecompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

             else if(coupe==5)
            {
               goto type;
               cout<<"\n\n";
            }
        break;
        case 5:
        cout<<"\tWhich company you would like to prefer for SPORTS Car?\n\n\n";
        sportscompany:
        cout<<"\t1. A LEXUS Company.\n";
        cout<<"\t2. A PORSCHE Company.\n";
        cout<<"\t3. A BMW Company.\n";
        cout<<"\t4. A TOYOTA Company.\n";
        cout<<"\t5. A MAZDA Company.\n";
        cout<<"\t6. A MERCEDES Company.\n";
        cout<<"\t7. A NISSAN Company.\n";
        cout<<"\t8. A AUDI Company.\n";
        cout<<"\t9. For go back to types.\n\n";
        int sports;
        cout<<"\tPlease select the number:";
        cin>>sports;
        cout<<"\tWe are showing you cars with prices!\n";
        cout<<"\n";
         if(sports==1)
            {
               cout<<"\t1.  Lexus CT 200H  & its price is PKR 8,500,000.\n";
                cout<<"\t2. For go back to companies.\n\n";
               int lexus ;
              cout<<"\tPlease select the car & number :";
              cin>>lexus;
              cout<<"\n\n";
                if(lexus==2)
              {
                goto sportscompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

            if(sports==2)
            {
               cout<<"\t1. Porsche Cayenne  & its price is PKR 20,500,000.\n";
               cout<<"\t2. Porsche  Panamera   & its price is PKR 144,000,000.\n";
               cout<<"\t3. For go back to companies.\n\n";
               int porsche ;
              cout<<"\tPlease select the car & number :";
              cin>>porsche;
              cout<<"\n\n";
                       if(porsche==3)
              {
                goto sportscompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

             if(sports==3)
            {
               cout<<"\t1.  BMW I8 & its price is PKR 37,500,000.\n";
               cout<<"\t2. For go back to companies.\n\n";
               int bmw ;
              cout<<"\tPlease select the car & number :";
              cin>>bmw;
              cout<<"\n\n";
                if(bmw==2)
              {
                goto sportscompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

             if(sports==4)
            {
               cout<<"\t1. Toyota Supra & its price is PKR 15,300,000.\n";
               cout<<"\t2. Toyota  GT-86 & its price is PKR 8,600,000.\n";
               cout<<"\t3. For go back to companies.\n\n";
               int toyota ;
              cout<<"\tPlease select the car & number :";
              cin>>toyota;
              cout<<"\n\n";
                if(toyota==3)
              {
                goto sportscompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

             if(sports==5)
            {
               cout<<"\t1. Mazda RX-8 & its price is PKR 2,500,000.\n";
               cout<<"\t2. For go back to companies.\n\n";
               int mazda ;
              cout<<"\tPlease select the car & number :";
              cin>>mazda;
              cout<<"\n\n";
                     if(mazda==2)
              {
                goto sportscompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

             if(sports==6)
            {
               cout<<"\t1. Mercedes Benz SLK  & its price is PKR 18,200,000.\n";
               cout<<"\t2. For go back to companies.\n\n";
               int mercedes ;
              cout<<"\tPlease select the car & number :";
              cin>>mercedes;
              cout<<"\n\n";
                          if(mercedes==2)
              {
                goto sportscompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

             if(sports==7)
            {
               cout<<"\t1.  Nissan GT-R & its price is PKR 4,500,000.\n";
                cout<<"\t2. For go back to companies.\n\n";
               int nissan ;
              cout<<"\tPlease select the car & number :";
              cin>>nissan;
              cout<<"\n\n";
                if(nissan==2)
              {
                goto sportscompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

             if(sports==8)
            {
               cout<<"\t1. Audi R8 & its price is PKR 71,200,000.\n";
               cout<<"\t2. For go back to companies.\n\n";
               int audi ;
              cout<<"\tPlease select the car & number :";
              cin>>audi;
              cout<<"\n\n";
                if(audi==2)
              {
                goto sportscompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }
            }

             else if(sports==9)
            {
               goto type;
               cout<<"\n\n";
            }

        break;
        case 6:
        cout<<"\tWhich company you would like to prefer for MINI Car?\n\n\n";
        minicompany:
        cout<<"\t1. A SUZUKI Company.\n";
        cout<<"\t2. A HONDA Company.\n";
        cout<<"\t3. A TOYOTA Company.\n";
        cout<<"\t4. A NISSAN Company.\n";
        cout<<"\t5. For go back to types.\n\n";
        int mini;
        cout<<"\tPlease select the number:";
        cin>>mini;
        cout<<"\tWe are showing you cars with prices!\n";
        cout<<"\n";
         if(mini==1)
            {
               cout<<"\t1. Suzuki Hustler & its price is PKR 2,900,000.\n";
               cout<<"\t2. Suzuki Every & its price is PKR 1,100,000.\n";
               cout<<"\t3. Suzuki Wagon R & its price is PKR 3,700,000.\n";
               cout<<"\t4. Suzuki Alto & its price is PKR 2,200,000.\n";
               cout<<"\t5. For go back to companies.\n\n";
               int suzuki ;
              cout<<"\tPlease select the car & number :";
              cin>>suzuki;
              cout<<"\n\n";
                 if(suzuki==5)
              {
                goto minicompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }
            }

             if(mini==2)
            {
               cout<<"\t1. Honda N-One & its price is PKR 1,700,000.\n";
               cout<<"\t2. Honda Grace & its price is PKR 3,000,000.\n";
               cout<<"\t3. For go back to companies\n\n";
               int honda ;
              cout<<"\tPlease select the car & number :";
              cin>>honda;
              cout<<"\n\n";
                    if(honda==3)
              {
                goto minicompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

             if(mini==3)
            {
               cout<<"\t1. Toyota IQ 100X & its price is PKR 1,800,000.\n";
               cout<<"\t2. Toyota Aqua & its price is PKR 4,500,000.\n";
               cout<<"\t3. Toyota Pixis R & its price is PKR 1,800,000.\n";
               cout<<"\t4. Toyota Vitz & its price is PKR 4,300,000.\n";
               cout<<"\t5. For go back to companies.\n\n";
               int toyota ;
              cout<<"\tPlease select the car & number :";
              cin>>toyota;
              cout<<"\n\n";
                      if(toyota==5)
              {
                goto minicompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

             if(mini==4)
            {
               cout<<"\t1. Nissan Macco & its price is PKR 1,500,000.\n";
               cout<<"\t2. Nissan Dayz & its price is PKR 2,500,000.\n";
               cout<<"\t3. Nissan Note E-Power & its price is PKR 2,800,000.\n";
                cout<<"\t4. For go back to companies.\n\n";
               int nissan ;
              cout<<"\tPlease select the car & number :";
              cin>>nissan;
              cout<<"\n\n";
                if(nissan==4)
              {
                goto minicompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

             else if(mini==5)
            {
               goto type;
               cout<<"\n\n";
            }
        break;
             case 7:
        cout<<"\tWhich company you would like to prefer for Luxury Car?\n\n\n";
        luxurycompany:
        cout<<"\t1. A BMW Company.\n";
        cout<<"\t2. A MERCEDES Company.\n";
        cout<<"\t3. A TOYOTA Company.\n";
        cout<<"\t4. A AUDI Company.\n";
        cout<<"\t5. A LEXUS Company.\n";
        cout<<"\t6. A RANGE ROVER Company.\n";
        cout<<"\t7. For go back to types.\n\n";
        int luxury;
        cout<<"\tPlease select the number:";
        cin>>luxury;
        cout<<"\tWe are showing you cars with prices!\n";
        cout<<"\n";
         if(luxury==1)
            {
               cout<<"\t1. BMW I7 & its price is PKR 50,000,000.\n";
               cout<<"\t2. BMW IX3 & its price is PKR17,490,000.\n";
               cout<<"\t3. BMW I4 & its price is PKR 15,490,000.\n";
               cout<<"\t4. BMW 7 series & its price is PKR 56,691,000.\n";
               cout<<"\t5. BMW 2 series & its price is PKR 12,612,000.\n";
               cout<<"\t6. For go back to companies.\n\n";
               int bmw ;
              cout<<"\tPlease select the car & number :";
              cin>>bmw;
              cout<<"\n\n";
                    if(bmw==6)
              {
                goto luxurycompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

           else  if(luxury==2)
            {
               cout<<"\t1. Mercedes Benz S ClASS & its price is PKR 65,000,000.\n";
               cout<<"\t2. Mercedes BenzC CLASS & its price is PKR 17,700,000.\n";
               cout<<"\t3. Mercedes Benz E CLASS & its price is PKR  32,000,000.\n";
               cout<<"\t4. Mercedes Benz GLS CLASS & its price is PKR  30,000,000.\n";
               cout<<"\t6. For go back to companies.\n\n";
               int mercedes ;
              cout<<"\tPlease select the car & number :";
              cin>>mercedes;
              cout<<"\n\n";
                         if(mercedes==6)
              {
                goto luxurycompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

           else  if(luxury==3)
            {
               cout<<"\t1. Toyota Land Cruiser V8 & its price is PKR 156,829,000.\n";
               cout<<"\t2. Toyota  Prado & its price is PKR  27,930,000.\n";
               cout<<"\t3. Toyota Fortuner Legender & its price is PKR 20,129,000.\n";
               cout<<"\t4. Toyota  Hilux Revo & its price is PKR 12,409,000.\n";
               cout<<"\t5. For go back to companies.\n\n";
               int toyota ;
              cout<<"\tPlease select the car & number :";
              cin>>toyota;
              cout<<"\n\n";
                if(toyota==5)
              {
                goto luxurycompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

           else if(luxury==4)
            {
               cout<<"\t1. Audi A6 & its price is PKR  27,650,000.\n";
               cout<<"\t2. Audi A5 & its price is PKR 10,500,000.\n";
               cout<<"\t3. Audi A8 & its price is PKR 46,600,000.\n";
               cout<<"\t4. Audi A7 & its price is PKR 34,750,000.\n";
               cout<<"\t5. For go back to companies.\n\n";
               int audi ;
              cout<<"\tPlease select the car & number :";
              cin>>audi;
              cout<<"\n\n";
                      if(audi==5)
              {
                goto luxurycompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

             else if(luxury==5)
            {
               cout<<"\t1. Lexus LX600 & its price is PKR  120,000,000.\n";
               cout<<"\t2. For go back to companies.\n\n";
               int lexus ;
              cout<<"\tPlease select the car & number :";
              cin>>lexus;
              cout<<"\n\n";
                          if(lexus==2)
              {
                goto luxurycompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }
            }
            else if(luxury==6)
            {
               cout<<"\t1. Range Rover VOGUE & its price is PKR 171,000,000.\n";
               cout<<"\t2. For go back to companies.\n\n";
               int rangerover ;
               cout<<"\tPlease select the car & number :";
               cin>>rangerover;
               cout<<"\n\n";
                if(rangerover==2)
              {
                goto luxurycompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

             else if(luxury==7)
            {
               goto type;
               cout<<"\n\n";
            }
        break;

        case 8:
        cout<<"\tWhich company you would like to prefer for electric Car?\n\n\n";
        electriccompany:
        cout<<"\t1. A AUDI Company.\n";
        cout<<"\t2. A MERCEDES Company.\n";
        cout<<"\t3. A BMW Company.\n";
        cout<<"\t4. A TESLA Company.\n";
        cout<<"\t5. A MG Company.\n";
        cout<<"\t6. For go back to types.\n\n";
        int electric;
        cout<<"\tPlease select the number:";
        cin>>electric;
        cout<<"\tWe are showing you cars with prices!\n";
        cout<<"\n";
         if(electric==1)
            {
               cout<<"\t1. Audi e-tron & its price is PKR 38,000,000 .\n";
               cout<<"\t2. Audi e-tron GT & its price is PKR 48,000,000 .\n";
               cout<<"\t3. Audi e-tron S & its price is PKR 19,845,000 .\n";
               cout<<"\t4. Audi QR e-tron & its price is PKR 10,980,000.\n";
               cout<<"\t5. For go back to companies.\n\n";
               int audi ;
              cout<<"\tPlease select the car & number :";
              cin>>audi;
              cout<<"\n\n";
                    if(audi==5)
              {
                goto electriccompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

           else  if(electric==2)
            {
               cout<<"\t1. Mercedes Benz EQE 500 & its price is PKR 24,395,600.\n";
               cout<<"\t2. Mercedes Benz EQE 350 & its price is PKR  22,123,600.\n";
               cout<<"\t3. Mercedes Benz   EQS Sedan & its price is PKR  29,635,400.\n";
               cout<<"\t4. Mercedes Benz  EQS 450 & its price is PKR  29,777,400.\n";
               cout<<"\t5. For go back to companies.\n\n";
               int mercedes ;
              cout<<"\tPlease select the car & number :";
              cin>>mercedes;
              cout<<"\n\n";
                    if(mercedes==5)
              {
                goto electriccompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

           else  if(electric==3)
            {
               cout<<"\t1.BMW I3  & its price is PKR 30,900,000.\n";
               cout<<"\t2. BMW I4 & its price is PKR  20,600,000.\n";
               cout<<"\t3. BMW IX & its price is PKR 48,500,000.\n";
               cout<<"\t4. BMW IX3 & its price is PKR 22,100,000.\n";
               cout<<"\t5. For go back to companies.\n\n";
               int bmw ;
              cout<<"\tPlease select the car & number :";
              cin>>bmw;
              cout<<"\n\n";
                    if(bmw==5)
              {
                goto electriccompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

           else if(electric==4)
            {
               cout<<"\t1.Tesla model 3 & its price is PKR 28,000,000.\n";
               cout<<"\t2.Tesla model S & its price is PKR 29,000,000.\n";
               cout<<"\t3. For go back to companies.\n\n";
               int tesla ;
              cout<<"\tPlease select the car & number :";
              cin>>tesla;
              cout<<"\n\n";
                if(tesla==3)
              {
                goto electriccompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

             else if(electric==5)
            {
               cout<<"\t1. MG ZS EV & its price is PKR  12,000,000.\n";
               cout<<"\t2. MG Marvel R & its price is PKR  10,000,000.\n";
               cout<<"\t3. For go back to companies.\n\n";
               int mg ;
              cout<<"\tPlease select the car & number :";
              cin>>mg;
              cout<<"\n\n";
                       if(mg==3)
              {
                goto electriccompany;
                cout<<"\n\n";
              }
              else
              {
                 cout<<"\tCongratulations!";
              }

            }

             else if(electric==6)
            {
               goto type;
               cout<<"\n\n";
            }
        break;
        }
    }
     cout<<"\n\n\n";
    {
     struct form
    {
     char name[50];
     int cnic[30];
     char add[500];
     char email[250];
     int reg;
     char carname[150];
     char comment[550];
    };
  int main();
{
     form data;
    cout<<"\t\t\t\t\t\t\b*-Please Fill Form!-*\n\n";
    cout<<"\tPlease enter your Name:";
    cin.ignore();
    cin.getline(data.name,50);
    cout<<"\tPlease enter your CNIC number without slash:";
    cin>>data.cnic[100];
    cout<<"\tPlease enter your Registration number:";
    cin.ignore();
    cin>>data.reg;
    cout<<"\tPlease enter your E-mail:";
    cin.ignore();
    cin.getline(data.email,250);
    cout<<"\tPlease enter your Address:";
    cin.ignore();
    cin.getline(data.add,500);
    cout<<"\tPlease enter your selected Car name :";
    cin.getline(data.carname,500);
    cout<<"\tPlease write a small comment on our service:";
    cin.ignore();
    cin.getline(data.comment,550);
}
    }
    cout<<"\n\n\n";
     cout<<"\t*WE HOPE THAT YOU LIKE OUR SERVICES!*\n";
     cout<<"\t*THANK YOU SO MUCH!*";
    return 0;
}
 