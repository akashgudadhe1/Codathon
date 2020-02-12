// CPP program to count frequencies of array items
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 10, 20, 15, 10, 7, 20, 10, 14};
	int n = 8;

    // Mark all array elements as not visited
	vector<bool> visited(n, false);
  for(int i=0; i<n; i++)
	{
		cout<<visited[i]<<" ";
	}
  cout<<endl;

	// Traverse through array elements and
	// count frequencies
	for (int i = 0; i < n; i++)
  {
		// Skip this element if already processed
		if (visited[i] == true)
		{
			continue;
    }

		// Count frequency
		int count = 1;
		for (int j = i + 1; j < n; j++)
    {
			if (arr[i] == arr[j])
      {
				visited[j] = true;
				count++;
			}
		}

		cout << arr[i] << " " << count << endl;
	}

	return 0;
}
