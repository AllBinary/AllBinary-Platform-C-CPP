
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_NOHARDWARE_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_NOHARDWARE_H

            #include "../../../../../java/lang/Object.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/NoHardwareComponent.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HardwareInterface.h"

class NoHardware
            : public Object
        : public HardwareInterface {

    private: static const HardwareInterface instance = NoHardware();

    public: static HardwareInterface getInstance();

    public: HardwareComponentInterface getComponent(int32_t index);

    public: std::string toString();

    public: bool compareTo(HardwareInterface hardwareInterface);

    public: Hashtable<any, any> difference(HardwareInterface hardwareInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_NOHARDWARE_H
