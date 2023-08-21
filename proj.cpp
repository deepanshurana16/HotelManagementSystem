#include<iostream>
using namespace std;
int main(){
    int quant;
    int choice;

    int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchickenroll=0; //Quantity Available

    int Sroom=0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schickenroll=0; //Quantity Sold

    int total_roomprice=0,total_pastaprice=0,total_burgerprice=0,total_noodlesprice=0,total_shakeprice=0,total_chickenrollprice=0; //Total price of items

    cout<<"\n\n\n************************************************************************************  Welcome to Hotel Management System © Deepanshu Rana *****************************************************************************************"<<endl;
    cout<<"\n\n\t\t\t\t Quantity of items we have: ";
    cout<<"\n\n\n Rooms Available: ";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta: ";
    cin>>Qpasta;
    cout<<"\n Quantity of burger: ";
    cin>>Qburger;
    cout<<"\n Quantity of noodles: ";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake: ";
    cin>>Qshake;
    cout<<"\n Quantity of chicken roll: ";
    cin>>Qchickenroll;

    m:
    cout<<"\n\n\t\t\t Please Select from the given menu options";
    cout<<"\n\n\n 1) Rooms";
    cout<<"\n\n 2) Pasta";
    cout<<"\n\n 3) Burger";
    cout<<"\n\n 4) Noodles";
    cout<<"\n\n 5) Shake";
    cout<<"\n\n 6) Chicken Roll";
    cout<<"\n\n 7) Information regarding sales and collection";
    cout<<"\n\n 8) Exit";

    cout<<"\n\n Please enter your choice :  ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"\n Enter the number of rooms you want : ";
        cin>>quant;
        if(Qrooms-Sroom>=quant){
            Sroom=Sroom+quant;
            total_roomprice=total_roomprice+quant*1200;
            cout<<"\n\n\t\t\t"<<quant<<" rooms have been alloted to you.\n\n\n";
            break;
        }
        else{
            cout<<"\n\t\t\t Only "<<Qrooms-Sroom<<" are available!\n\n\n";
            break;
        }
    
    case 2:
        cout<<"\n\n Enter the quantity of pasta you want : ";
        cin>>quant;
        if(Qpasta-Spasta>=quant){
            Spasta=Spasta+Qpasta;
            total_pastaprice=total_pastaprice+quant*250;
            cout<<"\n\n\t\t\t"<<quant<<" pasta's have been ordered for you.\n\n\n";
            break;
        }
        else{
            cout<<"\n\t\t\t Only "<<Qpasta-Spasta<<" are available!\n\n\n";
            break;
        }
      case 3:
        cout<<"\n\n Enter the quantity of burger you want : ";
        cin>>quant;
        if(Qburger-Sburger>=quant){
            Sburger=Sburger+quant;
            total_burgerprice=total_burgerprice+quant*120;
            cout<<"\n\n\t\t\t"<<quant<<" burgers have been ordered for you.\n\n\n";
            break;
        }
        else{
            cout<<"\n\t\t\t Only "<<Qburger-Sburger<<" are available!\n\n\n";
            break;
        }
        case 4:
        cout<<"\n\n Enter the quantity of noodles you want : ";
        cin>>quant;
        if(Qnoodles-Snoodles>=quant){
            Snoodles=Snoodles+quant;
            total_noodlesprice=total_noodlesprice+quant*250;
            cout<<"\n\n\t\t\t"<<quant<<" noodles have been ordered for you.\n\n\n";
            break;
        }
        else{
            cout<<"\n\t\t\t Only "<<Qnoodles-Snoodles<<" are available!\n\n\n";
            break;
        }

        case 5:
        cout<<"\n\n Enter the quantity of shake you want : ";
        cin>>quant;
        if(Qshake-Sshake>=quant){
            Sshake=Sshake+quant;
            total_shakeprice=total_shakeprice+quant*150;
            cout<<"\n\n\t\t\t"<<quant<<" shakes have been ordered for you.\n\n\n";
            break;
        }
        else{
            cout<<"\n\t\t\t Only "<<Qshake-Sshake<<" are available!\n\n\n";
            break;
        }
        case 6:
        cout<<"\n\n Enter the quantity of chickenrolls you want : ";
        cin>>quant;
        if(Qchickenroll-Schickenroll>=quant){
            Schickenroll=Schickenroll+quant;
            total_chickenrollprice=total_chickenrollprice+quant*180;
            cout<<"\n\n\t\t\t"<<quant<<" chicken rolls have been ordered for you.\n\n\n";
            break;
        }
        else{
            cout<<"\n\t\t\t Only "<<Qchickenroll-Schickenroll<<" are available!\n\n\n";
            break;
        }
        case 7:
        cout<<"\n\n\t\t\t\tDetails of sales and collection ";

        cout<<"\n\n\n\n Number of rooms we had : "<<Qrooms;
        cout<<"\n\n Number of rooms we sold : "<<Sroom;
        cout<<"\n\n Remaining rooms : "<<Qrooms-Sroom;
        cout<<"\n\n Total rooms collection for the day : "<<total_roomprice;

        cout<<"\n\n\n\n Quantity of pasta we had : "<<Qpasta;
        cout<<"\n\n Quantity of pasta we sold : "<<Spasta;
        cout<<"\n\n Remaining Quantity : "<<Qpasta-Spasta;
        cout<<"\n\n Total pasta collection for the day : "<<total_pastaprice;

        cout<<"\n\n\n\n Quantity of burger we had : "<<Qburger;
        cout<<"\n\n Quantity of burger we sold : "<<Sburger;
        cout<<"\n\n Remaining Quantity : "<<Qburger-Sburger;
        cout<<"\n\n Total burger collection for the day : "<<total_burgerprice;

        cout<<"\n\n\n\n Quantity of noodles we had : "<<Qnoodles;
        cout<<"\n\n Quantity of noodles we sold : "<<Snoodles;
        cout<<"\n\n Remaining Quantity : "<<Qnoodles-Snoodles;
        cout<<"\n\n Total noodles collection for the day : "<<total_noodlesprice;

        cout<<"\n\n\n\n Quantity of shake we had : "<<Qshake;
        cout<<"\n\n Quantity of shake we sold : "<<Sshake;
        cout<<"\n\n Remaining Quantity : "<<Qshake-Sshake;
        cout<<"\n\n Total shake collection for the day : "<<total_shakeprice;

        cout<<"\n\n\n\n Quantity of chicken-roll we had : "<<Qchickenroll;
        cout<<"\n\n Quantity of chicken-roll we sold : "<<Schickenroll;
        cout<<"\n\n Remaining Quantity : "<<Qchickenroll-Schickenroll;
        cout<<"\n\n Total chicken-roll collection for the day : "<<total_chickenrollprice<<"\n\n\n";

        cout<<"\n\n Total Collection for the day : ₹"<<total_roomprice+total_pastaprice+total_burgerprice+total_noodlesprice+total_shakeprice+total_chickenrollprice<<"/-\n\n"<<endl;

        case 8:
        exit(0);

    default:
    cout<<"\n Please select the numbers mentioned above!";
    }
    goto m;

    return 0;
}