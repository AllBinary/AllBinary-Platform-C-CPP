
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchFeature.h"

class TouchFeatureFactory
            : public Object
         {
        

    private: static const instance: TouchFeatureFactory = new TouchFeatureFactory();

    public static TouchFeatureFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TouchFeatureFactory.instance;
    
}


private constructor (){

            super();
        }


    public const TOUCH_ENABLED: TouchFeature = new TouchFeature("Touch Enabled");

    public const SHOW_SCREEN_BUTTONS: TouchFeature = new TouchFeature("Show");

    public const AUTO_HIDE_SHOW_SCREEN_BUTTONS: TouchFeature = new TouchFeature("Auto Hide (One Level)");

    public const HIDE_SCREEN_BUTTONS: TouchFeature = new TouchFeature("Hide");

};

            

