
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONLOCATIONHELPER_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONLOCATIONHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Math.h"
        
class DisplayInfoSingleton;
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CommonButtons;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TouchButtonLocationHelper
            : public virtual Object
         {

    private: int32_t totalColumns;

    private: int32_t totalRows;

    private: int32_t columnsRemainder;

    private: int32_t rowsRemainder;

    private: int32_t columnsRemainderHalf;

    private: int32_t rowsRemainderHalf;

public: TouchButtonLocationHelper();

    public: int32_t getTotalColumns();

    public: int32_t getTotalRows();

    public: int32_t getColumnsRemainder();

    public: int32_t getRowsRemainder();

    public: int32_t getColumnsRemainderHalf();

    public: int32_t getRowsRemainderHalf();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONLOCATIONHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONLOCATIONHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONLOCATIONHELPER_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include("org/allbinary/input/motion/button/CommonButtons.h")
#include "org/allbinary/input/motion/button/CommonButtons.h"
#endif

        #endif
    
