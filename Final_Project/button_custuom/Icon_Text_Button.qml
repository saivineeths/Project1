import QtQuick 2.15

ButtonBase{
    property string name: ""
    property string icon_path: ""

    Image {
        id: buttom_image
        source:icon_path
        height: parent.height
        width:parent.width
        anchors.top:parent.top
    }
    Text {
        id: button_text
        text: name
        anchors.bottom: parent.bottom
        anchors.horizontalCenter: parent.horizontalCenter
    }
}
