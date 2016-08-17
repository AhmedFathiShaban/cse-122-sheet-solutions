#include <iostream>
using namespace std;


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

	const int N=6;
	char list_names[N][20]={"ahmed Sayed","Laila Mohamed","Ahmed Said","Mark mounir","Noha Mohamed","Mahi Hani"};
	char temp[20];

	//to be sure each fisrt and last name began with uppercase letter for sorting
	for (int j = 0; j <N; j++) {

		for(int i=0;i<strlen(list_names[j]);i++){

		  list_names[j][0]=lower_to_upper(list_names[j][0]);

		  if(list_names[j][i]==' ')
			  list_names[j][i+1]=lower_to_upper(list_names[j][i+1]);

		}	
	}

	//loop through list of names 
   //if name is less than name before it replace them
	  
	for (int i = 1; i <N; i++) {
      for (int j = 1; j <N; j++) {

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
			cout << "Element ("<<i<<","<<j<<") is "<<matrix[i][j]<<endl;
		}
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

	const int size=10;
	int arrayA [size][size];
	int count=0;

	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			arrayA[i][j]=rand()%1000+1;
			cout<<arrayA[i][j]<<",";
		}
		cout<<endl;
	}
		
	for(int i=1;i<size-1;i++){
		for(int j=1;j<size-1;j++){
			if (arrayA[i][j]>arrayA[i-1][j-1]&&arrayA[i][j]>arrayA[i][j-1]&&arrayA[i][j]>arrayA[i+1][j-1]&&arrayA[i][j]>arrayA[i-1][j]&&arrayA[i][j]>arrayA[i+1][j]&&arrayA[i][j]>arrayA[i-1][j+1]&&arrayA[i][j]>arrayA[i][j+1]&&arrayA[i][j]>arrayA[i+1][j+1])
			{
				count++;
			}
		}
	}

	cout<<"The number of values that all its 8 neighbours are less than it is "<<count<<endl;


}

int main()
{

	//s8_q1();

	//s8_q2();

	//float A[3][3]={{1,1,1},{2,2,2},{3,3,3}};
	//float B[3][3]={{1,1,1},{2,2,2},{3,3,3}};
	//float C[3][3];

	//s8_q3_add(A,B,C);
	//s8_q3_sub(A,B,C);

	//s8_q4();

	//s8_q5_multiply();
	//s8_q5_transpose();

	//s8_q6();

	//s8_q7_non_zeros();

	//s8_q8();
	
	system("pause");

}