#ifndef DG_CHECKPAGE_H
#define DG_CHECKPAGE_H

#include "ui/task/dg_taskclass.h"

class Dg_CheckPage : public Dg_TaskClass
{
    Q_OBJECT
public:
    explicit Dg_CheckPage(QWidget *parent = 0);

signals:

public slots:
private slots:


private:

    void ShowExecuteWindow();
    void DownLoad_TaskList();

};

#endif // DG_CHECKPAGE_H
