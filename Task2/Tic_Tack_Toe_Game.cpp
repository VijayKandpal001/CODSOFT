// C++ Program for Tic-Tac-Toe Game
#include <iostream>
#include <vector>
using namespace std;
using std::cout; //To handle ambiguity issues.


// Function to display the board of tic-tac-toe game. 
void displayBoard(vector<vector<char>> &board){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool checkForWin(vector<vector<char>> &board,char &player){
    
    //There are three possible ways to win:
    //1. checking the row for win.
    for (int row = 0; row < 3; row++)
    {
        if(board[row][0]==player && board[row][1]==player && board[row][2]==player){
            return true;
        }
    }
    
    // 2. checking the column for win.
    for (int col = 0; col < 3; col++)
    {
        if(board[0][col]==player && board[1][col]==player && board[2][col]==player){
            return true;
        }
    }

    // 3. checking the diagonals for win.
    if((board[0][0]== player && board[1][1]==player && board[2][2]==player) || (board[0][2]== player && board[1][1]==player && board[2][0]==player) ){
        return true;
    }

    return false;
}


//Function to check whether game is draw or not.
bool checkForDraw(vector<vector<char>> &board){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(board[i][j]=='_')
                return false;
        }
    }
    return true;
}

int main()
{
    cout<<"/********** Welcome to the Tic-Tac-Toe Game **********/"<<endl;

    //Creation of game board using 3x3 vector matrix.
    vector<vector<char>> game_board = {{'_', '_', '_'},
                                       {'_', '_', '_'},
                                       {'_', '_', '_'}};

    char player = 'X';
    while (true)
    {
        displayBoard(game_board);
        cout<<endl;
        int row, col;
        cout<<player<< " turn.(enter row and column, 0-2):"<<endl; 
        cin >> row >> col;

        if(0< row >2 || 0 < col >2){
            cout<<"Invalid move, try again."<<endl;
            continue;
        }

        else if(game_board[row][col]!='_'){
            cout<<"Space is already occupied."<<endl;
            continue;
        }

        game_board[row][col]=player;

        if(checkForWin(game_board,player)){
            cout<<"Congrats, "<<player<<" wins."<<endl;
            break;
        }

        else if (checkForDraw(game_board))
        {
            cout<<"Game is draw."<<endl;
            break;
        }

        player= player=='X'?'O':'X';    
    }
    cout<<"Do you want to play it again?\nType either y/n"<<endl;
    char user_input;
    cin>>user_input;
    if(user_input=='y') main();
    else {
        cout<<"Thank you for playing :) "<<endl;
    }
    return 0;
}