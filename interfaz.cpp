#include "interfaz.h"
#include "ui_interfaz.h"


interfaz::interfaz(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::interfaz)
{
    ui->setupUi(this);
    QPixmap pix("/home/esmeralda/Escritorio/nano.jpeg");
    ui->label->setPixmap(pix);
}

interfaz::~interfaz()
{
    delete ui;
}
/*void interfaz::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LenguageChange:
        ui->retranslateUi(this);

        break;
    default:
        break;
    }
}
*/

void interfaz::on_pushButton_clicked()
{
    QFileDialog dialog(this);
    dialog.setNameFilter(tr("Imagenes (*.png *jpeg *.xpm *.pgm"));
    dialog.setViewMode(QFileDialog::Detail);
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open Images"),"/home/esmeralda/Escritorio/", tr("Image Files (*.png *.jpeg *.bmp *.pgm)"));
if(!fileName.isEmpty())
{
    QImage image(fileName);
    ui->label->setPixmap(QPixmap::fromImage(image));
}

}

void interfaz::on_pushButton_2_clicked()
{

}
