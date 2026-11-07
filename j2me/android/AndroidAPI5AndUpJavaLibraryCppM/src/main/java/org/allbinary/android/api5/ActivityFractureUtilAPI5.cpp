
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
        



        #ifndef ORG_ALLBINARY_ANDROID_API5_ACTIVITYFRACTUREUTILAPI5_CPP
        #define ORG_ALLBINARY_ANDROID_API5_ACTIVITYFRACTUREUTILAPI5_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/api5/ActivityFractureUtilAPI5.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <android/app/Activity.h>

      
#include <org/allbinary/input/motion/button/TouchScreenTypeFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/android/api1/ActivityFractureUtilAPI1.h>

      
#include <org/allbinary/input/motion/button/TouchScreenFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ActivityFractureUtilAPI5::ActivityFractureUtilAPI5() {
        }
        auto ActivityFractureUtilAPI5::instance5_owner() -> ActivityFractureUtilAPI5* { static std::unique_ptr<ActivityFractureUtilAPI5> value(new ActivityFractureUtilAPI5()); return value.get(); }
ActivityFractureUtilAPI5* ActivityFractureUtilAPI5::instance5 = ActivityFractureUtilAPI5::instance5_owner();

    auto ActivityFractureUtilAPI5::getInstance() -> ActivityFractureUtilAPI5*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ActivityFractureUtilAPI5::instance5;
    
}


    auto ActivityFractureUtilAPI5::process(Activity* activity) -> void{

    TouchScreenFactory* touchScreenFactory = TouchScreenFactory::getInstance();;
    

    TouchScreenTypeFactory* touchScreenTypeFactory = TouchScreenTypeFactory::getInstance();;
    
touchScreenFactory->setTouch(this->isTouch(activity));
    
touchScreenFactory->setMultiTouch(this->isMultiTouch(activity));
    
touchScreenFactory->setMultiTouchDistinct(this->isMultiTouchDistinct(activity));
    
touchScreenTypeFactory->update(activity);
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::put(JavaString::valueOf(touchScreenFactory), this, commonStrings->PROCESS);
    
}


    auto ActivityFractureUtilAPI5::isTouch(Activity* activity) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->isFeature(activity, this->FEATURE_TOUCHSCREEN);;
    
}


    auto ActivityFractureUtilAPI5::isMultiTouch(Activity* activity) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->isFeature(activity, this->FEATURE_TOUCHSCREEN_MULTITOUCH);;
    
}


    auto ActivityFractureUtilAPI5::isMultiTouchDistinct(Activity* activity) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->isFeature(activity, this->FEATURE_TOUCHSCREEN_MULTITOUCH_DISTINCT);;
    
}


    auto ActivityFractureUtilAPI5::isFeature(Activity* activity, std::string property) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return activity->getPackageManager()->hasSystemFeature(property);;
    
}




        #endif //ORG_ALLBINARY_ANDROID_API5_ACTIVITYFRACTUREUTILAPI5_CPP
