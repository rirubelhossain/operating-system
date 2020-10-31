#include<bits/stdc++.h>
using namespace std;

void fitting(int Block[], int m,
			int process[], int n)
{

	int allocation[n];
	memset(allocation, -1, sizeof(allocation));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (Block[j] >= process[i])
			{
				allocation[i] = j;
				Block[j] -= process[i];
				break;
			}
		}
	}

	cout << "\nProcess here \tProcess size\tblock here.\n";
	for (int i = 0; i < n; i++)
	{
		cout << " " << i+1 << "\t\t"<< process[i] << "\t\t";
		if (allocation[i] != -1)
        {
            cout << allocation[i] + 1;
        }
		else{
            cout << "Not Allocated";
		}
		cout << endl;
	}
}
int main()
{
	int Block[] = {300, 700, 100, 200, 500};
	int process[] = {210, 200, 119, 340};

	fitting(Block, 5, process, 4);
	return 0 ;
}

