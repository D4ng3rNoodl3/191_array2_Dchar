/* 
	191
 	array2
 	DChar, ZFuchs
*/

/*
array2 - due 9 / 27, Friday - we've written in class an example program with multiple functions for manipulating arrays. I've emailed that
program to your college email though it appears the ins method disappeared.Write a program that adds and tests the function prototype and described below.
///ins(int data[], int count, int n, int v) - this is what we did in class
///del(int data[], int count, int stop, int end) - delete from position stop up to, but not including, position end.If end is past the last value in 
the array, just delete everything from stop onward.
int findMin(int data[], int count) - returns the least value in the array.Remember that this is an array of any possible integer values.
bool in(int data[], int count, int target) - return true if target is in the array, false otherwise.
int count(int data[], int count, int target) - return the number of instances of target in the array.
int findFirst(int data[], int count, int target) - return the index of the first(starting at position 0) instance of target.
int findLast(int data[], int count, int target) - return the index of the last(starting at position count - 1) instance of target.
///void display(int data[], int count) - display all of the values in the 'filled' portion of the array, positions 0 -- > count - 1
void reset(int data[], int count) - fills the entire array with 0s and sets the count to 0.
Think of an array like a set.If data1 = { 5, 9, 7, 10, 3 } and data2 = { 9, 10, 20, 14 }, 
then data1 ∪ data2 = { 9, 10 }. (Note: data1 ∪ data2 means the mathematical union of data1 and data1 - the elements in common.)
Write a function void unionArray(int data1[], count1, data2, count2, data3, count3) which fills data3 with the elements in common in
data1 and data2 and sets the count3 to be the number of elements in this union.Note that data3 and count3 have to be passed by
reference of course.Unfortunately C++ doesn't nicely support returning an array, so instead we pass data3 in by reference.
*/
#include <iostream>

using namespace std; 


const int MAX = 20;

void load(int d[], int& count) {
	cout << "How many? ";
	cin >> count;
	for (int i = 0; i < count; i++) {
		cout << "? ";
		cin >> d[i];
	}
}

void display(int d[], int count) {
	for (int i = 0; i < count; i++)
		cout << d[i] << " ";
	cout << endl;
}

int get(int d[], int count, int n) {
	if (n < 0 || n >= count)
		return INT_MAX;
	else
		return d[n];
}

void set(int d[], int count, int n, int v) {
	if (n >= 0 && n < count)
		d[n] = v;
}

void del(int d[], int& count, int n) {
	if (0 <= n && n < count) {
		for (int i = n; i < count - 1; i++) {
			d[i] = d[i + 1];
		}
		count--;
	}
}

void ins(int d[], int& count, int n, int p) {
	if (0 <= n && n < count) {
		for (int i = count + 1; i >= n; --i) { 
			d[i + 1] = d[i];
		}
		count++;
		d[n] = p; 
	}
}

int min() {

}

int main() {
	int data[MAX];
	int count;
	load(data, count);
	display(data, count);
	ins(data, count, 0, 999);
	/*if (get(data, count, 12) == INT_MAX)
	//    cout << "bad position";
	set(data, count, 5, -11);
	display(data, count);
	cout << endl;
	del(data, count, 2);
	display(data, count);
	del(data, count, 0);
	display(data, count);
	del(data, count, count - 1);*/
	display(data, count);
}
