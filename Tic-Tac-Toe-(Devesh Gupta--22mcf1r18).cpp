/* Computer Game Development and Animation Assignment-01
Game Title : Tic-Tac-Tow
Game Description : 1. The game is played on a grid that's 3 squares by 3 squares.
	2. You are *, your friend is O. Players take turns putting their marks in empty squares.
	3. The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner.
	4. When all 9 squares are full, the game is over.
	
Ownership : Devesh Gupta (MCA 1st Year - 22mcf1r18)
*/


#include<iostream>
//#include<graphics.h>
using namespace std;


//Creating and Initializing Global Array Variable 
char arr[3][3]={' ',' ',' ',
				' ',' ',' ',
				' ',' ',' '};

void instruction();
int main();

// Creating Grid (Skeleten of Game)
void grid(){		

	cout<<"\t\t\t|\t|\t"<<"\t\t\t\t|\t|\t"<<endl;
	cout<<"\t\t    "<<arr[0][0]<<"   |   "<<arr[0][1]<<"   |    "<<arr[0][2]<<"   "<<"\t\t\t    1   |   2   |   3   "<<endl;
	cout<<"\t\t\t|\t|\t"<<"\t\t\t\t|\t|\t"<<endl;
	cout<<"\t\t-------------------------"<<"\t\t\t-------------------------"<<endl;
	cout<<"\t\t\t|\t|\t"<<"\t\t\t\t|\t|\t"<<endl;
	cout<<"\t\t    "<<arr[1][0]<<"   |   "<<arr[1][1]<<"   |    "<<arr[1][2]<<"   "<<"\t\t\t    4   |   5   |   6   "<<endl;
	cout<<"\t\t\t|\t|\t"<<"\t\t\t\t|\t|\t"<<endl;
	cout<<"\t\t-------------------------"<<"\t\t\t-------------------------"<<endl;
	cout<<"\t\t\t|\t|\t"<<"\t\t\t\t|\t|\t"<<endl;
	cout<<"\t\t    "<<arr[2][0]<<"   |   "<<arr[2][1]<<"   |    "<<arr[2][2]<<"   "<<"\t\t\t    7   |   8   |   9   "<<endl;
	cout<<"\t\t\t|\t|\t"<<"\t\t\t\t|\t|\t"<<endl;
		
}

// play function has all the logics to fill grid
void play(){
	char move, ch;
	grid();
	for(int i=1;i<100;i++){
		if(i%2!=0){ // Following Code use to print moves played by Player 1
			p :
			cout<<"\t\tPlayer 1 turn : "<<endl;
			cout<<"\t\tPlay your move : ";
			cin>>move;
			switch(move){
				case '1' :
					if(arr[0][0]==' '){
						arr[0][0]='*'; //assigning values according to player 1 moves
						grid();
					}
					else{
						cout<<"\t\tYou Can't Make This Move "<<endl;
						goto p;  //Jumping to p lebel
					}	
					break;
				case '2' :
					if(arr[0][1]==' '){
						arr[0][1]='*';
						grid();
					}
					else{
						cout<<"\t\tYou Can't Make This Move "<<endl;
						goto p;
					}	
					break;
				case '3' :
					if(arr[0][2]==' '){
						arr[0][2]='*';
						grid();
					}
					else{
						cout<<"\t\tYou Can't Make This Move "<<endl;
						goto p;
					}	
					break;
				case '4' :
					if(arr[1][0]==' '){
						arr[1][0]='*';
						grid();
					}
					else{
						cout<<"\t\tYou Can't Make This Move "<<endl;
						goto p;
					}	
					break;
				case '5' :
					if(arr[1][1]==' '){
						arr[1][1]='*';
						grid();
					}
					else{
						cout<<"\t\tYou Can't Make This Move "<<endl;
						goto p;
					}	
					break;
				case '6' :
					if(arr[1][2]==' '){
						arr[1][2]='*';
						grid();
					}
					else{
						cout<<"\t\tYou Can't Make This Move "<<endl;
						goto p;
					}	
					break;
				case '7' :
					if(arr[2][0]==' '){
						arr[2][0]='*';
						grid();
					}
					else{
						cout<<"\t\tYou Can't Make This Move "<<endl;
						goto p;
					}	
					break;
				case '8' :
					if(arr[2][1]==' '){
						arr[2][1]='*';
						grid();
					}
					else{
						cout<<"\t\tYou Can't Make This Move "<<endl;
						goto p;
					}	
					break;
				case '9' :
				if(arr[2][2]==' '){
						arr[2][2]='*';
						grid();
					}
					else{
						cout<<"\t\tYou Can't Make This Move "<<endl;
						goto p;
					}	
					break;
				default :
					cout<<"\n\t\tPlease Enter the Valid Moves : \n";
					goto p;
			}
			
		}
		else{ // Following Code use to print moves played by Player 2
			q : 
			cout<<"\t\tPlayer 2 turn : "<<endl;
			cout<<"\t\tPlay your move : ";
			cin>>move;
			switch(move){
				case '1' :
					if(arr[0][0]==' '){
						arr[0][0]='O'; //assigning values according to player 2 moves
						grid();
					}
					else{
						cout<<"\t\tYou Can't Make This Move "<<endl; //error message
						goto q;
					}	
					break;
				case '2' :
					if(arr[0][1]==' '){
						arr[0][1]='O';
						grid();
					}
					else{
						cout<<"\t\tYou Can't Make This Move "<<endl;
						goto q;
					}	
					break;
				case '3' :
					if(arr[0][2]==' '){
						arr[0][2]='O';
						grid();
					}
					else{
						cout<<"\t\tYou Can't Make This Move "<<endl;
						goto q;
					}	
					break;
				case '4' :
					if(arr[1][0]==' '){
						arr[1][0]='O';
						grid();
					}
					else{
						cout<<"\t\tYou Can't Make This Move "<<endl;
						goto q;
					}	
					break;
				case '5' :
					if(arr[1][1]==' '){
						arr[1][1]='O';
						grid();
					}
					else{
						cout<<"\t\tYou Can't Make This Move "<<endl;
						goto q;
					}	
					break;
				case '6' :
					if(arr[1][2]==' '){
						arr[1][2]='O';
						grid();
					}
					else{
						cout<<"\t\tYou Can't Make This Move "<<endl;
						goto q;
					}	
					break;
				case '7' :
					if(arr[2][0]==' '){
						arr[2][0]='O';
						grid();
					}
					else{
						cout<<"\t\tYou Can't Make This Move "<<endl;
						goto q;
					}	
					break;
				case '8' :
					if(arr[2][1]==' '){
						arr[2][1]='O';
						grid();
					}
					else{
						cout<<"\t\tYou Can't Make This Move "<<endl;
						goto q;
					}	
					break;
				case '9' :
				if(arr[2][2]==' '){
						arr[2][2]='O';
						grid();
					}
					else{
						cout<<"\t\tYou Can't Make This Move "<<endl;
						goto q;
					}	
					break;
				default :
					cout<<"\n\t\tPlease Enter the Valid Moves : \n";
					goto q;
			}
		}
		
	// Main Logics to Decide win or draw
		if((arr[0][0]=='*'&&arr[0][1]=='*'&&arr[0][2]=='*')||(arr[1][0]=='*'&&arr[1][1]=='*'&&arr[1][2]=='*')||
		(arr[2][0]=='*'&&arr[2][1]=='*'&&arr[2][2]=='*')||(arr[0][0]=='*'&&arr[1][0]=='*'&&arr[2][0]=='*')||
		(arr[0][1]=='*'&&arr[1][1]=='*'&&arr[2][1]=='*')||(arr[0][2]=='*'&&arr[1][2]=='*'&&arr[2][2]=='*')||
		(arr[0][0]=='*'&&arr[1][1]=='*'&&arr[2][2]=='*')||(arr[0][2]=='*'&&arr[1][1]=='*'&&arr[2][0]=='*')){
			cout<<"\n\n\t\t*********  CONGRATULATIONS   *********"<<endl<<endl;
			cout<<"\t\tPLAYER 1 WIN THE GAME"<<endl;
			break;
			
		}
		
		if((arr[0][0]=='O'&&arr[0][1]=='O'&&arr[0][2]=='O')||(arr[1][0]=='O'&&arr[1][1]=='O'&&arr[1][2]=='O')||
		(arr[2][0]=='O'&&arr[2][1]=='O'&&arr[2][2]=='O')||(arr[0][0]=='O'&&arr[1][0]=='O'&&arr[2][0]=='O')||
		(arr[0][1]=='O'&&arr[1][1]=='O'&&arr[2][1]=='O')||(arr[0][2]=='O'&&arr[1][2]=='O'&&arr[2][2]=='O')||
		(arr[0][0]=='O'&&arr[1][1]=='O'&&arr[2][2]=='O')||(arr[0][2]=='O'&&arr[1][1]=='O'&&arr[2][0]=='O')){
			cout<<"\n\n\t\t*********  CONGRATULATIONS   *********"<<endl<<endl;
			cout<<"\t\tPLAYER 2 WIN THE GAME"<<endl;
			break;
		}
		
		
		if(arr[0][0]!=' '&&arr[0][1]!=' '&&arr[0][2]!=' '&&arr[1][0]!=' '&&arr[1][1]!=' '&&arr[1][2]!=' '&&arr[2][0]!=' '&&arr[2][1]!=' '&&arr[2][2]!=' '){
			cout<<"\n\n\t\tGAME DRAW !!"<<endl;
			break;
		}
	}
	cout<<"\n\t\tThanks for Playing Game Developed by Devesh Gupta ";
	cout<<"\n\n\t\tPress Any Key then ENTER to Jump to the Main Menu :"<<endl;
	cin>>ch;
	// To Replay making All the array Element to space
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			arr[i][j]=' ';
		}
	}
	main();	//main function calling
}


int main(){
	char option;
	system("cls");  //Console Clearance
	cout<<"____________________________________________________________________________________________"<<endl;
	cout<<"\t\t\t*******  Welcome To TIC-TAC-TOE  *******"<<endl;
	cout<<"____________________________________________________________________________________________"<<endl<<endl<<endl;
	cout<<"\t\t\t|| Press 1 To Play Game :             ||"<<endl;
	cout<<"\t\t\t|| Press 2 To Read Instruction :      ||"<<endl;
	cout<<"\t\t\t|| Press 3 To Exit From Game :        ||"<<endl;
	cout<<"____________________________________________________________________________________________"<<endl<<endl;
	cout<<"\t\t\t--this game is created by Devesh Gupta--"<<endl;
	cout<<"\t\t\t----------all rights reserved-----------"<<endl;
	cout<<"____________________________________________________________________________________________"<<endl<<endl<<endl;
	m :
	cout<<"\t\t\t|| Choose From Above Options : ";
	cin>>option;
	
	switch(option){
		case '1' :
			system("cls");
			cout<<endl<<endl;
			play();
			break;
		case '2' :
			system("cls");
			grid();
			instruction();
			break;
		case '3' :
			exit(0);
			break;
		default :	// Error message
			cout<<"\n\n\t\t\t||Please Enter the Valid Option :     ||"<<endl<<endl;
			goto m;  // Jumping to m lebel
	}	
}

void instruction(){
	char ch;
	cout<<"1. The game is played on a grid that's 3 squares by 3 squares."<<endl;
	cout<<"2. You are *, your friend is O. Players take turns putting their marks in empty squares."<<endl;
	cout<<"3. The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner."<<endl;
	cout<<"4. When all 9 squares are full, the game is over.";
	cout<<"\n\nPress Any Key then ENTER to Jump to the Main Menu !!";
	cin>>ch;
	main();
}
