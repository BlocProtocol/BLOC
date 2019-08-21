// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2018, The BLOC Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
      "\n ######  #       #######  #####      #     # ####### #     # ####### #     # \n"
        " #     # #       #     # #     #     ##   ## #     # ##    # #        #   #  \n"
        " #     # #       #     # #           # # # # #     # # #   # #         # #    \n"
        " ######  #       #     # #           #  #  # #     # #  #  # #####      #    \n"
        " #     # #       #     # #       ### #     # #     # #   # # #          #    \n"
        " #     # #       #     # #     # ### #     # #     # #    ## #          #    \n"
        " ######  ####### #######  #####  ### #     # ####### #     # #######    #    \n"
        "__________________________________________________________________________\n"
        "### ###  ## ### ### ### ### \n"
        " #  #   #    #  # # #    #  \n"
        " #  ##   #   #  # # ##   #  \n"
        " #  #     #  #  # # #    #  \n"
        " #  ### ##   #  # # ###  #  \n"
        "__________________________________________________________________________\n"
        "TEST-NET address start with TbLoc\n";

const std::string nonWindowsAsciiArt = 
      "\n                                                                            \n"
        "██████╗ ██╗      ██████╗  ██████╗   ███╗   ███╗ ██████╗ ███╗   ██╗███████╗██╗   ██╗\n"
        "██╔══██╗██║     ██╔═══██╗██╔════╝   ████╗ ████║██╔═══██╗████╗  ██║██╔════╝╚██╗ ██╔╝\n"
        "██████╔╝██║     ██║   ██║██║        ██╔████╔██║██║   ██║██╔██╗ ██║█████╗   ╚████╔╝ \n"
        "██╔══██╗██║     ██║   ██║██║        ██║╚██╔╝██║██║   ██║██║╚██╗██║██╔══╝    ╚██╔╝  \n"
        "██████╔╝███████╗╚██████╔╝╚██████╗██╗██║ ╚═╝ ██║╚██████╔╝██║ ╚████║███████╗   ██║   \n"
        "╚═════╝ ╚══════╝ ╚═════╝  ╚═════╝╚═╝╚═╝     ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝   ╚═╝  \n"
        "                                                                                  \n"
        "╦╔╗╔  ╔╗ ╦  ╔═╗╔═╗  ╦ ╦╔═╗  ╔╦╗╦═╗╦ ╦╔═╗╔╦╗\n"
        "║║║║  ╠╩╗║  ║ ║║    ║║║║╣    ║ ╠╦╝║ ║╚═╗ ║ \n"
        "╩╝╚╝  ╚═╝╩═╝╚═╝╚═╝  ╚╩╝╚═╝   ╩ ╩╚═╚═╝╚═╝ ╩ \n"
        "╔╦╗╔═╗╔═╗╔╦╗╔╗╔╔═╗╔╦╗\n"
        " ║ ║╣ ╚═╗ ║ ║║║║╣  ║ \n"
        " ╩ ╚═╝╚═╝ ╩ ╝╚╝╚═╝ ╩ \n"
        "__________________________________________________________________________\n"
        "TEST-NET address start with TbLoc\n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
