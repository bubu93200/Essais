import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello DLL")

    Text {
        text: myLibrary.sayHello()
        anchors.centerIn: parent
    }
}
