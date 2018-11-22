#ifndef ICONLIST_H
#define ICONLIST_H

#include "apk/iconsproxy.h"
#include <QListView>

class IconList : public QListView
{
public:
    explicit IconList(QWidget *parent = nullptr);

    IconsProxy *model() const;
    void setModel(IconsProxy *model);

protected:
    void dragEnterEvent(QDragEnterEvent *event) Q_DECL_OVERRIDE;
    void dragLeaveEvent(QDragLeaveEvent *event) Q_DECL_OVERRIDE;
    void dragMoveEvent(QDragMoveEvent *event) Q_DECL_OVERRIDE;
    void dropEvent(QDropEvent *event) Q_DECL_OVERRIDE;

private:
    void setHighlight(bool value);
};

#endif // ICONLIST_H
