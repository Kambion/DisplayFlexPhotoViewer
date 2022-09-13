#ifndef DROPDOWN_H
#define DROPDOWN_H

#include <QObject>
#include <QWidget>
#include <QFrame>
#include <QPushButton>
#include <QList>

class Dropdown : public QPushButton
{
    Q_OBJECT
public:
    explicit Dropdown(QWidget *parent = nullptr, const QList<QPushButton*> &buttons = {});
    void addButtons( const QList<QPushButton*> &buttons = {});
private:
    QFrame frame;
    void showEvent( QShowEvent* event ) override;
private slots:
    void onClick();
signals:

};

#endif // DROPDOWN_H
