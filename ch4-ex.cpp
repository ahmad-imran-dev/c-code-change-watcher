// Exercise ch 4

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// #1
// int main()
// {
//     cout << "This is a text with different data types:\n";
//     cout << "Character: 'A'\n";
//     cout << "Integer: 42\n";
//     cout << "Floating-point number: 3.14159\n";
//     return 0;
// }

// #2
// int main()
// {
//     double radius, surface_area, volume;
//     const double pi = 3.14;
//     cout << "Enter the radius of the sphere: ";
//     cin >> radius;
//     surface_area = 4 * pi * radius * radius;
//     volume = (4.0 / 3.0) * pi * radius * radius * radius;
//     cout << "Surface area of the sphere: " << surface_area << endl;
//     cout << "Volume of the sphere: " << volume << endl;
//     return 0;
// }

// #3
// int main()
// {
//     double a, b, c, s, area;
//     cout << "Enter the sides of the triangle: ";
//     cin >> a >> b >> c;
//     s = (a + b + c) / 2;
//     area = sqrt(s * (s - a) * (s - b) * (s - c));
//     cout << "The area of the triangle is: " << area << endl;
//     return 0;
// }

// #4
// int main()
// {
//     double miles, kilometers;
//     cout << "Enter the distance in miles: ";
//     cin >> miles;
//     kilometers = miles * 1.609;
//     cout << miles << " miles is equal to " << kilometers << " kilometers." << endl;
//     return 0;
// }

// #5
// int main()
// {
//     int num1, num2, num3, num4;
//     int sum, product;
//     double average;
//     cout << "Enter four numbers: ";
//     cin >> num1 >> num2 >> num3 >> num4;
//     sum = num1 + num2 + num3 + num4;
//     product = num1 * num2 * num3 * num4;
//     average = (double)sum / 4;
//     cout << "Sum: " << sum << endl;
//     cout << "Average: " << average << endl;
//     cout << "Product: " << product << endl;
//     return 0;
// }

// #6
// int main()
// {
//     int years, months, days;
//     cout << "Enter your age in years: ";
//     cin >> years;
//     months = years * 12;
//     days = years * 365;
//     cout << "Your age in months: " << months << endl;
//     cout << "Your age in days: " << days << endl;
//     return 0;
// }

// #7
// int main()
// {
//     int number, square, cube;
//     cout << "Enter a number: ";
//     cin >> number;
//     square = number * number;
//     cube = number * number * number;
//     cout << "Square of " << number << " is: " << square << endl;
//     cout << "Cube of " << number << " is: " << cube << endl;
//     return 0;
// }

// #8
// int main()
// {
//     int totalPages, pagesPerDay, daysRead;
//     int totalRead, pagesRemaining;
//     cout << "Enter total pages of the book: ";
//     cin >> totalPages;
//     cout << "Enter number of pages read per day: ";
//     cin >> pagesPerDay;
//     cout << "Enter number of days the book has been read: ";
//     cin >> daysRead;
//     totalRead = pagesPerDay * daysRead;
//     pagesRemaining = totalPages - totalRead;
//     cout << "Total pages read: " << totalRead << endl;
//     cout << "Number of pages remaining: " << pagesRemaining << endl;
//     return 0;
// }

// #9
// int main()
// {
//     double petrolLiters, distance;
//     const double milesPerLiter = 5.3;
//     cout << "Enter the amount of petrol in liters: ";
//     cin >> petrolLiters;
//     distance = petrolLiters * milesPerLiter;
//     cout << "The car can travel ";
//     cout << distance << " miles with the remaining petrol." << endl;
//     return 0;
// }

// #10
// int main()
// {
//     int totalStudents, feePerStudent, totalFee;
//     cout << "Enter total number of students: ";
//     cin >> totalStudents;
//     cout << "Enter fee per student: ";
//     cin >> feePerStudent;
//     totalFee = totalStudents * feePerStudent;
//     cout << "Total fee collected from the class: " << totalFee << endl;
//     return 0;
// }

// #11
// int main()
// {
//     double fahrenheit, celsius;
//     cout << "Enter temperature in Fahrenheit: ";
//     cin >> fahrenheit;
//     celsius = 5.0 / 9.0 * (fahrenheit - 32);
//     cout << "Temperature in Celsius: " << celsius << endl;
//     return 0;
// }

// #12
// int main()
// {
//     int number, digit1, digit2, digit3;
//     cout << "Enter a 3-digit number: ";
//     cin >> number;
//     digit1 = number / 100;
//     digit2 = (number % 100) / 10;
//     digit3 = number % 10;
//     cout << digit1 << endl;
//     cout << digit2 << endl;
//     cout << digit3 << endl;
//     return 0;
// }

// #13
// int main()
// {
//     cout << "1\t2\t3\t4\t5\n6\t7\t8\t9\t10\n";
//     return 0;
// }

// #14
// int main()
// {
//     double length, width, height, volume;
//     cout << "Enter the length of the cube: ";
//     cin >> length;
//     cout << "Enter the width of the cube: ";
//     cin >> width;
//     cout << "Enter the height of the cube: ";
//     cin >> height;
//     volume = length * width * height;
//     cout << "The volume of the cube is: " << volume << endl;
//     return 0;
// }

// #15
// int main()
// {
//     double x1, y1, x2, y2, distance;
//     cout << "Enter the coordinates of the first point (x1, y1): ";
//     cin >> x1 >> y1;
//     cout << "Enter the coordinates of the second point (x2, y2): ";
//     cin >> x2 >> y2;
//     distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//     cout << "The distance between the two points is: " << distance << endl;
//     return 0;
// }

// #16
// int main()
// {
//     int a, b, c, temp;
//     cout << "Enter three numbers: ";
//     cin >> a >> b >> c;
//     cout << "Before swapping: a = " << a << ", b = " << b << ", c = " << c << endl;
//     // Swapping using a temporary variable
//     temp = a;
//     a = b;
//     b = c;
//     c = temp;
//     cout << "After swapping: a = " << a << ", b = " << b << ", c = " << c << endl;
//     return 0;
// }

// #17
// int main()
// {
//     double radius, angle, arcLength;
//     cout << "Enter the radius of the arc: ";
//     cin >> radius;
//     cout << "Enter the angle made by the arc in radians: ";
//     cin >> angle;
//     arcLength = radius * angle;
//     cout << "The length of the arc is: " << arcLength << endl;
//     return 0;
// }

// #18
// int main()
// {
//     double pounds, kilograms;
//     const double poundsToKilograms = 0.453592;
//     cout << "Enter the weight in pounds: ";
//     cin >> pounds;
//     kilograms = pounds * poundsToKilograms;
//     cout << pounds << " pounds is equal to " << kilograms << " kilograms." << endl;
//     return 0;
// }

// #19
// int main()
// {
//     double radius, theta, area;
//     cout << "Enter the radius of the circle: ";
//     cin >> radius;
//     cout << "Enter the angle in radians: ";
//     cin >> theta;
//     area = 0.5 * radius * radius * theta;
//     cout << "The area of the sector is: " << area << endl;
//     return 0;
// }

// #20
// int main()
// {
//     double number, log2Result;
//     cout << "Enter a positive number: ";
//     cin >> number;
//     if (number <= 0)
//     {
//         cout << "Error: Please enter a positive number." << endl;
//         return 1;
//     }
//     log2Result = log2(number);
//     cout << "The logarithm of " << number << " to the base 2 is: " << log2Result << endl;
//     return 0;
// }

// #21
// int main()
// {
//     char letter;
//     cout << "Enter a letter: ";
//     cin >> letter;
//     char nextLetter1 = letter + 1;
//     char nextLetter2 = letter + 2;
//     cout << "The next two letters are: " << nextLetter1 << " and " << nextLetter2 << endl;
//     return 0;
// }

// #22
// int main()
// {
//     int number, digit1, digit2, digit3, digit4, digit5, sum;
//     cout << "Enter a five-digit number: ";
//     cin >> number;
//     digit1 = number / 10000;
//     digit2 = (number % 10000) / 1000;
//     digit3 = (number % 1000) / 100;
//     digit4 = (number % 100) / 10;
//     digit5 = number % 10;
//     sum = digit1 + digit2 + digit3 + digit4 + digit5;
//     cout << "The sum of the digits is: " << sum << endl;
//     return 0;
// }

// #23
// int main()
// {
//     double basicSalary, dearnessAllowance, houseRent, grossSalary;
//     cout << "Enter the basic salary: ";
//     cin >> basicSalary;
//     dearnessAllowance = 0.35 * basicSalary;
//     houseRent = 0.25 * basicSalary;
//     grossSalary = basicSalary + dearnessAllowance + houseRent;
//     cout << "Gross salary: " << grossSalary << endl;
//     return 0;
// }

// #24
// int main()
// {
//     int h1, m1, s1, h2, m2, s2, h3, m3, s3;
//     cout << "Enter first time (HH:MM:SS): ";
//     cin >> h1 >> m1 >> s1;
//     cout << "Enter second time (HH:MM:SS): ";
//     cin >> h2 >> m2 >> s2;
//     s3 = (s1 + s2) % 60;
//     m3 = (m1 + m2 + (s1 + s2) / 60) % 60;
//     h3 = h1 + h2 + (m1 + m2 + (s1 + s2) / 60) / 60;
//     cout << "Sum of times: " << h3 << ":" << m3 << ":" << s3 << endl;
//     return 0;
// }

// #25
// int main()
// {
//     double principal, rate, time, compoundInterest;
//     cout << "Enter the principal amount: ";
//     cin >> principal;
//     cout << "Enter the rate of interest (in %): ";
//     cin >> rate;
//     cout << "Enter the time period (in years): ";
//     cin >> time;
//     rate /= 100;
//     compoundInterest = principal * pow((1 + rate), time) - principal;
//     cout << "Compound interest: " << compoundInterest << endl;
//     return 0;
// }

// #26
// int main()
// {
//     char ch;
//     cout << "Enter a character: ";
//     cin >> ch;
//     int asciiCode = (int)ch;
//     cout << "The ASCII code of " << ch << " is: " << asciiCode << endl;
//     return 0;
// }

// #27
// int main()
// {
//     cout << "Number\tSquare\tCube" << endl;
//     cout << "------\t------\t-----" << endl;
//     for (int i = 1; i <= 3; i++)
//     {
//         cout << i << "\t" << i * i << "\t" << i * i * i << endl;
//     }
//     return 0;
// }

// #28
// int main()
// {
//     int subject1, subject2, subject3, subject4, subject5, totalMarks;
//     float percentage;
//     cout << "Enter marks obtained in five subjects: ";
//     cin >> subject1 >> subject2 >> subject3 >> subject4 >> subject5;
//     totalMarks = subject1 + subject2 + subject3 + subject4 + subject5;
//     percentage = (float)totalMarks / 500 * 100;
//     cout << "Total Marks: " << totalMarks << endl;
//     cout << "Percentage: " << percentage << "%" << endl;
//     return 0;
// }
