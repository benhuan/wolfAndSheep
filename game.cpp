#include <game.h>

Game::Game(int argc, char *argv[]):
  QApplication(argc, argv)
{
  initGame ();
}

Game::~Game ()
{
  delete mainWindow;
}


void Game::initGame (){
  player = sheep;
  newGame = 1 ;

  tableSheep[5][5]={
    {wolf,seat,wolf,seat,wolf},
    {seat,seat,seat,seat,seat},
    {sheep,sheep,sheep,sheep,sheep},
    {sheep,sheep,sheep,sheep,sheep},
    {sheep,sheep,sheep,sheep,sheep}
  };
  tableWolf[5][5]={
    {sheep,sheep,sheep,sheep,sheep},
    {sheep,sheep,sheep,sheep,sheep},
    {sheep,sheep,sheep,sheep,sheep},
    {seat,seat,seat,seat,seat},
    {wolf,seat,wolf,seat,wolf}
  };

  tableCurrent[5][5]={
    {wolf,seat,wolf,seat,wolf},
    {seat,seat,seat,seat,seat},
    {sheep,sheep,sheep,sheep,sheep},
    {sheep,sheep,sheep,sheep,sheep},
    {sheep,sheep,sheep,sheep,sheep}
  };




  mainWindow = new MainWindow();

}
