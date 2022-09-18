#include "wtypes.h"
#include <iostream>
using namespace std;

// Get the horizontal and vertical screen sizes in pixel
void GetDesktopResolution(int &horizontal, int &vertical)
{
  RECT desktop;
  const HWND hDesktop = GetDesktopWindow();
  GetWindowRect(hDesktop, &desktop);
  horizontal = desktop.right;
  vertical = desktop.bottom;
}

int main()
{
  SetProcessDPIAware();
  int horizontal = 0;
  int vertical = 0;
  GetDesktopResolution(horizontal, vertical);
  cout << horizontal << '\n'
       << vertical << '\n';
  return 0;
}