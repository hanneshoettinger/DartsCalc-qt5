#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    int count = 501;      // holds init value 501...
    // player score
    int player1_score = 501;
    int player2_score = 501;
    int player3_score = 501;
    int player4_score = 501;
    int player5_score = 501;
    int player6_score = 501;
    int player7_score = 501;
    int player8_score = 501;
    // previous player score
    int player1_temp = 501;
    int player2_temp = 501;
    int player3_temp = 501;
    int player4_temp = 501;
    int player5_temp = 501;
    int player6_temp = 501;
    int player7_temp = 501;
    int player8_temp = 501;
    int throww = 0;
    int threethrowscore = 0;
    int current_player = 1;
    // standard player mode is 2 players
    int players = 0;
    // bull double
    int bull_pressed = 0;
    // finish option
    int finish_option = 1;
    // voice option
    int voice = 1;

    QString dartscore;  // hold current dart score

    QMediaPlayer *oneeighty_player; // play 180 mp3
    QMediaPlayer *onehundred_player; // play 100 mp3
    QMediaPlayer *onehundthsev_player; // play 137 mp3
    QMediaPlayer *onehundfourty_player; // play 140 mp3
    QMediaPlayer *onesevsev_player; // play 177 mp3
    QMediaPlayer *twentysix_player; // play 26 mp3
    QMediaPlayer *fourtyone_player; // play 41 mp3
    QMediaPlayer *fiftyfive_player; // play 55 mp3
    QMediaPlayer *sixty_player; // play 60 mp3
    QMediaPlayer *eightyfive_player; // play 85 mp3
    QMediaPlayer *thanks_player; // play Thank you mp3
    QMediaPlayer *game_on_player; // play Game on mp3


private slots:

    // Game on Button
    void on_GameOn_clicked();

    // init variables
    void initDarts();

    // two checkboxes for double and triple fields
    void on_checkBox_x2_clicked(bool checked);

    void on_checkBox_x3_clicked(bool checked);

    // play sound for score
    void playSound(int dart_value);

    // play google sounds
    void playGoogle(int scorevalue, QString playername);

    // play threethrowscore
    void playGoogleThreeScore(int threethrowscore);

    // play final score
    void playGoogleFinal(int threethrowscore, QString playername);

    // player mode
    void playerMode(int index);

    // update current score
    void updateScore(int score, int currentplayer);

    // next player
    void on_Button_next_clicked();

    // calculation buttons
    void on_pushB_20_clicked(bool checked);
    void on_pushB_19_clicked(bool checked);
    void on_pushB_18_clicked(bool checked);
    void on_pushB_17_clicked(bool checked);
    void on_pushB_16_clicked(bool checked);
    void on_pushB_15_clicked(bool checked);
    void on_pushB_14_clicked(bool checked);
    void on_pushB_13_clicked(bool checked);
    void on_pushB_12_clicked(bool checked);
    void on_pushB_11_clicked(bool checked);
    void on_pushB_10_clicked(bool checked);
    void on_pushB_9_clicked(bool checked);
    void on_pushB_8_clicked(bool checked);
    void on_pushB_7_clicked(bool checked);
    void on_pushB_6_clicked(bool checked);
    void on_pushB_5_clicked(bool checked);
    void on_pushB_4_clicked(bool checked);
    void on_pushB_3_clicked(bool checked);
    void on_pushB_2_clicked(bool checked);
    void on_pushB_1_clicked(bool checked);
    void on_pushB_25_clicked(bool checked);
    void on_pushB_BULL_clicked(bool checked);

    // correct score
    void on_Button_correct_clicked();

    // select how many players
    void on_comboBox_activated(int index);

    // select starting score
    void on_comboBox_2_activated(const QString &arg1);

    void on_comboBox_3_activated(const QString &arg1);

    void on_comboBox_4_activated(const QString &arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
