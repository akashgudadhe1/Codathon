/*
 https://www.codechef.com/LTIME75B/problems/EID2#
*/

#include<iostream>

using namespace std;

int main()
{
    short int T;
    cin>>T;

    while(T--)
    {
        int A[3], C[3], temp, temp1;

        //Accepting ages
        for(int i=0; i<3; i++)
        {
            cin>>A[i];
        }

        //Accepting money amount
        for(int i=0; i<3; i++)
        {
            cin>>C[i];
        }


        //Sort ages and put all money same as of start
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                if(A[j] > A[j+1])
                {
                    temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;

                    temp1 = C[j];
                    C[j] = C[j+1];
                    C[j+1] = temp1;
                }
            }
        }

        //Same ages
        if( A[0]==A[1]==A[2] )
        {
            if( C[0]==C[1]==C[2] )
            {
                cout<<"FAIR"<<"\n";
            }
            else
            {
              cout<<"NOT FAIR"<<"\n";
            }
        }
      	else if( A[0]==A[1] )
      	{
                if( C[0]==C[1] )
                {
                  if( A[0] < A[2] )
                  {
                    if(C[0] < C[2])
                    {
                      cout<<"FAIR"<<"\n";
                    }
                    else
                    {
                      cout<<"NOT FAIR"<<"\n";
                    }
                  }
                }
                else
                {
                   cout<<"NOT FAIR"<<"\n";
                }
      	}
        else if( A[0]==A[2] )
      	{
                if( C[0]==C[2] )
                {
                  if( A[0] < A[1] )
                  {
                    if(C[0] < C[1])
                    {
                      cout<<"FAIR"<<"\n";
                    }
                    else
                    {
                      cout<<"NOT FAIR"<<"\n";
                    }
                  }
                }
                else
                {
                   cout<<"NOT FAIR"<<"\n";
                }
      	}
        else if( A[1]==A[2] )
      	{
                if( C[1]==C[2] )
                {
                  if( A[1] < A[0] )
                  {
                    if(C[1] < C[0])
                    {
                      cout<<"FAIR"<<"\n";
                    }
                    else
                    {
                      cout<<"NOT FAIR"<<"\n";
                    }
                  }
                }
                else
                {
                   cout<<"NOT FAIR"<<"\n";
                }
      	}
        else if( C[0]<C[1]<C[2] && C[0]!=C[1]!=C[2] )
        {
          cout<<"FAIR"<<"\n";
        }
        else
        {
          cout<<"NOT FAIR"<<"\n";
        }

    }//while ending

    return 0;
}
