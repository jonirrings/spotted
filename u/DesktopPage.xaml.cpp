// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "DesktopPage.xaml.h"
#if __has_include("DesktopPage.g.cpp")
#include "DesktopPage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::u::implementation
{
    DesktopPage::DesktopPage()
    {
        InitializeComponent();
    }

    int32_t DesktopPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void DesktopPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void DesktopPage::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }
}
