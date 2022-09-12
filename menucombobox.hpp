#ifndef MENUCOMBOBOX_HPP
#define MENUCOMBOBOX_HPP

#include <QComboBox>

class MenuComboBox : public QComboBox {
    Q_OBJECT
public:
    explicit MenuComboBox(QWidget *parent = nullptr, const QString &name = "");

    void addMenuAction(QAction *action);

private slots:
    void runAction(int index);

private:
    QList<QAction *> actions{};
};

#endif  // MENUCOMBOBOX_HPP
