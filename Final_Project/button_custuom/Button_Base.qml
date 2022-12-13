import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {

    property bool control_enable: true
    signal clicked();

    id: myRect
    width: 100; height: 50
    radius:5
    //    color: "black"
    state: "normal"
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
            name: "onPressed"
            PropertyChanges {
                target: myRect;
                color: "green" }
        },
        State {
            name: "normal"
            PropertyChanges {
                target: myRect;
                color: mouseArea.enabled?"red":"grey"
            }
        },
        State {
            name: "clicked"
            PropertyChanges {
                target: myRect;
                color: "yellow" }
        },
        State {
            name: "hovered"
            PropertyChanges {
                target: myRect;
                color: "blue"
                border.width: 2}
        }
    ]
}

//Rectangle{
//    id:control
//    height:50
//    width:100
//    color:"blue"
//    border.color: "white"
//    state:"down4"
//    MouseArea{
//        id:mousearea
//        anchors.fill:parent
//        enabled: true
//        hoverEnabled: true
//        onEntered: {
//            console.log("entered")
//            control.color="black"
//        }
//        onExited: {
//            console.log("exited")
//            control.color="blue"
//        }
//  }
//    states:[ State {
//            name: "down"; when: mousearea.pressed
//            PropertyChanges {
//                target: control
//                color:"dark blue"
//                border.width: 1
//            }
//        },
////        State {
////            name: "down2"; when: mousearea.released
////            PropertyChanges {
////                target: control
////                color:mousearea.enabled?"blue":"grey"
////                //border.width: mousearea.entered?0:1
////            }
////        },
//        State {
//            name: "down3"; when: mousearea.entered
//            PropertyChanges {
//                target: control
//                color:"black"
//                //border.width: 4
//            }
//        },

//        State {
//            name: "down4"; when: mousearea.exited
//            PropertyChanges {
//                target: control
//                color:"blue"
//                border.width:0
//            }
//        }
//    ]
//}

