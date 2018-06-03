#include <QCoreApplication>
#include <iostream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << "Start program\n";
    {

        std::cout << "...............\n";

    }

    std::cout << "Done.\n";
    return a.exec();
}
