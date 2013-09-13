#ifndef GAME_H
#define GAME_H
#include <QtGui/QApplication>
#include <mainwindow.h>
#include <chessboard.h>
class Game : public QApplication
{
    Q_OBJECT
public:
    Game(int argc, char *argv[]);
    ~Game();

    MainWindow *mainWindow;
    ChessBoard *chessboard;
    enum  playerRole {seat,wolf,sheep} player;
    int newGame;
    int tableSheep[5][5],tableWolf[5][5],tableCurrent[5][5];


private :

    void initGame();
signals:

public slots:



};
#endif // GAME_H
