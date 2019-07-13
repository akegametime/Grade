#include <iostream>

using namespace std;
int main()

{
int score ;

cout<<"Enter Score : ";
cin>>score;

if ((score>89.50)&&(score<=100)) {
   cout<<"Grade : A "<<endl;
}

else if ((score>79.50)&&(score<89.50)) {
	cout<<"Grade : B "<<endl;
}
else if ((score>69.50)&&(score<79.50)) {
	cout<<"Grade : C "<<endl;
}
else if ((score>59.50)&&(score<69.50)) {
	cout<<"Grade : D "<<endl;
}
else if  ((score>-1&&score<59.50))  {
	cout<<"Grade : F "<<endl;
}
else {
cout<<"Invalid Enter Your Score"<<endl;
}


return(0) ;
	
}

