#ifndef DG_TASKCLASS_H
#define DG_TASKCLASS_H

#include <QDialog>
#include "common/updatesql.h"
#include "common/commonmodel.h"
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QMouseEvent>
#include <QMap>

namespace Ui {
class Dg_TaskClass;
}

class Dg_TaskClass : public QDialog
{
    Q_OBJECT

public:
    explicit Dg_TaskClass(QWidget *parent = 0);
    ~Dg_TaskClass();
    QString table_exec;
    QString table_sea;
protected slots:
    void on_pB_exec_clicked();

    void on_pB_apply_clicked();

    void on_pB_delete_clicked();

    void on_pB_search_clicked();

    void on_CB_return_clicked();
protected:
    void SetTitle(QString name);
    UpdateSQL *updateSQL;
    CommonModel *commonModel;

    void Add(QTableWidget *goal, QTableWidget *source);
    void Del(QTableWidget *source);
    void ShowUI();
    void ShowSQL();
    virtual void DownLoad_TaskList();
    void SortAscend();
    void mousePressEvent(QMouseEvent *event);
    void CleanSQLTable(QString name);
    void Write_Sql(QMap <int, QString> map, QString &name);
    bool GetContent(QTableWidget *source, QString name);
    void ShowExecuteWindow();

private:
    Ui::Dg_TaskClass *ui;
};

#endif // DG_TASKCLASS_H
