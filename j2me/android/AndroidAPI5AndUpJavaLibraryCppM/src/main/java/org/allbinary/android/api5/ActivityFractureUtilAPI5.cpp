
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
        



#include <android/app/Activity.h>

      
#include <org/allbinary/input/motion/button/TouchScreenTypeFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/android/api1/ActivityFractureUtilAPI1.h>

      
#include <org/allbinary/input/motion/button/TouchScreenFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ActivityFractureUtilAPI5: public ActivityFractureUtilAPI1 {
        

    private: static const instance5: ActivityFractureUtilAPI5 = new ActivityFractureUtilAPI5();

    public static ActivityFractureUtilAPI5 getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ActivityFractureUtilAPI5.instance5;
    
}


    private: const FEATURE_TOUCHSCREEN_MULTITOUCH: string = "android.hardware.touchscreen.multitouch";

    private: const FEATURE_TOUCHSCREEN: string = "android.hardware.touchscreen";

    private: const FEATURE_TOUCHSCREEN_MULTITOUCH_DISTINCT: string = "android.hardware.touchscreen.multitouch.distinct";

    public process(Activity activity){

    touchScreenFactory: TouchScreenFactory = TouchScreenFactory.getInstance()!;;
    

    touchScreenTypeFactory: TouchScreenTypeFactory = TouchScreenTypeFactory.getInstance()!;;
    
touchScreenFactory!.setTouch(this.isTouch(activity));
    
touchScreenFactory!.setMultiTouch(this.isMultiTouch(activity));
    
touchScreenFactory!.setMultiTouchDistinct(this.isMultiTouchDistinct(activity));
    
touchScreenTypeFactory!.update(activity);
    

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
PreLogUtil.put(touchScreenFactory!.toString(), this, commonStrings!.PROCESS);
    
}


    bool isTouch(Activity activity){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isFeature(activity, this.FEATURE_TOUCHSCREEN);;
    
}


    bool isMultiTouch(Activity activity){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isFeature(activity, this.FEATURE_TOUCHSCREEN_MULTITOUCH);;
    
}


    bool isMultiTouchDistinct(Activity activity){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isFeature(activity, this.FEATURE_TOUCHSCREEN_MULTITOUCH_DISTINCT);;
    
}


    bool isFeature(Activity activity, string property){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return activity.getPackageManager()!.hasSystemFeature(property);;
    
}


};

            

