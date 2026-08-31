
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/NoHardwareComponent.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HardwareInterface.h"

class NoHardware
            : public Object
        : public HardwareInterface {
        

    private: static const instance: HardwareInterface = new NoHardware();

    public static HardwareInterface getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoHardware.instance;
    
}


    public HardwareComponentInterface getComponent(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoHardwareComponent.getInstance();;
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "No Hardware";
    
}


    public bool compareTo(HardwareInterface hardwareInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public Hashtable<any, any> difference(HardwareInterface hardwareInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil.getInstance()!.NULL_TABLE;
    
}


};

            

