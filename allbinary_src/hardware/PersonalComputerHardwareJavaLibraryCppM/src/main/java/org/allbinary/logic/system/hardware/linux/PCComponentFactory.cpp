
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

    private: static PCComponentFactory instance() { return PCComponentFactory(); }

    public: static PCComponentFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PCComponentFactory::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const ComponentFactory componentFactory = ComponentFactory::getInstance();

private: PCComponentFactory(){
}


    public: HardwareComponentInterface getInstance(std::string component, std::string componentData){

        try {
            
                        if(true)
                        
                                    {
                                    
                        if(component.compare(this->componentFactory.ETHERNET.toString()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Ethernet(componentData);
    

                                    }
                                
                             else 
                        if(component.compare(this->componentFactory.BRIDGE.toString()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Bridge(componentData);
    

                                    }
                                
                             else 
                        if(component.compare(this->componentFactory.IDE.toString()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HardDriveController(componentData);
    

                                    }
                                
                             else 
                        if(component.compare(this->componentFactory.MULTIMEDIA.toString()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Media(componentData);
    

                                    }
                                
                             else 
                        if(component.compare(this->componentFactory.SCSI.toString()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HardDriveController(componentData);
    

                                    }
                                
                             else 
                        if(component.compare(this->componentFactory.USB.toString()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Usb(componentData);
    

                                    }
                                
                             else 
                        if(component.compare(this->componentFactory.VGA.toString()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Video(componentData);
    

                                    }
                                
                             else 
                        if(component.compare(this->componentFactory.PCI.toString()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PCI(componentData);
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Unknown(componentData);
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

                        if(LogConfigTypes::LOGGING.contains(LogConfigTypeFactory::getInstance().FACTORYERROR))
                        
                                    {
                                    this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.GET_INSTANCE, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Unknown(commonStrings.EXCEPTION);
    
}

}


    public: std::string getComponentType(std::string component){

                        if(component.indexOf(this->componentFactory.ETHERNET.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentFactory.ETHERNET.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this->componentFactory.BRIDGE.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentFactory.BRIDGE.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this->componentFactory.IDE.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentFactory.IDE.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this->componentFactory.MULTIMEDIA.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentFactory.MULTIMEDIA.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this->componentFactory.SCSI.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentFactory.SCSI.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this->componentFactory.USB.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentFactory.USB.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this->componentFactory.VGA.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentFactory.VGA.toString();;
    

                                    }
                                
                             else 
                        if(component.compare(this->componentFactory.PCI.toString()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentFactory.PCI.toString();;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentFactory.UNKNOWN.toString();;
    
}


};

            

