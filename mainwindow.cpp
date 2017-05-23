#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtGoogleSpeech/qgooglespeech.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //set LCD Numbers Style
    ui->lcdNumber_1->setSegmentStyle(QLCDNumber::Flat);
    ui->lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);
    ui->lcdNumber_3->setSegmentStyle(QLCDNumber::Flat);
    ui->lcdNumber_4->setSegmentStyle(QLCDNumber::Flat);
    ui->lcdNumber_5->setSegmentStyle(QLCDNumber::Flat);
    ui->lcdNumber_6->setSegmentStyle(QLCDNumber::Flat);
    ui->lcdNumber_7->setSegmentStyle(QLCDNumber::Flat);
    ui->lcdNumber_8->setSegmentStyle(QLCDNumber::Flat);
    ui->lcdNumber_1->setStyleSheet("background-color: rgb(147, 255, 156);"); //green
    ui->lcdNumber_3->setStyleSheet("background-color: rgb(98, 103, 99);"); // grey
    ui->lcdNumber_4->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
    ui->lcdNumber_5->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
    ui->lcdNumber_6->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
    ui->lcdNumber_7->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey
    ui->lcdNumber_8->setStyleSheet("background-color: rgb(98, 103, 99);");  // grey

    //set Background of Main Frame
    QPalette palette;
    QImage bg;
    bg.load( ":/Dartboard.png" );
    palette.setBrush((this)->backgroundRole(), QBrush(bg));
    (this)->setPalette(palette);

    //set MP3 of 180
    oneeighty_player = new QMediaPlayer;
    oneeighty_player->setMedia(QUrl::fromLocalFile(QFileInfo("./sounds/180.mp3").absoluteFilePath()));
    oneeighty_player->setVolume(100);

    //set MP3 of 100
    onehundred_player = new QMediaPlayer;
    onehundred_player->setMedia(QUrl::fromLocalFile(QFileInfo("./sounds/100.mp3").absoluteFilePath()));
    onehundred_player->setVolume(100);

    //set MP3 of 137
    onehundthsev_player = new QMediaPlayer;
    onehundthsev_player->setMedia(QUrl::fromLocalFile(QFileInfo("./sounds/137.mp3").absoluteFilePath()));
    onehundthsev_player->setVolume(100);

    //set MP3 of 140
    onehundfourty_player = new QMediaPlayer;
    onehundfourty_player->setMedia(QUrl::fromLocalFile(QFileInfo("./sounds/140.mp3").absoluteFilePath()));
    onehundfourty_player->setVolume(100);

    //set MP3 of 177
    onesevsev_player = new QMediaPlayer;
    onesevsev_player->setMedia(QUrl::fromLocalFile(QFileInfo("./sounds/177.mp3").absoluteFilePath()));
    onesevsev_player->setVolume(100);

    //set MP3 of 26
    twentysix_player = new QMediaPlayer;
    twentysix_player->setMedia(QUrl::fromLocalFile(QFileInfo("./sounds/26.mp3").absoluteFilePath()));
    twentysix_player->setVolume(100);

    //set MP3 of 41
    fourtyone_player = new QMediaPlayer;
    fourtyone_player->setMedia(QUrl::fromLocalFile(QFileInfo("./sounds/41.mp3").absoluteFilePath()));
    fourtyone_player->setVolume(100);

    //set MP3 of 55
    fiftyfive_player = new QMediaPlayer;
    fiftyfive_player->setMedia(QUrl::fromLocalFile(QFileInfo("./sounds/55.mp3").absoluteFilePath()));
    fiftyfive_player->setVolume(100);

    //set MP3 of 60
    sixty_player = new QMediaPlayer;
    sixty_player->setMedia(QUrl::fromLocalFile(QFileInfo("./sounds/60.mp3").absoluteFilePath()));
    sixty_player->setVolume(100);

    //set MP3 of 85
    eightyfive_player = new QMediaPlayer;
    eightyfive_player->setMedia(QUrl::fromLocalFile(QFileInfo("./sounds/85.mp3").absoluteFilePath()));
    eightyfive_player->setVolume(100);

    //set MP3 of Thank you
    thanks_player = new QMediaPlayer;
    thanks_player->setMedia(QUrl::fromLocalFile(QFileInfo("./sounds/thank_you.mp3").absoluteFilePath()));
    thanks_player->setVolume(100);

    //set MP3 Game On
    game_on_player = new QMediaPlayer;
    game_on_player->setMedia(QUrl::fromLocalFile(QFileInfo("./sounds/game_on.mp3").absoluteFilePath()));
    game_on_player->setVolume(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initDarts()
{
    //init
    current_player = 1;
    throww = 0;
    threethrowscore = 0;
    // init player start scores
    player1_score = count;
    player2_score = count;
    player3_score = count;
    player4_score = count;
    player5_score = count;
    player6_score = count;
    player7_score = count;
    player8_score = count;
    player1_temp = count;
    player2_temp = count;
    player3_temp = count;
    player4_temp = count;
    player5_temp = count;
    player6_temp = count;
    player7_temp = count;
    player8_temp = count;
    ui->lcdNumber_1->display(count);
    ui->lcdNumber_2->display(count);
    ui->lcdNumber_3->display(count);
    ui->lcdNumber_4->display(count);
    ui->lcdNumber_5->display(count);
    ui->lcdNumber_6->display(count);
    ui->lcdNumber_7->display(count);
    ui->lcdNumber_8->display(count);
    // textBrowsers to blank
    ui->textBrowser_1->setText("");
    ui->textBrowser_2->setText("");
    ui->textBrowser_3->setText("");
    ui->textBrowser_4->setText("");
}

void MainWindow::on_GameOn_clicked()
{
    //init
    initDarts();
    // play game on sound
    game_on_player->play();
    // set player mode
    playerMode(players);

}

void MainWindow::on_comboBox_2_activated(const QString &arg1)  // set start value
{
    count =  arg1.toInt();
    // player mode
    playerMode(players);
    //init
    initDarts();
}

void MainWindow::on_comboBox_3_activated(const QString &arg1)  // set finish option
{
    if (arg1 == "Double Out")
    {
        finish_option = 1;
    }
    else if (arg1 == "Single Out")
    {
        finish_option = 2;
    }
}

void MainWindow::on_comboBox_activated(int index)  // select how many players
{
    players = index;
    playerMode(players);
    //init
    initDarts();
}

void MainWindow::on_Button_next_clicked()
{
    throww = 0;
    threethrowscore = 0;

    // select next player - check threshold for amount of players
    if (current_player < (2 + players)){
        current_player += 1;
        // display next player with color
        if (current_player == 1)
        {
            // play Google Voice
            playGoogle(player1_score, " Player 1 ");

            // set back colors
            ui->lcdNumber_1->setStyleSheet("background-color: rgb(147, 255, 156);");
            ui->lcdNumber_3->setStyleSheet("background-color: white;");
        }
        else if (current_player == 2)
        {
            // play Google Voice
            playGoogle(player2_score, " Player 2 ");

            // set back colors
            ui->lcdNumber_2->setStyleSheet("background-color: rgb(147, 255, 156);");
            ui->lcdNumber_1->setStyleSheet("background-color: white;");

        }
        else if (current_player == 3)
        {
            // play Google Voice
            playGoogle(player3_score," Player 3 ");

            // set back colors
            ui->lcdNumber_3->setStyleSheet("background-color: rgb(147, 255, 156);");
            ui->lcdNumber_2->setStyleSheet("background-color: white;");
        }
        else if (current_player == 4)
        {
            // play Google Voice
            playGoogle(player4_score, " Player 4 ");

            // set back colors
            ui->lcdNumber_4->setStyleSheet("background-color: rgb(147, 255, 156);");
            ui->lcdNumber_2->setStyleSheet("background-color: white;");
            ui->lcdNumber_3->setStyleSheet("background-color: white;");
        }
        else if (current_player == 5)
        {
            // play Google Voice
            playGoogle(player5_score, " Player 5 ");

            // set back colors
            ui->lcdNumber_5->setStyleSheet("background-color: rgb(147, 255, 156);");
            ui->lcdNumber_2->setStyleSheet("background-color: white;");
            ui->lcdNumber_3->setStyleSheet("background-color: white;");
            ui->lcdNumber_4->setStyleSheet("background-color: white;");
        }
        else if (current_player == 6)
        {
            // play Google Voice
            playGoogle(player6_score, " Player 6 ");

            // set back colors
            ui->lcdNumber_6->setStyleSheet("background-color: rgb(147, 255, 156);");
            ui->lcdNumber_2->setStyleSheet("background-color: white;");
            ui->lcdNumber_3->setStyleSheet("background-color: white;");
            ui->lcdNumber_4->setStyleSheet("background-color: white;");
            ui->lcdNumber_5->setStyleSheet("background-color: white;");
        }
        else if (current_player == 7)
        {
            // play Google Voice
            playGoogle(player7_score, " Player 7 ");

            // set back colors
            ui->lcdNumber_7->setStyleSheet("background-color: rgb(147, 255, 156);");
            ui->lcdNumber_2->setStyleSheet("background-color: white;");
            ui->lcdNumber_3->setStyleSheet("background-color: white;");
            ui->lcdNumber_4->setStyleSheet("background-color: white;");
            ui->lcdNumber_5->setStyleSheet("background-color: white;");
            ui->lcdNumber_6->setStyleSheet("background-color: white;");
        }
        else if (current_player == 8)
        {
            // play Google Voice
            playGoogle(player8_score, " Player 8 ");

            // set back colors
            ui->lcdNumber_8->setStyleSheet("background-color: rgb(147, 255, 156);");
            ui->lcdNumber_2->setStyleSheet("background-color: white;");
            ui->lcdNumber_3->setStyleSheet("background-color: white;");
            ui->lcdNumber_4->setStyleSheet("background-color: white;");
            ui->lcdNumber_5->setStyleSheet("background-color: white;");
            ui->lcdNumber_6->setStyleSheet("background-color: white;");
            ui->lcdNumber_7->setStyleSheet("background-color: white;");
        }
    }
    else{
        current_player = 1;
        // set back colors
        playerMode(players);
        // play Google Voice
        playGoogle(player1_score, " Player 1 ");


    }
    // set dart text browser all to blank
    ui->textBrowser_1->setText("");
    ui->textBrowser_2->setText("");
    ui->textBrowser_3->setText("");
    ui->textBrowser_4->setText("");
}

void MainWindow::on_Button_correct_clicked()
{
    // do the same as next player, without switching player...
    // but set player score value to previous value!!!!
    throww = 0; // set throw to zero to correct score
    threethrowscore = 0;
    // set dart text browser all to blank
    ui->textBrowser_1->setText("");
    ui->textBrowser_2->setText("");
    ui->textBrowser_3->setText("");
    ui->textBrowser_4->setText("");
    if (current_player == 1)
    {
        player1_score = player1_temp;
        ui->lcdNumber_1->display(player1_score); //set lcd to score
        ui->lcdNumber_1->setStyleSheet("background-color: rgb(147, 255, 156);");
    }
    else if (current_player == 2)
    {
        player2_score = player2_temp;
        ui->lcdNumber_2->display(player2_score); //set lcd to score
        ui->lcdNumber_2->setStyleSheet("background-color: rgb(147, 255, 156);");
    }
    else if (current_player == 3)
    {
        player3_score = player3_temp;
        ui->lcdNumber_3->display(player3_score); //set lcd to score
        ui->lcdNumber_3->setStyleSheet("background-color: rgb(147, 255, 156);");
    }
    else if (current_player == 4)
    {
        player4_score = player4_temp;
        ui->lcdNumber_4->display(player4_score); //set lcd to score
        ui->lcdNumber_4->setStyleSheet("background-color: rgb(147, 255, 156);");
    }
    else if (current_player == 5)
    {
        player5_score = player5_temp;
        ui->lcdNumber_5->display(player5_score); //set lcd to score
        ui->lcdNumber_5->setStyleSheet("background-color: rgb(147, 255, 156);");
    }
    else if (current_player == 6)
    {
        player6_score = player6_temp;
        ui->lcdNumber_6->display(player6_score); //set lcd to score
        ui->lcdNumber_6->setStyleSheet("background-color: rgb(147, 255, 156);");
    }
    else if (current_player == 7)
    {
        player7_score = player7_temp;
        ui->lcdNumber_7->display(player7_score); //set lcd to score
        ui->lcdNumber_7->setStyleSheet("background-color: rgb(147, 255, 156);");
    }
    else if (current_player == 8)
    {
        player8_score = player8_temp;
        ui->lcdNumber_8->display(player8_score); //set lcd to score
        ui->lcdNumber_8->setStyleSheet("background-color: rgb(147, 255, 156);");
    }
}

// double option
void MainWindow::on_checkBox_x2_clicked(bool checked)
{
    ui->checkBox_x3->setChecked(0); // only one checkbox can be selected
}
// triple option
void MainWindow::on_checkBox_x3_clicked(bool checked)
{
    ui->checkBox_x2->setChecked(0); // only one checkbox can be selected
}

// Voice activation
void MainWindow::on_comboBox_4_activated(const QString &arg1)
{
    if (arg1 == "Voice On")
    {
        voice = 1;
    }
    else if (arg1 == "Voice Off")
    {
        voice = 0;
    }
    else if (arg1 == "Voice 1/2")
    {
        voice = 2;
    }
}
