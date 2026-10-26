
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
        



        #ifndef ORG_ALLBINARY_INPUT_TOUCHJ2ME_H
        #define ORG_ALLBINARY_INPUT_TOUCHJ2ME_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //TouchAndroid
class TouchJ2ME
            : public Object
         {

public: TouchJ2ME();

    public: void pointerDragged(int32_t x, int32_t y);

    public: void pointerPressed(int32_t x, int32_t y);

    public: void pointerReleased(int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_INPUT_TOUCHJ2ME_H
