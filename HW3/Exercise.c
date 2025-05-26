#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

void generate_signal(int signal[], int size);
void clean_signal(int signal[], int size);
int find_min(int signal[], int size);
int find_max(int signal[], int size);
float find_average(int signal[], int size);

int main(void)
{
	int signal[SIZE];
	
	generate_signal(signal, SIZE);
	
	clean_signal(signal, SIZE);
	
	find_min(signal, SIZE);
	
	find_max(signal, SIZE);
	
	find_average(signal, SIZE);
	
	return 0;
}

void generate_signal(int signal[], int size)
{	
	int count = 0;
	srand(time(0));
	
	for(int i = 0; i < size ; i++)
		signal[i] = rand() % 101;  
	
	while(count < 10)
	{
		int index = rand() % size;
		if(signal[index] != -1)
		{
			signal[index] = -1;
			count++;
		}	
	}
	printf("Original signal:\n");
	
	for(int i = 0; i < SIZE; i++)
		printf("%d ", signal[i]);
	
	printf("\n\n");
}

void clean_signal(int signal[], int size)
{
	for(int i = 0; i < size; i++)

		if(signal[i] == -1)
		{
			int right = i + 1;
			int left = i - 1;
							
			while(left >= 0 && signal[left] == -1)
				left--;
			while(right < size && signal[right] == -1)
				right++;
										
			if(left >= 0 && right < size)
				signal[i] = (signal[left] + signal[right]) / 2;
			else if(left >= 0)
				signal[i] = signal[left];
			else if(right < size)
				signal[i] = signal[right];
		}
				
	printf("Cleaned signal:\n");
	
	for(int i = 0; i < size; i++)
		printf("%d ", signal[i]);
		
	printf("\n\n");
}

int find_max(int signal[], int size)
{
	int max = -1;
	
	for(int i = 0; i < size; i++)
		if(signal[i] > max)
			max = signal[i];
	
	return printf("Max: %d ", max);
}

int find_min(int signal[], int size)
{
	int min = 101;
		
	for(int i = 0; i < size; i++)
		if(signal[i] < min)
			min = signal[i];
	
	return printf("Min: %d ", min);
}

float find_average(int signal[], int size)
{
	int total = 0;
	float average = 0;
	
	for(int i = 0; i < size; i++)
		total += signal[i];
		
	average = (float)total / size;
	
	return printf("Average: %.2f", average);
}
