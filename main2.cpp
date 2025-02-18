#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "mylibrary.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    // Charger la DLL
    MyLibrary myLibrary;

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("myLibrary", &myLibrary);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
