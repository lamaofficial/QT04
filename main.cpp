#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[]) {
	QApplication app(argc, argv);

	printf("Hello, World!\n");	
	

	int c;
	
	c = 2;

	c = 3;

	printf("A%d", c);

	MainWindow window;
	window.show();

	return app.exec();
}
