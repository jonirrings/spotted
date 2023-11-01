// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "PrinterPage.xaml.h"
#if __has_include("PrinterPage.g.cpp")
#include "PrinterPage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::u::implementation
{
    PrinterPage::PrinterPage()
    {
        InitializeComponent();
    }

    int32_t PrinterPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void PrinterPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void PrinterPage::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }
}
