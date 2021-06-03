#ifndef LAB1DATA_H
#define LAB1DATA_H

#include <vector>
#include <string>
#include <ctime>
#include "../functions.h"

static const int marksNum = 8;			//количество оценок

static struct Student {
	std::string fio;
	short sex, group, groupNum;
	short marks[marksNum];
	short edForm;
	std::string time;
	double averageScore;
};

static std::vector<Student> db;	//массив записей
static int numOfRecords = 0;		//количество записей в файле
static int numOfLines = 0;			//количество строк в файле
static int numFields = 7;			//количество строк в одной записи
static std::string filename = "";		//путь к файлу с записями

static int recordId;				//id записи, с которой ведётся работа

static struct tm* timeinfo;
static time_t tstamp;

#endif