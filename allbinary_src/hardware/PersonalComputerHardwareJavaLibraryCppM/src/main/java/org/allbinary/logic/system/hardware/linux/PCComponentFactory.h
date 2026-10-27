
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_LINUX_PCCOMPONENTFACTORY_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_LINUX_PCCOMPONENTFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/system/hardware/components/ComponentFactory.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/linux/Bridge.h>

      
#include <org/allbinary/logic/system/hardware/components/linux/Ethernet.h>

      
#include <org/allbinary/logic/system/hardware/components/linux/HardDriveController.h>

      
#include <org/allbinary/logic/system/hardware/components/linux/Media.h>

      
#include <org/allbinary/logic/system/hardware/components/linux/PCI.h>

      
#include <org/allbinary/logic/system/hardware/components/linux/Unknown.h>

      
#include <org/allbinary/logic/system/hardware/components/linux/Usb.h>

      
#include <org/allbinary/logic/system/hardware/components/linux/Video.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PCComponentFactory
            : public Object
         {

    private: static PCComponentFactory* instance() { static std::unique_ptr<PCComponentFactory> value(new PCComponentFactory()); return value.get(); }

    public: static PCComponentFactory* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: ComponentFactory* componentFactory = ComponentFactory::getInstance();

private: PCComponentFactory();

    public: HardwareComponentInterface* getInstance(std::string component, std::string componentData);

    public: std::string getComponentType(std::string component);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_LINUX_PCCOMPONENTFACTORY_H
