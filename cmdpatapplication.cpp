#include "cmdpatapplication.h"
#include "uva_problems.h"

CmdPatApplication::CmdPatApplication(int argc, char **argv) : Application(argc, argv) {

    m_cmdList = {
        { APP_100, "100", &uva_Prob100 },
        { APP_101, "101", &uva_Prob101 }
    };
}

int CmdPatApplication::run() {
    return (!verifyCmdArgs()) ? static_cast<CommandInfo &>(m_cmdList.at(APP_100)).pf() : 1;
}

int CmdPatApplication::verifyCmdArgs() {
    int retCode = 0;
    if (m_argv.size() != 2)
        retCode = 1;
    return retCode;
}

CmdPatApplication::~CmdPatApplication() {

}
