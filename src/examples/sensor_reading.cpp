/*
 * Copyright (c) 2017 FH Dortmund and others
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Description:
 *    Rover sensor reading example
 *
 * Author:
 *    M. Ozcelikors, FH Dortmund <mozcelikors@gmail.com> - 11.01.2018
 *
 */

#include <stdio.h>

//Basis Include
#include <roverapi/rover_api.hpp>

//Sensor APIs Include
//#include <roverapi/roverxxxx.hpp>

//Using rover namespace from Rover API
using namespace rover;

// Main function
int main()
{
    printf("Started roverapp sensor_reading example.\n");
    
    //This initialization is a one time only must-call before every rover application.
    RoverBase r_base = RoverBase();
    r_base.initialize();
    
  

	printf("Exiting.\n");

	return 0;
}