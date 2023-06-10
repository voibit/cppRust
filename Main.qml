import QtQuick
import QtQuick.Window
import QtQuick.Controls
import QmlRustItem
import QtQuick.Layouts

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")


    QmlRustItem {
        id: test

    }


    ColumnLayout {



    Button {
        text: "test me"
        onClicked: test.test()

    }

    Button {
        text: "Array"
        onClicked: test.testArray([33.5, 55.1,8])
    }

    }


}
