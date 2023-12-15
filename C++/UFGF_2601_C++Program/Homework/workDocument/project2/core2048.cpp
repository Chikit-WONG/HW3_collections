#include"core2048.h"

bool Core2048::canMerge()
{
    for (int i = 0; i < BoardSize; ++i)
    {
        for (int j = 0; j < BoardSize; ++j)
        {
            if (i > 0 && board2[i][j] == board2[i - 1][j])
                return true;
            if (i < BoardSize - 1 && board2[i][j] == board2[i + 1][j])
                return true;
            if (j > 0 && board2[i][j] == board2[i][j - 1])
                return true;
            if (j < BoardSize - 1 && board2[i][j] == board2[i][j + 1])
                return true;
        }
    }
    return false;
}

Core2048::Core2048(QWidget *parent)
    : QWidget(parent), generator(std::random_device{}())
{
//    setFixedSize(550, 550);
//    setWindowTitle(tr("2048 Game"));
//    scoreLabel = new QLabel(this);
//    scoreLabel->setGeometry(20, 20, 100, 50);

//    newGame();
}

void Core2048::use_GUI_to_play_game()
{
    setFixedSize(550, 550);
    setWindowTitle(tr("2048 Game"));
    scoreLabel = new QLabel(this);
    scoreLabel->setGeometry(20, 20, 100, 50);

    newGame();
}

void Core2048::keyPressEvent(QKeyEvent *event)
{
    switch (event->key())
    {
    case Qt::Key_Up:
    case Qt::Key_W:
        move(Up);
        break;
    case Qt::Key_Down:
    case Qt::Key_S:
        move(Down);
        break;
    case Qt::Key_Left:
    case Qt::Key_A:
        move(Left);
        break;
    case Qt::Key_Right:
    case Qt::Key_D:
        move(Right);
        break;
    default:
        QWidget::keyPressEvent(event);
    }
}

void Core2048::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setPen(Qt::NoPen);
    painter.setBrush(QColor(0xbbada0));
    painter.drawRect(rect());

    painter.setBrush(QColor(0xcdc1b4));
    for (int i = 0; i < BoardSize; ++i)
        for (int j = 0; j < BoardSize; ++j)
            painter.drawRoundedRect(100 + 100 * j, 100 + 100 * i, 80, 80, 5, 5);
}

void Core2048::newGame()
{
    board2.clear();
    board2.resize(BoardSize);
    for (int i = 0; i < BoardSize; ++i)
        board2[i].resize(BoardSize);

    labels.clear();
    labels.resize(BoardSize);
    for (int i = 0; i < BoardSize; ++i)
        labels[i].resize(BoardSize);

    addRandom();
    addRandom();
    updateLabels();
    score = 0;
    scoreLabel->setText(QString::number(score));
}

void Core2048::move(Direction direction)
{
    bool moved = false;
    switch (direction)
    {
    case Up:
        for (int j = 0; j < BoardSize; ++j)
        {
            for (int i = 1; i < BoardSize; ++i)
            {
                if (board2[i][j] == 0)
                    continue;
                int k = i - 1;
                while (k >= 0 && board2[k][j] == 0)
                    --k;
                if (k >= 0 && board2[k][j] == board2[i][j])
                {
                    board2[k][j] *= 2;
                    score += board2[k][j]; // Update score
                    board2[i][j] = 0;
                    moved = true;
                }
                else
                {
                    k = i - 1;
                    while (k >= 0 && board2[k][j] == 0)
                        --k;
                    if (k + 1 != i)
                    {
                        board2[k + 1][j] = board2[i][j];
                        board2[i][j] = 0;
                        moved = true;
                    }
                }
            }
        }
        break;
    case Down:
        for (int j = 0; j < BoardSize; ++j)
        {
            for (int i = BoardSize - 2; i >= 0; --i)
            {
                if (board2[i][j] == 0)
                    continue;
                int k = i + 1;
                while (k < BoardSize && board2[k][j] == 0)
                    ++k;
                if (k < BoardSize && board2[k][j] == board2[i][j])
                {
                    board2[k][j] *= 2;
                    score += board2[k][j]; // Update score
                    board2[i][j] = 0;
                    moved = true;
                }
                else
                {
                    k = i + 1;
                    while (k < BoardSize && board2[k][j] == 0)
                        ++k;
                    if (k - 1 != i)
                    {
                        board2[k - 1][j] = board2[i][j];
                        board2[i][j] = 0;
                        moved = true;
                    }
                }
            }
        }
        break;
    case Left:
        for (int i = 0; i < BoardSize; ++i)
        {
            for (int j = 1; j < BoardSize; ++j)
            {
                if (board2[i][j] == 0)
                    continue;
                int k = j - 1;
                while (k >= 0 && board2[i][k] == 0)
                    --k;
                if (k >= 0 && board2[i][k] == board2[i][j])
                {
                    board2[i][k] *= 2;
                    score += board2[i][k]; // Update score
                    board2[i][j] = 0;
                    moved = true;
                }
                else
                {
                    k = j - 1;
                    while (k >= 0 && board2[i][k] == 0)
                        --k;
                    if (k + 1 != j)
                    {
                        board2[i][k + 1] = board2[i][j];
                        board2[i][j] = 0;
                        moved = true;
                    }
                }
            }
        }

        break;

    case Right:

        for (int i = 0; i < BoardSize; ++i)
        {
            for (int j = BoardSize - 2; j >= 0; --j)
            {
                if (board2[i][j] == 0)
                    continue;
                int k = j + 1;
                while (k < BoardSize && board2[i][k] == 0)
                    ++k;
                if (k < BoardSize && board2[i][k] == board2[i][j])
                {
                    board2[i][k] *= 2;
                    score += board2[i][k];
                    board2[i][j] = 0;
                    moved = true;
                }
                else
                {
                    k = j + 1;
                    while (k < BoardSize && board2[i][k] == 0)
                        ++k;
                    if (k - 1 != j)
                    {
                        board2[i][k - 1] = board2[i][j];
                        board2[i][j] = 0;
                        moved = true;
                    }
                }
            }
        }
        break;
    }

    if (moved)
    {
        addRandom();
        updateLabels();
    }

    bool gameover = true;

    for (int i = 0; i < BoardSize; ++i)
    {
        for (int j = 0; j < BoardSize; ++j)
        {
            if (board2[i][j] == 0)
            {
                gameover = false;
                break;
            }
        }
    }

    if (gameover && !canMerge())
    {
        QMessageBox::information(this, tr("Game Over"), tr("Game Over"));
        newGame();
    }
}

void Core2048::addRandom()
{
    std::uniform_int_distribution<int> distribution(0, BoardSize * BoardSize - 1);
    std::uniform_int_distribution<int> num_distribution(1, 10);
    int pos = distribution(generator);
    while (board2[pos / BoardSize][pos % BoardSize] != 0)
    {
        pos = distribution(generator);
    }
    int num = num_distribution(generator) <= 9 ? 2 : 4;
    board2[pos / BoardSize][pos % BoardSize] = num;
}

void Core2048::updateLabels()
{
    for (int i = 0; i < BoardSize; ++i)
    {
        for (int j = 0; j < BoardSize; ++j)
        {
            if (labels[i][j] == nullptr)
            {
                labels[i][j] = new QLabel(this);
                labels[i][j]->setAlignment(Qt::AlignCenter);
                labels[i][j]->setGeometry(100 + 100 * j, 100 + 100 * i, 80, 80);
            }
            if (board2[i][j] == 0)
                labels[i][j]->setText("");
            else
                labels[i][j]->setText(QString::number(board2[i][j]));
            switch (board2[i][j])
            {
            case 0:
                labels[i][j]->setStyleSheet("background-color: #cdc1b4; color: #cdc1b4");
                break;
            case 2:
                labels[i][j]->setStyleSheet("background-color: #eee4da; color: #776e65");
                break;
            case 4:
                labels[i][j]->setStyleSheet("background-color: #ede0c8; color: #776e65");
                break;
            case 8:
                labels[i][j]->setStyleSheet("background-color: #f2b179; color: #f9f6f2");
                break;
            case 16:
                labels[i][j]->setStyleSheet("background-color: #f59563; color: #f9f6f2");
                break;
            case 32:
                labels[i][j]->setStyleSheet("background-color: #f67c5f; color: #f9f6f2");
                break;
            case 64:
                labels[i][j]->setStyleSheet("background-color: #f65e3b; color: #f9f6f2");
                break;
            case 128:
                labels[i][j]->setStyleSheet("background-color: #edcf72; color: #f9f6f2");
                break;
            case 256:
                labels[i][j]->setStyleSheet("background-color: #edcc61; color: #f9f6f2");
                break;
            case 512:
                labels[i][j]->setStyleSheet(" background-color: #edc850; color: #f9f6f2");
                break;
            case 1024:
                labels[i][j]->setStyleSheet("background-color: #edc53f; color: #f9f6f2");
                break;

            case 2048:
                labels[i][j]->setStyleSheet("background-color: #edc22e; color: #f9f6f2");
                break;
            default:
                labels[i][j]->setStyleSheet("background-color: #3c3a32; color: #f9f6f2");
                break;
            }
        }
    }
    // Update the score label after updating all the board2 labels
    scoreLabel->setText(QString::number(score));
}









void Core2048::use_CLI_to_play_game()
{
    this->CreateNumber();
    this->CreateNumber();
    std::cout << "Use W (up), A (left), S (down), D (right) to move the tiles. Press Q to quit." << endl;
    while (!this->IsGameOver())
    {
        this->printBoard();
        char key = _getwch();
        this->GameControl(key);
    }
}

void Core2048::use_CLI_to_play_game2()
{

    this->fileName = "2048_Game_Progress.txt";
    ifstream ifs;
    ifs.open(this->fileName, ios::in);
    this->max_grid = 4;
    this->board1.resize(this->max_grid, vector<int>(this->max_grid, 0));


    /*this->score = 0;
    this->board1.resize(this->max_grid, vector<int>(this->max_grid, 0));
    this->filename = "2048_game_progress.txt";*/
    if (!ifs.is_open())
    {
        this->score = 0;
        this->highest_score = 0;
        this->IsNewGame = true;
        ifs.close();
        return;
    }

    char ch;
    ifs >> ch;
    if (ifs.eof())
    {
        this->score = 0;
        this->highest_score = 0;
        this->IsNewGame = true;
        ifs.close();
        return;
    }

    for (int i = 0; i < this->max_grid; i++)
    {
        for (int j = 0; j < this->max_grid; j++)
        {
            ifs >> board1[i][j];
        }
    }

    ifs >> IsNewGame;
    ifs >> score;
    ifs >> highest_score;
    ifs >> probability;
    ifs >> WinningNumber;
    ifs.close();

restart:
newGame:
    if (this->IsNewGame)
    {
        system("clear");

        bool CheckProbability = true;
        while(CheckProbability)
        {
            std::cout << "Probability of occourrence of 4(the propability need to be greater than 0 and less than 1):" << endl;
            std::cin >> this->probability;
            if (!this->IsProbabilityValid())
            {
                std::cout << "Invalid input,please try again:" << endl;
            }
            else
            {
                CheckProbability = false;
            }
        }


        bool CheckWinningNumber = true;
        while (CheckWinningNumber)
        {
            std::cout << "The winning score to achieve(1.the number need to be a power of two. 2.The smallest number is 2 and the biggest number is 2048)" << endl;
            std::cin >> this->WinningNumber;
            if (!this->IsWinningNumberValid(this->WinningNumber))
            {
                std::cout << "Invalid input,please try again:" << endl;
            }
            else
            {
                CheckWinningNumber = false;
            }
        }

        this->CreateNumber();
        this->CreateNumber();
        system("clear");
        this->IsNewGame = false;
    }

    this->IsNewGame = false;

    while (!this->IsGameOver())
    {
    Continue:
        std::cout << "Use W (up), A (left), S (down), D (right) to move the tiles. Press Q to quit." << endl;
        this->printBoard();
        char key = _getwch();
        if (key == 'Q' || key == 'q')
        {
            system("clear");

        Input_error:
            /*cout << "Do you really want to quit?" << endl;
            cout << "1. Yes" << endl;
            cout << "2. No" << endl;

            int select = 0;
            cin >> select;

            if (select == 1)
            {
                cout << "Do you want to save the process?" << endl;
            }*/
            std::cout << "1. save and quit" << endl;
            std::cout << "2. new game" << endl;
            std::cout << "3. continue playing" << endl;

            char select = _getwch();

            if (select == '1')
            {
                this->save();
                system("clear");
                std::cout << "Welcome to continue playing next time." << endl;
                this->IsNewGame = true;
                exit(0);
            }
            else if (select == '2')
            {
                this->NewGame();
                goto newGame;
            }
            else if (select == '3')
            {
                system("clear");
                goto Continue;
            }
            else
            {
                system("clear");
                std::cout << "Input error, please enter again:" << endl;
                goto Input_error;
            }
        }
        this->GameControl(key);
        system("clear");
    }

Input_error2:
    std::cout << "1. Newgame" << endl;
    std::cout << "2. Quit" << endl;

    char select = _getwch();
    if (select == '1')
    {
        this->NewGame();
        goto restart;
    }
    else if (select == '2')
    {
        std::cout << "Welcome to continue playing next time." << endl;
        this->NewGame();
        this->save();
        /*ofstream ofs;
        ofs.open(this->fileName, ios::trunc);
        ofs.close();*/
        //不能直接将文件清空，不然最高分也会清除

    }
    else
    {
        system("clear");
        std::cout << "Input error, please enter again:" << endl;
        goto Input_error2;
    }
}

void Core2048::printBoard()
{
    for (int i = 0; i < this->max_grid; i++)
    {
        for (int j = 0; j < this->max_grid; j++)
        {
            std::cout << "\t" << board1[i][j];
        }
        std::cout << endl;
    }
    std::cout << "Score: " << this->score << " Highest score: "<<this->highest_score << ". Next move: ";
}

int Core2048::twoOrFour()
{
    srand((unsigned int)time(NULL));
    int temp = 1 / this->probability;
    return rand() % temp == 0 ? 4 : 2;
}

void Core2048::GameJudge(bool& flag)
{
    if (flag)
        this->CreateNumber();
}

void Core2048::CreateNumber()
{
    srand((unsigned int)time(NULL));
    while (1)
    {
        int x = rand() % this->max_grid;
        int y = rand() % this->max_grid;
        //cout << "x=" << x << " y=" << y << endl;
        if (board1[y][x] == 0)
        {
            board1[y][x] = this->twoOrFour();
            break;
        }
    }
}

void Core2048::move_up()
{
//    std::cout << 'w' << endl;
    //flag的作用：用来判断是否要随机生成一个数字，考虑如果按了up，但没有移动，就不用生成数字
    bool flag = false;
    for (int i = 0; i < this->max_grid; i++) //每一列扫描
    {
        //bool flag2 = true; //flag2的作用：用来判断移动的那一列是否有移动，如果没有flag2，比如 2 2 2 2（当然，这里的代码是列，但为了注释方便，把它当初行），如果按左，应该是4 2 2 0，但如果没有flag2.则会变为4 4 0 0

        for (int temp = 0; temp < this->max_grid; temp++) //temp是目标，看是否能与后面的合并
        {
            for (int begin = temp + 1; begin < this->max_grid; begin++) //begin是后面的元素，看该如何移动（1.与前面元素合并 2.向前移动 3.不移动）
            {
                if (board1[begin][i] != 0)
                {
                    if (board1[temp][i] == 0)
                    {
                        board1[temp][i] = board1[begin][i];
                        board1[begin][i] = 0;
                        flag = true;
                    }
                    else if (board1[temp][i] == board1[begin][i])
                    {
                        board1[temp][i] += board1[begin][i];
                        board1[begin][i] = 0;
                        score += board1[temp][i] + board1[begin][i];
                        flag = true;
                        //flag2 = false;
                        break;
                    }
                    else
                    {
                        if (temp + 1 != begin && board1[begin][i] != 0)
                        {
                            for (int k = temp + 1; k < this->max_grid; k++)
                            {
                                if (board1[k][i] == 0 && board1[begin][i] != 0)
                                {
                                    board1[k][i] = board1[begin][i];
                                    board1[begin][i] = 0;
                                    flag = true;
                                }
                            }
                            /*board1[temp + 1][i] = board1[begin][i];
                            board1[begin][i] = 0;
                            flag = true;*/
                        }
                    }
                }
                //this->printBoard(); //测试用的
            }

        }


    }
    this->GameJudge(flag);
    //cout << "up" << endl; //test
}

void Core2048::move_down( )
{
    std::cout << 's' << endl;
    bool flag = false;
    for (int i = 0; i < this->max_grid; i++)
    {

        for (int temp = this->max_grid-1; temp >= 0; temp--)
        {
            for (int begin = temp - 1; begin >= 0; begin--)
                if (board1[begin][i] != 0)
                {
                    if (board1[temp][i] == 0)
                    {
                        board1[temp][i] = board1[begin][i];
                        board1[begin][i] = 0;
                        flag = true;
                    }
                    else if (board1[temp][i] == board1[begin][i])
                    {
                        board1[temp][i] += board1[begin][i];
                        board1[begin][i] = 0;
                        score += board1[temp][i] + board1[begin][i];
                        flag = true;
                        break;
                    }
                    else
                    {
                        if (temp - 1 != begin && board1[begin][i] != 0)
                        {
                            for (int k = temp - 1; k >= 0; k--)
                            {
                                if (board1[k][i] == 0 && board1[begin][i] != 0)
                                {
                                    board1[k][i] = board1[begin][i];
                                    board1[begin][i] = 0;
                                    flag = true;
                                }
                            }
                        }
                    }
                }
        }

    }
    this->GameJudge(flag);
}


void Core2048::move_left()
{
    std::cout << 'a' << endl;
    bool flag = false;
    for (int i = 0; i < this->max_grid; i++)
    {


        for (int temp = 0; temp < this->max_grid; temp++)
        {
            for (int begin = temp + 1; begin < this->max_grid; begin++)
            {
                if (board1[i][begin] != 0)
                {
                    if (board1[i][temp] == 0)
                    {
                        board1[i][temp] = board1[i][begin];
                        board1[i][begin] = 0;
                        flag = true;
                    }
                    else if (board1[i][temp] == board1[i][begin])
                    {
                        board1[i][temp] += board1[i][begin];
                        board1[i][begin] = 0;
                        score += board1[i][temp] + board1[i][begin];
                        flag = true;
                        break;
                    }
                    else
                    {
                        if (temp + 1 != begin && board1[i][begin] != 0)
                        {
                            for (int k = temp + 1; k < this->max_grid; k++)
                            {
                                if (board1[i][k] == 0 && board1[i][begin] != 0)
                                {
                                    board1[i][k] = board1[i][begin];
                                    board1[i][begin] = 0;
                                    flag = true;
                                }
                            }

                        }
                    }
                }
            }
        }

    }
    this->GameJudge(flag);
}

void Core2048::move_right()
{
    std::cout << 'd' << endl;
    bool flag = false;
    for (int i = 0; i < this->max_grid; i++)
    {


        for (int temp = this->max_grid-1; temp >= 0; temp--)
        {
            for (int begin = temp - 1; begin >=0; begin--)
            {
                if (board1[i][begin] != 0)
                {
                    if (board1[i][temp] == 0)
                    {
                        board1[i][temp] = board1[i][begin];
                        board1[i][begin] = 0;
                        flag = true;
                    }
                    else if (board1[i][temp] == board1[i][begin])
                    {
                        board1[i][temp] += board1[i][begin];
                        board1[i][begin] = 0;
                        score += board1[i][temp] + board1[i][begin];
                        flag = true;
                        break;
                    }
                    else
                    {
                        if (temp - 1 != begin && board1[i][begin] != 0)
                        {
                            for (int k = temp - 1; k >= 0; k--)
                            {
                                if (board1[i][k] == 0 && board1[i][begin] != 0)
                                {
                                    board1[i][k] = board1[i][begin];
                                    board1[i][begin] = 0;
                                    flag = true;
                                }
                            }

                        }
                    }
                }
            }
        }

    }
    this->GameJudge(flag);
}

void Core2048::GameControl(const wint_t& key)
{
    /*char key = _getwch();*/
    switch (key)
    {
    case 'w':
    case 'W':
    case 56:
    case 72:
        this->move_up();
        break;
    case 's':
    case 'S':
    case 50:
    case 80:
        this->move_down();
        break;
    case 'a':
    case 'A':
    case 52:
    case 75:
        this->move_left();
        break;
    case 'd':
    case 'D':
    case 54:
    case 77:
        this->move_right();
        break;
    default:
        break;
    }
    if (score > highest_score)
    {
        highest_score = score;
    }
}

bool Core2048::IsGameOver()
{
    for (int i = 0; i < this->max_grid; i++)
    {
        for (int j = 0; j < this->max_grid; j++)
        {
            if (board1[i][j] == this->WinningNumber)
            {
                this->printBoard();
                std::cout << endl;
                std::cout << "You win!" << endl;
                std::cout << "Press Enter to restart..." << endl;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cin.ignore(); // 等待用户输入回车
                return true;
            }
        }
    }
    for (int i = 0; i < this->max_grid; i++)
    {
        for (int j = 0; j < this->max_grid; j++)
        {
            if (board1[i][j] == 0)
            {
                return false;
            }
            else if (i < this->max_grid - 1 && board1[i][j] == board1[i + 1][j])
            {
                return false;
            }
            else if (j < this->max_grid - 1 && board1[i][j] == board1[i][j + 1])
            {
                return false;
            }
        }
    }
    if (board1[max_grid - 1][max_grid - 1] == board1[max_grid - 2][max_grid - 1] || board1[max_grid - 1][max_grid - 1] == board1[max_grid - 1][max_grid - 2])
    {
        return false;
    }
    this->printBoard();
    std::cout << endl;
    std::cout << "You Loss" << endl;
    std::cout << "Press Enter to restart..." << endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.ignore(); // 等待用户输入回车
    return true;

}

void  Core2048::save()
{
    ofstream ofs;
    ofs.open(this->fileName, ios::out);
    ofs << 0 << endl;
    for (int i = 0; i < this->max_grid; i++)
    {
        for (int j = 0; j < this->max_grid; j++)
        {
            ofs <<"\t" << board1[i][j];
        }
        ofs << endl;
    }
    ofs << IsNewGame<<" ";
    ofs << score<<" ";
    ofs << highest_score<<" ";
    ofs << probability<<" ";
    ofs << WinningNumber;
    ofs.close();
}

void Core2048::NewGame()
{
    this->score = 0;

    for (int i = 0; i < max_grid; i++)
    {
        for (int j = 0; j < max_grid; j++)
        {
            board1[i][j] = 0;
        }
    }
    this->IsNewGame = true;
    system("clear");
}

bool Core2048::IsProbabilityValid()
{
    if (0 < this->probability && this->probability < 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Core2048::IsWinningNumberValid(const int &wn)
{
    if (wn<2 && wn > 2048)
    {
        return false;
    }

    if (wn % 2!=0)
    {
        return false;
    }

    if (wn==2)
    {
        return true;
    }

    return IsWinningNumberValid(wn / 2);
}
