/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/physics/velocity/VelocityProperties.h"

typedef struct VehicleProperties VehicleProperties;
struct VehicleProperties {
    VelocityProperties* velocityProperties;
    VehicleFrictionProperties* vehicleFrictionProperties;
};


VehicleProperties* VehicleProperties_new(VelocityProperties* velocityProperties, VehicleFrictionProperties* vehicleFrictionProperties);

void VehicleProperties_init(VehicleProperties* this, VelocityProperties* velocityProperties, VehicleFrictionProperties* vehicleFrictionProperties);
VehicleFrictionProperties* VehicleProperties_getVehicleFrictionProperties(VehicleProperties* this);
void VehicleProperties_setVehicleFrictionProperties(VehicleProperties* this, VehicleFrictionProperties* vehicleFrictionProperties);
VelocityProperties* VehicleProperties_getVelocityProperties(VehicleProperties* this);

static void VehicleProperties_initFields(VehicleProperties* this) {
    
    
}


void VehicleProperties_init(VehicleProperties* this, VelocityProperties* velocityProperties, VehicleFrictionProperties* vehicleFrictionProperties) {
    VehicleProperties_initFields(this);
        this->velocityProperties = velocityProperties;
        this->vehicleFrictionProperties = vehicleFrictionProperties;
}

VehicleProperties* VehicleProperties_new(VelocityProperties* velocityProperties, VehicleFrictionProperties* vehicleFrictionProperties) {
    VehicleProperties* this = calloc(1, sizeof(VehicleProperties));
    VehicleProperties_init(this, velocityProperties, vehicleFrictionProperties);
    return this;
}


VehicleFrictionProperties* VehicleProperties_getVehicleFrictionProperties(VehicleProperties* this) {
        return this->vehicleFrictionProperties;
}


void VehicleProperties_setVehicleFrictionProperties(VehicleProperties* this, VehicleFrictionProperties* vehicleFrictionProperties) {
        this->vehicleFrictionProperties = vehicleFrictionProperties;
}


VelocityProperties* VehicleProperties_getVelocityProperties(VehicleProperties* this) {
        return this->velocityProperties;
}

