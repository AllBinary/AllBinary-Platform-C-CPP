
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_COMPLETEMOTIONGESTUREINPUTTOGAMEMOTIONGESTUREINPUT_H
        #define ORG_ALLBINARY_INPUT_MOTION_COMPLETEMOTIONGESTUREINPUTTOGAMEMOTIONGESTUREINPUT_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CompleteMotionGestureInputToGameMotionGestureInput
            : public Object
         {

    private: static CompleteMotionGestureInputToGameMotionGestureInput* instance() { static std::unique_ptr<CompleteMotionGestureInputToGameMotionGestureInput> value(new CompleteMotionGestureInputToGameMotionGestureInput()); return value.get(); }

    public: static CompleteMotionGestureInputToGameMotionGestureInput* getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    public: void init();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_COMPLETEMOTIONGESTUREINPUTTOGAMEMOTIONGESTUREINPUT_H
