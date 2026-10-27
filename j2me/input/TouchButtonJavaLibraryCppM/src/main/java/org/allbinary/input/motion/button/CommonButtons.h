
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class PointFactory;
class Rectangle;
class DisplayInfoSingleton;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CommonButtons
            : public virtual Object
         {

    private: static CommonButtons* instance_owner();
    private: static CommonButtons* instance;

    public: static CommonButtons* getInstance();

    public: int32_t STANDARD_BUTTON_SIZE;

    public: Rectangle* NORMAL_BUTTON;

    public: Rectangle* LARGE_BUTTON;

private: CommonButtons();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_COMMONBUTTONS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_BUTTON_COMMONBUTTONS_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_COMMONBUTTONS_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif

        #endif
    
