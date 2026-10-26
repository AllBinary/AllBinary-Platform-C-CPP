
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_COMMONBUTTONS_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_COMMONBUTTONS_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CommonButtons
            : public Object
         {

    private: static CommonButtons instance() { return CommonButtons(); }

    public: static CommonButtons getInstance();

    public: int32_t STANDARD_BUTTON_SIZE;

    public: Rectangle NORMAL_BUTTON;

    public: Rectangle LARGE_BUTTON;

private: CommonButtons();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_COMMONBUTTONS_H
