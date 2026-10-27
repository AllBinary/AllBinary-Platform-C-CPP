
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
        



        #ifndef ORG_ALLBINARY_INPUT_NOALLBINARYSENSOR_CPP
        #define ORG_ALLBINARY_INPUT_NOALLBINARYSENSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/NoAllBinarySensor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/AllBinarySensor.h"

auto NoAllBinarySensor::instance_owner() -> NoAllBinarySensor* { static std::unique_ptr<NoAllBinarySensor> value(new NoAllBinarySensor()); return value.get(); }
NoAllBinarySensor* NoAllBinarySensor::instance = NoAllBinarySensor::instance_owner();

    auto NoAllBinarySensor::getInstance() -> NoAllBinarySensor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoAllBinarySensor::instance;
    
}


NoAllBinarySensor::NoAllBinarySensor(){
}




        #endif //ORG_ALLBINARY_INPUT_NOALLBINARYSENSOR_CPP
