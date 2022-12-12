import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15
Window {
    width: 640
    height: 480
    visible: true
    color:"maroon"
    title: qsTr("Hello World")
Row{
    spacing:10
    anchors.centerIn: parent
    ButtonBase{
        id:one
        enable_control: true
        onClicked:{
            textbutton.enable_control=false

        }

    }
    TextButton{
        id:textbutton
        name:"textbutton"

    }

    TextIcon{
        name:"Battery"
        image1:"qrc:/batteryimg.png"
        onClicked:{
            textbutton.enable_control=true

        }
    }
    IconButton{
        iconPath:"qrc:/batteryimg.png"
    }


}
}
