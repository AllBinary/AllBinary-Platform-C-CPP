
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
        
#include <android/app/Activity.h>

      
#include <android/content/res/Configuration.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/TouchScreenFactory.h"
#include "org/allbinary/input/motion/button/TouchScreenTypesFactory.h"

class TouchScreenTypeFactory
            : public Object
         {

    private: static TouchScreenTypeFactory* instance() { static std::unique_ptr<TouchScreenTypeFactory> value(new TouchScreenTypeFactory()); return value.get(); }

    public: static TouchScreenTypeFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TouchScreenTypeFactory::instance();
    
}


    public: void update(Activity* activity){

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    TouchScreenFactory* touchScreenFactory = TouchScreenFactory::getInstance();;
    

    TouchScreenTypesFactory* touchScreenTypesFactory = TouchScreenTypesFactory::getInstance();;
    

    Configuration* configuration = activity->getResources()->getConfiguration();;
    

    int32_t touchScreen = configuration->touchscreen;;
    

                        if(touchScreen == Configuration::TOUCHSCREEN_FINGER)
                        
                                    {
                                    touchScreenFactory->setTouchScreenType(touchScreenTypesFactory->FINGER);
    

                        if(!touchScreenFactory->isTouch())
                        
                                    {
                                    PreLogUtil::put("Not Really Exception: This indicates that a touch screen does exist but is not API8 so we will try it", this, commonStrings->PROCESS);
    
touchScreenFactory->setTouch(true);
    

                                    }
                                

                                    }
                                
                             else 
                        if(touchScreen == Configuration::TOUCHSCREEN_STYLUS)
                        
                                    {
                                    touchScreenFactory->setTouchScreenType(touchScreenTypesFactory->STYLUS);
    

                        if(!touchScreenFactory->isTouch())
                        
                                    {
                                    PreLogUtil::put("Not Really Exception: This indicates that a touch screen does exist but is not API8 so we will try it", this, commonStrings->PROCESS);
    
touchScreenFactory->setTouch(true);
    

                                    }
                                

                                    }
                                
                             else 
                        if(touchScreen == Configuration::TOUCHSCREEN_NOTOUCH)
                        
                                    {
                                    touchScreenFactory->setTouchScreenType(touchScreenTypesFactory->NOTOUCH);
    

                                    }
                                
                             else 
                        if(touchScreen == Configuration::TOUCHSCREEN_UNDEFINED)
                        
                                    {
                                    touchScreenFactory->setTouchScreenType(touchScreenTypesFactory->UNDEFINED);
    

                                    }
                                
}


};

            

