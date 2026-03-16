#include <QtWidgets/QApplication>
#include <QDebug>
#include "add.h"
int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	qDebug() << "Hello World!";
	qDebug() << "Hello World!";
	qDebug() << "Hello World!";
	return a.exec();
}