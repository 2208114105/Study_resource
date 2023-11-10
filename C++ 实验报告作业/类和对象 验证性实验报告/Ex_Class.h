#pragma once
#include<bits/stdc++.h>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

// 人员类
class CPerson 
{
public:
    // 构造函数
    CPerson(const char* name = "", int id = 0, const char* gender = "");

    // 设置人员信息
    void SetPersonInfo(const char* name, int id, const char* gender);

    // 获取人员信息
    void GetPersonInfo() const;

private:
    char m_name[50];    // 姓名
    int m_id;              // 编号
    char m_gender[10];  // 性别
};