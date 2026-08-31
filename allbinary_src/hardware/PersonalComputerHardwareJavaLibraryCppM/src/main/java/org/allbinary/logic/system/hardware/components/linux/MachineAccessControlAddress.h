
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_MACHINEACCESSCONTROLADDRESS_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_MACHINEACCESSCONTROLADDRESS_H

            #include "../../../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/MachineAccessControlAddressInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MachineAccessControlAddress
            : public Object
        : public HardwareComponentInterface, public MachineAccessControlAddressInterface {
        

public constructor ();

    public bool compareTo(HardwareComponentInterface componentInterface);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_MACHINEACCESSCONTROLADDRESS_H
