#include <iostream>
#include <iomanip> // for setw and setfill functions
#include<cmath>

using namespace std;

/*   ****************** SHEET 1 *****************************   */


// General Notes
 
// 	double x = 7;	cout << (x/4) <<endl; , gives 1.75
// 	double x = 7; 	cout << (x%4) <<endl; , gives error
// 	double x = 5/7; cout << x << endl; , gives zero
//  char x = 'abcd' is valid because int is 4 bytes on my computer. More than 4 characters are not allowed.
// The 4 characters are not being put into a char variable, but into an int character constant which is then assigned to a char. 
// So when you cout the char , only "d" is printed.if a computer has int that occupies 8 bytes,
//then char x = 'abcdefgh'; will be valid. NOTE this is called a multicharachter constant.


void s1_q1()
{
	char ch ='abcd';
	double $ = 12.6; // THIS IS VALID
	double $1 = 12.6; // THIS IS VALID
	cout << ch << "\n";
	cout <<"Size of integer is " << sizeof(int) << " Bytes" << endl;

}

void s1_q5()
{
	int x=3;
	int y=4 ;
	int z=5;


	//cout << (x>y || y<z) <<endl;
	// precedence link :: http://en.cppreference.com/w/cpp/language/operator_precedence
	//cout << (x%y + z == x + z) <<endl;
	//cout << (x/y +++z) <<endl; // gives 5
	//	cout << (x/y + ++z) <<endl; // gives 6
	//	cout << (++++z) <<endl; // gives 7  if you comment all the above
 	//	cout << (++++++z) <<endl; // gives 8  if you comment all the above
    // cout<< (++z) << z << (z++) << endl;  // if z = 5 , prints 7  7  5
	// cout<< (++z) << z << (++z) << endl;  // if z = 5 , prints 7  7  7
	// note for the previous two statements , the order of evaluation is not specified , that's why strange things happen
	//  cout << (++z)  << endl ; cout << z << endl; cout  << z++ << endl; // if z = 4 , prints 5  5  5 , as expected
	//cout << x+++z <<endl;  // Gives 8 . this is equivalent to x++  + z;
	//	cout << x+ ++z <<endl; // gives 9
	//cout << ((int)	sqrt(floor(fabs(-144.45)))+(int)ceil(48.55)%7>10)<<endl; 
	// The previous statement prints 1 as all to the left of the ">" operator  evaluates to 12 , which is larger than 10.
	//cout << (double)(x/y)+z <<endl; // 5
	//cout << (double)x/y+z <<endl;   // 5.75
	//cout <<(	!(y<=2) &&x%2==0	) <<endl; // gives 0 . "==" has a precedence higher than && . this is equivalent to !(y<=2) &&(x%2==0)

}

void s1_q6()
{
	double PI = 22.0/7.0 ;
	double b,c,x,d;
	cout << "Please Enter input in the following order:: b c x d \n";
	cin >> b>>c>>x>>d;
	cout <<"b c x d are :: " << b<<" "<<c<<" "<<x << " " <<d << endl;

	double r = d * PI/180 ;

	double Ans = sqrt((b+c) - (2*b*c*cos(x*r))); // NOTE the values inside the sqrt have to be positive.
	cout << "ANS IS :: " << Ans <<endl;

}

void s1_q7()
{

	int x =10;
	int y = 5;
	int z= 20;

	cout << (--z - z--) <<endl; // gives zero
	//cout << (--y+ ++z-y++/x++) << endl; // gives 25 => 4 + 21 - (4/10)
	return;
}

void s1_q11()
{
	 int a = 5 ;
	 int b = 10;
	 int c = 15;
	 bool flag = 1;

	 cout << (c==a+b || !flag) << endl; //  == is stronger than || . answer is "1"
	 cout << (a!=7&& flag || c>=6) << endl; // != is stronger than && , while && is stronger than || 
	 cout << (!(b<=12)&&a%2==0) << endl; // == is stronger than && . the rightmost expession is false and hence all false .
	 cout << (!(a>5||c<a+b)) << endl; // true.

}


void s1_q12()
{
	cout << "Enter the charachter you wish to show the ascii value of"
		<< endl;
	char c ;
	cin >> c ;

	cout << "Ascii value in decimal is " << dec <<(int) c << 
		" , while in hexadecimal is  " << hex << (int) c << endl;

	printf ("decimal is %d , while hexadecimal is %x  \n",c,c ) ; 
}

void s1_q13()
{
	// MUST  #include <iomanip> for setw(int n);
	// if you don't use <<left , then the filling will be on the left which is not what is required.
	cout << setw(7) << setfill(' ') << left << 1990 << setw(8) << setfill(' ')<< left <<   124 <<" " << 13 <<endl;
	cout << setw(7) << setfill(' ')<< left << 1991 << setw(8) << setfill(' ')<< left << 7290 <<" "<< 13 <<endl;
	cout << setw(7) << setfill(' ')<< left << 1992  << setw(8) << setfill(' ')<< left<< 11300 <<" "<< 13<<endl;
	cout << setw(7) << setfill(' ')<< left << 1993  << setw(8) << setfill(' ')<< left<< 16200 <<" "<< 13 <<endl;

}


/*   ****************** SHEET 2 *****************************   */

void s2_q1()
{
	int x = 2;
	if (x >= 0)
	x++;
	else if(x >= 1)
	x += 10;

	cout << x << endl; // x =3
	x = 2;
	if (x >= 0)
	x++;
	if(x >= 1)
	x += 10;
	cout << x <<endl; // x = 13;
}

void s2_q2()
{
	// some syntax errors in the original sheet
	float x = 25.0, y;
	cin >> y;
	if (y != (x - 10.0))
	x = x - 10.0;
	else
	x = x / 2.0;
	cout << "x=" << x <<" ,y= "<< y << endl;

	 x = 25.0;
	cin >> y;
	if (y < 12.0)
	{
	if(y >= 0.0)
	x = 5 * y;
	else
	x = 2 * y;
	}
	else
	x = 3 * y;
	cout << "x= "<< x <<" ,y= "<< y << endl;

}

void s2_q3()
{
	int x;
	cout << "Enter the integer \n";
	while (cin>>x)
	{
	if(x%2==0) 
		cout << "EVEN \n";
	else
		cout << "ODD\n";
	}

}

void s2_q4()
{
	int x = 3;
	int y = 3;
	switch(x+3)
		{
			case 6: y = 1;
			default: y += 1;
		}
	cout << y <<endl;

}

void s2_q5()
{
	int a ;
	int x =0;
	cout << "Enter a\n";
	while (cin >>a) 
	{
		x=0;
		switch(a)
		{
		case 1 : x+=5;
			break;
		case 2 : x+=10;
			break;
		case 3 : x+=16;
			break;
		case 4 : x+=34;
			break;
		}

		cout << "x is " << x <<endl;
	}

}

void s2_q6()
{
	int num1,num2,num3;
	cout << "ENTER THREE NUMBERS, SEPARATE BY SPACE \n";


	while (cin >> num1>>num2>>num3)
		{
			int temp;

			if(num1 > num2)
			{
				temp=num1;
				num1 = num2;
				num2 = temp;
			}

	
			if(num2 > num3)
			{
				temp=num2;
				num2 = num3;
				num3 = temp;
			}

			// Second iteration
				if(num1 > num2)
			{
				temp=num1;
				num1 = num2;
				num2 = temp;
			}

					/* 
			worst case happens when  sth like 
			num1,num2,num3 =  9,8,7 respectively

			first if condition will make 

			8	9	7

			second if condition will make 

			8	7	9

			now we are sure that the rightmost digit is the largest number for sure.

			we need to arrange the first and the second

			so we reach  
			7	8	9  , as required.
			*/


		cout << "NOW SORTED " << num1 <<num2<<num3 << endl;
		}
}

void s2_q7()
{
	// FIND the average salesValue per month you have to sell , in order to have 80,000 per year for yourself.

	float baseSalaryPerYear = 5000*12 ;
	float salesValue =0;
	float totalSalary = 0;
	while((totalSalary-80000)<.001)
	{
		salesValue ++;
	float commision = (salesValue < 5000)?(8*salesValue/100.0) :(salesValue<10000)? (10*salesValue/100.0) : (12*salesValue/100.0);
	commision = 12*commision;
	totalSalary = baseSalaryPerYear + commision;
	}

	cout << "SalesValue = "<<salesValue << " ,TotalSalary equals " << totalSalary <<endl;

}

void s2_q7_v2()
{
	// Another solution
	// FIND the average salesValue per month you have to sell , in order to have 80,000 per year for yourself.

	float baseSalaryPerYear = 5000*12 ;
	float salesValue;
	float totalRequiredSalary = 80000;
	float commision ;

	commision = (totalRequiredSalary - baseSalaryPerYear)/12 ;

	if(commision <= 5000*8/100.0)
	{salesValue = commision *100/8.0f; }
	else if(commision <= 10000*100/10.0f)
	{salesValue = commision *100/10.0f;}
	else
	{salesValue = commision *100/12.0f;}

	cout << "salesValues is "<< salesValue << endl;
}

void s2_q8()
{
	float x,y;
	char c =' ' ;
	cout << "Enter two numbers followed by a choice of operation . separate by space. choices include :: " <<endl;
	cout << " + for addition \n - for subtraction \n * for multiplication \n / for division \n a for average \n > for maximum \n < for minimum \n";
	
	while (cin >> x >>y>>c)
	{

		float result = 0;

		switch(c)
		{
		case '+' : result = x+y; 
			break;
		case '-' : result = x-y;
			break;
		case '*' : result = x*y;
			break;
		case '/' : result = x/y;
			break;
		case 'a' : result = (x+y)/2.0 ;
			break;
		case '>' : result = (x>y)?x:y; 
			break;
		case '<' : result = (x>y)?y:x;
			break;
		default : result = 100;
	
	
		}

		cout << "Required Result is :: " <<result <<endl;
	}
}

void s2_q9()
{
	int choice ;
	cout << "Enter your choice : 1 for rectangle , 2 for square , and 3 for circle\n";

	cin >> choice;
	
	if(choice == 1)
	{
		float length,width;	
		cout << "Enter length and width \n";
		cin>>length>>width;

		cout << "mo7eet is " << 2*(length+width) << " , mesa7a is " << length*width <<endl;
	
	}
	else if(choice ==2)
	{
		float length;	
		cout << "Enter length  \n";
		cin>>length;

		cout << "mo7eet is " << 2*(length+length) << " , mesa7a is " << length*length <<endl;
	
	}
	else if(choice ==3)
	{
		float radius ;
		cout << "Enter Radius \n";
		cin>>radius;

		cout << "mo7eet is " << 2*3.14*radius << " , mesa7a is " << 3.14*radius*radius <<endl;

	
	}

}



/*   ****************** SHEET 3 *****************************   */

void s3_q1()
{
	int i,j;
	int counter1 = 0;
	int counter2 =0;

	for ( i=0; i<10; ++i)
	{
		for(j=0; j<i; j++)
		{
			cout << "i*j is " << i*j <<endl;
			counter1++;
			//cout << "i = " << i << " , j = " << j << " counter1 = "<< counter1 <<endl;	
		}
		cout << "Good Luck\n";
		counter2++;
    }
	cout << "\n" ;
	cout << (1+2+3+4+5+6+7+8+9) <<endl;
	cout << "Number of first cout is " <<counter1 <<endl;
	cout << "Number of second cout  is " <<counter2 <<endl;

}

void s3_q2()
{
	int x, i, n = 2 , count=0;

	i = 0;

	while(i<n)
	{
	cin >> x;
	if (x==i) ++count;
	i++;
	}

	cout << "count is "<< count << endl;

}

void s3_q3_a()
{
	int sum = 0;
	int n = 3;

	for(int i = 1 ; i <(n+1) ; i++)
	{
		sum += i*i ;
	}

	cout << "sum is "<< sum <<endl;
}

void s3_q3_b()
{
	float sum = 0;
	int n = 3;

	for(int i = 1 ; i <(n+1) ; i++)
	{
		sum += 1.0/i ;
	}

	cout << "sum is "<< sum <<endl;
}

void s3_q3_c()
{
	float sum = 0;
	int n = 3;

	for(int i = 1 ; i <(n+1) ; i++)
	{
		sum += (2*i-1)*1.0/(i*i) ; // NOTE :: MUST MAKE SURE THE DIVISION IS NOT INT DIVISOIN
	}

	cout << "sum is "<< sum <<endl;
}

void s3_q3_d()
{
	float sum = 0;
	int n = 3;
	int k = 4;

	for(int i = 1 ; i <(n+1) ; i++)
	{
		sum += k*i ; // NOTE :: MUST MAKE SURE THE DIVISION IS NOT INT DIVISOIN
	}

	cout << "sum is "<< sum <<endl;
}

void s3_q3_e()
{

	int n = 1;
	int A = 4;
	int B = 5;
	
	float sum = 1.0/A; // NOTE :: MUST MAKE SURE THE DIVISION IS NOT INT DIVISOIN
	for(int i = 1 ; i <(n+1) ; i++)
	{
		sum += 1.0/(A+B*i) ; // NOTE :: MUST MAKE SURE THE DIVISION IS NOT INT DIVISOIN
	}

	cout << "sum is "<< sum <<endl;
}

void s3_q4()
{
 int currentPower = 1;
 int maxPower = 1233;
 double x = 22/7.0;
 x = x/6.0;
 double sinX = 0;
 int sign = 1;

 for(currentPower=1;currentPower<=maxPower;currentPower+=2)
 {
	 double bast = 1;
	 for(int i =0 ; i<currentPower ; i++)
	 {
		bast = bast * x;
	 }
	 double maqam = 1;
	for(int i = 1 ; i<=currentPower ; i++)
	 {
		maqam = maqam * i;
	 }

	 sinX  = sinX  + sign*(bast*1.0/maqam);
	 sign = -1*sign;
 }


 cout << "sin(x) is " << sinX <<endl;
}

void s3_q5()
{
	long num=656893;
	do
	{
	cout << (num % 10) << " " ;
	num /= 10;
	}while (num != 0);
	cout << endl;
	
}

void s3_q6()
{
	int sum = 0;

	for(int i =1 ; i<101; i++)
	{
		if( (i%2 ==0) && (i%3 == 0) ) // or equivalently if((i%6 ==0))
			cout << i << endl;
	}
}

void s3_q7()
{
	int n ;
	cout << "Enter the number of records \n";
	cin>>n;

	int max = -1;
	int min = 1000;
	int record ;
	int sum = 0;

	for(int i =0 ; i<n ; i++)
	{
		cout << "Enter record # "<< i <<endl;
		cin >>record;

		if(record>max) max = record;
		if(record <min) min = record;
		sum +=record;
	}

	cout << "Average is " << sum*1.0/n << " Max is " <<max << " Min is " << min <<endl;

}

void s3_q8()
{

	int countWithSpaces = 0;
	int countWithoutSpaces = 0;
	int countWords=0;
	char c ;
	char prev_c ='A' ; // initilization . 'A' doesnot have special meaning , just any value other than the white space ' '.
	while ((c = getchar()) != '\n')
		{

			countWithSpaces ++;
			if(c !=' ')
				countWithoutSpaces ++;
			if(c==' ' && prev_c != ' ') // number of words is the number of distinct discontinuous spaces.
			{
				countWords++;
			}
			prev_c = c;
		}

	cout << "number of characters (including spaces) equals " << countWithSpaces <<endl;
	cout << "number of characters (without spaces) equals " << countWithoutSpaces <<endl;
	cout << "number words " << countWords+1 <<endl;
}

void s3_q9()
{
	float A_Pop = 52;
	float B_Pop = 85;
	int year ;
	for( year = 0 ; !(A_Pop>B_Pop) ; year++)
	{
		A_Pop += 6.0*A_Pop/100; 
		B_Pop += 4.0*B_Pop/100;
		cout << "Year # " << setw(5) << left << year << " A_Pop is " << setw(16) << left << A_Pop << " B_Pop is " << setw(16) << left << B_Pop <<endl;
	}

	cout << "Required Years are " << year-1 <<endl ;

}

void s3_q10()
{

	// NOTE :: A double datatype will not be accurate in large numbers.
	// if you need accurate factorial value , you must use non-floating point numbers ( integers)
	// The largest integeral positive data type is the unsigned long long .
	// when the value of the factorial exceeds the limit of unsinged long long , i.e 2^64-1 , overflow occurs, and completely wrong answer appears.
	// however, if we use a double datatype instead , a correct answer will be there , but not too accurate.
	// we find that the unsigned long long fails when we calculate factorial of 21 .
	// The maximum possible value of "accurate" factorial is then 20.

	unsigned long long factorial = 1; // An unsigned long long is 64 bits 
	double doubleFact = 1; // for comparison
	double maxLongLong = pow(2.0f,64)-1; // the maximum value of unsinged int int turns out to be nearly 1.8 * 10^19
	cout << maxLongLong <<endl;

	int n ;
	cout << "Enter n \n";
	while(cin>>n)
	{
	
	 factorial = 1; // 64 bits
	 doubleFact = 1;

	for(int i = 1; i<=n ; i++)
	{
		factorial = factorial*i;
		doubleFact = doubleFact *i;
	}
	
	cout << "factorial of " << n << "  is :: " << factorial <<endl;
	cout << "factorial In double of " << n << "  is :: " << doubleFact <<endl;
	cout << "Enter n \n";
	}


}

int main()
{
	//int x ;
	//cin >> x;
	//(x==5)?(cout<<5<<endl):(x==4)?(cout<<4<<endl):(cout << "HI" <<endl);
	s2_q7();



	system("pause");
	return 0;
}