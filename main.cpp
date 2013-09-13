#include <game.h>
#include <QApplication>


int main(int argc, char *argv[])
{
  QApplication *app = new QApplication(argc,argv);
  Game *wolfAndSheep =new Game();
  wolfAndSheep->initGame ();

  return app->exec();
}
