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
        control_enable: handeler.base_Button_handeler
        onClicked:{
             handeler.image_Button_handler=!handeler.image_Button_handler
        }

    }
    TextButton{
        id:textbutton
        name:"textbutton"
        control_enable: handeler.text_Button_handeler
        onClicked: {
            console.log((textbuton.name))
            handeler.text_image_Buttom_handler=!handeler.text_image_Buttom_handler
        }

    }

    TextIcon{
        name:"Battery"
        image1:"qrc:/batteryimg.png"
        control_enable: handeler.text_image_Button_handler
        onClicked: {
            console.log("new button")
            handeler.text_Button_handeler=!handeler.text_Button_handeler
        }
    }
    IconButton{
        iconPath:"qrc:/batteryimg.png"
        control_enable: handeler.image_Button_handler
        onClicked: {
            console.log("button clicked")
            handeler.base_Button_handeler=!handeler.base_Button_handeler;
        }

    }


}
}
