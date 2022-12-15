import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    color:"black"

    Row{
        spacing:5
        anchors.centerIn:parent
        ButtonBase{
            id:basebutton
            control_enable:button.base_Button_enabler   // Setting value to the property from backend

            onClicked: {
                button.icon_Button_Change();            // Backend call to toogle the iconbutton
            }
        }
        TextButton{
            id:textbutton
            buttonText: "ok"            // Passing Values to the property inherited from the component
            control_enable:button.text_Button_enabler   // Setting value to the property from backend

            onClicked: {
                button.icon_Text_Button_Change();       // Backend call to toogle the icon_text_button
            }
        }
        IconButton
        {
            id:iconbutton
            iconPath: "Airaa.png"       // Passing Values to the property inherited from the component
            control_enable:button.iocn_Button_enabler   // Setting value to the property from backend

            onClicked: {
                button.base_Button_Change();            // Backend call to toggle the base button
            }
        }

        Icon_Text_Button{
            id:icon_text_button
            iconPath:"Airaa.png"        // Passing Values to the property inherited from the component
            buttonText: "Airaa"         // Passing Values to the property inherited from the component
            control_enable:button.text_Icon_Button_enabler  // Setting value to the property from backend

            onClicked: {
                button.text_Button_Change();            // Backend call to toggle the textbutton enable
            }
        }
    }
}
