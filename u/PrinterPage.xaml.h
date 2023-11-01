// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#pragma once

#include "PrinterPage.g.h"

namespace winrt::u::implementation
{
    struct PrinterPage : PrinterPageT<PrinterPage>
    {
        PrinterPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::u::factory_implementation
{
    struct PrinterPage : PrinterPageT<PrinterPage, implementation::PrinterPage>
    {
    };
}
