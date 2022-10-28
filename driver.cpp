#include <iostream>
#include "orderedLinkedList.h"
#include "bookType.h"
using namespace std;

//Stylesheet:
//*******************************************************************************************************
// * PROGRAMMED BY : Ngoc Dang Tran
// * CLASS : CS1B
// * SECTION : MW: 9:30 - 11:50
// * FILE NAME : driver.cpp
// * ASSIGNMENT : Linked List
//*******************************************************************************************************
//  PURPOSE : Purpose of this lab is to familiarize yourself with Linked List and unordered linked list.
//*******************************************************************************************************
//* Algorithm: For this assignment, you are to construct linkedList.h and unorderedLinkedList.h
//* 		   You are to create a simple driver to test implementing a linked list of bookType poin
//* 		   Create a driver that prompts the user for 5 books (in a loop), dynamically allocates 
//*				each book in the heap, and stores the pointer in the unordered linked list. 
//*			   Next you are print the linked list.
//**********************************************************************************************************
//* Sample:
//* Input information:
//* Enter Title: Star Wars
//* Enter ISBN: 0-3452-6079-1
//* Enter Author: George Lucas
//* Enter Publisher: Del Rey
//* Enter Date Added (mm/dd/yyyy): 10/18/2017
//* Enter Quanity: 5
//* Enter Whole Sale Price: 59.95
//* Enter Retail Sale Price: 100.00
//**********************************************************************************************************
//* Call print:
//**************************************************************************************************
//* Book #1
//* ISBN:             0-3452-6079-1
//* Title:            Star Wars
//* Author:           George Lucas
//* Publisher:        Del Rey
//* Date Added:       10/18/2017
//* Quantity In Hand: 5
//* Wholesale Cost:  $59.95
//* Retail Price:    $100.00
//**************************************************************************************************
//Main program
int main() 
{ 
	system("clear");
	bookType::sCode = 0;
	orderedLinkedList<bookType*> listTitle, qty;
	linkedListIterator<bookType*> it;
	bookType *newBook = NULL;
	int count = 1;

	cout << "Please enter book information:" << endl;
	for (int i = 0; i < 5; i++)
		{
			newBook = new bookType();
			cin >> *newBook;
			listTitle.insert(newBook);
			cout << endl;
		}

	system("clear");
	cout << "List Title: " << endl;
	for(it = listTitle.begin(); it != listTitle.end(); ++it)
		{
			cout << "------------------------------------------------------------------------------------" << endl;
			cout << "- Book #" << count << endl;
			cout << **it;
			count++;
		}

	bookType::sCode = 5;
	qty = listTitle;
	for(it = qty.begin(); it != qty.end(); ++it)
		{
			cout << "------------------------------------------------------------------------------------" << endl;
			cout << "- Book #" << count << endl;
			cout << **it;
			count++;
		}

return 0; 
} 