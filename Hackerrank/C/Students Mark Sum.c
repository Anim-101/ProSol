#include<stdio.h>
#include<stdlib.h>

int marks_summation(int *marks, int number_of_students, char gender)
{
	int sum = 0;

	for(int i = 0; i < number_of_students; i++)
	{
		if(gender == 'g')
		{
			if(i % 2 != 0)
			{
				sum = sum + marks[i];
			}
		}
		else if(gender == 'b')
		{
			if(i % 2 == 0)
			{
				sum = sum + marks[i];
			}
		}
	}

	return sum;
}

int main()
{
	int number_of_students;

	char gender; 

	int sum;

	scanf("%d", &number_of_students);

	int *marks = (int *) malloc(number_of_students * sizeof(int));

	for(int i = 0; i < number_of_students; i++)
	{
		scanf("%d", (marks + i));
	}

	scanf(" %c", &gender);

	sum = marks_summation(marks, number_of_students, gender);

	printf("%d", sum);

	free(marks);

	return 0;
}