#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

class Area {
private:
    int n;

public:
    void city() {
        cout << "RESERVE ROOMS IN THESE CITIES" << endl << endl;
        cout << "\t\t\t\t\t 1) ISLAMABAD " << endl;
        cout << "\t\t\t\t\t 2) LAHORE " << endl;
        cout << "\t\t\t\t\t 3) KARACHI " << endl;
        cout << "\t\t\t\t\t 4) PESHAWAR" << endl;
        cout << "\t\t\t\t\t 5) MULTAN " << endl;
        cout << "Enter the city: ";
        cin >> n;
        cout << endl;
        switch(n) {
            case 1:
                cout << "YOU WANT TO LIVE IN ISLAMABAD " << endl << endl;
                break;
            case 2:
                cout << "YOU WANT TO LIVE IN LAHORE " << endl << endl;
                break;
            case 3:
                cout << "YOU WANT TO LIVE IN KARACHI " << endl << endl;
                break;
            case 4:
                cout << "YOU WANT TO LIVE IN PESHAWAR" << endl << endl;
                break;
            case 5:
                cout << "YOU WANT TO LIVE IN MULTAN" << endl << endl;
                break;
            default:
                cout << "Invalid city selection." << endl;
        }
    }

    friend void hname(Area);
    friend void hdetail(Area&, class Calendar&, int&);
};

class Calendar {
private:
    int year = 2024;
    int startDay = 1;
    string month;
    int date;
    int rooms;
    int k;

public:
    void cal() {
        cout << "\t\t\t\t\t ENTER THE DATE YOU WANT TO RESERVE " << endl << endl;
        cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat" << endl;

        for (int i = 0; i < startDay; ++i) {
            cout << setw(5) << " ";
        }

        for (int day = 1; day <= 31; day++) {
            cout << setw(5) << day;
            if ((day + startDay) % 7 == 0) {
                cout << endl;
            }
        }

        cout << endl << endl;

        cout << "Enter the name of month: ";
        cin >> month;
        cout << endl;
        cout << "Enter the date: ";
        cin >> date;
        cout << endl << endl;
    }

    void people() {
        int n, m;
        cout << "\t\t\t\t\t Enter following details: " << endl << endl;

        cout << "Enter The Adults Number: ";
        cin >> n;
        cout << endl;
        cout << "Enter The Children Number: ";
        cin >> m;
        cout << endl;
        cout << "Enter the Number Of Rooms: ";
        cin >> rooms;
        cout << endl;
        cout << "Enter the number of days you want to stay: ";
        cin >> k;
        cout << endl << endl;
        cout << "\t\t\t" << n << " ADULTS AND " << m << " CHILDREN WANT TO RESERVE " << rooms << " HOTEL ROOM ON " << date << " " << month << " for " << k << " days";
        cout << endl << endl;
    }

    int getRooms() {
        return rooms;
    }

    int getDays() {
        return k;
    }

    string getMonth() {
        return month;
    }

    int getDate() {
        return date;
    }

    friend void hname(Area);
    friend void hdetail(Area&, Calendar&, int&);
};

void hname(Area a) {
    switch(a.n) {
        case 1:
            cout << "1) Hotel Planca\t\tSuperb 9.2" << endl;
            cout << " five star\t\t24,000 Rs per night" << endl;
            cout << " free cancellation\tAvailable " << endl << endl;

            cout << "2) Hotel Sarina\t\tGood 9.1" << endl;
            cout << " three star\t\t18,000 Rs per night" << endl;
            cout << " 2 % cancellation tax\t\tAvailable " << endl << endl;

            cout << "3) Hotel Orchid\t\texcellent 9.4" << endl;
            cout << " seven star\t\t30,000 Rs per night" << endl;
            cout << " free cancellation\tAvailable " << endl << endl;
            break;
        case 2:
            cout << "1) Hotel PC\t\texcellent 9.2" << endl;
            cout << " seven star\t\t35,000 Rs per night" << endl;
            cout << " free cancellation\tAvailable +10 % tax " << endl << endl;

            cout << "2) Hotel River\t\tGood 9.1" << endl;
            cout << " three star\t\t18,000 Rs per night" << endl;
            cout << " 2 % cancellation tax\tAvailable " << endl << endl;

            cout << "3) Hotel Valley\t\tBetter 8.4" << endl;
            cout << " three star\t\t12,000 Rs per night" << endl;
            cout << " free cancellation\tAvailable " << endl << endl;
            break;
        case 3:
            cout << "1) Hotel Cordova\tSuperb 9.2" << endl;
            cout << " five star\t\t22,000 Rs per night" << endl;
            cout << " 5 % cancellation tax\tAvailable " << endl << endl;

            cout << "2) Hotel Lake\t\tGood 8.9" << endl;
            cout << " three star\t\t15,000 Rs per night" << endl;
            cout << " 5 % cancellation tax\tAvailable " << endl << endl;

            cout << "3) Hotel Mehran\t\tBetter 7.9" << endl;
            cout << "Economy class \t\t7,000 Rs per night" << endl;
            cout << "free cancellation\tAvailable " << endl << endl;
            break;
        case 4:
            cout << "1) Hotel View\t\tSuperb 9.1" << endl;
            cout << " five star\t\t20,000 Rs per night" << endl;
            cout << " free cancellation\tAvailable " << endl << endl;

            cout << "2) Hotel Mountain\t\tGood 8.4" << endl;
            cout << " three star\t\t16,000 Rs per night" << endl;
            cout << " 2 % cancellation tax\tAvailable " << endl << endl;

            cout << "3) Hotel Value\t\texcellent 9.4" << endl;
            cout << " seven star\t\t28,000 Rs per night" << endl;
            cout << " free cancellation\tAvailable " << endl << endl;
            break;
        case 5:
            cout << "1) Hotel Clock T\t\tSuperb 9.2" << endl;
            cout << " five star\t\t13,000 Rs per night" << endl;
            cout << " free cancellation\tAvailable " << endl << endl;

            cout << "2) Hotel Basset\t\tGood 9.1" << endl;
            cout << " three star\t\t19,000 Rs per night" << endl;
            cout << " 2 % cancellation tax\t Available " << endl << endl;

            cout << "3) Hotel Air\t\texcellent 9.4" << endl;
            cout << " seven star\t\t 22,000 Rs per night" << endl;
            cout << " free cancellation\tAvailable " << endl << endl;
            break;
        default:
            cout << "Invalid city selection." << endl;
    }
}

void hdetail(Area& a, Calendar& b, int& num) {
    int  floorPref, transportPref;
    string firstName, lastName, email, arrivalTime, cardHolderName,phone,cardNumber, cvc;

    cout << "Select The Hotel Of Your Choice: ";
    cin >> num;
    cout << endl << endl;

    int totalCost = 0;
    switch(a.n) {
        case 1:
            if (num == 1) totalCost = b.getDays() * b.getRooms() * 24000;
            else if (num == 2) totalCost = b.getDays() * b.getRooms() * 18000;
            else if (num == 3) totalCost = b.getDays() * b.getRooms() * 30000;
            break;
        case 2:
            if (num == 1) totalCost = b.getDays() * b.getRooms() * 35000;
            else if (num == 2) totalCost = b.getDays() * b.getRooms() * 18000;
            else if (num == 3) totalCost = b.getDays() * b.getRooms() * 12000;
            break;
        case 3:
            if (num == 1) totalCost = b.getDays() * b.getRooms() * 22000;
            else if (num == 2) totalCost = b.getDays() * b.getRooms() * 15000;
            else if (num == 3) totalCost = b.getDays() * b.getRooms() * 7000;
            break;
        case 4:
            if (num == 1) totalCost = b.getDays() * b.getRooms() * 20000;
            else if (num == 2) totalCost = b.getDays() * b.getRooms() * 16000;
            else if (num == 3) totalCost = b.getDays() * b.getRooms() * 28000;
            break;
        case 5:
            if (num == 1) totalCost = b.getDays() * b.getRooms() * 13000;
            else if (num == 2) totalCost = b.getDays() * b.getRooms() * 19000;
            else if (num == 3) totalCost = b.getDays() * b.getRooms() * 22000;
            break;
        default:
            cout << "Invalid city selection." << endl;
    }

    cout << "Enter your first name: ";
    cin >> firstName;
    cout << endl << endl;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << endl << endl;
    cout << "Enter your email: ";
    cin >> email;
    cout << endl << endl;
    cout << "Enter your phone number (0000-0000000) : ";
    cin >> phone;
    while (phone.length() != 12 || phone[4] != '-') {
    	
            cout << "Invalid Format!" << endl;
            cout << "Please Try Again: ";
            cout << "Enter your phone number (0000-0000000) : ";
            cin >> phone;
        }
    cout << endl << endl;
    cout << "Enter the expected arrival time in integer form only (9,5,3 etc) : ";
    cin >> arrivalTime;
    cout << endl << endl;
    
    cout << "Enter the floor preference: " << endl;
        cout << "1) Top floorand the fare is 6000 Rs extra" << endl;
        cout << "2) Ground floor no extra charges" << endl;
        cin >> floorPref;

        if (floorPref == 1) {
            cout << "You Want To Live On Top Floor " << endl << endl;
            totalCost=totalCost+6000;
            
        }  if (floorPref == 2) {
            cout << "You Want To Live On Ground Floor" << endl << endl;
        } 

        cout << "1) Interested in renting a car and the fare is 5000 Rs extra " << endl;
        cout << "2) Or Use Public Transport there is no extra charges" << endl;
        cin >> transportPref;

        if (transportPref == 1) {
        	
            cout << "You Are Interested in Renting A Car" << endl << endl;
            totalCost=totalCost+5000;
        } 
		 if (transportPref == 2) {
			
            cout << "You Are Interested in Public Transport" << endl << endl;
        } 
        
    cout << "\t\t\t\t\tEnter your card number (0000000000000): ";
    
    cin >> cardNumber;
    while (cardNumber.length() != 13 ) {
            cout << "Invalid Format!" << endl;
            cout << "Please Try Again: "<<endl;
            cout << "\t\t\t\t\tEnter your card number (0000000000000): ";
            cin >> cardNumber;
        }
    cout << endl << endl;
    
    cout << "\t\t\t\t\tEnter card holder name: ";
    cin >> cardHolderName;
    
    cout << endl << endl;
    cout << "\t\t\t\t\tEnter CVC (0000): ";
    cin >> cvc;
    while (cvc.length() != 4 ) {
            cout << "Invalid Format!" << endl;
            cout << "Please Try Again: ";
            cout << "\t\t\t\t\tEnter your cvc number (0000): ";
            cin >> cardNumber;
        }
    cout << endl << endl;

     cout << "The Total Expense Of " << b.getRooms() << " Rooms for  "<<b.k<<" days is " <<totalCost << " Rs " << "Booked by "<<firstName<<" "<<lastName<<" on "<<b.date<<" "<<b.month<<endl;
     
	ofstream outFile("records.txt", ios::app);
    outFile << firstName << " " << lastName << " with email address of " << email << " and phone number is " << phone << " the floor preference was " << floorPref << " with arrival time of " << arrivalTime << " and the transport preference was " << transportPref << " the card holder name was " << cardHolderName << " withe the card number " << cardNumber << " and CVC number is " << cvc << " with total cost of " << totalCost <<" on "<<b.date<<" "<<b.month<< endl;
    outFile.close();
}
	
	void checkRecord() {
    ifstream inFile("records.txt");
    string line;
    string firstName, lastName;
    bool recordFound = false;

    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;

    while (getline(inFile, line)) {
        if (line.find(firstName) != string::npos && line.find(lastName) != string::npos) {
            cout << "Record found: " << line << endl;
            recordFound = true;
            break;
        }
    }

    if (!recordFound) {
        cout << "No record found for " << firstName << " " << lastName << endl;
    }

    inFile.close();
}

int main() {
	
    Area a;
    Calendar b;
    int num,option;
	
	cout << "1) Do you want to Register a new record "<<endl;
	cout<<  "2) Check existing record  "<<endl;
    cin >> option;
    if(option==1){
	
    a.city();
    b.cal();
    b.people();
    hname(a);
    hdetail(a, b, num);
}
	if(option==2){
		checkRecord();
	}
    return 0;
}

