#include "dg_replace_exec.h"

Dg_Replace_Exec::Dg_Replace_Exec()
{
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    showMaximized();

    //定义对应列表列数
    s_drawerColumn = 6;
    s_positioinColumn = 7;
    s_judgeStatusColumn = 2;
    s_nameColumn = 1;
    s_agetiaIdColumn = 10;
    s_positionIdColumn = 11;
    s_orderColumn = 0;
    s_doseColumn = 5;


    tableName = "T_AgentiaExecute";//T_AgentiaExecute
    modelOptional = "Mul";
    IsChangeInfo("needchange");
    SetTitle("替换操作");

    All_Control();
}

void Dg_Replace_Exec::UploadTask2Server()
{
    TakeOut();
}
