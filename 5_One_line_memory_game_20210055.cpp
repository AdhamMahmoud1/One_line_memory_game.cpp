#include <iostream>
using namespace std;
char letters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
char nums[] = {'1', '2', '3', '4','5', '6', '7', '8', '9','0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
bool check = true;
int score_player1 = 0;
const char s =42;
int player1()
{
    int a, b;
    cout << "player 1 is turn" << endl;
    for (int i = 0; i < 20; i++)
        cout << " " << nums[i];
    cout << "\nplease enter two numers: ";
    cin >> a >> b; 
    cout << "player #1 's score " << score_player1 << ": " << a << ", " << b << endl;
    cout << letters[a - 1] << " ";
    cout << letters[b -1] <<endl;
    if (a == b){
        cout << "Invalid input 'You can't enter two equal numbers!'" << endl;
    }
    else if (letters[a - 1] == letters[b - 1]){
        nums[a - 1] = s;
        nums[b - 1] = s;
        score_player1 += 1;
        cout << "player1 is score = " << score_player1 << endl;
        for (int i = 0; i < 20; i++){
            cout << " " << nums[i];
        }
        cout << endl;
        cout << "screen is clreared" << endl;
    }
}
int score_player2 = 0;
int player2()
{
    int a, b;
    cout << "player 2 is turn" << endl;
    for (int i = 0; i < 20; i++)
        cout << " " << nums[i];
    cout << "\nplease enter two numers: ";
    cin >> a >> b;
    cout << "player #1 's score " << score_player2 << ": " << a << ", " << b << endl;
    cout << letters[a - 1] << " ";
    cout << letters[b - 1] << endl;
    if (a == b){
        cout << "Invalid input 'You can't enter two equal numbers!' " << endl;
    }
    else if (letters[a - 1] == letters[b - 1]){
        nums[a - 1] = s;
        nums[b - 1] = s;
        score_player2 += 1;
        cout << "player2 is score = " << score_player2 << endl;
        for (int i = 0; i < 20; i++){
            cout << " " << nums[i];
        }
        cout << endl;
        cout << "screen is clreared" << endl;
    }  
}
int main()
{
    cout << "WELCOM IN ONE LINE MEMORY GAME" << endl;
    for (int i = 0; i < 20; i++)
        cout << " " << letters[i];
    cout<<endl; 
    while (check){
        player1();
        player2();
        if (score_player1 + score_player2 == 10){
            if (score_player1 == score_player2){
                cout << "The game is ended by Draw!!!" << endl;
            }
            else if (score_player1 > score_player2){
                cout << "Congratulation!\nPlayer 1 is the Winner!!!" << endl;
            }
            else{
                cout << "Congratulation!\nPlayer 2 is the Winner!!!" << endl;
            }
            return check = false;
        }
    }
    cout << "End of the game!!!" << endl;
    return 0;
}