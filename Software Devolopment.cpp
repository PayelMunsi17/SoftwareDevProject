#include <iostream>
#include <string>

using namespace std;

    string regUser;
    int regPass;

void Registration(){

    cout<<"                                          REGISTRATION                                     "<<endl;
    cout << "          -------------------------------------------------------------------------\n" << endl;
    cout << "        REGISTER USER-NAME : ";
    cin >> regUser;
    cout << "\n\n        REGISTER PASSWORD : ";
    cin >> regPass;
}

void login(){
    void Registration();
    system("cls");
    string user;
    int pass;
    cout<<"                                    WELCOME TO NUB HOSPITAL                                     "<<endl;
    cout << "          -------------------------------------------------------------------------\n" << endl;
    cout << "           LOGIN USER-NAME : ";
    cin >> user;
    cout << "\n\n           LOGIN PASSWORD : ";
    cin >> pass;
    system("cls");
    if (user==regUser && pass==regPass)
    {
        cout<<"LOGIN SUCCESSFULLY!!!!\n\n";
    }
    else
    {

        cout << "\n                LOGIN FAILED.....! PLEASE CHECK YOUR PASSWORD.\n\n";

        return login();
    }
}


class HospitalSystem {

public:
    void showMenu() {
        cout << "                                    HOSPITAL SYSTEM MENU                                " << endl;
        cout<< "         -------------------------------------------------------------------------------\n"<< endl;
        cout << "              1. APPOINTMENT\n\n" << endl;
        cout << "              2. EXIT\n\n" << endl;
    }

    void showAppointmentMenu() {
        system ("cls");
        cout << "                                      APPOINTMENT MENU                                  " << endl;
        cout<< "         ------------------------------------------------------------------------------\n\n"<< endl;
        cout << "                1. KIDNEY SPECIALIST\n" << endl;
        cout << "                2. NEUROLOGIST\n" << endl;
        cout << "                3. ORTHOPEDIC\n\n\n" << endl;
    }

    void makeAppointment() {
        int option;
        showAppointmentMenu();
        cout << "\n\n\n\n\n\n\n\n                                                                 ---------------------"<<endl;
        cout << "                                                                 ENTER YOUR OPTION :";
        cin >> option;
        cin.ignore();
        system ("cls");

        switch (option) {
            case 1:
                cout<<"\n\n                                                 KIDNEY SPECIALIST                                  "<<endl;
                cout<< "          -----------------------------------------------------------------------------------------------\n\n"<< endl;
                cout<<"            1.Dr.Maruf Hossain Anon             AVAILABLE=7am-10am             APPOINTMENT CHARGE=1000 Tk\n"<< endl;
                cout<<"\n            2.Dr.Payel Munsi                    AVAILABLE=10am-1pm             APPOINTMENT CHARGE=900 Tk\n"<< endl;
                cout<<"\n            3.Dr.Himel Khan                     AVAILABLE=1pm-3pm              APPOINTMENT CHARGE=800 Tk\n"<< endl;
                cout<<"\n            4.Dr.Emran Hossain                  AVAILABLE=3pm-5pm              APPOINTMENT CHARGE=700 Tk\n"<< endl;
                cout<<"\n            5.Dr.Md.Riad                        AVAILABLE=5pm-7pm              APPOINTMENT CHARGE=600Tk\n"<< endl;
                cout<< "          -----------------------------------------------------------------------------------------------"<< endl;
                break;
            case 2:
                cout<<"\n\n                                                    NEUROLOGIST                                     "<<endl;
                cout<< "          -----------------------------------------------------------------------------------------------\n"<< endl;
                cout<<"            6.Dr.Mamunul Islam Shuvo            AVAILABLE=7am-10am             APPOINTMENT CHARGE=1000 Tk\n"<< endl;
                cout<<"\n            7.Dr.shawon Hossain                 AVAILABLE=10am-1pm             APPOINTMENT CHARGE=900 Tk\n"<< endl;
                cout<<"\n            8.Dr.Rasel                          AVAILABLE=1pm-3pm              APPOINTMENT CHARGE=800 Tk\n"<< endl;
                cout<<"\n            9.Dr.Eyad Ali                       AVAILABLE=3pm-5pm              APPOINTMENT CHARGE=700 Tk\n"<< endl;
                cout<<"\n            10.Dr.Murad                         AVAILABLE=5pm-7pm              APPOINTMENT CHARGE=600 Tk\n"<< endl;
                cout<< "          -----------------------------------------------------------------------------------------------"<< endl;
                break;
            case 3:
                cout<<"\n\n                                                     ORTHOPEDIC                                     "<<endl;
                cout<< "          -----------------------------------------------------------------------------------------------\n"<< endl;
                cout<<"            11.Dr.Rahadul Islam Rifat      AVAILABLE=7am-10am             APPOINTMENT CHARGE=1000 Tk\n"<< endl;
                cout<<"\n            12.Dr.Mahin Rohman             AVAILABLE=10am-1pm             APPOINTMENT CHARGE=900 Tk\n"<< endl;
                cout<<"\n            13.Dr.Alif Sheikh              AVAILABLE=1pm-3pm              APPOINTMENT CHARGE=800 Tk\n"<< endl;
                cout<<"\n            14.Dr.Sayid Khan               AVAILABLE=3pm-5pm              APPOINTMENT CHARGE=700 Tk\n"<< endl;
                cout<<"\n            15.Dr.Siam                     AVAILABLE=5pm-7pm              APPOINTMENT CHARGE=600 Tk\n"<< endl;
                cout<< "          -----------------------------------------------------------------------------------------------"<< endl;
                break;
            default:
                cout<< "Invalid option." << endl;
                makeAppointment();
        }
    }

    void selectDoctor()
    {
        int doctor;
        string name,gender,blood,address;
        int age;

         makeAppointment();
        cout<<"\n\n\n\n\n\n                                                                                         SELECT DOCTOR :";
        cin>>doctor;
        cin.ignore();
        system("cls");

            switch (doctor)
            {
            case 1:
                cout<<"\n                                             PATIENT'S DETAILS                                             "<<endl;
                cout<<"\n           ---------------------------------------------------------------------------------               \n\n"<<endl;
                cout<<"                           PATIENT NAME           : ";
                cin>>name;
                cout<<"\n\n                           PATIENT AGE            : ";
                cin>>age;
                cout<<"\n\n                           PATIENT GENDER         : ";
                cin>>gender;
                cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                cin>>blood;
                cout<<"\n\n                           PATIENT ADDRESS        : ";
                cin>>address;
                system("cls");
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                  ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"             Dr.Maruf Hossain Anon             AVAILABLE=7am-10am             APPOINTMENT CHARGE=1000 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------"<<endl;
                break;
            case 2:
                cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                cout<<"                           PATIENT NAME           : ";
                cin>>name;
                cout<<"\n\n                           PATIENT AGE            : ";
                cin>>age;
                cout<<"\n\n                           PATIENT GENDER         : ";
                cin>>gender;
                cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                cin>>blood;
                cout<<"\n\n                           PATIENT ADDRESS        : ";
                cin>>address;
                system("cls");
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                  ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n            Dr.Payel Munsi                    AVAILABLE=10am-1pm             APPOINTMENT CHARGE=900 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 3:
                cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                cout<<"                           PATIENT NAME           : ";
                cin>>name;
                cout<<"\n\n                           PATIENT AGE            : ";
                cin>>age;
                cout<<"\n\n                           PATIENT GENDER         : ";
                cin>>gender;
                cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                cin>>blood;
                cout<<"\n\n                           PATIENT ADDRESS        : ";
                cin>>address;
                system("cls");
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                  ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n            Dr.Himel Khan                     AVAILABLE=1pm-3pm              APPOINTMENT CHARGE=800 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 4:
                cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                cout<<"                           PATIENT NAME           : ";
                cin>>name;
                cout<<"\n\n                           PATIENT AGE            : ";
                cin>>age;
                cout<<"\n\n                           PATIENT GENDER         : ";
                cin>>gender;
                cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                cin>>blood;
                cout<<"\n\n                           PATIENT ADDRESS        : ";
                cin>>address;
                system("cls");
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                  ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n            Dr.Emran Hossain                  AVAILABLE=3pm-5pm              APPOINTMENT CHARGE=700 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 5:
               cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                cout<<"                           PATIENT NAME           : ";
                cin>>name;
                cout<<"\n\n                           PATIENT AGE            : ";
                cin>>age;
                cout<<"\n\n                           PATIENT GENDER         : ";
                cin>>gender;
                cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                cin>>blood;
                cout<<"\n\n                           PATIENT ADDRESS        : ";
                cin>>address;
                system("cls");
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                  ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n            Dr.Md.Riad                        AVAILABLE=5pm-7pm              APPOINTMENT CHARGE=600Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;

            case 6:
                cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                cout<<"                           PATIENT NAME           : ";
                cin>>name;
                cout<<"\n\n                           PATIENT AGE            : ";
                cin>>age;
                cout<<"\n\n                           PATIENT GENDER         : ";
                cin>>gender;
                cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                cin>>blood;
                cout<<"\n\n                           PATIENT ADDRESS        : ";
                cin>>address;
                system("cls");
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                  ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"             Dr.Mamunul Islam Shuvo            AVAILABLE=7am-10am             APPOINTMENT CHARGE=1000 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 7:
                cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                cout<<"                           PATIENT NAME           : ";
                cin>>name;
                cout<<"\n\n                           PATIENT AGE            : ";
                cin>>age;
                cout<<"\n\n                           PATIENT GENDER         : ";
                cin>>gender;
                cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                cin>>blood;
                cout<<"\n\n                           PATIENT ADDRESS        : ";
                cin>>address;
                system("cls");
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                  ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n            Dr.shawon Hossain                 AVAILABLE=10am-1pm             APPOINTMENT CHARGE=900 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 8:
               cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                cout<<"                           PATIENT NAME           : ";
                cin>>name;
                cout<<"\n\n                           PATIENT AGE            : ";
                cin>>age;
                cout<<"\n\n                           PATIENT GENDER         : ";
                cin>>gender;
                cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                cin>>blood;
                cout<<"\n\n                           PATIENT ADDRESS        : ";
                cin>>address;
                system("cls");
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                  ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n            Dr.Rasel                          AVAILABLE=1pm-3pm              APPOINTMENT CHARGE=800 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 9:
               cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                cout<<"                           PATIENT NAME           : ";
                cin>>name;
                cout<<"\n\n                           PATIENT AGE            : ";
                cin>>age;
                cout<<"\n\n                           PATIENT GENDER         : ";
                cin>>gender;
                cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                cin>>blood;
                cout<<"\n\n                           PATIENT ADDRESS        : ";
                cin>>address;
                system("cls");
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                  ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n            Dr.Eyad Ali                       AVAILABLE=3pm-5pm              APPOINTMENT CHARGE=700 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 10:
              cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                cout<<"                           PATIENT NAME           : ";
                cin>>name;
                cout<<"\n\n                           PATIENT AGE            : ";
                cin>>age;
                cout<<"\n\n                           PATIENT GENDER         : ";
                cin>>gender;
                cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                cin>>blood;
                cout<<"\n\n                           PATIENT ADDRESS        : ";
                cin>>address;
                system("cls");
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                  ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n            Dr.Murad                         AVAILABLE=5pm-7pm              APPOINTMENT CHARGE=600 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 11:
                cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                cout<<"                           PATIENT NAME           : ";
                cin>>name;
                cout<<"\n\n                           PATIENT AGE            : ";
                cin>>age;
                cout<<"\n\n                           PATIENT GENDER         : ";
                cin>>gender;
                cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                cin>>blood;
                cout<<"\n\n                           PATIENT ADDRESS        : ";
                cin>>address;
                system("cls");
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                  ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"               Dr.Rahadul Islam Rifat      AVAILABLE=7am-10am             APPOINTMENT CHARGE=1000 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 12:
                cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                cout<<"                           PATIENT NAME           : ";
                cin>>name;
                cout<<"\n\n                           PATIENT AGE            : ";
                cin>>age;
                cout<<"\n\n                           PATIENT GENDER         : ";
                cin>>gender;
                cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                cin>>blood;
                cout<<"\n\n                           PATIENT ADDRESS        : ";
                cin>>address;
                system("cls");
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                  ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n              Dr.Mahin Rohman             AVAILABLE=10am-1pm             APPOINTMENT CHARGE=900 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 13:
               cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                cout<<"                           PATIENT NAME           : ";
                cin>>name;
                cout<<"\n\n                           PATIENT AGE            : ";
                cin>>age;
                cout<<"\n\n                           PATIENT GENDER         : ";
                cin>>gender;
                cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                cin>>blood;
                cout<<"\n\n                           PATIENT ADDRESS        : ";
                cin>>address;
                system("cls");
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                  ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n            Dr.Alif Sheikh              AVAILABLE=1pm-3pm              APPOINTMENT CHARGE=800 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 14:
                cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                cout<<"                           PATIENT NAME           : ";
                cin>>name;
                cout<<"\n\n                           PATIENT AGE            : ";
                cin>>age;
                cout<<"\n\n                           PATIENT GENDER         : ";
                cin>>gender;
                cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                cin>>blood;
                cout<<"\n\n                           PATIENT ADDRESS        : ";
                cin>>address;
                system("cls");
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                  ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n              Dr.Sayid Khan               AVAILABLE=3pm-5pm              APPOINTMENT CHARGE=700 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 15:
                cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                cout<<"                           PATIENT NAME           : ";
                cin>>name;
                cout<<"\n\n                           PATIENT AGE            : ";
                cin>>age;
                cout<<"\n\n                           PATIENT GENDER         : ";
                cin>>gender;
                cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                cin>>blood;
                cout<<"\n\n                           PATIENT ADDRESS        : ";
                cin>>address;
                system("cls");
                cout<<"\n                                                      PAYMENT                                            "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                cout<<"\n                  ADDRESS       : "<<address<<endl;
                cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                cout<<"\n              Dr.Siam                     AVAILABLE=5pm-7pm              APPOINTMENT CHARGE=600 Tk\n"<< endl;
                cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            }
            if(gender=="male" || gender=="MALE")
            {
                cout<<"\n            ALPHA CODER                                                      THANKS FOR BEING HERE....."<<endl;
                cout<<"            DEPARTMENT OF CSE                                                HAVE A NICE DAY....SIR!!!!\n\n";
            }
            else {
                cout<<"\n            ALPHA CODER                                                      THANKS FOR BEING HERE....."<<endl;
                cout<<"            DEPARTMENT OF CSE                                                HAVE A NICE DAY....MA'AM!!!!\n\n";
            }
        }


    };


int main() {
    Registration ();
    login();
    HospitalSystem hospital;
    int choice;



    do {
        hospital.showMenu();
        cout << "\n\n\n\n\n\n\n\n\n\n\n                                                                 ------------------------"<<endl;
        cout << "                                                                  ENTER YOUR OPTION :";
        cin >> choice;

        switch (choice) {
            case 1:
                system("cls");
                hospital.selectDoctor();
                return 0;

                break;
            case 2:
                cout<< "--------------------------"<< endl;
                cout << "\n\n\nGoodbye!--- Have a Nice Day!!!\n\n\n" << endl;
                cout<< "--------------------------"<< endl;

                break;
            default:
                cout<< "--------------------------"<< endl;
                cout << "\n\n\nInvalid option. Please try again.\n\n\n" << endl;
                cout<< "--------------------------"<< endl;
        }

    } while (choice != 2);

    return 0;
}

