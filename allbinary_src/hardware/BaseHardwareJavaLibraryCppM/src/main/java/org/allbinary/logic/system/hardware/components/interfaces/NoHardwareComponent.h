
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_INTERFACES_NOHARDWARECOMPONENT_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_INTERFACES_NOHARDWARECOMPONENT_H

            #include "../../../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HardwareComponentInterface.h"

class NoHardwareComponent
            : public Object
        : public HardwareComponentInterface {

    private: static NoHardwareComponent instance() { return NoHardwareComponent(); }

    public: static NoHardwareComponent getInstance();

    public: bool compareTo(HardwareComponentInterface componentInterface);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_INTERFACES_NOHARDWARECOMPONENT_H
