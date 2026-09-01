
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONBLANKRESOURCE_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONBLANKRESOURCE_H

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButtonResource.h"

class TouchButtonBlankResource: public TouchButtonResource {

    private: static const TouchButtonResource instance = TouchButtonBlankResource();

    public: static TouchButtonResource getInstance();

private: TouchButtonBlankResource();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONBLANKRESOURCE_H
