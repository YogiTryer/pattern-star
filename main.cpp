#include <iostream>
using namespace std;

int main()
{
   int rows, i, j, space;

   cout << "Enter number of rows: ";
   cin >> rows;
   
	if(rows <= 2)
	{
	
	   	for(i = 1; i <= rows; i++)
	   {
	      //for loop for displaying space
	      for(space = i; space < rows; space++)
	      {
	         cout << " ";
	      }
	      
		    //for loop to display star equal to row number
		      for(j = 1; j <= (2 * i - 1); j++)
		      {
		         cout << "*";
		      }
		
	
	      cout << "\n";
	   }
 
	}
	else if(rows > 2 && rows <=5)
	{
		for(i = 1; i <= rows; i++)
	   {
	    	space=1;
		  	 //for loop to print star
      		for(j = 1; j <= (2* rows - 1); j++)
      		{
      	 
         	if( j >= ((rows+1)-i )&& j<=((rows-1)+i ))
         	{
         		
				 
         		 if(i== rows )
         		{
         			if(j==1 || j== 2*rows-1)
         			{
         				cout << "*";
				 	}
				 	else
				 	cout << " ";
         			
				 }
				 else
         		cout << "*";
         		
			 }
            
         	else
            cout << " ";
		  		}
			
	      
	
	      cout << "\n";
	   }
	}
	else if(rows > 5 && rows <=7)
	{
		for(i = 1; i <= rows; i++)
	   {
	    	space=1;
		  	 //for loop to print star
      		for(j = 1; j <= (2* rows - 1); j++)
      		{
      	 
         	if( j >= ((rows+1)-i )&& j<=((rows-1)+i ))
         	{
         	
         			if(i== rows -1 ){
         				if((j>1 && j<= 3 ) || (j==2*i-1) || (j==2*i))
         				{
         					cout << "*";
						 }
						 else
				 		cout << " ";
					 }
					 
				
				 
         		else if(i== rows )
         		{
         			if(j==1 || j== 2*rows-1)
         			{
         				cout << "*";
				 	}
				 	else
				 	cout << " ";
         			
				 }
				 else
         		cout << "*";
         		
			 }
            
         	else
            cout << " ";
		  		}
			
	      
	
	      cout << "\n";
	   }
	}
	else if(rows > 7 && rows <=10)
	{
		for(i = 1; i <= rows; i++)
	   {
	    	space=1;
		  	 //for loop to print star
      		for(j = 1; j <= (2* rows - 1); j++)
      		{
      	 
         	if( j >= ((rows+1)-i )&& j<=((rows-1)+i ))
         	{
         		if(i== rows -2 ){
         				if((j>2 && j<= 5 ) || ((j>=2*i-1) && (j<=2*i)+1))
         				{
         					cout << "*";
						 }
						 else
				 		cout << " ";
					 }
         	
         		else if(i== rows -1 ){
         				if((j>1 && j<= 3 ) || (j==2*i-1) || (j==2*i))
         				{
         					cout << "*";
						 }
						 else
				 		cout << " ";
					 }
					 
				
				 
         		else if(i== rows )
         		{
         			if(j==1 || j== 2*rows-1)
         			{
         				cout << "*";
				 	}
				 	else
				 	cout << " ";
         			
				 }
				 else
         		cout << "*";
         		
			 }
            
         	else
            cout << " ";
		  		}
			
	      
	
	      cout << "\n";
	   }
	}
	else if(rows > 10 && rows <=12)
	{
		for(i = 1; i <= rows; i++)
	   {
	    	space=1;
		  	 //for loop to print star
      		for(j = 1; j <= (2* rows - 1); j++)
      		{
      	 
         	if( j >= ((rows+1)-i )&& j<=((rows-1)+i ))
         	{
         		if(i== rows -3 ){
         				if((j>3 && j<= 7 ) || ((j>=2*i-1) && (j<=2*i)+2))
         				{
         					cout << "*";
						 }
						 else
				 		cout << " ";
					 }
         		else if(i== rows -2 ){
         				if((j>2 && j<= 5 ) || ((j>=2*i-1) && (j<=2*i)+1))
         				{
         					cout << "*";
						 }
						 else
				 		cout << " ";
					 }
         	
         		else if(i== rows -1 ){
         				if((j>1 && j<= 3 ) || (j==2*i-1) || (j==2*i))
         				{
         					cout << "*";
						 }
						 else
				 		cout << " ";
					 }
					 
				
				 
         		else if(i== rows )
         		{
         			if(j==1 || j== 2*rows-1)
         			{
         				cout << "*";
				 	}
				 	else
				 	cout << " ";
         			
				 }
				 else
         		cout << "*";
         		
			 }
            
         	else
            cout << " ";
		  		}
			
	      
	
	      cout << "\n";
	   }
	}
	   

   

   return 0;
}
