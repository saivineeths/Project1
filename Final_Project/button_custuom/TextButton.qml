import QtQuick 2.15

ButtonBase{

    /*! Property declaration set to display the text for the button. */
    property string buttonText: ""

    // Adding a Text Child Object for the button.
    Text {
        id:buttonTxt
        text:buttonText
        anchors.centerIn: parent
    }
}
