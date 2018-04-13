#include <iostream>
using namespace std;

//function prototype
void getJudgeData(double &score);
double findLowest(double score1, double score2, double score3, double score4, double score5);
double findHighest(double score1, double score2, double score3, double score4, double score5);
double calScore(double score1, double score2, double score3, double score4, double score5);

int main()
{
	double score1, score2, score3, score4, score5, average;

	cout << "Getting Score One From Judge" << endl;
	getJudgeData(score1);
	cout << "Getting Score Two From Judge" << endl;
	getJudgeData(score2);
	cout << "Getting Score Three From Judge" << endl;
	getJudgeData(score3);
	cout << "Getting Score Four From Judge" << endl;
	getJudgeData(score4);
	cout << "Getting Score Five From Judge" << endl;
	getJudgeData(score5);
	
	average = calScore(score1, score2, score3, score4, score5);

	cout << "The average score was: " << average << endl;

	system("pause");

}

void getJudgeData(double &input)
{
	cout << "Enter what the performer's score from one being the lowest up to ten being the highest ";
	cin >> input;
	while (input < 0 || input > 10)
	{
		cout << "Enter a score from one through ten ";
		cin >> input;
	}
}

double findLowest(double score1, double score2, double score3, double score4, double score5)
{
	double lowest = score1;

	if (score2 < lowest)
		lowest = score2;
	if (score3 < lowest)
		lowest = score3;
	if (score4 < lowest)
		lowest = score4;
	if (score5 < lowest)
		lowest = score5;

	return lowest;
}

double findHighest(double score1, double score2, double score3, double score4, double score5)
{
	double highest = score1;

	if (score2 > highest)
		highest = score2;
	if (score3 > highest)
		highest = score3;
	if (score4 > highest)
		highest = score4;
	if (score5 > highest)
		highest = score5;

	return highest;
}

double calScore(double score1, double score2, double score3, double score4, double score5)
{
	double sum, min_val, max_val, average;

	sum = score1 + score2 + score3 + score4 + score5;
	min_val = findLowest(score1, score2, score3, score4, score5);
	max_val = findHighest(score1, score2, score3, score4, score5);
	sum = sum - (min_val + max_val);

	average = sum / 3;


	cout << "The total before removing the highest and lowest: " << sum << endl;
	cout << "The smalles score given was: " << min_val << endl;
	cout << "The highest score given was: " << max_val << endl;

	return average;
}


