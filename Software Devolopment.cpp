#include <iostream>
#include <string>

using namespace std;

string user;
int pass;

void login(){
    cout<<"                                    WELCOME TO NUB HOSPITAL                                     "<<endl;
    cout << "          -------------------------------------------------------------------------\n" << endl;
    cout << "                 USER-NAME : ";
    cin >> user;
    cout << "\n\n                 PASSWORD : ";
    cin >> pass;
    if (user=="PAYEL" || user=="payel" && pass==526)
    {
        system("cls");
    }
    else
    {
        system("cls");
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
                std::cout<<"\n\n                                                 KIDNEY SPECIALIST                                  "<<endl;
                std::cout<< "          -----------------------------------------------------------------------------------------------\n\n"<< endl;
                std::cout<<"            1.Dr.Maruf Hossain Anon             AVAILABLE=7am-10am             APPOINTMENT CHARGE=1000 Tk\n"<< endl;
                std::cout<<"\n            2.Dr.Payel Munsi                    AVAILABLE=10am-1pm             APPOINTMENT CHARGE=900 Tk\n"<< endl;
                std::cout<<"\n            3.Dr.Himel Khan                     AVAILABLE=1pm-3pm              APPOINTMENT CHARGE=800 Tk\n"<< endl;
                std::cout<<"\n            4.Dr.Emran Hossain                  AVAILABLE=3pm-5pm              APPOINTMENT CHARGE=700 Tk\n"<< endl;
                std::cout<<"\n            5.Dr.Md.Riad                        AVAILABLE=5pm-7pm              APPOINTMENT CHARGE=600Tk\n"<< endl;
                std::cout<< "          -----------------------------------------------------------------------------------------------"<< endl;
                break;
            case 2:
                std::cout<<"\n\n                                                    NEUROLOGIST                                     "<<endl;
                std::cout<< "          -----------------------------------------------------------------------------------------------\n"<< endl;
                std::cout<<"            6.Dr.Mamunul Islam Shuvo            AVAILABLE=7am-10am             APPOINTMENT CHARGE=1000 Tk\n"<< endl;
                std::cout<<"\n            7.Dr.shawon Hossain                 AVAILABLE=10am-1pm             APPOINTMENT CHARGE=900 Tk\n"<< endl;
                std::cout<<"\n            8.Dr.Rasel                          AVAILABLE=1pm-3pm              APPOINTMENT CHARGE=800 Tk\n"<< endl;
                std::cout<<"\n            9.Dr.Eyad Ali                       AVAILABLE=3pm-5pm              APPOINTMENT CHARGE=700 Tk\n"<< endl;
                std::cout<<"\n            10.Dr.Murad                         AVAILABLE=5pm-7pm              APPOINTMENT CHARGE=600 Tk\n"<< endl;
                std::cout<< "          -----------------------------------------------------------------------------------------------"<< endl;
                break;
            case 3:
                std::cout<<"\n\n                                                     ORTHOPEDIC                                     "<<endl;
                std::cout<< "          -----------------------------------------------------------------------------------------------\n"<< endl;
                std::cout<<"            11.NAME=Dr.Rahadul Islam Rifat      AVAILABLE=7am-10am             APPOINTMENT CHARGE=1000 Tk\n"<< endl;
                std::cout<<"\n            12.NAME=Dr.Mahin Rohman             AVAILABLE=10am-1pm             APPOINTMENT CHARGE=900 Tk\n"<< endl;
                std::cout<<"\n            13.NAME=Dr.Alif Sheikh              AVAILABLE=1pm-3pm              APPOINTMENT CHARGE=800 Tk\n"<< endl;
                std::cout<<"\n            14.NAME=Dr.Sayid Khan               AVAILABLE=3pm-5pm              APPOINTMENT CHARGE=700 Tk\n"<< endl;
                std::cout<<"\n            15.NAME=Dr.Siam                     AVAILABLE=5pm-7pm              APPOINTMENT CHARGE=600 Tk\n"<< endl;
                std::cout<< "          -----------------------------------------------------------------------------------------------"<< endl;
                break;
            default:
                std::cout<< "Invalid option." << endl;
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
                std::cout<<"\n                                             PATIENT'S DETAILS                                             "<<endl;
                std::cout<<"\n           ---------------------------------------------------------------------------------               \n\n"<<endl;
                std::cout<<"                           PATIENT NAME           : ";
                std::cin>>name;
                std::cout<<"\n\n                           PATIENT AGE            : ";
                std::cin>>age;
                std::cout<<"\n\n                           PATIENT GENDER         : ";
                std::cin>>gender;
                std::cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                std::cin>>blood;
                std::cout<<"\n\n                           PATIENT ADDRESS        : ";
                std::cin>>address;
                system("cls");
                std::cout<<"\n                                                      PAYMENT                                            "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                std::cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                std::cout<<"\n                  ADDRESS       : "<<address<<endl;
                std::cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"             Dr.Maruf Hossain Anon             AVAILABLE=7am-10am             APPOINTMENT CHARGE=1000 Tk\n"<< endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------"<<endl;
                break;
            case 2:
                std::cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                std::cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                std::cout<<"                           PATIENT NAME           : ";
                std::cin>>name;
                std::cout<<"\n\n                           PATIENT AGE            : ";
                std::cin>>age;
                std::cout<<"\n\n                           PATIENT GENDER         : ";
                std::cin>>gender;
                std::cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                std::cin>>blood;
                std::cout<<"\n\n                           PATIENT ADDRESS        : ";
                std::cin>>address;
                system("cls");
                std::cout<<"\n                                                      PAYMENT                                            "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                std::cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                std::cout<<"\n                  ADDRESS       : "<<address<<endl;
                std::cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"\n            Dr.Payel Munsi                    AVAILABLE=10am-1pm             APPOINTMENT CHARGE=900 Tk\n"<< endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 3:
                std::cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                std::cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                std::cout<<"                           PATIENT NAME           : ";
                std::cin>>name;
                std::cout<<"\n\n                           PATIENT AGE            : ";
                std::cin>>age;
                std::cout<<"\n\n                           PATIENT GENDER         : ";
                std::cin>>gender;
                std::cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                std::cin>>blood;
                std::cout<<"\n\n                           PATIENT ADDRESS        : ";
                std::cin>>address;
                system("cls");
                std::cout<<"\n                                                      PAYMENT                                            "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                std::cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                std::cout<<"\n                  ADDRESS       : "<<address<<endl;
                std::cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"\n            Dr.Himel Khan                     AVAILABLE=1pm-3pm              APPOINTMENT CHARGE=800 Tk\n"<< endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 4:
                std::cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                std::cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                std::cout<<"                           PATIENT NAME           : ";
                std::cin>>name;
                std::cout<<"\n\n                           PATIENT AGE            : ";
                std::cin>>age;
                std::cout<<"\n\n                           PATIENT GENDER         : ";
                std::cin>>gender;
                std::cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                std::cin>>blood;
                std::cout<<"\n\n                           PATIENT ADDRESS        : ";
                std::cin>>address;
                system("cls");
                std::cout<<"\n                                                      PAYMENT                                            "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                std::cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                std::cout<<"\n                  ADDRESS       : "<<address<<endl;
                std::cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"\n            Dr.Emran Hossain                  AVAILABLE=3pm-5pm              APPOINTMENT CHARGE=700 Tk\n"<< endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 5:
               std::cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                std::cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                std::cout<<"                           PATIENT NAME           : ";
                std::cin>>name;
                std::cout<<"\n\n                           PATIENT AGE            : ";
                std::cin>>age;
                std::cout<<"\n\n                           PATIENT GENDER         : ";
                std::cin>>gender;
                std::cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                std::cin>>blood;
                std::cout<<"\n\n                           PATIENT ADDRESS        : ";
                std::cin>>address;
                system("cls");
                std::cout<<"\n                                                      PAYMENT                                            "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                std::cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                std::cout<<"\n                  ADDRESS       : "<<address<<endl;
                std::cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"\n            Dr.Md.Riad                        AVAILABLE=5pm-7pm              APPOINTMENT CHARGE=600Tk\n"<< endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;

            case 6:
                std::cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                std::cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                std::cout<<"                           PATIENT NAME           : ";
                std::cin>>name;
                std::cout<<"\n\n                           PATIENT AGE            : ";
                std::cin>>age;
                std::cout<<"\n\n                           PATIENT GENDER         : ";
                std::cin>>gender;
                std::cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                std::cin>>blood;
                std::cout<<"\n\n                           PATIENT ADDRESS        : ";
                std::cin>>address;
                system("cls");
                std::cout<<"\n                                                      PAYMENT                                            "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                std::cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                std::cout<<"\n                  ADDRESS       : "<<address<<endl;
                std::cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"             Dr.Mamunul Islam Shuvo            AVAILABLE=7am-10am             APPOINTMENT CHARGE=1000 Tk\n"<< endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 7:
                std::cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                std::cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                std::cout<<"                           PATIENT NAME           : ";
                std::cin>>name;
                std::cout<<"\n\n                           PATIENT AGE            : ";
                std::cin>>age;
                std::cout<<"\n\n                           PATIENT GENDER         : ";
                std::cin>>gender;
                std::cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                std::cin>>blood;
                std::cout<<"\n\n                           PATIENT ADDRESS        : ";
                std::cin>>address;
                system("cls");
                std::cout<<"\n                                                      PAYMENT                                            "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                std::cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                std::cout<<"\n                  ADDRESS       : "<<address<<endl;
                std::cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"\n            Dr.shawon Hossain                 AVAILABLE=10am-1pm             APPOINTMENT CHARGE=900 Tk\n"<< endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 8:
               std::cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                std::cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                std::cout<<"                           PATIENT NAME           : ";
                std::cin>>name;
                std::cout<<"\n\n                           PATIENT AGE            : ";
                std::cin>>age;
                std::cout<<"\n\n                           PATIENT GENDER         : ";
                std::cin>>gender;
                std::cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                std::cin>>blood;
                std::cout<<"\n\n                           PATIENT ADDRESS        : ";
                std::cin>>address;
                system("cls");
                std::cout<<"\n                                                      PAYMENT                                            "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                std::cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                std::cout<<"\n                  ADDRESS       : "<<address<<endl;
                std::cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"\n            Dr.Rasel                          AVAILABLE=1pm-3pm              APPOINTMENT CHARGE=800 Tk\n"<< endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 9:
               std::cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                std::cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                std::cout<<"                           PATIENT NAME           : ";
                std::cin>>name;
                std::cout<<"\n\n                           PATIENT AGE            : ";
                std::cin>>age;
                std::cout<<"\n\n                           PATIENT GENDER         : ";
                std::cin>>gender;
                std::cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                std::cin>>blood;
                std::cout<<"\n\n                           PATIENT ADDRESS        : ";
                std::cin>>address;
                system("cls");
                std::cout<<"\n                                                      PAYMENT                                            "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                std::cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                std::cout<<"\n                  ADDRESS       : "<<address<<endl;
                std::cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"\n            Dr.Eyad Ali                       AVAILABLE=3pm-5pm              APPOINTMENT CHARGE=700 Tk\n"<< endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 10:
              std::cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                std::cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                std::cout<<"                           PATIENT NAME           : ";
                std::cin>>name;
                std::cout<<"\n\n                           PATIENT AGE            : ";
                std::cin>>age;
                std::cout<<"\n\n                           PATIENT GENDER         : ";
                std::cin>>gender;
                std::cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                std::cin>>blood;
                std::cout<<"\n\n                           PATIENT ADDRESS        : ";
                std::cin>>address;
                system("cls");
                std::cout<<"\n                                                      PAYMENT                                            "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                std::cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                std::cout<<"\n                  ADDRESS       : "<<address<<endl;
                std::cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"\n            Dr.Murad                         AVAILABLE=5pm-7pm              APPOINTMENT CHARGE=600 Tk\n"<< endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 11:
                std::cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                std::cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                std::cout<<"                           PATIENT NAME           : ";
                std::cin>>name;
                std::cout<<"\n\n                           PATIENT AGE            : ";
                std::cin>>age;
                std::cout<<"\n\n                           PATIENT GENDER         : ";
                std::cin>>gender;
                std::cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                std::cin>>blood;
                std::cout<<"\n\n                           PATIENT ADDRESS        : ";
                std::cin>>address;
                system("cls");
                std::cout<<"\n                                                      PAYMENT                                            "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                std::cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                std::cout<<"\n                  ADDRESS       : "<<address<<endl;
                std::cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"               Dr.Rahadul Islam Rifat      AVAILABLE=7am-10am             APPOINTMENT CHARGE=1000 Tk\n"<< endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 12:
                std::cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                std::cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                std::cout<<"                           PATIENT NAME           : ";
                std::cin>>name;
                std::cout<<"\n\n                           PATIENT AGE            : ";
                std::cin>>age;
                std::cout<<"\n\n                           PATIENT GENDER         : ";
                std::cin>>gender;
                std::cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                std::cin>>blood;
                std::cout<<"\n\n                           PATIENT ADDRESS        : ";
                std::cin>>address;
                system("cls");
                std::cout<<"\n                                                      PAYMENT                                            "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                std::cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                std::cout<<"\n                  ADDRESS       : "<<address<<endl;
                std::cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"\n              Dr.Mahin Rohman             AVAILABLE=10am-1pm             APPOINTMENT CHARGE=900 Tk\n"<< endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 13:
               std::cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                std::cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                std::cout<<"                           PATIENT NAME           : ";
                std::cin>>name;
                std::cout<<"\n\n                           PATIENT AGE            : ";
                std::cin>>age;
                std::cout<<"\n\n                           PATIENT GENDER         : ";
                std::cin>>gender;
                std::cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                std::cin>>blood;
                std::cout<<"\n\n                           PATIENT ADDRESS        : ";
                std::cin>>address;
                system("cls");
                std::cout<<"\n                                                      PAYMENT                                            "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                std::cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                std::cout<<"\n                  ADDRESS       : "<<address<<endl;
                std::cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"\n            Dr.Alif Sheikh              AVAILABLE=1pm-3pm              APPOINTMENT CHARGE=800 Tk\n"<< endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 14:
                std::cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                std::cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                std::cout<<"                           PATIENT NAME           : ";
                std::cin>>name;
                std::cout<<"\n\n                           PATIENT AGE            : ";
                std::cin>>age;
                std::cout<<"\n\n                           PATIENT GENDER         : ";
                std::cin>>gender;
                std::cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                std::cin>>blood;
                std::cout<<"\n\n                           PATIENT ADDRESS        : ";
                std::cin>>address;
                system("cls");
                std::cout<<"\n                                                      PAYMENT                                            "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                std::cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                std::cout<<"\n                  ADDRESS       : "<<address<<endl;
                std::cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"\n              Dr.Sayid Khan               AVAILABLE=3pm-5pm              APPOINTMENT CHARGE=700 Tk\n"<< endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                break;
            case 15:
                std::cout<<"                                             PATIENT'S DETAILS                                             "<<endl;
                std::cout<<"           ---------------------------------------------------------------------------------               \n\n"<<endl;
                std::cout<<"                           PATIENT NAME           : ";
                std::cin>>name;
                std::cout<<"\n\n                           PATIENT AGE            : ";
                std::cin>>age;
                std::cout<<"\n\n                           PATIENT GENDER         : ";
                std::cin>>gender;
                std::cout<<"\n\n                           PATIENT BLOOD GRP      : ";
                std::cin>>blood;
                std::cout<<"\n\n                           PATIENT ADDRESS        : ";
                std::cin>>address;
                system("cls");
                std::cout<<"\n                                                      PAYMENT                                            "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"                   NAME          : "<<name<<"\n\n                   AGE           : "<<age<<endl;
                std::cout<<"\n                   GENDER        : "<<gender<<"\n\n                   BLOOD         : "<<blood<<endl;
                std::cout<<"\n                  ADDRESS       : "<<address<<endl;
                std::cout<<"\n\n                                                  DOCTOR'S DETAILS                                          "<<endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
                std::cout<<"\n              Dr.Siam                     AVAILABLE=5pm-7pm              APPOINTMENT CHARGE=600 Tk\n"<< endl;
                std::cout<<"           -----------------------------------------------------------------------------------------------\n"<<endl;
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
    login();
    HospitalSystem hospital;
    int choice;



    do {
        hospital.showMenu();
        cout << "\n\n\n\n\n\n\n\n\n\n\n                                                                 ------------------------"<<endl;
        cout << "                                                                  ENTER YOUR OPTION :";
        cin >> choice;
        cin.ignore();  // Clear the input buffer

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


