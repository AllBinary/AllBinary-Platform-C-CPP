
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_LINUX_PCCOMPONENTFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_LINUX_PCCOMPONENTFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/hardware/linux/PCComponentFactory.h"
        

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
        
auto PCComponentFactory::instance_owner() -> PCComponentFactory* { static std::unique_ptr<PCComponentFactory> value(new PCComponentFactory()); return value.get(); }
PCComponentFactory* PCComponentFactory::instance = PCComponentFactory::instance_owner();

    auto PCComponentFactory::getInstance() -> PCComponentFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PCComponentFactory::instance;
    
}


PCComponentFactory::PCComponentFactory() : logUtil(LogUtil::getInstance()), componentFactory(ComponentFactory::getInstance()){
}


    auto PCComponentFactory::getInstance(std::string component, std::string componentData) -> HardwareComponentInterface*{

        try {
            
                        if(true)
                        
                                    {
                                    
                        if(component.compare(JavaString::valueOf(this->componentFactory->ETHERNET)) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<HardwareComponentInterface*>(new Ethernet(componentData));
    

                                    }
                                
                             else 
                        if(component.compare(JavaString::valueOf(this->componentFactory->BRIDGE)) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<HardwareComponentInterface*>(new Bridge(componentData));
    

                                    }
                                
                             else 
                        if(component.compare(JavaString::valueOf(this->componentFactory->IDE)) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<HardwareComponentInterface*>(new HardDriveController(componentData));
    

                                    }
                                
                             else 
                        if(component.compare(JavaString::valueOf(this->componentFactory->MULTIMEDIA)) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<HardwareComponentInterface*>(new Media(componentData));
    

                                    }
                                
                             else 
                        if(component.compare(JavaString::valueOf(this->componentFactory->SCSI)) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<HardwareComponentInterface*>(new HardDriveController(componentData));
    

                                    }
                                
                             else 
                        if(component.compare(JavaString::valueOf(this->componentFactory->USB)) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<HardwareComponentInterface*>(new Usb(componentData));
    

                                    }
                                
                             else 
                        if(component.compare(JavaString::valueOf(this->componentFactory->VGA)) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<HardwareComponentInterface*>(new Video(componentData));
    

                                    }
                                
                             else 
                        if(component.compare(JavaString::valueOf(this->componentFactory->PCI)) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<HardwareComponentInterface*>(new PCI(componentData));
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<HardwareComponentInterface*>(new Unknown(componentData));
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->FACTORYERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new Unknown(commonStrings->EXCEPTION);
    
}

}


    auto PCComponentFactory::getComponentType(std::string component) -> std::string{

                        if(JavaString::indexOf(component, JavaString::valueOf(this->componentFactory->ETHERNET)) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->componentFactory->ETHERNET);;
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(component, JavaString::valueOf(this->componentFactory->BRIDGE)) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->componentFactory->BRIDGE);;
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(component, JavaString::valueOf(this->componentFactory->IDE)) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->componentFactory->IDE);;
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(component, JavaString::valueOf(this->componentFactory->MULTIMEDIA)) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->componentFactory->MULTIMEDIA);;
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(component, JavaString::valueOf(this->componentFactory->SCSI)) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->componentFactory->SCSI);;
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(component, JavaString::valueOf(this->componentFactory->USB)) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->componentFactory->USB);;
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(component, JavaString::valueOf(this->componentFactory->VGA)) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->componentFactory->VGA);;
    

                                    }
                                
                             else 
                        if(component.compare(JavaString::valueOf(this->componentFactory->PCI)) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->componentFactory->PCI);;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->componentFactory->UNKNOWN);;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_LINUX_PCCOMPONENTFACTORY_CPP
