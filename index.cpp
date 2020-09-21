#include <iostream>
#include <ctime>
using namespace std;
void show_story()
{
    cout << "*-----------------------------------------------------------------------*\n\n";
    cout << "Hallo Student! Want to get placed in your dream job!!\n";
    cout << "\"With just 5 level you can get placed in your dream company\"\n";
    cout << "The only thing you have to do is predict the three numbers according\n";
    cout << "to the conditions given and your Job is ready\n";
    cout << "S0,lets dive into recruitment process yipeee!\n\n";
}
void show_conditions(int codesum, int codeproduct)
{
    cout << "+The Sum of three numbers is " << codesum << endl;
    cout << "+The product of three numbers is " << codeproduct << endl;
    cout << "+If u want to quit press (ctrl+c)" << endl;
    cout << "Enter the 3 numbers seperated with spaces below:\n";
}
bool playgame(int level_difficulty)
{
    cout << "Level :" << level_difficulty << endl
         << endl;
    int codeA = rand() % level_difficulty + level_difficulty;
    int codeB = rand() % level_difficulty + level_difficulty;
    int codeC = rand() % level_difficulty + level_difficulty;
    int codesum = codeA + codeB + codeC;
    int codeproduct = codeA * codeB * codeC;
    show_conditions(codesum, codeproduct);
    int guessA, guessB, guessC;
    cin >> guessA >> guessB >> guessC;
    int guessSum = guessA + guessB + guessC;
    int guessProduct = guessA * guessB * guessC;
    if (guessSum == codesum && guessProduct == codeproduct)
    {
        cout << "\t\tGreat you moved to next level!keep going :)" << endl
             << endl;
        return true;
    }
    else
    {
        cout << "\t\tIncorrect!! Sad :( try again don't lose hope(failure is a step to success)!!" << endl
             << endl;
        return false;
    }
}
int main()
{
    srand(time(NULL));
    int level_difficulty{1};
    int max_difficulty{5};
    show_story();
    while (level_difficulty <= max_difficulty)
    {
        bool upgrade = playgame(level_difficulty);
        cin.clear();
        cin.ignore();
        if (upgrade)
            level_difficulty++;
    }
    cout << "Congrats!you have been placed into your dream Job work hard and achieve more greater heghts!";
    return 0;
}