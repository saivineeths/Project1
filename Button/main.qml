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
            CustomButton{


            }
            CustomButton{
                 property string buttonimage: buttonMain
                Image {
                    height:buttonimage/2
                    width: buttonimage/2
                    source: "thumbs-up.png"
                }

            }
            CustomButton{
                 property string buttonimage: buttonMain
                buttonText: ""
                Image {
                    height:buttonimage/2
                    width: buttonimage/2
                    source: "thumbs-up.png"
                }

            }

        }
    }
}
