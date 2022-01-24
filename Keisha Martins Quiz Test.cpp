#include <iostream>
using namespace std;
int gameintro,score;
char penultimate,final;
char question1answer,question2answer,question3answer,question4answer,question5answer,question6answer,question7answer,question8answer,question9answer,question10answer;
int main()
{
	cout<<"              Welcome to C++ quiz game            "<<endl;
	cout<<"              ------------------------             "<<endl;
	loop1:
	cout<<"Press 1 to Start"<<endl;
	cout<<"Press 2 to Exit" <<endl;
	cin>>gameintro;
	if(gameintro==1){
		cout<<"              Rules of the game                   "<<endl;
		cout<<"              -----------------                   "<<endl;
		cout<<"You are expected to answer 10 questions."<<endl;
		cout<<"You can skip a question and return to it later."<<endl;
		cout<<"To answer a question enter the right option on the keyboard and Press Enter."<<endl;
		cout<<"To skip a question Press N."<<endl;
		cout<<"To go back to previous question Press P."<<endl;
		cout<<"To submit press F."<<endl;
		cout<<"Please note that the game will accept any input for a question and regard it as the answer. \nRemember to check over your work for mistakes"<<endl;	
		cout<<endl;
    	cout<<endl;
    
    	loop2:
		cout<<"Question1"<<endl;
		cout<<"Which of the following is the correct identifier?"<<endl;
		cout<<"A. $var_name   B. VAR_123"<<endl<<"C. varname@  D. None of the above"<<endl;
		cout<<"Enter your answer ";
		cin>>question1answer;
		cout<<endl;
			if(question1answer=='P' || question1answer=='p'){
			cout<<"This is the first question"<<endl;
			cout<<endl;
			goto loop2;}
			else if(question1answer=='F'|| question1answer=='f'){
			penultimate=question1answer;
			goto loop12;}
			else if(question1answer=='N'|| question1answer=='n'){
			cout<<"Preparing next question. "<<endl;
			goto loop3;}
		else{
		loop3:
		cout<<"Question2"<<endl;
		cout<<"Which of the following is the address operator?"<<endl;
		cout<<"A. @  B. #"<<endl<<"C. &  D. %"<<endl;
		cout<<"Enter your answer ";
		cin>>question2answer;
		cout<<endl;
			if(question2answer=='P' || question2answer=='p'){
			cout<<"Preparing Previous question"<<endl;
			cout<<"You picked "<<question1answer<<endl;
			cout<<endl;
			goto loop2;}
			else if(question2answer=='F'|| question2answer=='f'){
			penultimate=question2answer;
			goto loop12;}
			else if(question2answer=='N'|| question2answer=='n'){
			cout<<"Preparing next question. "<<endl;
			goto loop4;
		}
		else{
		loop4:
		cout<<"Question3"<<endl;
		cout<<"Which of the following features must be supported by any programming language to become a pure object-oriented programming language?"<<endl;
		cout<<"A. Encapsulation B. Inheritance"<<endl<<"C. Polymorphism  D. All of the above"<<endl;
		cout<<"Enter your answer ";
		cin>>question3answer;
		cout<<endl;
			if(question3answer=='P' || question3answer=='p'){
			cout<<"Preparing Previous question"<<endl;
			cout<<"You picked "<<question2answer<<endl;
			cout<<endl;
			goto loop3;}
			else if(question3answer=='F'|| question3answer=='f'){
			penultimate=question3answer;
			goto loop12;}
			else if(question3answer=='N'|| question3answer=='n'){
			cout<<"Preparing next question. "<<endl;
			goto loop5;
		}
		else{
		loop5:
		cout<<"Question4"<<endl;
		cout<<"Which of the following refers to characteristics of an array?"<<endl;
		cout<<"A. An array is a set of similar data items.  B. An array is a set of distinct data items." <<endl<<"C. An array can hold different types of data types.  D. None of the above" <<endl;
		cout<<"Enter your answer ";
		cin>>question4answer;
		cout<<endl;
			if(question4answer=='P' || question4answer=='p'){
			cout<<"Preparing Previous question"<<endl;
			cout<<"You picked "<<question3answer<<endl;
			cout<<endl;
			goto loop4;}
			else if(question4answer=='F'|| question4answer=='f'){
			penultimate=question4answer;
			goto loop12;}
			else if(question4answer=='N'|| question4answer=='n'){
			cout<<"Preparing next question. "<<endl;
			goto loop6;
		}
		
        else{
		loop6:
		cout<<"Question5"<<endl;
		cout<<"If we stored five elements or data items in an array, what will be the index address or the index number of the array's last data item?"<<endl;
		cout<<"A. 2  B. 3"<<endl<<"C. 4  D. 5"<<endl;
		cout<<"Enter your answer ";
		cin>>question5answer;
		cout<<endl;
			if(question5answer=='P' || question5answer=='p'){
			cout<<"Preparing Previous question"<<endl;
			cout<<"You picked "<<question4answer<<endl;
			cout<<endl;
			goto loop5;}
			else if(question5answer=='F'|| question5answer=='f'){
			penultimate=question5answer;
			goto loop12;}
			else if(question5answer=='N'|| question5answer=='n'){
			cout<<"Preparing next question. "<<endl;
			goto loop7;
		}
		else{
		loop7:
		cout<<"Question6"<<endl;
		cout<<"Which of the following is the correct syntax for declaring the array?"<<endl;
		cout<<"A.int array{}; B. int array [5];	"<<	endl<<"C. Array[5];  D. None of the above" <<endl;
		cout<<"Enter your answer ";
		cin>>question6answer;
		cout<<endl;
			if(question6answer=='P' || question6answer=='p'){
			cout<<"Preparing Previous question"<<endl;
			cout<<"You picked "<<question5answer<<endl;
			cout<<endl;
			goto loop6;}
			else if(question6answer=='F'|| question6answer=='f'){
			penultimate=question6answer;
			goto loop12;}
			else if(question6answer=='N'|| question6answer=='n'){
			cout<<"Preparing next question. "<<endl;
			goto loop8;
		}
		else{
		loop8:
		cout<<"Question7"<<endl;
		cout<<"Which of the following is the correct syntax for accessing the first element?"<<endl;
		cout<<"A. array[2]; B. array[0]"<<endl<<"C. Array[5]; D. array[1]"<<endl;
		cout<<"Enter your answer ";
		cin>>question7answer;
		cout<<endl;
			if(question7answer=='P' || question7answer=='p'){
			cout<<"Preparing Previous question"<<endl;
			cout<<"You picked "<<question6answer<<endl;
			cout<<endl;
			goto loop7;}
			else if(question7answer=='F'|| question7answer=='f'){
			penultimate=question7answer;
			goto loop12;}
			else if(question7answer=='N'|| question7answer=='n'){
			cout<<"Preparing next question. "<<endl;
			goto loop9;
		}
		else{
		loop9:
		cout<<"Question8"<<endl;
		cout<<"Which of the following gives the 4th element of the array?"<<endl;
		cout<<"A. array[2]; B.  array[3]"<<endl<<"C. Array[5]; D. array[1]"<<endl;
		cout<<"Enter your answer ";
		cin>>question8answer;
		cout<<endl;
			if(question9answer=='P' || question9answer=='p'){
			cout<<"Preparing Previous question"<<endl;
			cout<<"You picked "<<question7answer<<endl;
			cout<<endl;
			goto loop8;}
			else if(question9answer=='F'|| question9answer=='f'){
			penultimate=question9answer;
			goto loop12;}
			else if(question9answer=='N'|| question9answer=='n'){
			cout<<"Preparing next question. "<<endl;
			goto loop10;
		}
		else{
		loop10:
		cout<<"Question9"<<endl;
		cout<<"Which type of memory is used by an Array in C++ programming language?"<<endl;
		cout<<"A. Contiguous B. None contiguous"<<endl<<"C. Both A and B  D. Not mentioned "<<endl;
		cout<<"Enter your answer ";
		cin>>question9answer;
		cout<<endl;
			if(question9answer=='P' || question9answer=='p'){
			cout<<"Preparing Previous question"<<endl;
			cout<<"You picked "<<question8answer<<endl;
			cout<<endl;
			goto loop9;}
			else if(question9answer=='F'|| question9answer=='f'){
			penultimate=question9answer;
			goto loop12;}
			else if(question9answer=='N'|| question9answer=='n'){
			cout<<"Preparing next question. "<<endl;
			goto loop11;
		}
		else{
		loop11:
		cout<<"Question10"<<endl;
		cout<<"Which one of the following is the correct definition of the 'is_array();'function in C++?"<<endl;
		cout<<"A. It checks that the specified variable is of the array or not B. It checks that the specified array of single dimension or not" <<endl<<"C. It checks that the array specified of multidimension or not D. Both B and C"<<endl;
		cout<<"Enter your answer ";
		cin>>question10answer;
		cout<<endl;
			if(question10answer=='P' || question10answer=='p'){
			cout<<"Preparing Previous question"<<endl;
			cout<<"You picked "<<question9answer<<endl;
			cout<<endl;
			goto loop10;}
			else if(question10answer=='F'|| question10answer=='f'){
			penultimate=question10answer;
			goto loop12;}
			else if(question10answer=='N'|| question10answer=='n'){
			cout<<"This is the last question. "<<endl;
			goto loop11;
		}
		else{
		cout<<"This is the last question"<<endl;
		cout<<"Press F to submit"<<endl;
		cout<<"Press P to go back to Previous Question"<<endl;
		cout<<"Enter your answer ";
		cin>>penultimate;
		loop12:
		if(penultimate=='F'|| penultimate == 'f'){
		cout<<"Processing"<<endl;
		cout<<endl;
			if(question1answer=='B' || question1answer=='b'){
			score=score + 1;}
			if(question2answer=='C' || question2answer=='c'){
			score=score + 1;}
			if(question3answer=='D' || question3answer=='d'){
			score=score + 1;}
			if(question4answer=='A' || question4answer=='a'){
			score=score + 1;}
			if(question5answer=='C' || question5answer=='c'){
			score=score + 1;}
			if(question6answer=='B' || question6answer=='b'){
			score=score + 1;}
			if(question7answer=='B' || question7answer=='b'){
			score=score + 1;}
			if(question8answer=='B' || question8answer=='b'){
			score=score + 1;}
			if(question9answer=='A' || question9answer=='a'){
			score=score + 1;}
			if(question10answer=='A' || question10answer=='a'){
			score=score + 1;}
	
			cout<<"You scored "<<score<<" out of 10"<<endl;
			cout<<"To view your script Press V "<<endl;
			cin>>final;
			if(final=='V' || final=='v'){
				cout<<"Question1"<<endl;
		cout<<"Which of the following is the correct identifier?"<<endl;
		cout<<"A. $var_name   B. VAR_123"<<endl<<"C. varname@  D. None of the above"<<endl;
		cout<<"Correct Option: B" <<"			Your Choice: "<< question1answer <<"           ";
		if(question1answer=='B' || question1answer=='b'){
			cout<<"Correct!"<<endl;
		}
		else{
			cout<<"Wrong!"<<endl;
		}
		cout<<endl;
		cout<<"Question2"<<endl;
		cout<<"Which of the following is the address operator?"<<endl;
		cout<<"A. @  B. #"<<endl<<"C. &  D. %"<<endl;
		cout<<"Correct Option: C"<<"			Your Choice: "<< question2answer <<"           ";
		if(question2answer=='C' || question2answer=='c'){
			cout<<"Correct!"<<endl;
		}
		else{
			cout<<"Wrong!"<<endl;
		}
		cout<<endl;
		cout<<"Question3"<<endl;
		cout<<"Which of the following features must be supported by any programming language to become a pure object-oriented programming language?"<<endl;
		cout<<"A. Encapsulation B. Inheritance"<<endl<<"C. Polymorphism  D. All of the above"<<endl;
		cout<<"Correct Option: D"<<"			Your Choice: "<< question3answer <<"           ";
		if(question3answer=='D' || question3answer=='d'){
			cout<<"Correct!"<<endl;
		}
		else{
			cout<<"Wrong!"<<endl;
		}
		cout<<endl;
		cout<<"Question4"<<endl;
		cout<<"Which of the following refers to characteristics of an array?"<<endl;
		cout<<"A. An array is a set of similar data items.  B. An array is a set of distinct data items." <<endl<<"C. An array can hold different types of data types.  D. None of the above" <<endl;
		cout<<"Correct Option: A"<<"			Your Choice: "<< question4answer <<"           ";
		if(question4answer=='A' || question4answer=='a'){
			cout<<"Correct!"<<endl;
		}
		else{
			cout<<"Wrong!"<<endl;
		}
		cout<<endl;
		cout<<"Question5"<<endl;
		cout<<"If we stored five elements or data items in an array, what will be the index address or the index number of the array's last data item?"<<endl;
		cout<<"A. 2  B. 3"<<endl<<"C. 4  D. 5"<<endl;
		cout<<"Correct Option: C"<<"			Your Choice: "<< question5answer <<"           ";
		if(question5answer=='C' || question5answer=='c'){
			cout<<"Correct!"<<endl;
		}
		else{
			cout<<"Wrong!"<<endl;
		}
		cout<<endl;
		cout<<"Question6"<<endl;
		cout<<"Which of the following is the correct syntax for declaring the array?"<<endl;
		cout<<"A.int array{}; B. int array [5];	"<<	endl<<"C. Array[5];  D. None of the above" <<endl;
		cout<<"Correct Option: B"<<"			Your Choice: "<< question6answer <<"           ";
		if(question6answer=='B' || question6answer=='b'){
			cout<<"Correct!"<<endl;
		}
		else{
			cout<<"Wrong!"<<endl;
		}
		cout<<endl;
		cout<<"Question7"<<endl;
		cout<<"Which of the following is the correct syntax for accessing the first element?"<<endl;
		cout<<"A. array[2]; B. array[0]"<<endl<<"C. Array[5]; D. array[1]"<<endl;
		cout<<"Correct Option: B"<<"			Your Choice: "<< question7answer <<"           ";
		if(question7answer=='B' || question7answer=='b'){
			cout<<"Correct!"<<endl;
		}
		else{
			cout<<"Wrong!"<<endl;
		}
		cout<<endl;
		cout<<"Question8"<<endl;
		cout<<"Which of the following gives the 4th element of the array?"<<endl;
		cout<<"A. array[2]; B.  array[3]"<<endl<<"C. Array[5]; D. array[1]"<<endl;
		cout<<"Correct Option: B"<<"			Your Choice: "<< question8answer <<"           ";
		if(question8answer=='B' || question8answer=='b'){
			cout<<"Correct!"<<endl;
		}
		else{
			cout<<"Wrong!"<<endl;
		}
		cout<<endl;
		cout<<"Question9"<<endl;
		cout<<"Which type of memory is used by an Array in C++ programming language?"<<endl;
		cout<<"A. Contiguous B. None contiguous"<<endl<<"C. Both A and B  D. Not mentioned "<<endl;
		cout<<"Correct Option: A"<<"			Your Choice: "<< question9answer <<"           ";
		if(question9answer=='A' || question9answer=='a'){
			cout<<"Correct!"<<endl;
		}
		else{
			cout<<"Wrong!"<<endl;
		}
		cout<<endl;
		cout<<"Question10"<<endl;
		cout<<"Which one of the following is the correct definition of the 'is_array();'function in C++?"<<endl;
		cout<<"A. It checks that the specified variable is of the array or not B. It checks that the specified array of single dimension or not" <<endl<<"C. It checks that the array specified of multidimension or not D. Both B and C"<<endl;
		cout<<"Correct Option: A"<<"			Your Choice: "<< question10answer <<"           ";
		if(question10answer=='A' || question10answer=='a'){
			cout<<"Correct!"<<endl;
		}
		else{
			cout<<"Wrong!"<<endl;
		}
		cout<<endl;
		cout<<"Thank you. You are now leaving the game."<<endl;
				
			}
			else{
			cout<<"Thank you. You are now leaving the game."<<endl;
			}
	}
	    else if(penultimate=='P'|| penultimate == 'p'){
	    	cout<<"Preparing Previous question"<<endl;
			cout<<"You picked "<<question10answer<<endl;
	    	cout<<endl;
	    	goto loop11;
	    }
		else{
		cout<<endl;
		goto loop12;
		}}}}}}}}}}}}
		
	
	else if(gameintro==2){
		cout<<"Thank you. You are now leaving the game."<<endl;
	}
	else{
		cout<<"You entered a wrong value. "<<endl;
		goto loop1;
	}
}