import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 1366
    height: 786
    visible: true
    title: qsTr("Hello World")

    Rectangle{
        color: "#F3B2A4"
        height: parent.height
        width: parent.width
        Row{
            anchors.centerIn: parent
            CustomButton{
                Text {
                    id: name
                    font.pixelSize: 25
                    text: "Text"
                    anchors.centerIn: parent
                }


            }
            CustomButton{

                Column{
                    spacing: 4
                    anchors.centerIn: parent

                Image {
//                    anchors.top: parent.top
//                    anchors.horizontalCenter: parent.horizontalCenter
                    height:40
                    width: 60
                    source: "thumbs-up.png"
                }
                Text {
                    id: icon
                    font.pixelSize: 25
                    text:"Text"
//                    anchors.centerIn: parent
                }
                }




            }
            CustomButton{

                buttonText: ""
                Image {
                    anchors.centerIn: parent
                    height:40
                    width: 60
                    source: "thumbs-up.png"
                }

            }

        }
    }
}
