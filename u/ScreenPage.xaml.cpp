// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "ScreenPage.xaml.h"
#if __has_include("ScreenPage.g.cpp")
#include "ScreenPage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::u::implementation
{
    ScreenPage::ScreenPage()
    {
        InitializeComponent();
    }

    int32_t ScreenPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void ScreenPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void ScreenPage::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }
}
