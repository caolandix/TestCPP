#ifndef COMMANDPATTERN_H
#define COMMANDPATTERN_H

#include "commondefs.h"
#include "application.h"

class CmdPatApplication : public Application {
public:
    CmdPatApplication(int, char **);
    ~CmdPatApplication();

    virtual int run();
    void displayDescriptions();
private:
    typedef enum {
        LANG_000 = 0,
        APP_100,
        APP_101
    } CmdType;

    typedef struct {
        CmdType type;
        string cmdname;
        string desc;
        int (*pf)();
    } CommandInfo;
    virtual int verifyCmdArgs();
    vector<CommandInfo> m_cmdList;
};

#endif // COMMANDPATTERN_H
