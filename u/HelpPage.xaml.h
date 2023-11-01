// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#pragma once

#include "HelpPage.g.h"

namespace winrt::u::implementation
{
    struct HelpPage : HelpPageT<HelpPage>
    {
        HelpPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::u::factory_implementation
{
    struct HelpPage : HelpPageT<HelpPage, implementation::HelpPage>
    {
    };
}
