#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<fstream>
#include<string>
#include<iomanip>
#include<list>
#include<vector>
using namespace std;
int main()
{
	srand(time(NULL));
	string a="0123";
	char array[4][4];
	char array2[4][4];
	
	for ( int i=0; i<4; i++ )
	{
		for ( int j=0; j<4; j++ )
		{
			array[i][j]='?';
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	int x=0;
	cout<<endl;
	for ( int i=0; i<4; i++ )
	{
		for ( int j=0; j<4; j++ )
		{
			int randum=rand()%3+1;
			
			if ( x<2 && randum==1  )
			{
				array2[i][j]='*';
				x++;
			}
			else
			{
			array2[i][j]=a[randum];
			}
		}
	}
	int h=0;
	while(h<14)
	{
		int r,c;
	cout<<endl<<"Enter row: "<<endl;
	cin>>r;
	 cout<<"Enter column: "<<endl;
	cin>>c;
	cout<<endl<<endl;
	
	if( array2[r][c]!='*' )
	{
			for(int i=0 ; i<4 ; i++)
		{
			for(int j=0 ; j<4 ; j++)
			{
				if(i==r && j==c) 
				{
					array[i][j]=array2[i][j];
					cout<<array[i][j];
				}
				else
				{
				cout<<array[i][j];
                }
		    }
		    cout<<endl;			
	    }
	}		
	if ( array2[r][c]=='*')
	{
		for(int i=0; i<4 ; i++)
		{
			for(int j=0 ; j<4 ; j++)
			{
				cout<<array2[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<"\n\nIt is a mine: "<<endl;
		cout<<"You lost the game: "<<endl;
		break;
	}
		if ( h>=13 )
	{
		cout<<"You won the game: "<<endl;
		break;
	}
		h++;
	}
	return 0;
}

