/* GPLv3 License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the GPLv3 License.
#
# */

#ifndef HELP_FUNCTION_HPP
#define HELP_FUNCTION_HPP
#include "CommandFunc.h"
#include "Colors.hpp"
typest {
public:
    virtual func help() {
        BOLD_GREEN_COLOR
        printlnf("Scrift Functions && Arguments\n");
            GREEN_COLOR
            printlnf("printlnf <arg> : Shows <arg> \n");
            BOLD_RED_COLOR
            printlnf("scr <argument> : Launch /bin/<argument>\n"
            "scr mkdir : Launch Bash's mkdir\n"
            "[For Scrift Developers] lmake : Launch make<dot>scr\n"
            "[For Scrift Developers] lgit : Launch git<dot>scr\n"
            "[For Scrift Developers] devs : Not for you.\n"
            "scr ls\n"
            "scr apt\n"
            "scr make\n"
            "scrlang\n"
            "scrp\n"
            "create_scrift_project <name> : Creates <name><dot>scr file\n");
            YELLOW_COLOR
            printlnf("home || default : Going to /home/<username>\n"
            "lsf || lsfile : List only files\n"
            "lsd || lsdir : List only folders\n"
            "ls : List folders and files\n"
            "fr <folder> : Going to <folder>\n"
            "pwd\n"
            "back : Going to back directory\n");
            BOLD_MAGENTA_COLOR
            printlnf("[For Scrift Developers] getdev <boolean> : Get Developer Permissions\n"
            "castle : Play Scrift's Castle Game!\n"
            "[For Scrift Developers] felog : Shows your FeLog.\n"
            "gitlink || scrift_link || fusionlink : Shows GitHub link.\n"
            "contr || cont || contributors : Shows contributors\n"
            "[For Scrift Developers] clear_log || felog_clear : Clear your FeLog\n"
            "history : Shows your Scrift History.\n"
            "clear_history : Clear your Scrift History\n"
            "[In Development Status] clear_settings : Clear your Settings\n"
            "[In Development Status] settings : Shows your Settings\n"
            "fetcheya : Shows your system\n"
            "-v : Shows version and license\n"
            "readtext <file> : Reads <file>\n"
            "[If your default shell is Scrift] edifor : Open Edifor\n"
            "[If your default shell is Scrift] edifor <filename> : Open Edifor with File\n"
            "username : Shows your username\n");
            BOLD_GREEN_COLOR
            printlnf("addtext <file> : Add text in <file>\n"
            "ctxt <name> : Creates Text file\n");
            BOLD_BLUE_COLOR
            printlnf("pause || stop : Stops your Scrift shell\n"
            "cls || brk : Close Scrift (with Terminal)\n"
            "rstr <number> : Generated random string\n"
            "clear || clear!!! : Clear Scrift inputs\n"
            "[For Development Status] set_locale_system || slcl_sys : Change locale\n"
            "ip || myip : Show your IP and info\n");
        BLACK_COLOR
    }
    virtual func hello() {
        BOLD_BLUE_COLOR
        printlnf("Welcome to ");
        BOLD_GREEN_COLOR
        printlnf("Fegeya Scrift");
        BOLD_BLUE_COLOR
        printlnf(" Terminal\n");
        BOLD_GREEN_COLOR
        printlnf("Fegeya Scrift ");
        BOLD_YELLOW_COLOR
        printlnf("licensed with");
        BOLD_RED_COLOR
        printlnf(" GPLv3\n");
        BOLD_MAGENTA_COLOR
        printlnf("Copyright (c) 2020");
        BOLD_CYAN_COLOR
        printlnf(" Ferhat Gecdogan\n");
        BLACK_COLOR
    }

    virtual func GitLink() {
        YELLOW_COLOR
        printlnf("https://github.com/FerhatGec\n");
        BOLD_BLUE_COLOR
        printlnf("https://github.com/FerhatGec/scrift-lang\n");
        GREEN_COLOR
        printlnf("https://github.com/FerhatGec/fusion-os\n");
        BLACK_COLOR // reset
    }
} fhelp;

#endif // HELP_FUNCTION_HPP
