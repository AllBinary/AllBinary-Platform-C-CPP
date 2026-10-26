
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

            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/graphics/CellPositionFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButtonLocationHelper.h"

class BasicTouchButtonCellPositionFactory
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    public: CellPosition TOP_RIGHT;

    public: CellPosition TOP_LEFT;

    public: const CellPosition SECOND_FROM_TOP_LEFT;

    public: const CellPosition SECOND_FROM_TOP_RIGHT;

    public: const CellPosition TOP_SECOND_FROM_LEFT;

    public: const CellPosition TOP_SECOND_FROM_RIGHT;

    public: CellPosition BOTTOM_RIGHT;

    public: CellPosition BOTTOM_SECOND_FROM_RIGHT;

    public: CellPosition SECOND_FROM_BOTTOM_RIGHT;

    public: const CellPosition THIRD_FROM_BOTTOM_RIGHT;

    public: const CellPosition FOURTH_FROM_BOTTOM_RIGHT;

    public: CellPosition SECOND_FROM_BOTTOM_SECOND_FROM_RIGHT;

    public: const CellPosition SECOND_FROM_BOTTOM_THIRD_FROM_RIGHT;

    public: const CellPosition SECOND_FROM_BOTTOM_FOURTH_FROM_RIGHT;

    public: const CellPosition BOTTOM_THIRD_FROM_RIGHT;

    public: const CellPosition BOTTOM_FOURTH_FROM_RIGHT;

    public: CellPosition BOTTOM_SECOND_FROM_LEFT;

    public: CellPosition SECOND_FROM_BOTTOM_LEFT;

    public: const CellPosition THIRD_FROM_BOTTOM_LEFT;

    public: CellPosition BOTTOM_LEFT;

    public: CellPosition SECOND_FROM_BOTTOM_SECOND_FROM_LEFT;

public: BasicTouchButtonCellPositionFactory();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHBUTTONCELLPOSITIONFACTORY_H
