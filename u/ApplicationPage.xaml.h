// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#pragma once

#include "ApplicationPage.g.h"

namespace winrt::u::implementation
{
    struct ApplicationPage : ApplicationPageT<ApplicationPage>
    {
        ApplicationPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::u::factory_implementation
{
    struct ApplicationPage : ApplicationPageT<ApplicationPage, implementation::ApplicationPage>
    {
    };
}
