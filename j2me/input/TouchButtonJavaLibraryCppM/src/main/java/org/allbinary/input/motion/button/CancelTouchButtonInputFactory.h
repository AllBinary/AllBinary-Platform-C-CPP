
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_CANCELTOUCHBUTTONINPUTFACTORY_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_CANCELTOUCHBUTTONINPUTFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButtonInput.h"
#include "BasicTouchInputFactory.h"

class CancelTouchButtonInputFactory
            : public Object
         {
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static CancelTouchButtonInputFactory getInstance();

    private: const cancelInputArray: std::vector<TouchButtonInput> = new Array(InputFactory.getInstance()!.MAX);

private constructor ();

    public TouchButtonInput getCancel(TouchButtonInput touchButtonInput);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_CANCELTOUCHBUTTONINPUTFACTORY_H
