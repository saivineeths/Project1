import QtQuick 2.15

BaseButton
{
    property string iconPath: ""
    Image {
        id: icon
        source: iconPath
        anchors.centerIn: parent
        height: 60
        width: 90
    }
}
