#include <QCoreApplication>
#include <iostream>
#include "stack.h"



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << "Start program\n";
    {

        std::cout << "...............\n";

        static double sum = 0;

        customer c1;
        strcpy(c1.fullname, "John");
        c1.payment = 12.0;


        // push customers
        Stack st;  // создание пустого стека

        if (st.isfull()) {
            std::cout << "Stack already full\n";  // стек уже полон
        } else {
            st.push(c1);
            std::cout << c1.fullname << " pushed" << std::endl;
        }

        // pop customers
        if (st.isempty()) {
            std::cout << "Stack already empty\n";  // стек уже пуст
        } else {
            st.pop(c1);
            std::cout << c1.fullname << " popped" << std::endl;
            sum += c1.payment;
        }

        // let's pop one last customer
        if (st.isempty()) {
            std::cout << "Stack already empty\n";  // стек уже пуст
        } else {
            st.push(c1);
            std::cout << c1.fullname << " popped" << std::endl;
            sum += c1.payment;
        }

        std::cout << "Here is our new running total: $" << sum
             << std::endl;
    }

    std::cout << "Done\n";
    return a.exec();
}
