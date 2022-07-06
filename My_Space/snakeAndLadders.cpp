#include<bits/stdc++.h>
using namespace std;

class Game{
    public:
    int increment = 0;
    int decrement = 0;
};
class Player{
    public:
    int position = 0;
    bool victory = 0;
};

bool check_victory(Player arr[],int size){
    bool win = 0;
    for (int i = 0; i < size; i++)
    {
        win += arr[i].victory;
    }
    return win;
    
}

int main(){
    int R;
    srand((unsigned)(time(NULL)));
    Game game[100];
    game[10].increment = 5;
    game[18].increment = 5;

    game[21].decrement = -4;
    game[14].decrement = -5;
    
    int NOP,champ; // number of players
    cout<<"enter number of players :";
    cin>>NOP;
    Player player[NOP];
    bool win = 0;
    while(!win){
        for (int i = 0; i < NOP; i++)
        {
            cout<<endl<<"player "<<i + 1<< " is at position "<<player[i].position;
        }
        for (int i = 0; i < NOP ; i++)
        {   
            cout<<"\nPlayer "<<i + 1<<"'s turn";
            R = 1 + (rand() % 6);
            player[i].position += R;
            
            if (player[i].position < 100)
            player[i].position += (game[player[i].position].decrement + game[player[i].position].increment);
            
            cout<<endl<<"you rolled "<<R<<" and now you're at position "<<player[i].position<<endl;
            
            

            if (player[i].position >= 100)
            {
                player[i].victory = 1;
                champ = i+1;
                win = check_victory(player,NOP);
                break;
            }
            else if(game[player[i].position].decrement){
                cout<<"\nyou were bit by a snake and you fell by "<<game[player[i].position].decrement <<" places and now you're at "<<player[i].position;
            }
            else if(game[player[i].position].increment){
                cout<<"\nyou found a ladder and you climbed by  "<<game[player[i].position].decrement <<" places and now you're at "<<player[i].position;    
            }
            win = check_victory(player,NOP);
            if(R == 6)
                i--;

        }

        
        

    }

    cout<<"player "<<champ<<"won!!!";

return 0;
}