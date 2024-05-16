## DMA Cheat Base

## Table of Contents
- [DMA Cheat Base](#dma-cheat-base)
- [Table of Contents](#table-of-contents)
- [Introduction](#introduction)
- [Usage](#usage)
- [About the .lib files](#about-the-lib-files)
- [Credits](#credits)

## Introduction
This is a simple base to start building your Direct Memory Access (DMA) cheats.

## Usage
1. Clone the repository.
2. Open the project in Visual Studio.
3. Place `FTD3XX.lib`,  `leechcore.lib` & `vmm.lib` in the project directory, inside `src/Lib` folder.
4. Configure `globals.h` to your needs.
5. Add your own cheat code & initialize it in `main.cpp`.
6. Build the project & send it over to your second machine.
7. Magic!

## About the .lib files
I don't include the .lib files in the repo for security reasons. You can download them [from here](https://mega.nz/file/6MAUiRwB#-X9GNfk4OWtNm0Hc9q256t6DTE0fAOIvevlyrmxIXKo) (at your own risk).

## Credits
- [Ulf Frisk](https://github.com/ufrisk) for [MemProcFS](https://github.com/ufrisk/MemProcFS)
- [SDM](https://github.com/IntelSDM/) for the easy implementation
