// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#pragma once

#include "MainWindow.g.h"

namespace winrt::u::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();

    };
}

namespace winrt::u::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
