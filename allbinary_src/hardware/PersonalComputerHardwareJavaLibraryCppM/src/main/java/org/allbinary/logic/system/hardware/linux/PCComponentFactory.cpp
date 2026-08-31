
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
        
            #include "../../../../../../java/lang/Exception.h"
        
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
        

    private: static const instance: PCComponentFactory = new PCComponentFactory();

    public static PCComponentFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PCComponentFactory.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const componentFactory: ComponentFactory = ComponentFactory.getInstance()!;

private constructor (){

            super();
        }


    public HardwareComponentInterface getInstance(string component, string componentData){

        try {
            
                        if(component != 
                                    null
                                )
                        
                                    {
                                    
                        if(component.compareTo(this.componentFactory!.ETHERNET.toString()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Ethernet(componentData) as HardwareComponentInterface;
    

                                    }
                                
                             else 
                        if(component.compareTo(this.componentFactory!.BRIDGE.toString()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Bridge(componentData) as HardwareComponentInterface;
    

                                    }
                                
                             else 
                        if(component.compareTo(this.componentFactory!.IDE.toString()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new HardDriveController(componentData) as HardwareComponentInterface;
    

                                    }
                                
                             else 
                        if(component.compareTo(this.componentFactory!.MULTIMEDIA.toString()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Media(componentData) as HardwareComponentInterface;
    

                                    }
                                
                             else 
                        if(component.compareTo(this.componentFactory!.SCSI.toString()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new HardDriveController(componentData) as HardwareComponentInterface;
    

                                    }
                                
                             else 
                        if(component.compareTo(this.componentFactory!.USB.toString()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Usb(componentData) as HardwareComponentInterface;
    

                                    }
                                
                             else 
                        if(component.compareTo(this.componentFactory!.VGA.toString()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Video(componentData) as HardwareComponentInterface;
    

                                    }
                                
                             else 
                        if(component.compareTo(this.componentFactory!.PCI.toString()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new PCI(componentData) as HardwareComponentInterface;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Unknown(componentData) as HardwareComponentInterface;
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.FACTORYERROR))
                        
                                    {
                                    this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.GET_INSTANCE, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Unknown(commonStrings!.EXCEPTION);
    
}

}


    public string getComponentType(string component){

                        if(component.indexOf(this.componentFactory!.ETHERNET.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.componentFactory!.ETHERNET.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this.componentFactory!.BRIDGE.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.componentFactory!.BRIDGE.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this.componentFactory!.IDE.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.componentFactory!.IDE.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this.componentFactory!.MULTIMEDIA.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.componentFactory!.MULTIMEDIA.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this.componentFactory!.SCSI.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.componentFactory!.SCSI.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this.componentFactory!.USB.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.componentFactory!.USB.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this.componentFactory!.VGA.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.componentFactory!.VGA.toString();;
    

                                    }
                                
                             else 
                        if(component.compareTo(this.componentFactory!.PCI.toString()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.componentFactory!.PCI.toString();;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.componentFactory!.UNKNOWN.toString();;
    
}


};

            

