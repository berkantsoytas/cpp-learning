#include <Windows.h>
#include <iostream>
#include <string>

int main()
{
  DISPLAY_DEVICE dd;
  dd.cb = sizeof(dd);
  int deviceIndex = 0;
  while (EnumDisplayDevices(0, deviceIndex, &dd, 0))
  {
    std::string deviceName = dd.DeviceName;
    int monitorIndex = 0;
    while (EnumDisplayDevices(deviceName.c_str(), monitorIndex, &dd, 0))
    {
      std::cout << dd.DeviceName << ", " << dd.DeviceString << "\n";
      ++monitorIndex;
    }
    ++deviceIndex;
  }
  return 0;
}