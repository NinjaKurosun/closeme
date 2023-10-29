#include <iostream>
#include <QtWidgets>


int main(int argc, char** argv)
{
  QApplication app(argc, argv);
  QLabel hello("Hello, world!");
  hello.show();
  
  return app.exec();
}
