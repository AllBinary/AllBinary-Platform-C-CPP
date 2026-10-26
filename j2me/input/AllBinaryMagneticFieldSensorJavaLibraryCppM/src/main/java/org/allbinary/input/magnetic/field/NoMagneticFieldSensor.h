
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_INPUT_MAGNETIC_FIELD_NOMAGNETICFIELDSENSOR_H
        #define ORG_ALLBINARY_INPUT_MAGNETIC_FIELD_NOMAGNETICFIELDSENSOR_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/input/AllBinarySensorListener.h>

      
#include <org/allbinary/logic/math/Orientation.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryMagneticFieldSensor.h"

class NoMagneticFieldSensor: public AllBinaryMagneticFieldSensor, public AllBinarySensorListener {

                //@Throws(Exception.constructor)
            
    public: Orientation getOrientation();

    public: void onSensorChange();

};

            


        #endif //ORG_ALLBINARY_INPUT_MAGNETIC_FIELD_NOMAGNETICFIELDSENSOR_H
