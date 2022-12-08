import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15

Rectangle{
    id: buttonMain
    width:250
    height:90
    border.width:3
    border.color:"#b9bab8"
    radius: 20
 property alias buttonMouseAreachange: buttonMouseArea


    MouseArea{
        id: buttonMouseArea
        anchors.fill: parent
        hoverEnabled: true
        onEntered: buttonMain.state="hovered"
        onExited: buttonMain.state="normal"
        onPressed: buttonMain.state="pressed"
        onReleased: buttonMain.state="normal"

    }
    states:[
    State {
        name: "hovered"
        PropertyChanges {
            target: buttonMain
            color:"blue"
            border.color: "white"

        }
    },
        State {
            name: "normal"
            PropertyChanges {
                target: buttonMain
                color:"white"
                border.color: "#b9bab8"

            }
        },
        State {
            name: "pressed"
            PropertyChanges {
                target: buttonMain
                color:"darkblue"
                border.color: "white"

            }
        }

    ]
}
