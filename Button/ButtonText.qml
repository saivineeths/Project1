import QtQuick 2.15

BaseButton
{
    property string name: "text"
    Text {
        id: text1
        text: name
        anchors.centerIn:parent
    }

}
