# IDD Final - Interactive Nightstand

## The Project
We are creating an interactive LED nightstand. The goal is to have 4 distinct LED strips inlayed in the surface of the table top which can be operated by a capactive touch sensing interaction.

## Step 1: The Woodworking
Designing the table in SolidWorks

![Tabletop SW](https://github.com/JwayYih/IDD-Fa19-Final/blob/master/Tabletop%20SW.PNG)

SolidWorks part was converted to an SVG file for Shaper Origin to recognize

![Tabletop SVG File](https://github.com/JwayYih/IDD-Fa19-Final/blob/master/Tabletop%20SVG%20File.PNG)

Origin uses computer vision to create and augmented reality workspace. It uses a patterned tape which is placed on the work surface to register its location. Then with its precision motors it precisely cuts along the uploaded image.

Used the Shaper Origin handheld CNC to cut out the table top

[Cuttting Out Tabletop Video](https://photos.app.goo.gl/qifHks3SJ6dKoCYE8)

Here is the setup with the Shaper Tape

![Origin Setup](https://github.com/JwayYih/IDD-Fa19-Final/blob/master/Origin%20Setup.jpg)

This is the touch interface used to load and place designs as well as adjust all cut parameters (depth, inside/outside/pocket cut, offsets, etc.)

![Origin Interface View](https://github.com/JwayYih/IDD-Fa19-Final/blob/master/Origin%20Interface%20View.jpg)

Here are the cut outs of the top two surfaces

![Origin Cut 1 Top](https://github.com/JwayYih/IDD-Fa19-Final/blob/master/Origin%20Cut%201%20Top.jpg)
![Origin Cut 2 Top](https://github.com/JwayYih/IDD-Fa19-Final/blob/master/Origin%20Cut%202%20Top.jpg)

Used the Festool track saw to cut out the legs

![Festool Track Saw Cut](https://github.com/JwayYih/IDD-Fa19-Final/blob/master/Festool%20Track%20Saw%20Cut.jpg)

All components cut out
![All Components](https://github.com/JwayYih/IDD-Fa19-Final/blob/master/All%20Components.jpg)

Used the Shaper Origin and a tenon jig to create the mating tenons on the legs

All the completed components in an exploded view

![Exploded View](https://github.com/JwayYih/IDD-Fa19-Final/blob/master/Exploded%20View.jpg)

## Step 2: The Circuit

Utilized the Capacitive Sensing Library created by Paul Badger
https://playground.arduino.cc/Main/CapacitiveSensor/

Created a single cap sense sensor to turn on and off an onboard LED

![Cap Sensor](https://github.com/JwayYih/IDD-Fa19-Final/blob/master/Capacitance%20Sensor.jpg)

The [LED strips](https://www.amazon.com/gp/product/B074N1FC56/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1) we used required a 12V external power source, but the Arduino only outputs 5V. So we used the 5V output as a switch for an NPN transistor that would switch on and off the external 12V source to the LED.

Originially, we tried to power the Arduino with a laptop and the LED separately with a 12V source, but this caused some issues (lights could be turned on, but not turned off with cap sensing). We believe there may have been some inconsistencies with the ground reference. To address this we decided to run both the LED and the Arduino off the 12V source. This resolved the issue. The circuit was then repeated 4x, one for each LED strip. This [code](https://github.com/JwayYih/IDD-Fa19-Final/blob/master/CapacitiveSensorTest.ino) was used to run the circuit.

![Final Circuit 1](https://github.com/JwayYih/IDD-Fa19-Final/blob/master/Table%20Circuit%20Closeup.jpg)
![Final Circuit 2](https://github.com/JwayYih/IDD-Fa19-Final/blob/master/Table%20Circuit.jpg)
![Final Circuit 3](https://github.com/JwayYih/IDD-Fa19-Final/blob/master/InkedTable%20Circuit%20Closeup_LI.jpg)

## Step 3: The Assembly

The table was ultimately designed to be press fit together. There is no glue holding it together.

![Final Table](https://github.com/JwayYih/IDD-Fa19-Final/blob/master/Final%20Table.jpg)

[Demo Video](https://github.com/JwayYih/IDD-Fa19-Final/blob/master/Demo%20Video.mp4)
