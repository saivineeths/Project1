import QtQuick 2.15
ButtonBase{

    /*! Property declaration to set the source path of the image for the button. */
    property string iconPath: " "

    // Adding an Image Child Object for the button.
    Image {
        anchors.centerIn:parent
        source: iconPath
        height:50
        width:100
    }
}
