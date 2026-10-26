
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
        
#include <org/allbinary/android/input/motion/event/AnalogControllerConfigurationEvent.h>

      
#include <org/allbinary/android/input/motion/event/AnalogControllerConfigurationEventHandler.h>

      
#include <org/allbinary/logic/math/ScaleFactorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AnalogControllerConfigurationFactory
            : public Object
         {

    private: static AnalogControllerConfigurationFactory instance() { return AnalogControllerConfigurationFactory(); }

    public: static AnalogControllerConfigurationFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AnalogControllerConfigurationFactory::instance();
    
}


    public: const int32_t SCALE_FACTOR = ScaleFactorFactory::getInstance().DEFAULT_SCALE_FACTOR;

    public: const int32_t SCALE_VALUE = ScaleFactorFactory::getInstance().DEFAULT_SCALE_VALUE;

    private: bool available= false;

    private: const AnalogControllerConfigurationEvent analogControllerConfigurationEvent = AnalogControllerConfigurationEvent(this);

private: AnalogControllerConfigurationFactory(){
}


    public: bool isAvailable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->available;
    
}


                //@Throws(Exception.constructor)
            
    public: void setAvailable(bool available){
this->available= available;
    
AnalogControllerConfigurationEventHandler::getInstance().fireEvent(this->analogControllerConfigurationEvent);
    
}


};

            

