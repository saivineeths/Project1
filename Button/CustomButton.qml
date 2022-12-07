import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15

Rectangle{
    id: buttonMain
    width:250
    height:90
    property string buttonText: "Test"
    border.width:3
    border.color:"#b9bab8"
    anchors.margins: 5
    radius: 20


    MouseArea{
        id: buttonMouseArea
        anchors.fill: parent
        onClicked: {

        }
    }
}
