#include<iostream>
using namespace std;
char m[3][3]={'1','2','3','4','5','6','7','8','9'};
char p = 'X';
void Draw()
{
   system("clear");
   cout<<"A primitive multiplayer command line TicTacToe game\n";
   for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {
           cout<<m[i][j]<<" ";
       }
       cout<<"\n";
   }
}
int c=0;
void input()
{
    int a;
    cout<<"It's "<<p<<" turn. "<<"Type the number in the matrix: ";
    cin>>a;
    switch(a)
    {
        case 1: if(m[0][0]=='1')
                m[0][0]= p;
                else
                {
                cout<<"Field is already occupied"<<"\n";
                input();
                }
                break;
        case 2: if(m[0][1]=='2')
                m[0][1]= p;
                else
                {
                cout<<"Field is already occupied"<<"\n";
                input();
                }
                break;
        case 3: if(m[0][2]=='3')
                m[0][2]= p;
                else
                {
                cout<<"Field is already occupied"<<"\n";
                input();
                }
                break;
        case 4: if(m[1][0]=='4')
                m[1][0]= p;
                else
                {
                cout<<"Field is already occupied"<<"\n";
                input();
                }
                break;
        case 5: if(m[1][1]=='5')
                m[1][1]= p;
                else
                {
                cout<<"Field is already occupied"<<"\n";
                input();
                }
                break;
        case 6: if(m[1][2]=='6')
                m[1][2]= p;
                else
                {
                cout<<"Field is already occupied"<<"\n";
                input();
                }
                break;
        case 7: if(m[2][0]=='7')
                m[2][0]= p;
                else
                {
                cout<<"Field is already occupied"<<"\n";
                input();
                }
                break;
        case 8: if(m[2][1]=='8')
                m[2][1]= p;
                else
                {
                cout<<"Field is already occupied"<<"\n";
                input();
                }
                break;
        case 9: if(m[2][2]=='9')
                m[2][2]= p;
                else
                {
                cout<<"Field is already occupied"<<"\n";
                input();
                }
                break;
                
    }
}

char win()
{
    for(int i=0;i<3;i++)
    {
        if((m[i][0]==p&&m[i][1]==p&&m[i][2]==p)||(m[0][i]==p&&m[1][i]==p&&m[2][i]==p)||(m[0][0]==p&&m[1][1]==p&&m[2][2]==p)||(m[2][0]==p&&m[1][1]==p&&m[0][2]==p))
            {
               return p;
            }
        
    }
    return'T';
}
void Toggle()
{
    if(p=='X')
       p='O';
    else
       p='X'; 
}
int main()
{
  Draw();
  while(1)
  {
    c++;  
    input();
    Draw();
    win();
    if(win()==p)
    {
        cout<<p<<" wins the game\n";
        break;
    }
    Toggle();
    if(win()=='T'&&c==9)
    {
        cout<<"The game is a Tie"<<"\n";
        break;
    }
  }
  cin.get();
  return 0;
}
