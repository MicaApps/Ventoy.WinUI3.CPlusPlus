# ![image](https://user-images.githubusercontent.com/6630660/220339928-bcdbb6d4-1376-497a-8440-d631cb5e8168.png) Ventoy WinUI3 C++ (Open Source)

C++/WinUI3

## Overview

<img src=https://github.com/MicaApps/Ventoy.WinUI3.CPlusPlus/assets/6630660/aea4b8ff-e010-4572-a7ad-5ecf2a8e93ff width=400 />

Ventoy is an open source tool for making bootable USB drives.With Ventoy, you don’t need to format the USB flash drive repeatedly, you just need to copy ISO/WIM/IMG/VHD(x)/EFI and other types of files directly to the USB flash drive, and you can start without other operations.

You can copy many different types of image files at one time, Ventoy will display a menu for you to choose when starting

## Build

将 WinUIEssential.WinUI3.1.0.13.nupkg 手动添加为程序包源

1. 定位到如下菜单
![image](https://github.com/MicaApps/Ventoy.WinUI3.CPlusPlus/assets/6630660/f3cb3806-5efb-4603-a3e4-67ea45837094)

2. 在 程序包源，右上角点击添加，然后路径修改为 本机路径……\packages\WinUIEssential.WinUI3.1.0.13
![4316b8dbd70554f5101bf8d07eecda41](https://github.com/MicaApps/Ventoy.WinUI3.CPlusPlus/assets/6630660/c373f10e-2424-48c0-bec8-6057740e7043)

3.因为在这里有这个文件
![image](https://github.com/MicaApps/Ventoy.WinUI3.CPlusPlus/assets/6630660/56298497-178c-4f43-be25-f89f2484bf09)

4.然后右键解决方案，选择“管理解决方案的程序包…”
![image](https://github.com/MicaApps/Ventoy.WinUI3.CPlusPlus/assets/6630660/6209ec03-fb0f-4224-93b8-5ddc8a0ee718)

5.在右上角的程序包源选择为“全部”
![image](https://github.com/MicaApps/Ventoy.WinUI3.CPlusPlus/assets/6630660/8002d367-0b65-4e18-96f1-afa3c786e00a)

这样才能正确还原程序包。
