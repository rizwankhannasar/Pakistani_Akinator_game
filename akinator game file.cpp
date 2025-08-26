#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    virtual void setdata() = 0;  
    virtual void display() = 0;  
};

class Cricketer : public Person {
    string cric, hardhit;
    int age;
    string cond, left, ans;
    string married, hav, fast, spin;
    string politics;
    string nickname, cap, bat, wicketkeeper;

public:
    void setdata() {
        cout << "Answer the following questions (yes/no)." << endl;
        cout << "Q.1. Is your character alive? ";
        cin >> cric;
        cout << "Q.2. Is your character retired? ";
        cin >> cond;
        cout << "Q.3. What is the age of your character? ";
        cin >> age;
        cout << "Q.4. Is your character married? ";
        cin >> married;
        cout << "Q.5. Was/is your character the captain of the team? ";
        cin >> cap;
        cout << "Q.6. Is your character a batsman? ";
        cin >> bat;
        cout << "Q.7. Is your character a fast bowler? ";
        cin >> fast;
        cout << "Q.8. Is your character a spinner? ";
        cin >> spin;
        cout << "Q.9. Is your character a leader of a nation? ";
        cin >> politics;
        cout << "Q.10. Is your character's nickname 'Boom Boom'? ";
        cin >> nickname;
        cout << "Q.11. Does your character have a heavy body? ";
        cin >> hav;
        cout << "Q.12. Is your character a wicketkeeper? ";
        cin >> wicketkeeper;
        cout << "Q.13. Is your character a hard hitter? ";
        cin >> hardhit;
        cout << "Q.14. Is your character a left-handed batsman? ";
        cin >> left;
        cout << "-------***-------------" << endl;
    }

    void display() {
        if (cric == "yes" && married == "yes" && cond == "yes" && politics == "yes") {
            cout << "Your character is Imran Khan. Am I right? ";
            cin >> ans;
        }
        else if (cric == "yes" && married == "yes" && nickname == "yes") {
            cout << "Your character is BOOM BOOM Afridi. Am I right? ";
            cin >> ans;
        }
        else if (married == "no" && bat == "yes" && cap == "yes") {
            cout << "Your character is Babar Azam. Am I right? ";
            cin >> ans;
        }
        else if (married == "yes" && bat == "yes" && cap == "yes" && cond == "no") {
            cout << "Your character is Sarfaraz Ahmed. Am I right? ";
            cin >> ans;
        }
        else if (married == "yes" && cond == "yes" && bat == "yes" && cap == "yes" && hav == "yes") {
            cout << "Your character is Inzamam-ul-Haq. Am I right? ";
            cin >> ans;
        }
        else if (married == "yes" && bat == "yes" && wicketkeeper == "yes") {
            cout << "Your character is Mohammad Rizwan. Am I right? ";
            cin >> ans;
        }
        else if (married == "yes" && bat == "yes" && cap == "yes" && cond == "yes") {
            cout << "Your character is Mohammad Hafeez. Am I right? ";
            cin >> ans;
        }
        else if (married == "yes" && cond == "yes" && bat == "yes" && wicketkeeper == "yes") {
            cout << "Your character is Kamran Akmal. Am I right? ";
            cin >> ans;
        }
        else if (married == "yes" && bat == "no" && fast == "yes" && cap == "yes") {
            cout << "Your character is Shaheen Shah Afridi. Am I right? ";
            cin >> ans;
        }
        else if (married == "yes" && bat == "no" && fast == "yes" && cap == "no" && age <= 40 && left == "yes") {
            cout << "Your character is Muhammad Amir. Am I right? ";
            cin >> ans;
        }
        else if (married == "no" && bat == "no" && fast == "yes" && age < 25) {
            cout << "Your character is Naseem Shah. Am I right? ";
            cin >> ans;
        }
        else if (married == "yes" && bat == "yes" && spin == "yes") {
            cout << "Your character is Shadab Khan. Am I right? ";
            cin >> ans;
        }
        else if (married == "no" && age <= 21 && bat == "yes" && left == "yes") {
            cout << "Your character is Saim Ayoub. Am I right? ";
            cin >> ans;
        }
        else if (cond == "no" && age > 40 && age < 50 && bat == "yes" && married == "yes" && spin == "yes") {
            cout << "Your character is Shoaib Malik. Am I right? ";
            cin >> ans;
        }
        else if (cond == "no" && hardhit == "yes" && cap == "no" && bat == "yes" && married == "yes") {
            cout << "Your character is Fakhar Zaman. Am I right? ";
            cin >> ans;
        }
        else if (cond == "no" && age > 30 && age < 50 && bat == "yes" && married == "yes" && hardhit == "yes") {
            cout << "Your character is Iftikhar Ahmed. Am I right? ";
            cin >> ans;
        }
        else if (cond == "yes" && age > 50 && fast == "yes" && married == "yes") {
            cout << "Your character is Shoaib Akhtar. Am I right? ";
            cin >> ans;
        }
        else if (hardhit == "yes" && wicketkeeper == "yes" && hav == "yes") {
            cout << "Your character is Azam Khan. Am I right? ";
            cin >> ans;
        }
        else if (hardhit == "yes" && wicketkeeper == "yes" && hav == "no") {
            cout << "Your character is Muhammad Haris. Am I right? ";
            cin >> ans;
        }
        else {
            cout << "OOPS! No crickter found." << endl;
            ans = "no";  
        }
        if (ans == "yes") {
            cout << "Yay! I guessed it right." << endl;
        }
        else {
            cout << "Oh no! I'll get it next time." << endl;
        }
        cout << "-------***-------------\n";
    }
};

class NationalHero : public Person {
    string alive, poet, lawyer, education, ans;
    string motherPakistan, founderPakistan, easternPoet, edhi, atomicFather, party;

public:
    void setdata() override {
        cout << "Answer the following questions (yes/no)." << endl;
        cout << "Q.1. Is your national hero alive? ";
        cin >> alive;
        cout << "Q.2. Was/is your national hero a poet? ";
        cin >> poet;
        cout << "Q.3. Was/is your national hero a lawyer? ";
        cin >> lawyer;
        cout << "Q.4. Was/is your national hero related to education? ";
        cin >> education;
        cout << "Q.5. Is your national hero known as '(Māder-e-Pakistan)' (Mother of Pakistan)? ";
        cin >> motherPakistan;
        cout << "Q.6. Is your national hero the founder of Pakistan? ";
        cin >> founderPakistan;
        cout << "Q.7. Is your national hero known as the 'Shaire Mashriq' (Poet of the East)? ";
        cin >> easternPoet;
        cout << "Q.8. Did your national hero serve for the poor? ";
        cin >> edhi;
        cout << "Q.9. Is your national hero known as the father of atomic power in Pakistan? ";
        cin >> atomicFather;
        cout << "Q.10. Did your national hero belong to a political party? ";
        cin >> party;
        cout << "-------***-------------" << endl;
    }

    void display() {  
        if (alive == "no" && poet == "yes" && lawyer == "no" && education == "yes" && easternPoet == "yes") {
            cout << "Your national hero is Allama Iqbal. Am I right? ";
            cin >> ans;
        }
        else if (alive == "no" && poet == "no" && lawyer == "yes" && education == "yes" && founderPakistan == "yes") {
            cout << "Your national hero is Quaid-e-Azam Muhammad Ali Jinnah. Am I right? ";
            cin >> ans;
        }
        else if (alive == "no" && poet == "no" && lawyer == "yes" && education == "no") {
            cout << "Your national hero is Liaquat Ali Khan. Am I right? ";
            cin >> ans;
        }
        else if (alive == "no" && poet == "no" && lawyer == "no" && education == "yes" && edhi == "yes") {
            cout << "Your national hero is Abdul Sattar Edhi. Am I right? ";
            cin >> ans;
        }
        else if (alive == "no" && poet == "no" && lawyer == "no" && education == "yes" && atomicFather == "yes") {
            cout << "Your national hero is Dr. Abdul Qadeer Khan. Am I right? ";
            cin >> ans;
        }
        else {
            cout << "OOPS! No national hero found." << endl;
            ans = "no";  
        }
        if (ans == "yes") {
            cout << "Yay! I guessed it right." << endl;
        }
        else {
            cout << "Oh no! I'll get it next time." << endl;
        }
        cout << "-------***-------------\n";
    }
};

class Politician :public Person {
    string alive, poloff, married, pm, memassemb, party, leader, minister, speeches, jail, law, ans, socwork, position;
    int age;

public:
    void setdata() {  
        cout << "Answer the following questions (yes/no)." << endl;
        cout << "Q.1. Is your character alive? ";
        cin >> alive;
        cout << "Q.2. Is your character currently holding a political office? ";
        cin >> poloff;
        cout << "Q.3. What is/was the age of your character? ";
        cin >> age;
        cout << "Q.4. Is/was your character married? ";
        cin >> married;
        cout << "Q.5. Has/had your character the Prime Minister of Pakistan? ";
        cin >> pm;
        cout << "Q.6. Is/was your character a member of the National Assembly? ";
        cin >> memassemb;
        cout << "Q.7. Does/did your character belong to a political party? ";
        cin >> party;
        cout << "Q.8. Is/was your character the leader of a political party? ";
        cin >> leader;
        cout << "Q.9. Has/had your character ever held a ministerial position? ";
        cin >> minister;
        cout << "Q.10. Is/was your character known for their speeches? ";
        cin >> speeches;
        cout << "Q.11. Has/had your character ever been jailed? ";
        cin >> jail;
        cout << "Q.12. Does/did your character have a law degree? ";
        cin >> law;
        cout << "Q.13. Is/was your character known for their social work? ";
        cin >> socwork;
        cout << "Q.14. Has/did your character ever held a position in the military? ";
        cin >> position;
        cout << "-------***-------------" << endl;
    }

    void display() {  
        if (alive == "yes" && married == "yes" && pm == "yes") {
            cout << "Your character is Imran Khan." << endl;
        }
        else if (alive == "yes" && married == "yes" && leader == "yes" && jail == "yes") {
            cout << "Your character is Nawaz Sharif." << endl;
        }
        else if (alive == "no" && married == "yes" && leader == "yes" && jail == "yes") {
            cout << "Your character is Zulfikar Ali Bhutto." << endl;
        }
        else if (alive == "no" && married == "yes" && leader == "yes") {
            cout << "Your character is Benazir Bhutto." << endl;
        }
        else if (alive == "yes" && married == "yes" && leader == "yes") {
            cout << "Your character is Asif Ali Zardari." << endl;
        }
        else if (alive == "yes" && married == "yes" && poloff == "yes") {
            cout << "Your character is Arif Alvi." << endl;
        }
        else if (alive == "yes" && married == "yes" && minister == "yes") {
            cout << "Your character is Shah Mehmood Qureshi." << endl;
        }
        else if (alive == "no" && married == "yes" && position == "yes") {
            cout << "Your character is Pervez Musharraf." << endl;
        }
        else if (alive == "no" && position == "yes") {
            cout << "Your character is Zia-ul-Haq." << endl;
        }
        else {
            cout << "Character not found." << endl;
            ans = "no";  
        }

        cout << "Am I right? ";
        cin >> ans;
        if (ans == "yes") {
            cout << "Yay! I guessed it right." << endl;
        }
        else {
            cout << "Oh no! I'll get it next time." << endl;
        }
        cout << "-------***-------------" << endl;
    }
};

class PrimeMinister :public Person {
private:
    int tenure, age, termNo;
    string province, alive, reasForLea, party;
    string scandal, gender, partynarrative, polBackground;
    string ans;  

public:
    void setdata() {  
        cout << "Answer the following questions in giving formate." << endl;
        cout << "Q.1. Is your Prime Minister alive now (yes/no)? ";
        cin >> alive;
        cout << "Q.2. He/she belongs to which province(punjab,sindh,KPK or balochistan, or bangal)? ";
        cin >> province;
        cout << "Q.3.what is gender of her/him(male or female)? ";
        cin >> gender;
        cout << "Q.4. Is your PM has political family background?(yes/no) ";
        cin >> polBackground;
        cout << "Q.5. Was your Prime Minister involved in a major scandal(corruption allegations,no)? ";
        cin >> scandal;
        cout << "Q.6. Why PM leave their seats(assassinated,resingned,still in office or other)? ";
        cin >> reasForLea;

        cout << "Q.7. How many time he/she became PM(1,2,3)? ";
        cin >> termNo;
        cout << "Q.8.What was age at the time when he/she was became PM (30,40,50,60,70)? ";
        cin >> age;
        cout << "Q.9. For how much time he/she remain in their seat( 1,2,3,4 years) ?";
        cin >> tenure;
        cout << "Q.10. What was party narrative of your PM(militry rule, rooti,kapra aur mkan, education and progress, anti corruption or other ? ";
        cin >> partynarrative;
        cout << "Q.11. He/she belongs to which party (pti, muslim leauge, ppp, or other)? ";
        cin >> party;

        cout << "-------***-------------" << endl;
    }

    void display() {  
        if (alive == "no" && province == "punjab" && gender == "male" && polBackground == "no" &&
            scandal == "no" && reasForLea == "assassinated" && termNo == 1 && age == 40 && tenure == 4 &&
            partynarrative == "education and progress" && party == "muslim leauge") {
            cout << "Your Prime Minister is Liaquat Ali Khan." << endl;
        }
        else if (alive == "no" && province == "bengal" && gender == "male" && polBackground == "no" &&
            scandal == "no" && reasForLea == "other" && termNo == 1 && age == 50 && tenure == 1 &&
            partynarrative == "education and progress" && party == "muslim leauge") {
            cout << "Your Prime Minister is Khawaja Nazimuddin." << endl;
        }
        else if (alive == "no" && province == "bengal" && gender == "male" && polBackground == "no" &&
            scandal == "no" && reasForLea == "yes" && termNo == 1 && age == 40 && tenure == 1 &&
            partynarrative == "education and progress" && party == "muslim leauge") {
            cout << "Your Prime Minister is Muhammad Ali Bogra." << endl;
        }
        else if (alive == "no" && province == "punjab" && gender == "male" && polBackground == "no" &&
            scandal == "no" && reasForLea == "resinged" && termNo == 1 && age == 50 && tenure == 1 &&
            partynarrative == "education and progress" && party == "muslim leauge") {
            cout << "Your Prime Minister is Chaudhry Muhammad Ali." << endl;
        }
        else if (alive == "no" && province == "bengal" && gender == "male" && polBackground == "no" &&
            scandal == "no" && reasForLea == "resingned" && termNo == 1 && age == 50 && tenure == 1 &&
            partynarrative == "education and progress" && party == "muslim leauge") {
            cout << "Your Prime Minister is Huseyn Shaheed Suhrawardy." << endl;
        }
        else if (alive == "no" && province == "sindh" && gender == "male" && polBackground == "no" &&
            scandal == "no" && reasForLea == "resingned" && termNo == 1 && age == 50 && tenure == 1 &&
            partynarrative == "education and progress" && party == "muslim leauge") {
            cout << "Your Prime Minister is Ibrahim Ismail Chundrigar." << endl;
        }
        else if (alive == "no" && province == "punjab" && gender == "male" && polBackground == "no" &&
            scandal == "yes" && reasForLea == "yes" && termNo == 1 && age == 50 && tenure == 1 &&
            partynarrative == "other" && party == "other") {
            cout << "Your Prime Minister is Feroz Khan Noon." << endl;
        }
        else if (alive == "no" && province == "punjab" && gender == "male" && polBackground == "no" &&
            scandal == "no" && reasForLea == "other" && termNo == 1 && age == 50 && tenure == 4 &&
            partynarrative == "other" && party == "other") {
            cout << "Your Prime Minister is Ayub Khan." << endl;
        }
        else if (alive == "no" && province == "bengal" && gender == "male" && polBackground == "no" &&
            scandal == "no" && reasForLea == "resinged" && termNo == 1 && age == 70 && tenure == 1 &&
            partynarrative == "education and progress" && party == "muslim leauge") {
            cout << "Your Prime Minister is Nurul Amin." << endl;
        }
        else if (alive == "no" && province == "sindh" && gender == "male" && polBackground == "no" &&
            scandal == "no" && reasForLea == "assassinated" && termNo == 1 && age == 40 && tenure == 4 &&
            partynarrative == "rooti,kapra aur mkan" && party == "ppp") {
            cout << "Your Prime Minister is Zulfikar Ali Bhutto ." << endl;
        }
        else if (alive == "no" && province == "sindh" && gender == "male" && polBackground == "no" &&
            scandal == "no" && reasForLea == "removed" && termNo == 1 && age == 40 && tenure == 4 &&
            partynarrative == "education and progress" && party == "muslim leauge") {
            cout << "Your Prime Minister is Muhammad Khan Junejo." << endl;
        }
        else if (alive == "no" && province == "sindh" && gender == "female" && polBackground == "yes" &&
            scandal == "no" && reasForLea == "assassinated" && termNo == 2 && age == 30 && tenure == 5 &&
            partynarrative == "rooti,kapra aur mkan" && party == "ppp") {
            cout << "Your Prime Minister is Benazir Bhutto." << endl;
        }
        else if (alive == "no" && province == "punjab" && gender == "male" && polBackground == "no" &&
            scandal == "yes" && reasForLea == "yes" && termNo == 1 && age == 60 && tenure == 2 &&
            partynarrative == "other" && party == "muslim leage(Q)") {
            cout << "Your Prime Minister is Zafarullah Khan Jamali." << endl;
        }
        else if (alive == "yes" && province == "punjab" && gender == "male" && polBackground == "no" &&
            scandal == "no" && reasForLea == "resingned" && termNo == 1 && age == 58 && tenure == 1 &&
            partynarrative == "other" && party == "muslim leage(Q)") {
            cout << "Your Prime Minister is Chaudhry Shujaat Hussain." << endl;
        }
        else if (alive == "no" && province == "sindh" && gender == "male" && polBackground == "no" &&
            scandal == "no" && reasForLea == "resingned" && termNo == 1 && age == 50 && tenure == 1 &&
            partynarrative == "other" && party == "muslim leage(Q)") {
            cout << "Your Prime Minister is Shaukat Aziz." << endl;
        }
        else if (alive == "yes" && province == "punjab" && gender == "male" && polBackground == "no" &&
            scandal == "other" && reasForLea == "removed" && termNo == 1 && age == 50 && tenure == 1 &&
            partynarrative == "rooti,kapra aur mkan" && party == "ppp") {
            cout << "Your Prime Minister is Yousaf Raza Gillani ." << endl;
        }
        else if (alive == "yes" && province == "punjab" && gender == "male" && polBackground == "no" &&
            scandal == "no" && reasForLea == "other" && termNo == 2 && age == 50 && tenure == 1 &&
            partynarrative == "rooti,kapra aur mkan" && party == "ppp") {
            cout << "Your Prime Minister is Raja Pervaiz Ashraf ." << endl;
        }
        else if (alive == "yes" && province == "punjab" && gender == "male" && polBackground == "no" &&
            scandal == "corruption alligations" && reasForLea == "other" && termNo == 3 && age == 70 &&
            tenure == 9 && partynarrative == "education and progress" && party == "muslim leauge") {
            cout << "Your Prime Minister is Nawaz Sharif ." << endl;
        }
        else if (alive == "yes" && province == "punjab" && gender == "male" && polBackground == "no" &&
            scandal == "no" && reasForLea == "other" && termNo == 1 && age == 50 && tenure == 1 &&
            partynarrative == "education and progress" && party == "muslim leauge") {
            cout << "Your Prime Minister is Shahid Khaqan Abbasi." << endl;
        }
        else if (alive == "yes" && province == "punjab" && gender == "male" && polBackground == "no" &&
            scandal == "no" && reasForLea == "other" && termNo == 1 && age == 70 && tenure == 4 &&
            partynarrative == "anti corruption" && party == "pti") {
            cout << "Your Prime Minister is Imran Khan ." << endl;
        }
        else if (alive == "yes" && province == "punjab" && gender == "male" && polBackground == "yes" &&
            scandal == "corruption alligations" && reasForLea == "current" && termNo == 2 && age == 60 &&
            tenure == 2 && partynarrative == "education and progress" && party == "muslim leauge") {
            cout << "Your Prime Minister is Shehbaz Sharif." << endl;
        }
        else {
            cout << "I couldn't guess the PM. Maybe you were thinking of someone else." << endl;
            ans = "no";  
        }

        cout << "Am I right? (yes/no): ";
         
        cin >> ans;
        if (ans == "yes") {
            cout << "Yay! I guessed it right." << endl;
        }
        else {
            cout << "Oh no! I'll get it next time." << endl;
        }
        cout << "-------***-------------" << endl;
    }
};

int main() {
    int choice;
    Person* person;
    
    string name;
    cout << "\t\t\t-------------------------\" Welcome to Akinator\"------------------------" << endl;
    cout << "Enter player Name to play game:";
    cin >> name;
    
    while (true) {
        cout << "Select the character type:\n";
        cout << "1. Cricketer\n";
        cout << "2. National Hero\n";
        cout << "3. Politician\n";
        cout << "4. PrimeMinister\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            person = new Cricketer();
            break;
        case 2:
            person = new NationalHero();
            break;
        case 3:
            person = new Politician();
            break;
        case 4:
            person = new PrimeMinister();
            break;
        case 5:
            cout << "Exiting the program. Thanks for playing, " << name << "!" << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
            continue;
        }

        person->setdata();
        person->display();

        delete person;  
        person = nullptr;  
    }
    return 0;  
}
