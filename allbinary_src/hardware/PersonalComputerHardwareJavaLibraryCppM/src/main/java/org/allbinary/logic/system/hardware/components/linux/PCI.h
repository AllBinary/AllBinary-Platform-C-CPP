
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_PCI_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_PCI_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>
#include <org/allbinary/logic/system/hardware/components/interfaces/VideoInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PCI
            : public virtual Object
        , public virtual HardwareComponentInterface, public virtual VideoInterface {

    private: std::string data;

public: PCI(std::string data);

    public: bool compareTo(HardwareComponentInterface* componentInterface);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_PCI_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_PCI_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_PCI_H_COMPLETE
        #if __has_include(<org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>)
#include <org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/interfaces/VideoInterface.h>)
#include <org/allbinary/logic/system/hardware/components/interfaces/VideoInterface.h>
#endif

        #endif
    
