?#include <iostream>
#include <iomanip> // for setw and setfill functions
#include<cmath>

#include <limits>
#include <cstddef>
#include <conio.h>

#include <map>
#include <cstdio>
#include<string>

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

// NOTE THERE IS ANOTHER SOLUTION s2_q7_v2
// THIS SOLUTION WORKS BUT IS NOT EFFICIENT , HENCE NOT PREFERABLE
void s2_q7_v1()
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
	else if(commision <= 10000*10/100.0f)
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
			// NOTE :: cin>>c  ignores white spaces altogether. Cant be used here, even if we type inside the loop "if (c=='\n') break;" it won't work
			countWithSpaces ++;
			if(c !=' ')
				countWithoutSpaces ++;
			if(c==' ' && prev_c != ' ') // number of words is the number of distinct discontinuous spaces.
			{
				countWords++;
			}
			prev_c = c;
		}
	if(prev_c ==' ')countWords--; // To handle the case where you enter "Ahmed ". without this line of code, the program will consider these two words.
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
//	double maxLongLong = pow(2.0f,64)-1; // the maximum value of unsinged int int turns out to be nearly 1.8 * 10^19
//	cout << maxLongLong <<endl;

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


/*   ****************** SHEET 4 *****************************   */

int s4_q1_func1(int x)
{
	x+=10;
	return x;
}

void s4_q1_func2(int &x)
{
	x+=10;
}

void s4_q1()
{

	int x = 0;
cout << s4_q1_func1(x) <<endl;
s4_q1_func1(x);
cout<< x <<endl;
s4_q1_func2(x);
cout<< x <<endl;


}


bool s4_q2_is_prime(int n)
{

	if(n<2) return 0;
	for(int i=2 ; i<=sqrt(n*1.0f); i++)
	{
		if(n%i == 0) return 0;
	}
	return 1;

}

void s4_q2()
{
	int num;
	cout << "Enter number to test if prime or not \n";
	while(cin>>num)
	{
		(s4_q2_is_prime(num)==1)? cout <<"PRIME!\n":cout<<"Not Prime \n";
		cout << "Enter number to test if prime or not \n";
	}

}

long long s4_q3_factorial_v1(int n)
{
if(n==0) return 1;
return n*s4_q3_factorial_v1(n-1);
}

long long s4_q3_factorial_v2(int n)
{
	long fact = 1;
	for(int i= 1 ; i<=n;i++)
	{
		fact*=i;
	}
return fact;
}

void s4_q3( int n)
{
	cout << s4_q3_factorial_v1(n) <<endl;
	cout << s4_q3_factorial_v1(n) << endl;

}

double s4_q4_calculate(int x,int R)
{
	return 1.0*(s4_q3_factorial_v1(x))/((s4_q3_factorial_v1(R))*(s4_q3_factorial_v1(x-R)));
}
void s4_q4(int x,int R)
{
	cout << s4_q4_calculate(x,R) <<endl;
}


int s4_q5(long x)
{
	int counter = 0;
	while(x%10 !=0)
	{
	counter++;
	cout << x%10;
	x/=10;
	}
	cout <<endl;
	return counter;
}

int s4_q6(int n , int k)
{
	if(k<1) return -9999;
	for(int i = 1 ; i<k ; i++)
	{
	n/=10;
	}
	return n%10;

}

int s4_q7()
{

float sum = 0;

int count = 0;
while(sum<2)
{
sum+= 1.0/(count+1); // Do not devide by zero
count++;
}


return count-1; // The (count -1)  is because you need the number of terms such that the total summation does not exceed 2.
// if you print "sum" now it will be larger than 2 , hence you need to subtract 1 .


}

int s4_q8()
{

	double MyPi = 0;
	int sign = 1;

	int NumTerms = 0;
	int i ;

	int downward_flag = 1;

	// NOTE : here PI when you compute the first term , and multiply by 4 , you will have Pi= 4. This means you start LARGER than the value
	// specified in the problem and start to get smaller to reach the specified boundary.



	for( i = 1 ;( MyPi==0 )|| (MyPi*4 > 3.14159)  ; i+=2)
	{
		// Note : the condition  ( MyPi==0 )|| (MyPi*4 > 3.14159) doesn't need to depend on 'i' at all.
		NumTerms ++;
		MyPi += sign*1.0/i ;
		sign = -sign;
		cout << i << "   " << 4*MyPi <<endl;

	}

	// 	// If the problem means this downward transition , then number of items to sum BEFORE we cross the boundary will be only 1 item,
	//because 4(1-(1/3)) is  less than 3.14159. If that is the case then uncomment the following line

	//	return NumTerms-1;

	// ELSE if it means upward transition

	// Upward transition
	for(  ; (MyPi*4 < 3.14159)  ; i+=2)
	{
		
		NumTerms ++;
		MyPi += sign*1.0/i ;
		sign = -sign;
	}

	return NumTerms-1; 

}


char s4_q9_ToUpper(char c)
{
 if(c>='a' && c<='z') // Ascii code for small letters. 
				return c-('a'-'A');
}

char s4_q9_ToLower(char c)
{
	if(c >='A' && c<='Z') // Ascii code for capital letters.
				return c+'a'-'A';
}


void s4_q10()
{

		cout << "Enter the sentence you want to transform\n" ;
		const int SIZE = 100;
		int TotalCount = 0;
		int NumCapital = 0;

		char c;
		while(cin>>c && TotalCount<100)
		{
			if (c == '.') // Ascii code for period '.'
				break;

			if(c>='A' && c<='Z') // Ascii code for all capital letters
				NumCapital++;
					
			TotalCount ++;
		}
	
	cout << "NumCapitals = " << NumCapital <<endl; 	
}

void my_numeric_limits()
{
	 std::cout 
		      << "short: " << std::dec << std::numeric_limits<short>::max()
              << '\n'
			  << "unsigned int: " << std::dec << std::numeric_limits<unsigned int>::max()
			  << "\n or: " << std::defaultfloat << (double)std::numeric_limits<unsigned int>::max()<<'\n'
			  << "unsigned long long: " << std::dec << std::numeric_limits<unsigned long long>::max()
              << "\n or: " << std::defaultfloat << (double)std::numeric_limits<unsigned long long>::max()<<'\n' 
              << "float: " << std::numeric_limits<float>::max()
              << '\n'
              << "double: " << std::defaultfloat << std::numeric_limits<double>::max()
              << '\n';


}


float s4_q11_v1(float x)
{
	return sin(x);
}

double s4_q11_v2(double x , unsigned long long M)
{
	double result = x;
	double intermediateResult = x;

	for( int i = 1 ; i<=M ; i++)
	{
		//Before entering the loop  intermediateResult = x ;

		 intermediateResult = -1*intermediateResult*(x*x)/((2*i+1)*(2*i));
		/*
			After iteration #1 : intermediateResult  = -x^3/(3!)
			After iteration #2 : intermediateResult  = +x^5/(5!)
			After iteration #3 : intermediateResult  = -x^7/(7!)
			
			And so on. 
			This helps us solve the overflow problem.
		*/

	   	result = result +  intermediateResult;
	}
return result;
}



double s4_q12(float x)
{
	double sum = 0;
	float e = 2.71828f;
	for(int t= 0 ; t<=100 ; t++)
	{
		sum+= pow(e,-x*t*1.0f);
	}

return sum;
}

int s4_q13_f(int x, unsigned int n)
{
	if(n==0)return 1;
	if(n%2==0)return s4_q13_f(x*x,n/2);
	return x*s4_q13_f(x*x,n/2);
}


void s4_q14()
{
	// COMMENTS ONLY 
	/*
	Note : static local variables inside a function are initialized ONLY once , regardless of the number of times a function is called.

	*/

}

void s4_q15()
{
	// COMMENTS ONLY 

/* 
 if you type : 
	int f(int a) {return a*a;}
	int f(int a=1,int b=1) {return a*b;}

	and then call  f(5)
	the compiler won't know which function you mean. it is confused wether to call the first one , or the second one putting b = 1 (the default value)

	if you change the second function to be 

	int f(int a=1,int b) {return a*b;}
	such that there is no default value for b , It will not work also. the parameters without default values MUST come at 
	the beginning of the parameter list. 

	If you type :
	int f(int b,int a=1) {return a*b;}
	It will not work also. The call f(5) is still ambiguous.

	make it  int f(int a,int b) {return a*b;} to remove ambiguity

	*/
}

/*   ****************** SHEET 5 *****************************   */


void s5_q1()
{
	// a) Valid only if you declate "f" as const , "const int f = 4; " if you do not specify const it is invalid .
	// b)  invalid
	// c) valid
}

void s5_q2()
{
	float X[] = {10,15,6,5,20,0,1.5,2.5};
	int i = 3;
	double y;
	y = X[i]+1;
	cout << y << endl;
	y = X[i+1];
	cout << y << endl;
	y = X[i/2];
	cout << y << endl;
	y = X[i]/2;
	cout << y << endl;
	y = X[i*2];
	cout << y << endl;
	y = X[(int)X[i]]; // NOTE , YOU HAVE TO DO THIS TYPE CASTING.
	cout << y << endl;

}

void s5_q3()
{
 int x [8] = { 14 , -45 , 67 , 23 , -56 , 34 , 24 , -56 };


 for (int i = 4; i < 7; i++ ) x[i] = x[i+1] ;
 for(int i = 0 ; i<8 ; i++) cout << x[i] <<" " ;
 cout << "\n" ;
  int y[8]  = { 14 , -45 , 67 , 23 , -56 , 34 , 24 , -56 };
 for (int i = 5; i >1; i-- ) y[i] = y[i+1] ;
 for(int i = 0 ; i<8 ; i++) cout << y[i] <<" " ;
}

float s5_q4_average(float a[],int size)
{
	float sum = 0;

	for(int i =0 ; i<size; i++)
		sum+= a[i];

	sum= sum/size;
return sum;
}

float s5_q4_maximum(float a[],int size)
{
	float max = -10000;

	for(int i =0 ; i<size; i++)
		if(a[i]>max) max = a[i];

	return max;
}

float s5_q4_minimum(float a[],int size)
{
	float min = 10000;

	for(int i =0 ; i<size; i++)
		if(a[i]<min) min = a[i];

	return min;
}

void s5_q4_sort(float a[],int size)
{
	for(int i = 0 ; i< size-1 ; i++) // To sort i elements you need (i-1) iterations
	{
		for(int j = 0 ; j< size-i-1 ; j++)
		{
			float temp;
			if(a[j]>a[j+1])
			{
				temp= a[j];
				a[j] = a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

float s5_q4_median(float a[],int size)

{ 
	for(int i = 0 ; i< size/2 ; i++)
		{
			for(int j = 0 ; j< size-i-1 ; j++)
			{
				float temp;
				if(a[j]>a[j+1])
				{
					temp= a[j];
					a[j] = a[j+1];
					a[j+1]=temp;
				}
		}
	}

	return a[size/2];
}

float s5_q4_mode_map_version(float a[],int size)
{
	map<float,int> MyMap ;
	
	for(int i = 0 ; i<size ; i++)
		MyMap[a[i]]++;

	int max = -1;

	float ModeSoFar;
	for(int j = 0 ; j<size; j++)
		if(MyMap[a[j]] > max)
		{
				max = MyMap[a[j]];
				ModeSoFar = a[j];
		}

return ModeSoFar ;

}
float s5_q4_mode_sort_version(float a[],int size)
{
	s5_q4_sort(a,size);

	int MaxFrequencySoFar = -1;
	int counter=0;
	float prevValue = -9999.0;
	float ModeSoFar ;


	for(int i = 0 ; i<size ;i++)
	{
		if(a[i] != prevValue) 
		{
			counter =1;
		}
		else 
		{
			counter ++;
		}

		if(counter>MaxFrequencySoFar) { MaxFrequencySoFar = counter; ModeSoFar = prevValue; }
		prevValue = a[i];
	}

	return ModeSoFar;
}

void s5_q5()
{
	const int N = 7;
	int arr[N];

	cout << "ENTER ARRAY ELEMENTS OF SIZE " << N << " , Integers Only "<< endl;
	int NumOddElements,NumEvenElements;
	int SumOddIndex=0,SumEvenIndex=0 ;

	if(N%2==0)	
	{
		NumOddElements = N/2 + 1;
		NumEvenElements =N-NumOddElements;
	}
	else
	{
		NumOddElements = N/2;
		NumEvenElements =N-NumOddElements;
	}
	
	for(int i = 0 ; i<N ; i++)
	{
		cin>>arr[i];
		if(i%2==0) SumEvenIndex += arr[i];
		else SumOddIndex +=arr[i];
	}

	cout << "NumEvenElements = " << NumEvenElements <<endl;
	cout << "NumOddElements = " << NumOddElements <<endl;
	cout << "Average of Even Indeces = " << 1.0*SumEvenIndex/NumEvenElements<<endl;
	cout << "Average of Odd Indeces = " << 1.0*SumOddIndex/NumOddElements<<endl;



}

float s5_q6(float x,int n,float coefficients[])
{
	float sum =0;
	for(int i = 0 ; i<=n;i++)
	{	
			sum+= pow(x,(n-i))*coefficients[i];
	}

	return sum;
}

void s5_q7()
{
	// OPEN TWO FILES AND REDIRECT "cin" and "cout" to the files 

	freopen("input.txt","r",stdin);//redirects standard input
	freopen("output.txt","w",stdout);//redirects standard output
	const int array_size = 250;
	int arr[array_size];
	int NumTwelves = 0;
	int IndexOfLastTwelveSoFar=-1;
	for(int i = 0 ; i<array_size;i++)
		{
			cin>>arr[i];//reads from input.txt
			if(arr[i]==12)
				{
					NumTwelves++;
					if(NumTwelves==1)
					{cout << "The First Twelve Occured at index :: " << i << ", Line :: " << i+1 << endl;}
					IndexOfLastTwelveSoFar = i;
				}
		}

	if(NumTwelves == 0) cout << "WARNING NO TWELVES ! " <<endl;
	else
	cout << "The last Twelve Occured at index:: " << IndexOfLastTwelveSoFar << ", Line :: " << IndexOfLastTwelveSoFar+1 <<endl;//writes to output.txt

	

}

void s5_q8()
{
	int x[] = {1,2,3,4,5,6,7,8,9,10};
	const int arr_size = sizeof(x)/sizeof(x[0]); // NOTE :: USE sizeof(array) ONLY IF you declared the array in the same scope. i.e, if you are inside a function
	// and the function takes an array as input parameter, DON'T use sizeof(array).

	int y[arr_size];
	for(int i = 0 ; i<arr_size ; i++)
	{	
		y[i] = x[arr_size-i-1];
		cout << y[i] << " " ;
	}
	cout << endl;

}

void s5_q9()
{

	// NOTE , EVEN unsigned long long can't reach f[100]
  unsigned long long f[101];
   double f2[101];
	f[0]= 1;
	f2[0]= 1;
	f[1]= 1;
	f2[1]= 1;
	int i = 0;
	cout << "f[" << i << "] = " << f[i] << endl; 
	cout << "f2[" << i << "] = " << f2[i] << endl; 
	i++;
	cout << "f[" << i << "] = " << f[i] << endl;
	cout << "f2[" << i << "] = " << f2[i] << endl; 
	for(int i = 2 ; i<101; i++)
	{
		f[i] = f[i-1]+f[i-2];
		f2[i] = f2[i-1]+f2[i-2];
		cout << "f[" << i << "] = " << f[i] << endl;
		cout << "f2[" << i << "] = " << f2[i] << endl; 
	}


}

/*   ****************** SHEET 6 *****************************   */

/*   NOT INCLUDED IN THE MIDTERM EXAM   */

void s6_q1()
{
	const int size = 40;
	char x[size];
	cout << "Enter your string :: \n" ;

	cin.get(x,size);

	cout << x[0];

	for(int i = 1 ; i<size-1;i++)
	{
		if(x[i]==' ')cout<<x[i+1];
	}

	cout << endl;
}

void s6_q2()
{
const int size = 40;
char x[size];

cin.get(x,40);

for(int i = 0 ; i <size; i++)
{
	if(x[i]>='a' && x[i]<='z')
		x[i] = x[i] + - ('a'-'A');
}

cout << x <<endl ;
}

void s6_q3()
{
	const int size = 40;
	char x[size];
	char y[size];
	cin.getline(x,size);

    int ActualNumberRead = strlen(x);

	for(int i = ActualNumberRead-1 ; i>=0 ; i--)
	{
	y[ActualNumberRead-1-i] = x[i];
	}

	y[ActualNumberRead] = '\0';
	cout << y <<endl;

}

void s6_q4()
{

	char vowls[7] = {'a','e','o','i','y','u','\0'};

	int arr[6] = {0,0,0,0,0,0};

	const int size = 40;
	char x[size];
	cin.get(x,size);

	for(int i = 0 ; i<size; i++)
	{
		for(int j = 0 ; j<6 ; j++)
		{
			if(x[i]==vowls[j] || x[i]==vowls[j]-('a'-'A')) arr[j]++;
		}
	}

	for(int i = 0 ;i<6 ; i++)
		cout << vowls[i] << " ::: " <<  arr[i] << endl;

}

void s6_q5()

{
	const int size = 40;
	char x[size];
	cin.getline(x,size);

	char previous= 'A';
	int NumWords=0 ;

	int NumCharsRead = strlen(x);
	if( NumCharsRead != 0)
	NumWords = 1;

	for(int i = 0 ; i< NumCharsRead ;i++)
	{
		if(x[i] == ' ' && previous !=' ')
			NumWords ++;

		previous = x[i];
	}

	if(x[NumCharsRead-1] == ' ') NumWords --;
	if(x[0]==' ')NumWords--;

	cout << "NUM WORDS = " << NumWords <<endl;

}

void s6_q6()
{
	const int first_size = 10;
	const int second_size = 10;
	const int conc_size = first_size+second_size;

char x[first_size];
char y[second_size];
char z[conc_size];

cin.getline(x,first_size);

int firstActualSize = strlen(x); 

cout << firstActualSize <<endl;

cin.getline(y,second_size);

int secondActualSize = strlen(y);
cout << secondActualSize << endl;


strcpy(z,x);
strcat(z,y); // to concatenate


/*
// IF YOU DON't WANT TO USE THE READY FUNCTION strcpy and strcat use this :: 

for(int i = 0 ; i<firstActualSize ;i++)
	z[i] = x[i];
for(int i = 0 ; i<secondActualSize;i++)
	z[i+firstActualSize] = y[i];

z[firstActualSize+secondActualSize]= '\0' ;

*/



cout << z << endl;

}

void s6_q7()
{
	char x[] = "C is a general purpose computer programming language developed in 1972 by Dennis"
				"Ritchie at the Bell Telephone Laboratories for use with the UNIX operating system."
				"Although C was designed for implementing system software, it is also widely used for"
				"developing portable application software. C is one of the most popular programming"
				"languages. It is widely used on many different software platforms, and there are few"
				"computer architectures for which a C compiler does not exist. C has greatly influenced"
				"many other popular programming languages, most notably C++, which originally began"
				"as an extension to C." ;

for(int i = 0 ; i <strlen(x); i++)
{
	if(x[i]>='a' && x[i]<='z')
		x[i] = x[i] + - ('a'-'A');
}

const int NumEnglishLetters = 26;
int freq [NumEnglishLetters];

for(int i = 0 ; i<NumEnglishLetters ; i++)
	freq[i] = 0;

for(int i =0 ; i <strlen(x); i++)
{
	if(x[i] >='A' && x[i]<='Z')
	freq[(int)(x[i]-'A')]++ ;

}

for(int i = 0 ; i<NumEnglishLetters ; i++)
	cout << freq[i] << "  " ;

}

void s6_q8()
{
		char x[] = "C is a general purpose computer programming language developed in 1972 by Dennis"
				"Ritchie at the Bell Telephone Laboratories for use with the UNIX operating system."
				"Although C was designed for implementing system software, it is also widely used for"
				"developing portable application software. C is one of the most popular programming"
				"languages. It is widely used on many different software platforms, and there are few"
				"computer architectures for which a C compiler does not exist. C has greatly influenced"
				"many other popular programming languages, most notably C++, which originally began"
				"as an extension to C." ;

		const int prog_size = 12;
		char y[] ="programming"; 
		int NumOfOcuurences = 0;

	
		for(int i = 0 ; i<strlen(x);i++)
		{
			
		if(strncmp(&x[i],y,11)==0)
				NumOfOcuurences ++ ;
			
			/*
			for(int j = 0 ; j< strlen(y) ; j++)
			{
				if(x[i+j]!=y[j])break;
				if(j==strlen(y)-1)NumOfOcuurences ++;
			}
			
			*/
				
		
		}

		cout << NumOfOcuurences <<endl;


}

void  s6_q9_myStrCpy(char des[], const char src[])
{
	int i = 0;

	for( ; i<strlen(src)+1;i++)
		des[i]=src[i];



}

int s6_q9_myStrLen(const char str[])
{
	int i = 0;
	for(;str[i]!='\0';i++)
		;

	return i;

}

int s6_q9_atoi(const char str[])
{

	int integerValue = 0 ;
	int k = 0;
	for(int j = strlen(str)-1 ; j >= 0 ; j--)
	{
		integerValue+=(str[j]-'0')*pow(10.0f,k);
		k++;
	}

	return integerValue;
}

int s6_q9_myStrCmp(const char str1[],const char str2[])
{
	int i = 0;
	for( ;str1[i]!='\0';i++)
		{
			//if(str2[i]=='\0') return 1; // Not required, but is OK to add
			if(str1[i]>str2[i])return 1;
			else if(str1[i]<str2[i])return -1;
		}
	if(strlen(str1)==strlen(str2)) return 0;

	else return -1;
}


float s6_q9_atof(const char str[])
{
	int i = 0;
	int periodPosition=-1;
	bool foundPeriod = 0;

	for( ; str[i]!='\0';i++)
	{
		if(str[i]=='.') 
			{
				foundPeriod = 1;
				periodPosition = i;
				break;
			}
	}

	if(foundPeriod == 0)
	{
		int result = s6_q9_atoi(str);
		return (float)result;
	}

	float floatValue = 0;
	int power = 1;
	for(int j = periodPosition+1 ;str[j]!='\0';j++ )
	{
		floatValue += (str[j]-'0')/pow(10.0,power);
		power++;
	}
	power=0;

	for(int j = periodPosition-1 ;j>=0;j-- )
	{
		floatValue += (str[j]-'0')*pow(10.0,power);
		power++;
	}
// REMEMBER YOU CAN USE setprecision to prevent rounding . EX :  cout << setprecision(7) << 189.3128;
	return floatValue;

}


unsigned long long s7_q1_factorial(int x)
{
if(x==0) return 1;
if(x==1) return 1;

return x*s7_q1_factorial(x-1);

}

 int s7_q2_GCD( int a , int b)
{
	if(b==0)return a;

	return s7_q2_GCD(b,a%b);

 

}

 int s7_q3_fipponachi (int x)
 {
	if(x==0 || x==1) return 1;
	 return s7_q3_fipponachi(x-1)+ s7_q3_fipponachi(x-2); 
 }

 void s7_q4_recFun(int x)
{
if (x > 10)
{
s7_q4_recFun(x / 10);
cout << x % 10 << endl;
}
else
cout << x << endl;
}

 int s7_q5_test(int x, int y)
{
if (x == y)
return x;
else if (x > y)
return (x + y);
else
return s7_q5_test(x + 1, y - 1);
}

 int s7_q6_vowls(char x[],int index)
 {
	if(x[index]=='\0')return 0;
	 if(x[index]=='a' || x[index]=='e'||x[index]=='o'||x[index]=='i'||x[index]=='u'||x[index]=='y'
		 ||x[index]=='A' || x[index]=='E'||x[index]=='O'||x[index]=='I'||x[index]=='U'||x[index]=='Y')
		 return 1+s7_q6_vowls(x,index+1);
	 else return s7_q6_vowls(x,index+1);
 
 }

 int s7_q7_power(int x, int y)
 {
 if(y==0) return 1;
 return x*s7_q7_power(x,y-1);
 }

 int s7_q8_search(int arr[],int size,int index,int valueToFind)
 {

	 if(index == size) return -1; // NOT FOUND
	 if(arr[index] == valueToFind) return index;
	 return s7_q8_search(arr,size,index+1,valueToFind);
 
 }


 void s8_q1 (){

	const int row=10; // number of students
	const int col=30; //number of char of each student name

	char student_names [row][col];

	// read student names from the user
	for(int i=0;i<row;i++)
	{
		cin.getline(student_names[i],col);
	}

	//display student names
	for(int i=0;i<row;i++)
	{
		cout<<student_names[i]<<endl;
	}
}


char lower_to_upper(char ch1)
{
      char ch2;
 
      if(ch1 >= 'a' && ch1 <= 'z'){
            ch2 = ('A' + ch1 - 'a');
            return ch2;
      }
      else{
            ch2 = ch1;
            return ch2;
      }
}

void s8_q2(){

	const int N=8;
	char list_names[N][20]={"Yara","ahmed Sayed","Laila Mohamed","Ahmed Said","Aly ebraheem","Noha Mohamed","Mahi Hani","Yaser"};
	char temp[20];

	//to be sure each fisrt and last name began with uppercase letter for sorting
	// Not Necessary for the problem solution , you can just assume that the user entered the names correctly.
	for (int j = 0; j <N; j++) {

		for(int i=0;i<strlen(list_names[j]);i++){

		  list_names[j][0]=lower_to_upper(list_names[j][0]);

		  if(list_names[j][i]==' ' && i!=strlen(list_names[j]-1))
			  list_names[j][i+1]=lower_to_upper(list_names[j][i+1]);

		}	
	}

	//loop through list of names 
   //if name is less than name before it replace them
	//This is the same sorting algorithm we used many times before  
	for (int i = 1; i <N; i++) {
      for (int j = 1; j <N-i+1; j++) {
         if (strcmp(list_names[j - 1], list_names[j]) > 0) {
            strcpy(temp, list_names[j - 1]);
            strcpy(list_names[j - 1], list_names[j]);
            strcpy(list_names[j], temp);
			

			

         }
      }
   }

	//display list of names after sorting
	for (int i = 0; i < N; i++)
      cout<< list_names[i]<<endl;

}


void s8_q3_add(float A[][3],float B[][3], float C[][3]){

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){

			C[i][j]=A[i][j]+B[i][j];
			
			cout<<"The sum of ("<<A[i][j]<<","<<B[i][j]<<") = "<<C[i][j]<<endl;
		}
	}
}


void s8_q3_sub(float A[][3],float B[][3], float C[][3]){

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){

			C[i][j]=A[i][j]-B[i][j];
			cout<<"The subtraction of ("<<A[i][j]<<","<<B[i][j]<<") = "<<C[i][j]<<endl;

		}
	}
}


void s8_q4(){

	const int M=2;
	const int N=5;

	int matrix[N][M]={{1,1},{2,2},{3,3},{4,4},{5,5}};

	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			cout << " "<<matrix[i][j];
		}
		cout << endl;
	}
}


void s8_q5_multiply()
{
	const int rowA=2;
	const int rowB=2;
	const int colA=3;
	const int colB=2;

	int matA[rowA][colA]={{1,2},{3,4}};
	int matB[rowB][colB]={{3,4},{1,2}};
	int result[rowA][colB];
    
	//check that two matrices can be multiplied or not
	if (colA!=rowB)
    {
        cout << "Error! column of first matrix not equal to row of second."<<endl;
        return ;
    }

	//initialize result matrix with zero
    for(int i=0; i<rowA; ++i)
    for(int j=0; j<colB; ++j)
    {
       result[i][j]=0;
    }

	//multiplicaton of two matrices
    for(int i=0; i<rowA; ++i)
    for(int j=0; j<colB; ++j)
    for(int k=0; k<colA; ++k)
    {
        result[i][j]+=matA[i][k]*matB[k][j];
    }

	//display result
    cout << endl << "Output Matrix: " << endl;
    for(int i=0; i<rowA; ++i)
    for(int j=0; j<colB; ++j)
    {
        cout << "The result ("<<i<<","<<j<<")= " << result[i][j]<<endl;
        
    } 
}


void s8_q5_transpose()
{
    const int rowA=3;
	const int colA=2;

	int matA[rowA][colA]={{1,2},{3,4},{5,6}};
	int transposeA[colA][rowA];

    for(int i=0; i<rowA; ++i)
    for(int j=0; j<colA; ++j)
    {
       transposeA[j][i]=matA[i][j];
    }

	//display matrix ofter transpose
	cout << endl << "Transpose Matrix: " << endl;
    for(int i=0; i<colA; ++i)
    for(int j=0; j<rowA; ++j)
    {
        cout << "The result ("<<i<<","<<j<<")= " << transposeA[i][j]<<endl;
        
    }
}


void s8_q6(){

	const int N=3;

	float matA[N][N]={{1,2,3},{4,5,6},{7,8,9}};
	float sum=0;

	for(int i=0;i<N;i++)
	{
		sum+=matA[i][i];
	}
	cout<<"The sum of the diagonal elements of square matrix is "<<sum<<endl;
}


void s8_q7_non_zeros(){

	const int N=3;

	float matA[N][N]={{1,0,3},{4,5,6},{7,8,0}};
	float count_non_zeros=0;

	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(matA[i][j]!=0)
				count_non_zeros++;
		}
	}
	cout<<"The number of non zero elements in the matrix is "<<count_non_zeros<<endl;

}

void s8_q7_product(){

	const int N=3;

	float matA[N][N]={{1,2,3},{4,5,6},{7,8,9}};
	float product=1;

	for(int i=0;i<N;i++)
	{
		product*=matA[i][i];
	}
	cout<<"The product of the diagonal elements of square matrix is "<<product<<endl;
}

void s8_q8(){

	const int size=7;
	int arrayA [size][size];
	int count=0;

	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			arrayA[i][j]=rand()%1000+1;
			cout<< setw(5) << arrayA[i][j]<<" ";
		}
		cout<<endl<<endl;
	}
		

	for(int i=1;i<size-1;i++){
		for(int j=1;j<size-1;j++){
			if (arrayA[i][j]>arrayA[i-1][j-1]&&arrayA[i][j]>arrayA[i][j-1]&&arrayA[i][j]>arrayA[i+1][j-1]&&arrayA[i][j]>arrayA[i-1][j]&&arrayA[i][j]>arrayA[i+1][j]&&arrayA[i][j]>arrayA[i-1][j+1]&&arrayA[i][j]>arrayA[i][j+1]&&arrayA[i][j]>arrayA[i+1][j+1])
			{
				count++;
				cout << i << "," << j <<endl;
			}
		}
	}

	cout<<"The number of values that all its 8 neighbours are less than it is "<<count<<endl;


}

/************************* SHEET 9 **************************************************************/

void s9_q1()
{
int X = 3;
int* P = &X;
cout<<*P<<'\t'<<P<<'\t'<<&X<<'\t'<<&P <<endl;
}

void s9_q2()
{
	int M[] = {3,4,5,2};
	int* P;
	P = M;
	cout<<*P<<'\t'<<*(P+1)<<'\t'<<P[2]<<'\t'<<*(M+3)<<endl;
	P = M;
	cout<<P<<'\t'<<(P+1)<<'\t'<<&P[2]<<'\t'<<(M+3)<<endl;
	P = &M[1];
	cout<<*P<<'\t'<<(P-M)<<'\t'<<(int)P-(int)M<<endl;
}

void s9_q3_F1(int* A, int* B, int* C)
{
int D;
D = *A;
*A = *B;
*B = *C;
*C = D;
}

void s9_q3()
{
int X = 7, Y = 8, Z = 2;
cout<<X<<'\t'<<Y<<'\t'<<Z<<endl;
s9_q3_F1(&X,&Y,&Z);
cout<<X<<'\t'<<Y<<'\t'<<Z<<endl;
}

void s9_q4()
{
	float F[] = {1.2, 3.4, 7.1, 3.1};
	float* P = F;
	cout<<*P<<'\t'<<endl;
	P++;
	cout<<*P<<'\t'<<endl;
	P+=2;
	cout<<*P<<'\t'<<endl;
}

int s9_q5_GetValues(char* Text, double* Values)
{
int nValues = 0;

char * s;

s = strtok(Text," ");
while(s!=NULL)
{
	Values[nValues]  = s6_q9_atof(s);
	nValues++;
	s = strtok(NULL," ");
}

return nValues;
}

void s9_q5()
{
	char Text[] = "7672.28,276763.22 0.767-1.2878 772.2 1878 152 0.0123";
	double Values[100];
	int nValues;
	nValues = s9_q5_GetValues(Text, Values);
	for(int i=0;i<nValues;i++)
	cout<<"HOHO :: " << Values[i]<<endl;
}


void easy_s9_q6()
{
	char Text[] = "7672.28 276763.22 0.767 1.2878 772.2 1878 152 0.0123";
	int nvalues = 0;
	double values[100];

	int newNumberStart[100]; // An array to store the indices of the startings of the numbers in the string


	int j = 0;
	newNumberStart[j] = 0; // The string starts with a number.
	++j;

	// Store the indices of the startings of numbers in the array
	for (int i = 0; i < strlen(Text); i++)
	{
		if (Text[i] == ' ')
		{
			newNumberStart[j] = i + 1;
			++j;
		}
	}

	// This line is important for the last number. Its importance will be clear if you read the following code section

	newNumberStart[j] = strlen(Text) + 1;

	for (int i = 0; i < j; i++)
	{
		int start_index = newNumberStart[i];
		int finish_index = newNumberStart[i + 1];
		char result[20] = "";
 
		strncpy(result, &Text[start_index], (finish_index - start_index - 1));

		values[nvalues] = (double)atof(result);
		nvalues++;

	}

	for (int i = 0; i < nvalues; i++)
		cout << setprecision(9) << values[i] << endl;
}


char * hard_s9_q6_my_own_strtok(char * textI, char * delimiters)
{

	static int currentIndex = 0;
	static char* text = textI;
	if (textI != NULL)
	{
		currentIndex = 0;
		text = textI;
	}

	if (currentIndex >= strlen(text))
		return NULL;
	char  temp[30];
	int i = 0;
	while (text[i+currentIndex] != ' ' && text[i + currentIndex] != '\0')
	{
		i++;
	}

	strncpy(temp, &text[currentIndex], i);
	temp[i] = '\0';
	currentIndex += i ;
	currentIndex++;

	return strdup(temp) ; // YOU MUST USE strdup (string dublicate if you want to return a string from a function. otherwise you might get wrong result)
}


int s9_q6_GetValues(char* Text, double* Values)
{
int nValues = 0;


	char * value;

	while ((value = hard_s9_q6_my_own_strtok(Text)) != NULL)
	{
			Values[nValues]  = s6_q9_atof(value);
			nValues++;
	}

return nValues;
}

void hard_s9_q6()
{
	char Text[] = "7672.28 276763.22 0.767 1.2878 772.2 1878 152 0.0123";
	double Values[100];
	int nValues;
	nValues = s9_q6_GetValues(Text, Values);
	for(int i=0;i<nValues;i++)
	cout<<"HOHO :: " << Values[i]<<endl;
}

void s9_q7()
{
	int size;
	cout << "Enter the size you want \n";
	cin >> size;
	float * x  = new float[size];

	for(int i = 0 ; i<size ; i++)
	{
		cout << "Enter Value # " << i << endl;
		cin >> x[i];
	}


	// Do what you want with the array then delete it to release the memory


	delete[]x;
}

void s9_q8()
{
	int rows, cols;
	cout << "Enter the number of rows , space , then the number of columns \n";

	cin >> rows >> cols;

	float ** x = new float *[rows];

	for (int i = 0; i < rows; i++)
		x[i] = new float[cols];

	// Read values 

	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
		{
			cout << "Enter value for " << i << "," << j << endl;
			cin >> x[i][j];
		}

	//Print values

	for (int i = 0; i < rows; i++)
	{
	
	for (int j = 0; j < cols; j++)
		cout << x[i][j] << " ";
	cout << endl;
	}

	// Release memory

	for (int i = 0; i < rows; i++)
		delete[] x[i];

	delete[] x;

}



void s9_q9_static()
{
	const int numRows = 3;
	const int numCols = 50;

	char y[numRows][numCols];

	for (int i = 0; i < numRows; i++)
	{
		cout << "Enter Name #" << i << endl;
		cin.getline(*(y + i), numCols);
	}

	// Sorting is here - bubble sort

	for (int i = 0; i < numRows; i++)
		for (int j = 0; j < (numRows - 1); j++)
		{
			if (strcmp(*(y + j), *(y + j + 1)) == 1)
			{
				char  temp[numCols];
				strcpy(temp, *(y + j));
				strcpy(*(y + j), *(y + j + 1));
				strcpy(*(y + j + 1), temp);

			}
		}

	// End of sort 

	//print after sort 
	cout << endl << endl;
	for (int i = 0; i < numRows; i++)
		cout << *(y + i) << endl;
}
void s9_q9_dynamic()
{
	int numRows;

	cout << " Enter the number of names you need to enter " << endl;
	cin >> numRows;
	cin.ignore();
	// We used cin.ignore() because we will use cin.getline() soon.

	int numCols = 50;
	char ** y = new char *[numRows];
	for (int i = 0; i < numRows; i++)
		y[i] = new char[numCols];

	for (int i = 0; i < numRows; i++)
	{
		cout << "Enter Name #" << i << endl;
		cin.getline(*(y + i), numCols);
	}

	// Sorting is here - bubble sort

	for (int i = 0; i < numRows; i++)
		for (int j = 0; j < (numRows - 1); j++)
		{
			if (strcmp(*(y + j), *(y + j + 1)) == 1)
			{
				char * temp = new char[numCols];
				strcpy(temp, *(y + j));
				strcpy(*(y + j), *(y + j + 1));
				strcpy(*(y + j + 1), temp);

				delete[] temp;
			}
		}

	// End of sort 

	cout << endl << endl;
	for (int i = 0; i < numRows; i++)
		cout << *(y + i) << endl;


	// Release dynamic memory 
	for (int i = 0; i < numRows; i++)
		delete[] * (y + i);

	delete[] y;
}



void pointers_additional_notes()
{
	/*

	 int * x ;
	 cout << x; --> this prints the address that x points to

	 char * y = "hello" ;
	 cout << y ; --- > This prints hello , not the address. the char* is a special case of pointers with special treatment.

	 to print the address of char * pointer type :-
	 cout << (void *) y ;

	  Consider the code ::-

	 	int a = 2;
		int *p =&a;
		cout << *p++  <<endl;

		this last cout is equivalent to :-

		cout << *p ;
		p++;

		That is because the "++" has higher precedence than the * (See the precedence table)
		so the statement is equivalent to 

		cout << *(p++)  <<endl;
		Note that the (++) increments the address p  not the value (*p)
		but the ++ , because it is on the right of p , is executed AFTER the cout . 
		this is similar to
		int i = 1;
		cout <<(i++) <<endl;
		which prints (1) not (2)

		-> 
		Note : something like that May work , but it is not guaranteed to work , so avoid using it.

		int * print_array()
			{
				int a[5] = {1,2,4,5,6};
				return a;
			}

			int main()
			{
				int * y = print_array();
				cout << y[0];
			}

			Instead use :-

				int * print_array()
					{
						int *a = new int[5]; // Dynamic allocation
						a[0] = 3;
						a[1] = 2;
						a[2] = 22;
						a[3]=	4;
						a[4] = 55;

						return a;
					}
	*/
}

/*****************************   SHEET 10 *************************************************************/

struct blueRayMovies
{
	char movieTitle[50];
	char leadActressName[50];
	int price;
};

void s10_q1()
{
	const int NumMoviesInStore = 3;
	blueRayMovies MyMovies[NumMoviesInStore];
	for(int i = 0 ; i<NumMoviesInStore ; i++)
	{
		cout << "Enter Movie " << i << " Title :: " <<endl;
		cin.getline(MyMovies[i].movieTitle,50);
		cout << "Enter Movie " << i << " Lead Actress Name :: "<<endl ;
		cin.getline(MyMovies[i].leadActressName,50);
		cout << "Enter Movie " << i << " price:: "  <<endl;
		cin >> MyMovies[i].price;
		cin.ignore();
	}

	int MaxPrice = -10;
	int MaxPriceIndex;
	for(int i = 0 ; i<NumMoviesInStore ; i++)
	{
		if(MyMovies[i].price > MaxPrice)
			{
				MaxPrice = MyMovies[i].price;
				MaxPriceIndex = i;
			}
	}

	cout << " Highest Price Movie is " << MyMovies[MaxPriceIndex].movieTitle <<endl;
}

// Question 2

struct Auto
{
	int index;
	char Manufacturer[50];
	int year ;
	int price;
};

void s10_q2()
{
	const int NumCarsInStore = 3;
	Auto MyCars[NumCarsInStore];
	for(int i = 0 ; i<NumCarsInStore ; i++)
	{
		MyCars[i].index = i;
		cout << "Enter Car " << i << " Manufacturer :: " <<endl;
		cin.getline(MyCars[i].Manufacturer,50);
		cout << "Enter Car " << i << " Year :: "<<endl ;
		cin>>MyCars[i].year;
		cin.ignore();
		cout << "Enter Car " << i << " price:: "  <<endl;
		cin >> MyCars[i].price;
		cin.ignore();
	}

	cout << "Enter the year " <<endl;
	int x;
	cin>>x;

	cout << "Cars made in year " << x << " Are :: " <<endl;
	for(int i = 0 ; i<NumCarsInStore ;i++)
	{
		if(MyCars[i].year==x)
			cout << MyCars[i].index <<endl;
	}
}


// Question 3


#include <iostream>
#include<iomanip>
using namespace std;

struct Student
{
	int id;
	char name[40];
	int sc1, sc2, sc3, sc4, sc5;
	float averageScore;
	char grade;
};

void calcGrade(Student * student)
{
	if (student->averageScore >= 90)
		student->grade = 'A';
	else if (student->averageScore >= 80)
		student->grade = 'B';
	else if (student->averageScore >= 70)
		student->grade = 'C';
	else if (student->averageScore >= 60)
		student->grade = 'D';
	else student->grade = 'F';
}
void main()
{
	const int size = 3;
	Student students[size];

	for (int i = 0; i < size; i++)
	{
		cout << "Enter student " << i  << " id " <<endl;
		cin >> students[i].id;
		cin.ignore();
		cout << "Enter student " << i << " name " << endl;
		cin.getline(students[i].name, 40);
		cout << "Enter student " << i << " subject grades " << endl;
		cin >> students[i].sc1;
		cin >> students[i].sc2;
		cin >> students[i].sc3;
		cin >> students[i].sc4;
		cin >> students[i].sc5;
		students[i].averageScore = (students[i].sc1 + students[i].sc2 + students[i].sc3 + students[i].sc4 + students[i].sc5) / 5.0;
		calcGrade(&students[i]);
	}


	for (int i = 0; i < size; i++)
	{
		cout << setw(10)<<  left << students[i].id << ",";
		cout << setw(10) << left << students[i].name << ",";
		cout << setw(10) << left << students[i].averageScore << ",";
		cout << setw(10) << left << students[i].grade << endl;
	}

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if ( strcmp(students[j].name , students[j+1].name) == 1)
			{
				Student temp  = students[j];
				strcpy(temp.name, students[j].name);

				students[j] = students[j + 1];
				strcpy(students[j].name, students[j + 1].name);

				students[j + 1] = temp;
				strcpy(students[j + 1].name, temp.name);
			}
		}
	}

	cout << "AFTER SORTING  :: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << setw(10) << left << students[i].id << ",";
		cout << setw(10) << left << students[i].name << ",";
		cout << setw(10) << left << students[i].averageScore << ",";
		cout << setw(10) << left << students[i].grade << endl;
	}
	system("pause");
}


// Question 4 ( without the sorting part)

struct Employee {

	int uniqueId;
	struct {
		char first[20];
		char middle[20];
		char last[20];
	} Name;

	struct {
		char Address_1[40];
		char Address_2[40];
		char City[40];
		int zip_code;
	} Address;

	struct {
		int day;
		int month;
		int year;
	} HiringDate;

	struct {
		char phone[20];
		char cellPhone[20];
		char fax[20];
		char email[20];
	} ContactInfo;
};

struct Company
{
	int currentNumberOfEmployees = 0;
	Employee companyEmployees[100];
};


bool addEmployeeToCompany(Company* c, Employee e)
{
	if (c->currentNumberOfEmployees >= 100)
	{
		cout << "Error : Company has full staff" << endl;
		return 0;
	}
	for(int i = 0 ; i< c->currentNumberOfEmployees ; i++)
	{
		if (e.uniqueId == c->companyEmployees[i].uniqueId)
		{
			cout << "Error : Id not unique" << endl;
			return 0;
		}
	}
	c->companyEmployees[c->currentNumberOfEmployees] = e;
	c->currentNumberOfEmployees++;
	return 1;
}

bool removeEmployeeFromCompany(Company *c, int id)
{
	int indexOfEmployeeToDelete = -1;
	for (int i = 0; i < c->currentNumberOfEmployees; i++)
	{
		if ( c->companyEmployees[i].uniqueId == id)
		{
			indexOfEmployeeToDelete = i;
			break;
		}
	}

	if (indexOfEmployeeToDelete == -1)
		return 0;

	for (int j = indexOfEmployeeToDelete; j < c->currentNumberOfEmployees - 1; j++)
	{
		c->companyEmployees[j] = c->companyEmployees[j + 1];
	}

	c->currentNumberOfEmployees--;

	return 1;
}

void main()
{
	Employee e1{ 1,{ "Ahmed","Fathy","Abdelmageed" },{ "a1","a2","city",123 },
	{ 1,3,2015 },{ "123","444","555","a@gmail.com" } };

	Employee e2{ 2,{ "Yaser","Fathy","Abdelmageed" },{ "a1","a2","city",123 },
	{ 1,3,2015 },{ "123","444","555","a@gmail.com" } };

	Employee e3{ 3,{ "Mohamed","Fathy","Abdelmageed" },{ "a1","a2","city",123 },
	{ 1,3,2015 },{ "123","444","555","a@gmail.com" } };

	Company myCompany;

	addEmployeeToCompany(&myCompany, e1);
	addEmployeeToCompany(&myCompany, e2);
	addEmployeeToCompany(&myCompany, e3);


	for (int i = 0; i < myCompany.currentNumberOfEmployees; i++)
	{
		cout << myCompany.companyEmployees[i].Name.first << endl;
	}

	removeEmployeeFromCompany(&myCompany, 2);

	for (int i = 0; i < myCompany.currentNumberOfEmployees; i++)
	{
		cout << myCompany.companyEmployees[i].Name.first << endl;
	}

	system("pause");
}



