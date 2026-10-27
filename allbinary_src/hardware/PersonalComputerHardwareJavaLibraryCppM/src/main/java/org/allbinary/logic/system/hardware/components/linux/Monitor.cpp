
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/MonitorInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Monitor
            : public Object
        , public HardwareComponentInterface, public MonitorInterface {

    private: std::string data;

public: Monitor(std::string data){
this->data= data;
    
}


    public: bool compareTo(HardwareComponentInterface* componentInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->data;
    
}


};

            

