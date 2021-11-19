#include <QApplication>
#include <QPushButton>
#include <iostream>

#include "./OAuth/OAuth.h"

int main (int argc, char *argv[]) {
    QApplication a(argc, argv);

    QString filename = QDir::currentPath()+"/client_setup.json";
    QString scope = "https://www.googleapis.com/auth/calendar";// https://www.googleapis.com/auth/userinfo.email";

    std::cout<<"Create obj\n";
    OAuth au(filename, scope);
    std::cout<<au.toString().toStdString()<<"\n";
    au.startAuth();

    return QApplication::exec();
}
