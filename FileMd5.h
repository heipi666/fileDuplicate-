#ifndef FILEMD5_H
#define FILEMD5_H

#include <QObject>

class FileMd5 : public QObject
{
    Q_OBJECT
public:
    explicit FileMd5(QObject *parent = nullptr);

signals:

private:

public slots:
    QByteArray getFileMd5(const QString &fileName);
    QStringList getFiles(const QString &path);

public slots:
};

#endif // FILEMD5_H
