import QtQuick 2.15
ButtonBase{
    property string iconPath: ""
    Image {
        anchors.centerIn:parent
        source: iconPath
    }
}
