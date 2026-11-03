
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StdUtil;
class HardwareComponentInterface;
class NoHardwareComponent;
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/hardware/HardwareInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NoHardware
            : public virtual Object
        , public virtual HardwareInterface {

    private: static HardwareInterface* instance;

    public: static HardwareInterface* getInstance();


            
    public: NoHardware();
        
    public: HardwareComponentInterface* getComponent(int32_t index);

    public: std::string toString();

    public: bool compareTo(HardwareInterface* hardwareInterface);

    public: ABHashtable<Object*, Object*>* difference(HardwareInterface* hardwareInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_NOHARDWARE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_NOHARDWARE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_NOHARDWARE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>)
#include <org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/interfaces/NoHardwareComponent.h>)
#include <org/allbinary/logic/system/hardware/components/interfaces/NoHardwareComponent.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/logic/system/hardware/HardwareInterface.h")
#include "org/allbinary/logic/system/hardware/HardwareInterface.h"
#endif

        #endif
    
