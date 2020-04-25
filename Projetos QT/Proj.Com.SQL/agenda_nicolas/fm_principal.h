#ifndef FM_PRINCIPAL_H
#define FM_PRINCIPAL_H

#include <QDialog>
#include "fm_novocontato.h"

namespace Ui {
class fm_principal;
}

class fm_principal : public QDialog
{
    Q_OBJECT

public:
    explicit fm_principal(QWidget *parent = nullptr);
    ~fm_principal();

private slots:
    void on_btn_adicionar_clicked();

    void on_btn_pesquisar_clicked();

private:
    Ui::fm_principal *ui;
};

#endif // FM_PRINCIPAL_H
