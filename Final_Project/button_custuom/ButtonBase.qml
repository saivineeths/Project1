/*!
   \qmltype AiraaButton
   \brief A customized Button control

Creating a Custom Button Component with different styles for each button state.
OnPressed, OnHovered, OnExited, OnReleased, OnDisabled are the states the conditions
are implemented. By inherting this component, Color of various states can be modified
by providing the values to the property declared for each state.

*/

import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {

    /*! This property holds the color of the default button.
        The button is tinted with the specified color unless the color is set to "transparent" */
    property color normal_color:"yellow"

    /*! This property holds the color when the button is disabled.
        The button is tinted with the specified color unless the color is set to "transparent" */
    property color disable_color:"grey"

    /*! This property holds the color of the button when hovered.
        The button is tinted with the specified color unless the color is set to "transparent" */
    property color hovered_color:"light blue"

    /*! This property holds the color of the button when clicked.
        The button is tinted with the specified color unless the color is set to "transparent" */
    property color pressed_color:"dark blue"

    /*! This property holds the border color for the button.
        The button is tinted with the specified color unless the color is set to "transparent" */
    property color border_color: "white"

    /*! This property holds the enable property of the button and initialising with true. */
    property bool control_enable: true

    /*! Creating clicked() Signal to integrate with MouseArea onClicked() property.
        This signal is emitted when the button is interactively clicked by the user via touch, mouse or keyboard.

        Note: The corresponding handler is onClicked.*/
    signal clicked();

    id: myRect
    width: 100; height: 50
    radius:5

    // Initializing the state of the button to normal
    state: "normal"

    // MouseArea to perform the actions on the button
    MouseArea
    {
        id: mouseArea
        anchors.fill: parent
        hoverEnabled: true

        // Enabled status of the Mousearea linked with enabled property
        enabled:control_enable

        // Assigning the state of the Button based on the actions performed.
        onEntered: myRect.state="hovered"
        onExited: myRect.state="normal"
        onPressed:myRect.state="onPressed"
        onReleased: myRect.state="normal"


        onClicked: {
            //Linking Mousearea clicked signal to Rectangle clicked signal
            myRect.clicked()

            myRect.state == 'clicked' ? myRect.state = "" : myRect.state = 'clicked';
        }
    }

    /*! Declaration of states for various actions performed on the button. */
    states: [

        /*! Normal State - Default state of the button with conditions for Color
            based on the Enabled State of the button
            \qml
                State {
                    name: "normal"
                    PropertyChanges {
                        target: myRect
                        color:mouseArea.enabled?normal_color:disable_color
                    }
                }
            \endqml
        */
        State {
            name: "normal"
            PropertyChanges {
                target: myRect
                color:mouseArea.enabled?normal_color:disable_color
                border.width: mouseArea.enabled? 0 : 2
            }
        },

        /*! Hovered State - Change the color of the button
            \qml
                State {
                    name: "hovered"
                    PropertyChanges {
                        target: myRect
                        color: hovered_Color
                        border.color:border_color
                        border.width: 2
                    }
                }
            \endqml
        */
        State {
            name: "hovered"
            PropertyChanges {
                target: myRect
                color: hovered_color
                border.color:border_color
                border.width: 2
            }
        },

        /* Pressed State - Change the color of the button
            \qml
                State{
                    name:"pressed"
                    PropertyChanges {
                        target: myRect
                        color:pressed_Color
                    }
                }
            \endqml
        */
        State{
            name:"pressed"
            PropertyChanges {
                target: myRect
                color:pressed_color
            }
        }
    ]
}




