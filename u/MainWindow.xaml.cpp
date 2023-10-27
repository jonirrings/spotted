// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
namespace winrt {
	using namespace Microsoft::UI::Xaml;
	using namespace Microsoft::Windows::ApplicationModel::Resources;
}

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::u::implementation
{
	MainWindow::MainWindow()
	{
		InitializeComponent();
		auto resourceLoader = ResourceLoader();
		winrt::hstring t = resourceLoader.GetString(L"AppDisplayName");
		Title(t);
	}
}
