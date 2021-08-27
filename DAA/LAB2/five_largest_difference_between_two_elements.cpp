#include<iostream>

using namespace std;


void find_largest_element(int arr[], int size)
{
  int largest = arr[0];
  for(int i = 1; i < size; i++)
  {
    if(arr[i] > largest)
    {
      largest = arr[i];
    }
  }
  cout<<"The largest element is "<<largest<<endl;
}

void find_smallest_element(int arr[], int size)
{
  int smallest = arr[0];
  for(int i = 1; i < size; i++)
  {
    if(arr[i] < smallest)
    {
      smallest = arr[i];
    }
  }
  cout<<"The smallest element is "<<smallest<<endl;
}

void highest_difference_between_two_elements(int smallest, int largest)
{
  int difference = largest - smallest;
  cout<<"The highest difference between two elements is "<<difference<<endl;

}
int main()
{
  int size;
  cout<<"Enter the size of array: ";
  cin>>size;
  int arr[size];
  cout<<"Enter the elements of array: ";
  for(int i = 0; i < size; i++)
  {
    cin>>arr[i];
  }
  find_largest_element(arr, size);
  find_smallest_element(arr, size);
  highest_difference_between_two_elements(arr[0], arr[size-1]);
  return 0;
}

