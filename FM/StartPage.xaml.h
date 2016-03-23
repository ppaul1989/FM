//
// StartPage.xaml.h
// Declaration of the StartPage class
//

#pragma once

#include "StartPage.g.h"

namespace FM
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class StartPage sealed
	{
	public:
		StartPage();
	private:
		void NewGameButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void ContinueGameButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void ExitGameButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
