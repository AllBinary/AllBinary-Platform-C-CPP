
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/OperatingSystems.h>

      
#include <org/allbinary/logic/system/hardware/linux/LinuxHardware.h>

      
#include <org/allbinary/logic/system/hardware/windows/WindowsHardware.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/hardware/HardwareInterface.h"

class HardwareFactory
            : public Object
         {

    private: static HardwareFactory* instance() { static std::unique_ptr<HardwareFactory> value(new HardwareFactory()); return value.get(); }

    public: static HardwareFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HardwareFactory::instance();
    
}


                //@Throws(Exception.constructor)
            
    public: static HardwareInterface* getInstance(GenericOperatingSystem* os){

        try {
            
    OperatingSystems* operatingSystems = OperatingSystems::getInstance();;
    

                        if(os->getName().compareTo(operatingSystems->LINUX) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<HardwareInterface*>(new LinuxHardware());
    

                                    }
                                
                             else 
                        if(os->getName().indexOf(operatingSystems->WINDOWS) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<HardwareInterface*>(new WindowsHardware());
    

                                    }
                                



                            throw new Exception("No Hardware Imp for: " +os->getName());
                    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


private: HardwareFactory(){
}


};

            

