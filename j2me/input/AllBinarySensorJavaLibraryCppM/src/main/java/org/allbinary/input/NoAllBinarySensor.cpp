
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
        



















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinarySensor.h"

class NoAllBinarySensor: public AllBinarySensor {

    private: static NoAllBinarySensor instance() { return NoAllBinarySensor(); }

    public: static NoAllBinarySensor getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoAllBinarySensor::instance();
    
}


private: NoAllBinarySensor(){
}


};

            

