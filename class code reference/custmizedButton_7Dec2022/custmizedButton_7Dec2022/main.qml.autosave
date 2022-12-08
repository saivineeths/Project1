import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15
Window {
    width: 640
    height: 480
    visible: true
    color:"green"
    title: qsTr("Hello World")
Row{
    spacing:10
    ButtonBase{
        id:one

    }
    TextButton{
        name:"textButton"
    }
    IconButton{
        
        iconPath:"qrc:/Airaa.png"
    }
}
    Button{
        id:newol
        anchors.bottom: parent.bottom
        onClicked: {
            mousearea.enabled=false
            console.log("disables")
        }

    }
    Button{
        id:newop
        anchors.bottom: parent.bottom
        anchors.right:parent.right
        onClicked: {
            mousearea.enabled=true
            console.log("disables")
        }

    }

}
