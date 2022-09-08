#include <iostream>
#include <iomanip>

int main()
{
  /*
    This program prompts the user to enter a year (examples 2015, 1992,...) and
    the first weekday of a year [1: Monday, ... 7:Sunday]. To be very clear,
    the weekday may be 1 for Monday, 2 for Tuesday and so on.

    The program then prints the calendar for the specified year. Below is a simple run

    PS E:\Sandbox\CppTemplateProject> .\rooster.exe
    Enter a year  :  2020
    Enter the first day of the year [1: Monday, ... 7:Sunday]: 3

    Calendar for 2020
    --January 2020 --
    Mon   Tue   Wed   Thu   Fri   Sat   Sun
                 1     2     3     4     5
     6     7     8     9    10    11    12
    13    14    15    16    17    18    19
    20    21    22    23    24    25    26
    27    28    29    30    31

    --February 2020 --
    Mon   Tue   Wed   Thu   Fri   Sat   Sun
                                   1     2
     3     4     5     6     7     8     9
    10    11    12    13    14    15    16
    17    18    19    20    21    22    23
    24    25    26    27    28    29

    .....

    This program is slightly challenging and may take you a while to get right.
    Don't worry if it takes you hours, even days! If you were stuck on it, just
    take a look at our reference solution and learn the little tricks we're using
    in here. This program will test your understanding of the many concepts learnt
    so far in the course. Things like
      . data input
      . data output
      . output formatting
      . flow control
      . loops
      . general problem solving skills

    Have fun!
*/

  std::cout << "Please a tpye year: ";
  unsigned short year{};
  std::cin >> year;

  std::cout << std::endl;

  std::cout << "Enter the first day of the year [1: Monday, ... 7:Sunday]: ";
  unsigned short firstDay{};
  std::cin >> firstDay;

  std::cout << std::endl;

  std::cout << "Calender for " << year << std::endl;

  short numberOfDaysInAMonth = {0};
  unsigned short starting_point{firstDay};
  unsigned short day_counter{0};
  unsigned short date_width{6};

  for (int month = 1; month <= 12; month++)
  {
    switch (month)
    {
    case 1:
      numberOfDaysInAMonth = 31;
      std::cout << "--- Januray " << year << " ---\n";
      break;
    case 2:

      (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
          ? numberOfDaysInAMonth = 29
          : numberOfDaysInAMonth = 28;

      std::cout << "--- Februray " << year << " ---\n";
      break;
    case 3:
      numberOfDaysInAMonth = 30;
      std::cout << "--- March " << year << " ---\n";
      break;

    case 4:
      numberOfDaysInAMonth = 30;
      std::cout << "--April " << year << " --" << std::endl;
      break;
    case 5:
      numberOfDaysInAMonth = 31;
      std::cout << "--May " << year << " --" << std::endl;
      break;
    case 6:
      numberOfDaysInAMonth = 30;
      std::cout << "--June " << year << " --" << std::endl;
      break;
    case 7:
      numberOfDaysInAMonth = 31;
      std::cout << "--July " << year << " --" << std::endl;
      break;
    case 8:
      numberOfDaysInAMonth = 31;
      std::cout << "--August " << year << " --" << std::endl;
      break;
    case 9:
      numberOfDaysInAMonth = 30;
      std::cout << "--September " << year << " --" << std::endl;
      break;
    case 10:
      numberOfDaysInAMonth = 31;
      std::cout << "--October " << year << " --" << std::endl;
      break;
    case 11:
      numberOfDaysInAMonth = 30;
      std::cout << "--November " << year << " --" << std::endl;
      break;
    case 12:
      numberOfDaysInAMonth = 31;
      std::cout << "--December " << year << " --" << std::endl;
      break;

    default:
      return 0;
      break;
    }

    // Print day header.
    std::cout << std::setw(date_width) << "Mon"
              << std::setw(date_width) << "Tue"
              << std::setw(date_width) << "Wed"
              << std::setw(date_width) << "Thu"
              << std::setw(date_width) << "Fri"
              << std::setw(date_width) << "Sat"
              << std::setw(date_width) << "Sun"
              << std::endl;

    // print empty data slots in calendar
    for (unsigned short j{1}; j < starting_point; j++)
    {
      std::cout << std::setw(date_width) << "";
      ++day_counter;
      if (day_counter == 7)
      {
        std::cout << std::endl;
        day_counter = 0;
      }
    }

    // print real  day
    for (unsigned short i{1}; i <= numberOfDaysInAMonth; i++)
    {
      std::cout << std::setw(date_width) << i;
      ++day_counter;

      if (day_counter == 7)
      {
        std::cout << std::endl;
        day_counter = 0;
      }
    }

    // next month
    starting_point = day_counter + 1;
    day_counter = 0;
    std::cout << "\n\n";
  }

  return 0;
}

/*

Please a tpye year: 2022

Enter the first day of the year [1: Monday, ... 7:Sunday]: 6

Calender for 2022
--- Januray 2022 ---
   Mon   Tue   Wed   Thu   Fri   Sat   Sun
                                   1     2
     3     4     5     6     7     8     9
    10    11    12    13    14    15    16
    17    18    19    20    21    22    23
    24    25    26    27    28    29    30
    31

--- Februray 2022 ---
   Mon   Tue   Wed   Thu   Fri   Sat   Sun
           1     2     3     4     5     6
     7     8     9    10    11    12    13
    14    15    16    17    18    19    20
    21    22    23    24    25    26    27
    28

--- March 2022 ---
   Mon   Tue   Wed   Thu   Fri   Sat   Sun
           1     2     3     4     5     6
     7     8     9    10    11    12    13
    14    15    16    17    18    19    20
    21    22    23    24    25    26    27
    28    29    30

--April 2022 --
   Mon   Tue   Wed   Thu   Fri   Sat   Sun
                       1     2     3     4
     5     6     7     8     9    10    11
    12    13    14    15    16    17    18
    19    20    21    22    23    24    25
    26    27    28    29    30

--May 2022 --
   Mon   Tue   Wed   Thu   Fri   Sat   Sun
                                   1     2
     3     4     5     6     7     8     9
    10    11    12    13    14    15    16
    17    18    19    20    21    22    23
    24    25    26    27    28    29    30
    31

--June 2022 --
   Mon   Tue   Wed   Thu   Fri   Sat   Sun
           1     2     3     4     5     6
     7     8     9    10    11    12    13
    14    15    16    17    18    19    20
    21    22    23    24    25    26    27
    28    29    30

--July 2022 --
   Mon   Tue   Wed   Thu   Fri   Sat   Sun
                       1     2     3     4
     5     6     7     8     9    10    11
    12    13    14    15    16    17    18
    19    20    21    22    23    24    25
    26    27    28    29    30    31

--August 2022 --
   Mon   Tue   Wed   Thu   Fri   Sat   Sun
                                         1
     2     3     4     5     6     7     8
     9    10    11    12    13    14    15
    16    17    18    19    20    21    22
    23    24    25    26    27    28    29
    30    31

--September 2022 --
   Mon   Tue   Wed   Thu   Fri   Sat   Sun
                 1     2     3     4     5
     6     7     8     9    10    11    12
    13    14    15    16    17    18    19
    20    21    22    23    24    25    26
    27    28    29    30

--October 2022 --
   Mon   Tue   Wed   Thu   Fri   Sat   Sun
                             1     2     3
     4     5     6     7     8     9    10
    11    12    13    14    15    16    17
    18    19    20    21    22    23    24
    25    26    27    28    29    30    31


--November 2022 --
   Mon   Tue   Wed   Thu   Fri   Sat   Sun
     1     2     3     4     5     6     7
     8     9    10    11    12    13    14
    15    16    17    18    19    20    21
    22    23    24    25    26    27    28
    29    30

--December 2022 --
   Mon   Tue   Wed   Thu   Fri   Sat   Sun
                 1     2     3     4     5
     6     7     8     9    10    11    12
    13    14    15    16    17    18    19
    20    21    22    23    24    25    26
    27    28    29    30    31

*/