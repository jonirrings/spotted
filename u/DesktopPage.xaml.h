// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#pragma once

#include "DesktopPage.g.h"

namespace winrt::u::implementation
{
    struct DesktopPage : DesktopPageT<DesktopPage>
    {
        DesktopPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::u::factory_implementation
{
    struct DesktopPage : DesktopPageT<DesktopPage, implementation::DesktopPage>
    {
    };
}
