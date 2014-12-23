#ifndef GAMESWINDOW_H
#define GAMESWINDOW_H

#include <QMainWindow>
#include <QStringListModel>
#include <QCloseEvent>

#include "appcontroller.h"
#include "objects/game.h"

namespace Ui
{
class GamesWindow;
}

class GamesWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GamesWindow(QWidget *parent, AppController* controller);
    ~GamesWindow();

public slots:
    void onMyGames(QList<Game> games);
    void onMyPurchases(QList<Game> games);

private slots:
    void on_actionQuit_triggered();

    void on_actionRefresh_triggered();

private:
    void closeEvent(QCloseEvent *event);

    Ui::GamesWindow *ui;
    AppController* controller;

    void refreshGames();
};

#endif // GAMESWINDOW_H
