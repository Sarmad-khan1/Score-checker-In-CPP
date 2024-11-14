#include <iostream>
using namespace std;
string result(int marks);
int main()
{
	int student[10];
	int marks=0;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter data of " << i + 1 << " student: ";
		cin >> student[i];
	}
	for (int x = 0; x < 10; x++)
	{

		for (int number = 0; number < 10; number++)
		{
			string receiver = result(student[number]);
			//  this step means that are calling our function of result and giving it the value of variable from 1 to 10. and this function will take the value and check whether is it passed or failed and we then store the return result our receiver string. In next step we then print the value.
			cout <<student[number]<<": "<<receiver<<endl;
		}
	}
}
string result(int marks)
{
	string grade;
	if (marks > 15)
	{
		grade = "Passed";
	}
	else
	{
		grade = "Failed";
	}
	return grade;
}