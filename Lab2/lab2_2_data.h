#pragma once
#include <string>
#include <ctime>

static int* dynamicArray;
static int N = 0;
static const int min = 0;
static const int max = 99;

static struct listItem
{
	int data;
	listItem* prev;
	listItem* next;
};
static listItem* list = 0;
static int listN = 0;