import QtQuick 2.15
ButtonBase{
    property string iconPath: ""

    Image {
        anchors.centerIn:parent
        source: iconPath
        height:50
        width:100
    }
}
