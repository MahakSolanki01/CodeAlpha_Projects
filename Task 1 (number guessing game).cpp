#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	cout<<"\n\tWelcome to the \n\tNumber guessing game!!"<<endl;
	cout<<"\n\tINSTRUCTIONS\n";
	cout<<"\nYou have to guess a number in between 1 to 100\n";
	cout<<"\nYou'll get limited chances based on the difficulty level you choose";
	cout<<"\n\tGood Luck!"<<endl;
	
	while(true)
	{
		cout<<"\n Difficulty Levels";
		cout<<"\n 1 - Easy\t";
		cout<<"\n 2 - Medium\t";
		cout<<"\n 3 - Hard\t";
		cout<<"\n 4 - Super Hard\t";
		cout<<"\n 0 - End Game\n\n";
		
	// select the difficulty level
	int level;
	cout<<"Enter the difficulty level number : ";
	cin>>level;
	
	//generating random number
	srand(time(0));
	int randomNumber=(rand()%(100-1)+1);
	int guess;

	//Difficulty level : Easy
	if(level==1)
	{
		cout<<"Let's Get Started\n";
		cout<<"You have 7 chances to find the number between 1 to 100";
		int chancesleft = 7;
		
		for(int i=1;i<=7;i++)
		{
			//asking the player to guess the number
			cout<<"\nEnter the number : ";
			cin>>guess;
			if(guess==randomNumber)
			{
				cout<<"\nWell Done! \nYou guessed the right number,\nYou Won!";
				cout<<"\n\nThanks for playing...\n";
				break;
			}
			else
			{
				if(guess>randomNumber)
				{
					cout<<"\n\tThe number is too high , Try Again\n";
				}
				else if(guess<randomNumber)
				{
					cout<<"\n\tThe number is too low , Try Again\n";
				}
			}
			chancesleft--;
			if(chancesleft==0)
			{
				cout<<"\nYou lost all your chances";
				cout<<"\nYou couldn't find the correct number";
				cout<<"\nYou lose!! Better luck next time\n";
				cout<<randomNumber<<"is the correct number\n\n";
			}
		}
	}
	
	//Difficulty level : Medium
	if(level==2)
	{
		cout<<"Let's Get Started\n";
		cout<<"You have 5 chances to find the number between 1 to 100";
		int chancesleft = 5;
		
		for(int i=1;i<=5;i++)
		{
			//asking the player to guess the number
			cout<<"\nEnter the number : ";
			cin>>guess;
			if(guess==randomNumber)
			{
				cout<<"\nWell Done! \nYou guessed the right number,\nYou Won!";
				cout<<"\n\nThanks for playing...\n";
				break;
			}
			else
			{
				if(guess>randomNumber)
				{
					cout<<"\n\tThe number is too high , Try Again\n";
				}
				else if(guess<randomNumber)
				{
					cout<<"\n\tThe number is too low , Try Again\n";
				}
			}
			chancesleft--;
			if(chancesleft==0)
			{
				cout<<"\nYou lost all your chances";
				cout<<"\nYou couldn't find the correct number";
				cout<<"\nYou lose!! Better luck next time\n";
				cout<<randomNumber<<"is the correct number\n\n";
			}
		}
	}
	
	//Difficulty level : Hard
	if(level==3)
	{
		cout<<"Let's Get Started\n";
		cout<<"You have 3 chances to find the number between 1 to 100";
		int chancesleft = 3;
		
		for(int i=1;i<=3;i++)
		{
			//asking the player to guess the number
			cout<<"\nEnter the number : ";
			cin>>guess;
			if(guess==randomNumber)
			{
				cout<<"\nWell Done! \nYou guessed the right number,\nYou Won!";
				cout<<"\n\nThanks for playing...\n";
				break;
			}
			else
			{
				if(guess>randomNumber)
				{
					cout<<"\n\tThe number is too high , Try Again\n";
				}
				else if(guess<randomNumber)
				{
					cout<<"\n\tThe number is too low , Try Again\n";
				}
			}
			chancesleft--;
			if(chancesleft==0)
			{
				cout<<"\nYou lost all your chances";
				cout<<"\nYou couldn't find the correct number";
				cout<<"\nYou lose!! Better luck next time\n";
				cout<<randomNumber<<"is the correct number\n\n";
			}
		}
	}
	
	//Difficulty level : Super Hard
	if(level==4)
	{
		cout<<"Let's Get Started\n";
		cout<<"You have 1 chance to find the number between 1 to 100";
		int chancesleft = 1;
		
		for(int i=1;i<=1;i++)
		{
			//asking the player to guess the number
			cout<<"\nEnter the number : ";
			cin>>guess;
			if(guess==randomNumber)
			{
				cout<<"\nWell Done! \nYou guessed the right number,\nYou Won!";
				cout<<"\n\nThanks for playing...\n";
				break;
			}
			else
			{
				if(guess>randomNumber)
				{
					cout<<"\n\tThe number is too high\n";
				}
				else if(guess<randomNumber)
				{
					cout<<"\n\tThe number is too low\n";
				}
			}
			chancesleft--;
			if(chancesleft==0)
			{
				cout<<"\nYou lost all your chances";
				cout<<"\nYou couldn't find the correct number";
				cout<<"\nYou lose!! Better luck next time\n";
				cout<<randomNumber<<"is the correct number\n\n";
			}
		}
	}
	
    //Difficulty level : End Game
    else if(level==0)
    {
    	cout<<"Game Over!";
    	exit(0);
    }
    if(level>4,level<0)
    {
    	cout<<"Wrong choice\nKindly select the correct level";
	}
    }
	return 0;
}



