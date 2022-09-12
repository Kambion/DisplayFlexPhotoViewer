#include "menucombobox.hpp"

MenuComboBox::MenuComboBox(QWidget *parent, const QString &name) :
    QComboBox(parent) {
    connect(this, SIGNAL(activated(int)), SLOT(runAction(int)));
    addItem(name);
}

void MenuComboBox::addMenuAction(QAction *action) {
    addItem(action->text());
    actions.push_back(action);
}

void MenuComboBox::runAction(int index) {
    if (index <= 0) return;
    actions[index - 1]->trigger();
    setCurrentIndex(0);
}
