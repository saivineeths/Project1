import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    color:"green"
    Row{
        spacing:5
        anchors.centerIn:parent
    ButtonBase{
        id:basebutton
        control_enable:button.base_Button_enabler
//        hovered_color: "maroon"
        onClicked: {
            button.icon_Button_Change();//used to toogle the iconbutton


        }
    }
    TextButton{
        id:textbutton
        name: "ok"
        control_enable:button.text_Button_enabler
        onClicked: {
            button.icon_Text_Button_Change();//used to toogle the icon_text_button
        }
    }
    IconButton
   {
       id:iconbutton
       iconPath: "Airaa.png"
       control_enable:button.iocn_Button_enabler
       onClicked: {
           button.base_Button_Change();//used to toggle the base button
       }
   }

    Icon_Text_Button{
        id:icon_text_button
        icon_path:"Airaa.png"
        name: "Airaa"
         control_enable:button.text_Icon_Button_enabler
         onClicked: {
             button.text_Button_Change();//used to toggle the textbutton enable
         }
    }
}
}
