
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHBUTTONCELLPOSITIONFACTORY_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHBUTTONCELLPOSITIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class CellPosition;
class CellPositionFactory;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TouchButtonLocationHelper;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicTouchButtonCellPositionFactory
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    public: CellPosition* TOP_RIGHT;

    public: CellPosition* TOP_LEFT;

    public: CellPosition* SECOND_FROM_TOP_LEFT;

    public: CellPosition* SECOND_FROM_TOP_RIGHT;

    public: CellPosition* TOP_SECOND_FROM_LEFT;

    public: CellPosition* TOP_SECOND_FROM_RIGHT;

    public: CellPosition* BOTTOM_RIGHT;

    public: CellPosition* BOTTOM_SECOND_FROM_RIGHT;

    public: CellPosition* SECOND_FROM_BOTTOM_RIGHT;

    public: CellPosition* THIRD_FROM_BOTTOM_RIGHT;

    public: CellPosition* FOURTH_FROM_BOTTOM_RIGHT;

    public: CellPosition* SECOND_FROM_BOTTOM_SECOND_FROM_RIGHT;

    public: CellPosition* SECOND_FROM_BOTTOM_THIRD_FROM_RIGHT;

    public: CellPosition* SECOND_FROM_BOTTOM_FOURTH_FROM_RIGHT;

    public: CellPosition* BOTTOM_THIRD_FROM_RIGHT;

    public: CellPosition* BOTTOM_FOURTH_FROM_RIGHT;

    public: CellPosition* BOTTOM_SECOND_FROM_LEFT;

    public: CellPosition* SECOND_FROM_BOTTOM_LEFT;

    public: CellPosition* THIRD_FROM_BOTTOM_LEFT;

    public: CellPosition* BOTTOM_LEFT;

    public: CellPosition* SECOND_FROM_BOTTOM_SECOND_FROM_LEFT;

public: BasicTouchButtonCellPositionFactory();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHBUTTONCELLPOSITIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHBUTTONCELLPOSITIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHBUTTONCELLPOSITIONFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/CellPosition.h>)
#include <org/allbinary/graphics/CellPosition.h>
#endif
#if __has_include(<org/allbinary/graphics/CellPositionFactory.h>)
#include <org/allbinary/graphics/CellPositionFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonLocationHelper.h")
#include "org/allbinary/input/motion/button/TouchButtonLocationHelper.h"
#endif

        #endif
    
