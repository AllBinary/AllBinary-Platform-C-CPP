
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENTYPEFACTORY_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENTYPEFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
#include <android/app/Activity.h>

      
#include <android/content/res/Configuration.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchScreenFactory.h"
#include "TouchScreenTypesFactory.h"

class TouchScreenTypeFactory
            : public Object
         {

    private: static TouchScreenTypeFactory instance() { return TouchScreenTypeFactory(); }

    public: static TouchScreenTypeFactory getInstance();

    public: void update(Activity activity);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENTYPEFACTORY_H
