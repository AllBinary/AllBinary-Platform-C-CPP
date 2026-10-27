
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_COMPONENTFACTORY_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_COMPONENTFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Component;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ComponentFactory
            : public virtual Object
         {

    private: static ComponentFactory* instance_owner();
    private: static ComponentFactory* instance;

    public: static ComponentFactory* getInstance();


            
    public: ComponentFactory();
        
    public: Component* VGA;

    public: Component* IDE;

    public: Component* SCSI;

    public: Component* BRIDGE;

    public: Component* ETHERNET;

    public: Component* USB;

    public: Component* MULTIMEDIA;

    public: Component* PCI;

    public: Component* RAID;

    public: Component* SMBUS;

    public: Component* PIC;

    public: Component* Class;

    public: Component* UNKNOWN;

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_COMPONENTFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_COMPONENTFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_COMPONENTFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/system/hardware/components/Component.h")
#include "org/allbinary/logic/system/hardware/components/Component.h"
#endif

        #endif
    
