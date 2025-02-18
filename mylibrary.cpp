#include "mylibrary.h"

MyLibrary::MyLibrary(QObject *parent) : QObject(parent) {}

QString MyLibrary::sayHello()
{
    return "Hello from the DLL!";
}
