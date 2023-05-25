#AAU project: ROS2-PLC Communication System
## PLC-miniproject

A project that integrates ROS2 nodes and a PLC system to manage and monitor pallet processing operations via TCP/IP.

## Project Description

This mini-project consists of creating two interconnecting programs: a PLC (Programmable Logic Controller) program acting as a TCP client, and a PC program acting as a TCP server. The PLC program controls a physical system, and the PC program monitors the system's behavior.

The system reads the pallet's RFID tag, sends the RFID information to a PC via TCP/IP in XML format, and estimates the pallet's processing time. The data is visualized using a ROS2 Node, which allows the communication between nodes by publishing messages via a topic.

This system demonstrates the application of ROS2 nodes, TCP/IP communication, PLCs, and real-time data processing in modern manufacturing systems.

## System Features

1\. Reads a pallet's RFID tag when a pallet moves to the module

2\. Sends the RFID information to a PC via TCP/IP as an XML-encoded string

3\. The PC program decodes the information and displays the relevant information on-screen during program execution using a ROS2 Node

4\. The PC program returns an estimated processing time to the PLC via TCP/IP

5\. The PLC simulates the physical processing time by letting the pallet wait for the returned time

6\. The decoded data is stored in a file on the PC for future analysis

## Collaborators

- Elias Dam

- Hans Dalsgaard

- Magnus Knudsen

- Nichlas Overgaard Laugesen

- Silas Steensgaard

Our group is ROB4-462, and we are using ROS2 in Python for communicating with a PLC in TCP.

## Project Implementation

**On PLC:**

- Carrier arrived at stopper

- Read out carrier ID

- Read current time and date

- Read/get station ID (static variable with "ST_PLCXX")

- Create XML string from this data

- Send to server

**On server:**

- Parse the XML string and pass the data to a ROS2 node

- Publish the parsed data as a ROS2 message to a topic

- Present the parsed data on screen with a second (subscriber) ROS2 node

- Read processing time from file

- Return processing time to PLC

**On PLC:**

- Simulate processing time by letting the carrier wait for the returned time

- Release carrier

## Technologies Used

- ROS2

- Python

- TCP/IP

- PLC programming

This project is an ideal representation of how modern manufacturing systems can leverage automation, networking, and real-time data processing to enhance operational efficiency.
