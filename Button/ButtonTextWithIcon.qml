import QtQuick 2.15

BaseButton
{
    property string iconPath: ""
    property string name: "text"
    Column{
        anchors.centerIn: parent
        spacing: 4
    Image {
        id: icon
        source: iconPath
        anchors.centerIn: parent
        height: 40
        width: 70
    }

    Text {
        id: text1
        text: name
        font.pixelSize: 20
      anchors.top: icon.bottom


    }
    }
}
