#pragma comment(lib, "windowsapp")

#include <iostream>

#include <winrt/Windows.UI.Xaml.h>

using namespace winrt::Windows::UI::Xaml;

int main() {
	winrt::init_apartment();
	std::cout << "Hallo";
	std::cin.get();
	return 0;
}
