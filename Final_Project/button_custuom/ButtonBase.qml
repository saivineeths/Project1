import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {

    property bool control_enable: true
    property color normal_color:"yellow"
    property color disable_color:"grey"
    property color hovered_color:"light blue"
    property color pressed_color:"dark blue"
    property color border1_width: "white"//this control_enable is the status of the mouse area enabled
    signal clicked();//signal is intergrated

    id: myRect//id of the rectangle
    width: 100; height: 50
    radius:5
    //    color: "black"
    state: "normal"//intitially the state is normal
    MouseArea
    {
        id: mouseArea
        anchors.fill: parent
        enabled:control_enable
        hoverEnabled: true
        //onPressAndHold:myRect.state="onPressed"
        onEntered: myRect.state="hovered"
        onExited: myRect.state="normal"
        onPressed:myRect.state="onPressed"
        onReleased: myRect.state="normal"
        onClicked: {
            myRect.clicked()
            myRect.state == 'clicked' ? myRect.state = "" : myRect.state = 'clicked';
        }}

states: [
    State {
        name: "normal"
        PropertyChanges {
            target: myRect;
            color:mouseArea.enabled?normal_color:disable_color }
    },

    State {
        name: "hovered"
        PropertyChanges {
            target: myRect;
            color: hovered_color }
    },

    State{
        name:"pressed"
        PropertyChanges {
            target: myRect;
            color:pressed_color
            border.color:border1
        }

        }

]
}




