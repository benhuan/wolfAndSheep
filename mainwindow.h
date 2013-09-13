#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


class MainWindow : public QMainWindow
{
  Q_OBJECT
  
public:
  MainWindow(QWidget *parent = 0);
  ~MainWindow();
  QMenuBar *menubar;
  QToolBar *toolbar;
  QStatusBar *statusbar;


private:
  void initWindow();


};

#endif // MAINWINDOW_H
