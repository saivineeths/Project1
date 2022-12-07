import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15

Rectangle{
    id: buttonMain
    width:400
    height:90


    property string buttonText: "Test"
    border.width:3
    border.color:"#b9bab8"
    anchors.margins: 5
    radius: 20

    Text {
        id: name
        font.pixelSize: 25
        text: buttonText
        anchors.centerIn: parent
    }
    MouseArea{
        id: buttonMouseArea
        anchors.fill: parent
        onClicked: {

        }
    }
}
