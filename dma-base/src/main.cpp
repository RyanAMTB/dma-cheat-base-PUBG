﻿#include <Pch.h>

bool main()
{
    SetConsoleTitleA("Console - Debug");

    spdlog::set_level(spdlog::level::trace);

    Config::AppConfig config;
    config.LoadFromFile("config.json");

    if (!Mem.Init(config.Proc.Name))
    {
        ERROR("Failed to initialize DMA");
        return 1;
    }

    Globals::ClientBase = Mem.GetBaseAddress(config.Proc.Base);
    Mem.FixCr3();

    if (Kmbox.InitDevice(config.Kmbox.Ip, config.Kmbox.Port, config.Kmbox.Uuid) != 0)
    {
        ERROR("Failed to initialize KMBOX");
        return 1;
    }

    system("pause");
    return 0;
}