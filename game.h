#ifndef GAME_H
#define GAME_H
#include <QObject>

class Game : public QObject

{
  Q_OBJECT
public:
  Game(QObject *parent = 0);
  ~Game();

  void initGame();



};
#endif // GAME_H
