#ifndef GLOBAL_H
#define GLOBAL_H

#include <QObject>

class Global : public QObject
{
    Q_OBJECT
public:
    explicit Global(QObject *parent = 0);

signals:

public slots:
};

#endif // GLOBAL_H