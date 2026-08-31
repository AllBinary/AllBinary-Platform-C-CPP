
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
        

    private: static const instance: ComponentFactory = new ComponentFactory();

    public static ComponentFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ComponentFactory.instance;
    
}


    public const VGA: Component = new Component("VGA");

    public const IDE: Component = new Component("IDE");

    public const SCSI: Component = new Component("SCSI");

    public const BRIDGE: Component = new Component("bridge");

    public const ETHERNET: Component = new Component("Ethernet");

    public const USB: Component = new Component("USB");

    public const MULTIMEDIA: Component = new Component("Multimedia");

    public const PCI: Component = new Component("PCI");

    public const RAID: Component = new Component("RAID");

    public const SMBUS: Component = new Component("SMBus");

    public const PIC: Component = new Component("PIC");

    public const Class: Component = new Component("Class");

    public const UNKNOWN: Component = new Component(CommonStrings.getInstance()!.UNKNOWN);

};

            

