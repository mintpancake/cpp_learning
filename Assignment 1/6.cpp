#include <iostream>
#include <cstdlib>

#define SPADE "\xE2\x99\xA0"
#define CLUB "\xE2\x99\xA3"
#define HEART "\xE2\x99\xA5"
#define DIAMOND "\xE2\x99\xA6"

using namespace std;

void DealHand(int &, int &, int &, int &, int &);
void PrintHand(int, int, int, int, int);
bool IsFourOfAKind(int, int, int, int, int);
bool IsFullHouse(int, int, int, int, int);
bool IsFlush(int, int, int, int, int);
bool IsThreeOfAKind(int, int, int, int, int);
bool IsTwoPair(int, int, int, int, int);
bool IsOnePair(int, int, int, int, int);

int main()
{
    int x = 0;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
    cin >> x;
    srand(x);
    DealHand(c1, c2, c3, c4, c5);
    PrintHand(c1, c2, c3, c4, c5);
    if (IsFourOfAKind(c1, c2, c3, c4, c5))
    {
        cout << "four of a kind" << endl;
    }
    else if (IsFullHouse(c1, c2, c3, c4, c5))
    {
        cout << "full house" << endl;
    }
    else if (IsFlush(c1, c2, c3, c4, c5))
    {
        cout << "flush" << endl;
    }
    else if (IsThreeOfAKind(c1, c2, c3, c4, c5))
    {
        cout << "three of a kind" << endl;
    }
    else if (IsTwoPair(c1, c2, c3, c4, c5))
    {
        cout << "two pair" << endl;
    }
    else if (IsOnePair(c1, c2, c3, c4, c5))
    {
        cout << "one pair" << endl;
    }
    else
    {
        cout << "others" << endl;
    }
    return 0;
}

void DealHand(int &c1, int &c2, int &c3, int &c4, int &c5) //generate cards
{
    c1 = rand() % 52;
    c2 = rand() % 52;
    c3 = rand() % 52;
    c4 = rand() % 52;
    c5 = rand() % 52;
}

void PrintHand(int c1, int c2, int c3, int c4, int c5)
{
    int rank = 0, suit = 0;
    for (int i = 0; i < 5; i++) //generate ranks and suits
    {
        switch (i)
        {
        case 0:
            rank = c1 % 13;
            suit = c1 / 13;
            break;
        case 1:
            rank = c2 % 13;
            suit = c2 / 13;
            break;
        case 2:
            rank = c3 % 13;
            suit = c3 / 13;
            break;
        case 3:
            rank = c4 % 13;
            suit = c4 / 13;
            break;
        case 4:
            rank = c5 % 13;
            suit = c5 / 13;
            break;
        }
        switch (rank)
        {
        case 0:
            cout << 'A';
            break;
        case 10:
            cout << 'J';
            break;
        case 11:
            cout << 'Q';
            break;
        case 12:
            cout << 'K';
            break;
        default:
            cout << rank + 1;
            break;
        }
        switch (suit)
        {
        case 0:
            cout << SPADE;
            break;
        case 1:
            cout << HEART;
            break;
        case 2:
            cout << CLUB;
            break;
        case 3:
            cout << DIAMOND;
            break;
        }
        if (i == 4)
        {
            cout << endl;
        }
        else
        {
            cout << ' ';
        }
    }
}

bool IsFourOfAKind(int c1, int c2, int c3, int c4, int c5)
{
    int rank1 = 0, rank2 = 0, rank3 = 0, rank4 = 0, rank5 = 0;
    for (int i = 0; i < 5; i++) //get ranks
    {
        switch (i)
        {
        case 0:
            rank1 = c1 % 13;
            break;
        case 1:
            rank2 = c2 % 13;
            break;
        case 2:
            rank3 = c3 % 13;
            break;
        case 3:
            rank4 = c4 % 13;
            break;
        case 4:
            rank5 = c5 % 13;
            break;
        }
    }
    if (rank1 == rank2 && rank2 == rank3 && rank3 == rank4 && rank1 != rank5 ||
        rank1 == rank2 && rank2 == rank3 && rank3 == rank5 && rank1 != rank4 ||
        rank1 == rank2 && rank2 == rank4 && rank4 == rank5 && rank1 != rank3 ||
        rank1 == rank3 && rank3 == rank4 && rank4 == rank5 && rank1 != rank2 ||
        rank2 == rank3 && rank3 == rank4 && rank4 == rank5 && rank2 != rank1) //judge condition
    {
        return true;
    }
    return false;
}

bool IsFullHouse(int c1, int c2, int c3, int c4, int c5)
{
    int rank1 = 0, rank2 = 0, rank3 = 0, rank4 = 0, rank5 = 0;
    for (int i = 0; i < 5; i++) //get ranks
    {
        switch (i)
        {
        case 0:
            rank1 = c1 % 13;
            break;
        case 1:
            rank2 = c2 % 13;
            break;
        case 2:
            rank3 = c3 % 13;
            break;
        case 3:
            rank4 = c4 % 13;
            break;
        case 4:
            rank5 = c5 % 13;
            break;
        }
    }
    if (rank1 == rank2 && rank2 == rank3 && rank4 == rank5 && rank1 != rank4 ||
        rank1 == rank2 && rank2 == rank4 && rank3 == rank5 && rank1 != rank3 ||
        rank1 == rank2 && rank2 == rank5 && rank3 == rank4 && rank1 != rank3 ||
        rank1 == rank3 && rank3 == rank4 && rank2 == rank5 && rank1 != rank2 ||
        rank1 == rank3 && rank3 == rank5 && rank2 == rank4 && rank1 != rank2 ||
        rank1 == rank4 && rank4 == rank5 && rank2 == rank3 && rank1 != rank2 ||
        rank2 == rank3 && rank3 == rank4 && rank1 == rank5 && rank2 != rank1 ||
        rank2 == rank3 && rank3 == rank5 && rank1 == rank4 && rank2 != rank1 ||
        rank2 == rank4 && rank4 == rank5 && rank1 == rank3 && rank2 != rank1 ||
        rank3 == rank4 && rank4 == rank5 && rank1 == rank2 && rank3 != rank1) //judge condition
    {
        return true;
    }
    return false;
}

bool IsFlush(int c1, int c2, int c3, int c4, int c5)
{
    int suit1 = 0, suit2 = 0, suit3 = 0, suit4 = 0, suit5 = 0;
    for (int i = 0; i < 5; i++) //get suits
    {
        switch (i)
        {
        case 0:
            suit1 = c1 / 13;
            break;
        case 1:
            suit2 = c2 / 13;
            break;
        case 2:
            suit3 = c3 / 13;
            break;
        case 3:
            suit4 = c4 / 13;
            break;
        case 4:
            suit5 = c5 / 13;
            break;
        }
    }
    if (suit1 == suit2 && suit2 == suit3 && suit3 == suit4 && suit4 == suit5) //judge condition
    {
        return true;
    }
    return false;
}

bool IsThreeOfAKind(int c1, int c2, int c3, int c4, int c5)
{
    int rank1 = 0, rank2 = 0, rank3 = 0, rank4 = 0, rank5 = 0;
    for (int i = 0; i < 5; i++) //get ranks
    {
        switch (i)
        {
        case 0:
            rank1 = c1 % 13;
            break;
        case 1:
            rank2 = c2 % 13;
            break;
        case 2:
            rank3 = c3 % 13;
            break;
        case 3:
            rank4 = c4 % 13;
            break;
        case 4:
            rank5 = c5 % 13;
            break;
        }
    }
    if (rank1 == rank2 && rank2 == rank3 && rank4 != rank5 && rank1 != rank4 ||
        rank1 == rank2 && rank2 == rank4 && rank3 != rank5 && rank1 != rank3 ||
        rank1 == rank2 && rank2 == rank5 && rank3 != rank4 && rank1 != rank3 ||
        rank1 == rank3 && rank3 == rank4 && rank2 != rank5 && rank1 != rank2 ||
        rank1 == rank3 && rank3 == rank5 && rank2 != rank4 && rank1 != rank2 ||
        rank1 == rank4 && rank4 == rank5 && rank2 != rank3 && rank1 != rank2 ||
        rank2 == rank3 && rank3 == rank4 && rank1 != rank5 && rank2 != rank1 ||
        rank2 == rank3 && rank3 == rank5 && rank1 != rank4 && rank2 != rank1 ||
        rank2 == rank4 && rank4 == rank5 && rank1 != rank3 && rank2 != rank1 ||
        rank3 == rank4 && rank4 == rank5 && rank1 != rank2 && rank3 != rank1) //judge condition
    {
        return true;
    }
    return false;
}

bool IsTwoPair(int c1, int c2, int c3, int c4, int c5)
{
    int rank1 = 0, rank2 = 0, rank3 = 0, rank4 = 0, rank5 = 0;
    for (int i = 0; i < 5; i++) //get ranks
    {
        switch (i)
        {
        case 0:
            rank1 = c1 % 13;
            break;
        case 1:
            rank2 = c2 % 13;
            break;
        case 2:
            rank3 = c3 % 13;
            break;
        case 3:
            rank4 = c4 % 13;
            break;
        case 4:
            rank5 = c5 % 13;
            break;
        }
    }
    if (rank1 == rank2 && rank3 == rank4 && rank1 != rank3 && rank1 != rank5 && rank3 != rank5 ||
        rank1 == rank2 && rank3 == rank5 && rank1 != rank3 && rank1 != rank4 && rank3 != rank4 ||
        rank1 == rank2 && rank4 == rank5 && rank1 != rank4 && rank1 != rank3 && rank4 != rank3 ||
        rank1 == rank3 && rank2 == rank4 && rank1 != rank2 && rank1 != rank5 && rank2 != rank5 ||
        rank1 == rank3 && rank2 == rank5 && rank1 != rank2 && rank1 != rank4 && rank2 != rank4 ||
        rank1 == rank3 && rank4 == rank5 && rank1 != rank4 && rank1 != rank2 && rank4 != rank2 ||
        rank1 == rank4 && rank2 == rank3 && rank1 != rank2 && rank1 != rank5 && rank2 != rank5 ||
        rank1 == rank4 && rank2 == rank5 && rank1 != rank2 && rank1 != rank3 && rank2 != rank3 ||
        rank1 == rank4 && rank3 == rank5 && rank1 != rank3 && rank1 != rank2 && rank3 != rank2 ||
        rank1 == rank5 && rank2 == rank3 && rank1 != rank2 && rank1 != rank4 && rank2 != rank4 ||
        rank1 == rank5 && rank2 == rank4 && rank1 != rank2 && rank1 != rank3 && rank2 != rank3 ||
        rank1 == rank5 && rank3 == rank4 && rank1 != rank3 && rank1 != rank2 && rank3 != rank2 ||
        rank2 == rank3 && rank4 == rank5 && rank2 != rank4 && rank2 != rank1 && rank4 != rank1 ||
        rank2 == rank4 && rank3 == rank5 && rank2 != rank3 && rank2 != rank1 && rank3 != rank1 ||
        rank2 == rank5 && rank3 == rank4 && rank2 != rank3 && rank2 != rank1 && rank3 != rank1) //judge condition
    {
        return true;
    }
    return false;
}

bool IsOnePair(int c1, int c2, int c3, int c4, int c5)
{
    int rank1 = 0, rank2 = 0, rank3 = 0, rank4 = 0, rank5 = 0;
    for (int i = 0; i < 5; i++) //get ranks
    {
        switch (i)
        {
        case 0:
            rank1 = c1 % 13;
            break;
        case 1:
            rank2 = c2 % 13;
            break;
        case 2:
            rank3 = c3 % 13;
            break;
        case 3:
            rank4 = c4 % 13;
            break;
        case 4:
            rank5 = c5 % 13;
            break;
        }
    }
    if (rank1 == rank2 && rank1 != rank3 && rank1 != rank4 && rank1 != rank5 && rank3 != rank4 && rank3 != rank5 && rank4 != rank5 ||
        rank1 == rank3 && rank1 != rank2 && rank1 != rank4 && rank1 != rank5 && rank2 != rank4 && rank2 != rank5 && rank4 != rank5 ||
        rank1 == rank4 && rank1 != rank2 && rank1 != rank3 && rank1 != rank5 && rank2 != rank3 && rank2 != rank5 && rank3 != rank5 ||
        rank1 == rank5 && rank1 != rank2 && rank1 != rank3 && rank1 != rank4 && rank2 != rank3 && rank2 != rank4 && rank3 != rank4 ||
        rank2 == rank3 && rank2 != rank1 && rank2 != rank4 && rank2 != rank5 && rank1 != rank4 && rank1 != rank5 && rank4 != rank5 ||
        rank2 == rank4 && rank2 != rank1 && rank2 != rank3 && rank2 != rank5 && rank1 != rank3 && rank1 != rank5 && rank3 != rank5 ||
        rank2 == rank5 && rank2 != rank1 && rank2 != rank3 && rank2 != rank4 && rank1 != rank3 && rank1 != rank4 && rank3 != rank4 ||
        rank3 == rank4 && rank3 != rank1 && rank3 != rank2 && rank3 != rank5 && rank1 != rank2 && rank1 != rank5 && rank2 != rank5 ||
        rank3 == rank5 && rank3 != rank1 && rank3 != rank2 && rank3 != rank4 && rank1 != rank2 && rank1 != rank4 && rank2 != rank4 ||
        rank4 == rank5 && rank4 != rank1 && rank4 != rank2 && rank4 != rank3 && rank1 != rank2 && rank1 != rank3 && rank2 != rank3) //judge condition
    {
        return true;
    }
    return false;
}
