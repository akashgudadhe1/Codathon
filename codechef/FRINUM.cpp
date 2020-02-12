#include<iostream>

#include<vector>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--)
  {
    int N, count = 0, flag=0, ans=0;
    cin >> N;

    if (N % 2 == 0)
    {
      //flag = 1;
      //goto a;
      cout<<-1<<endl;
      continue;
    }

    int arr[N];
    vector<bool> visited(N, false);

    for (int i = 0; i < N; i++)
    {
      cin >> arr[i];
    }

    for (int i = 0; i < N; i++)
    {
      if(visited[i]==true)
      {
        continue;
      }
      count = 1;
      for (int j = i + 1; j < N; j++)
      {
        if (arr[i] == arr[j])
        {
          visited[i] = true;
          count++;
        }
      }
      if (count == 1 && visited[i] == false)
      {
        //flag = 2;
        //ans=arr[i];
        //goto a;
        cout<<arr[i]<<endl;
        break;
      }
    }


    /*a:
      if(flag==1)
      {
        cout<<-1<<endl;
      }
      if(flag==2)
      {
        cout<<ans<<endl;
      }*/
  }

  return 0;
}

