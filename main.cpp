#include <game.h>

extern Game *game;

int main(int argc, char *argv[])
{
  int status=0;

  game = new Game(argc,argv);
  status = game->exec ();

  return status;
}
