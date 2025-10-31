#include <iostream>
using namespace std;

struct Time
{
    int h, m, s; // giờ, phút, giây
};

struct Date
{
    int d, m, y; // ngày, tháng, năm
};

// Kiểm tra năm nhuận
bool isLeap(int y)
{
    if (y % 400 == 0)
        return true;
    if (y % 100 == 0)
        return false;
    if (y % 4 == 0)
        return true;
    return false;
}

// Số ngày trong tháng
int daysInMonth(int month, int year)
{
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeap(year))
        return 29;
    return days[month - 1];
}

// a) HIỆU 2 THỜI ĐIỂM TRONG NGÀY
int secFromTime(Time t)
{
    return t.h * 3600 + t.m * 60 + t.s;
}

int timeDiffInSec(Time t1, Time t2)
{
    return secFromTime(t2) - secFromTime(t1);
}

// b) HIỆU 2 THỜI ĐIỂM (t2 có thể sang ngày sau)
int timeDiffInSecNextDay(Time t1, Time t2)
{
    int d1 = secFromTime(t1);
    int d2 = secFromTime(t2);
    if (d2 >= d1)
        return d2 - d1;
    return (24 * 3600 - d1) + d2;
}

// c) HIỆU NGÀY TRONG NĂM – TRẢ VỀ SỐ NGÀY
int daysFromStart(Date dt)
{
    int total = dt.d;
    for (int i = 1; i < dt.m; i++)
    {
        total += daysInMonth(i, dt.y);
    }
    return total;
}

int dateDiff(Date t1, Date t2)
{
    int d1 = daysFromStart(t1);
    int d2 = daysFromStart(t2);
    return d2 - d1;
}

// TÍNH THỨ TRONG TUẦN (Zeller - đơn giản nhất)
string dayName(int dayIndex)
{
    string wk[] = {"Chủ nhật", "Thứ hai", "Thứ ba", "Thứ tư", "Thứ năm", "Thứ sáu", "Thứ bảy"};
    return wk[dayIndex];
}

int weekday(Date dt)
{
    int d = dt.d, m = dt.m, y = dt.y;
    if (m < 3)
    {
        m += 12;
        y--;
    }
    int K = y % 100;
    int J = y / 100;
    int h = (d + (13 * (m + 1)) / 5 + K + K / 4 + J / 4 + 5 * J) % 7;
    return (h + 6) % 7;
}

int main()
{
    // a
    Time t1 = {10, 30, 20};
    Time t2 = {12, 15, 10};
    cout << "a) t = " << timeDiffInSec(t1, t2) << " giay\n";

    // b
    Time t3 = {23, 59, 00};
    Time t4 = {00, 01, 00};
    cout << "b) t = " << timeDiffInSecNextDay(t3, t4) << " giay\n";

    // c
    Date d1 = {20, 10, 2025};
    Date d2 = {11, 11, 2025};
    cout << "c) t = " << dateDiff(d1, d2) << " ngay\n";
    cout << "    Thu t1: " << dayName(weekday(d1)) << "\n";
    cout << "    Thu t2: " << dayName(weekday(d2)) << "\n";

    // d (hôm nay ví dụ : 10/10/2025 Thứ sáu)
    Date today = {10, 10, 2025};
    cout << "d) Hom nay: " << dayName(weekday(today)) << "\n";

    Date t2d = {11, 11, 2011};
    cout << "   Ngay kia: " << dayName(weekday(t2d)) << "\n";

    return 0;
}