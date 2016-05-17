#ifndef COMMANDPATTERN_H
#define COMMANDPATTERN_H

#include "commondefs.h"
#include "application.h"

class CmdPatApplication : public Application {
public:
    CmdPatApplication(int, char **);
    ~CmdPatApplication();

    virtual int run();
private:
    typedef enum {
        APP_100 = 0,
        APP_101
    } CmdType;

    typedef struct {
        CmdType type;
        string cmdname;
        int (*pf)();
    } CommandInfo;
    virtual int verifyCmdArgs();
    vector<CommandInfo> m_cmdList;
};

#endif // COMMANDPATTERN_H
