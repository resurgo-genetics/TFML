#ifndef FILELISTWIDGET_H
#define FILELISTWIDGET_H
#include <QtWidgets>
#include <QWidget>
#include <QHBoxLayout>
#include <QLabel>
#include <QListWidget>

class FileListWidget : public QWidget
{
    Q_OBJECT

public:
    FileListWidget(QWidget *widget);
    QTreeWidgetItem *getCurrentItem();

public slots:
    void addFile( QString path );
    void delFile();
    void addDirectory( QString path );
    void clickedEvent( QTreeWidgetItem *aItem, int aNumber );

signals:
    void itemClicked( QTreeWidgetItem *aItem, int aNumber );
    void readFile( QString fileName );

private:
    QTreeWidget *mTree;
    QFileInfoList allfile( QTreeWidgetItem *aRoot, QString aPath );
};

#endif // FILELISTWIDGET_H
