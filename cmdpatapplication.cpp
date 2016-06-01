#include "cmdpatapplication.h"
#include "uva_problems.h"
#include "lang_problems.h"

CmdPatApplication::CmdPatApplication(int argc, char **argv) : Application(argc, argv) {

    m_cmdList = {
        { LANG_000, "000", "Demonstrates vitual dtor usage", &virtual_dtor_demo },
        { APP_100, "100", "3n + 1 problem", &uva_Prob100 },
        { APP_101, "101", "Demonstrates the Command design pattern", &uva_Prob101 }
    };
}


CmdPatApplication::~CmdPatApplication() {
}

void CmdPatApplication::displayDescriptions() {
    cout << "Here's a list of possible commands to supply on the command line:" << endl;
    for (vector<CommandInfo>::iterator iter = m_cmdList.begin(); iter != m_cmdList.end(); iter++)
        cout << "\t\t" << (*iter).cmdname << ": " << (*iter).desc << endl;
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
