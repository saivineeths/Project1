import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15

Window {
    width: 1366
    height: 786
    visible: true
    title: qsTr("Hello World")
        color: "#F3B2A4"

    Row{
        spacing: 10
        anchors.centerIn: parent
        BaseButton{

        }
        ButtonText{
            name:"DELL"
        }
        ButtonIcon{
            iconPath:"qrc:/thumbs-up.png"

        }
        ButtonTextWithIcon{
            name:"OK"
            iconPath:"qrc:/thumbs-up.png"

        }
    }
    Button{
        id:enable
        anchors.bottom: parent.bottom
        onClicked: {
            buttonMouseAreachange.enabled=true
            console.log("enable")
        }

    }
}
