 #include<iostream>
 using namespace std;
 int main()
 {
 	int am;
 	cout<<"Enter the amount: "<<endl;
 	cin>>am;
 	
 	int rs1, rs20, rs50, rs100;
 	switch(1)
 	{
 		case 1: rs100=(am/100);
 		am=am%100;
 		cout<<"No. of 100rs notes = "<<rs100<<endl;
 		case 2: rs50=(am/50);
 		am=am%50;
 		cout<<"No. of 50rs notes = "<<rs50<<endl;
 		case 3: rs20=(am/20);
 		am=am%20;
 		cout<<"No. of 20rs notes = "<<rs20<<endl;
 		case 4: rs1=(am/1);
 		am=am%1;
 		cout<<"No. of 1rs notes = "<<rs1<<endl;
 		
	 }
 	
	 return 0;
 }
