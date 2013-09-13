#include <game.h>
#include <global.h>
#include <mainwindow.h>


Game::Game(QObject *parent):
  QObject(parent)
{

}

Game::~Game ()
{

}


void Game::initGame (){

  configure = new Configure();
  chessboard = new ChessBoard();
  MainWindow *mainWindow = new MainWindow();

  mainWindow->show ();
}
