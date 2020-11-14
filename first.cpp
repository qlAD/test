/*************************************************************************
* File Name: first.cpp
* Author: meteor
* mail: 3394543809@qq.com
* Created Time: Sun 15 Nov 2020 01:28:40 AM CST
 ************************************************************************/
#include <iostream>
#include <time.h>

int main()
{
    using namespace std;
    clock_t starttime,endtime;
    starttime = clock();

    endtime = clock();
    cout << "程序总用时" << double(endtime - starttime)/CLOCKS_PER_SEC<< "秒" << endl;
    cin.get();
    return 0;
}

