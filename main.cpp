#include <QApplication>
#include <iostream>
//
#include "tetrahedron.h"

using namespace std;

int main(int argc, char *argv[])
{
//Add commentar
    QApplication app(argc, argv);
    if (!QGLFormat::hasOpenGL()) {
        cerr << "This system has no OpenGL support" << endl;
        return 1;
    }
	//skuska
    Tetrahedron tetrahedron;
    tetrahedron.setWindowTitle(QObject::tr("Tetrahedron"));
    tetrahedron.resize(300, 300);
    tetrahedron.show();

    return app.exec();
}
