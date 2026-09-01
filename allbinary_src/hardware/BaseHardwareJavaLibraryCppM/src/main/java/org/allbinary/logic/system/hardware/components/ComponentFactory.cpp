
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Class.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Component.h"

class ComponentFactory
            : public Object
         {

    private: static ComponentFactory instance() { return ComponentFactory(); }

    public: static ComponentFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ComponentFactory::instance();
    
}


    public: const Component VGA = Component("VGA");

    public: const Component IDE = Component("IDE");

    public: const Component SCSI = Component("SCSI");

    public: const Component BRIDGE = Component("bridge");

    public: const Component ETHERNET = Component("Ethernet");

    public: const Component USB = Component("USB");

    public: const Component MULTIMEDIA = Component("Multimedia");

    public: const Component PCI = Component("PCI");

    public: const Component RAID = Component("RAID");

    public: const Component SMBUS = Component("SMBus");

    public: const Component PIC = Component("PIC");

    public: const Component Class = Component("Class");

    public: const Component UNKNOWN = Component(CommonStrings::getInstance().UNKNOWN);

};

            

