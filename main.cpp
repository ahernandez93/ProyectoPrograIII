#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

<<<<<<< HEAD

    Curso * curso1 = new Clase(1,"Progra 3",15,"1 pm",501,"Allan Villatoro",1);
    cout<<"Nombre: "<<curso1->getNombre()<<endl;
    cout<<"Catedratico: "<<curso1->getCatedratico()<<endl;

=======
>>>>>>> refs/remotes/origin/master
    return a.exec();
}
