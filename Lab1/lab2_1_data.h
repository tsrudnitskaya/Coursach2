#ifndef LAB1DATA_H
#define LAB1DATA_H

#include <vector>
#include <string>
#include <ctime>
#include "../functions.h"

static const int marksNum = 8;			//���������� ������

static struct Student {
	std::string fio;
	short sex, group, groupNum;
	short marks[marksNum];
	short edForm;
	std::string time;
	double averageScore;
};

static std::vector<Student> db;	//������ �������
static int numOfRecords = 0;		//���������� ������� � �����
static int numOfLines = 0;			//���������� ����� � �����
static int numFields = 7;			//���������� ����� � ����� ������
static std::string filename = "";		//���� � ����� � ��������

static int recordId;				//id ������, � ������� ������ ������

static struct tm* timeinfo;
static time_t tstamp;

#endif