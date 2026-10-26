
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_HARDDRIVECONTROLLER_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_HARDDRIVECONTROLLER_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/system/hardware/components/interfaces/HardDriveControllerInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HardDriveController
            : public Object
        : public HardwareComponentInterface, public HardDriveControllerInterface {

    private: std::string data;

public: HardDriveController(std::string data);

    public: bool compareTo(HardwareComponentInterface componentInterface);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_HARDDRIVECONTROLLER_H
