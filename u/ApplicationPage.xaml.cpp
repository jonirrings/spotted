// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "ApplicationPage.xaml.h"
#if __has_include("ApplicationPage.g.cpp")
#include "ApplicationPage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::u::implementation
{
    ApplicationPage::ApplicationPage()
    {
        InitializeComponent();
    }

    int32_t ApplicationPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void ApplicationPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void ApplicationPage::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }
}
