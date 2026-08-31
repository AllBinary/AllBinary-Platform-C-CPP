
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

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/graphics/CellPositionFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButtonLocationHelper.h"

class BasicTouchButtonCellPositionFactory
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    public const TOP_RIGHT: CellPosition;

    public const TOP_LEFT: CellPosition;

    public const SECOND_FROM_TOP_LEFT: CellPosition;

    public const SECOND_FROM_TOP_RIGHT: CellPosition;

    public const TOP_SECOND_FROM_LEFT: CellPosition;

    public const TOP_SECOND_FROM_RIGHT: CellPosition;

    public const BOTTOM_RIGHT: CellPosition;

    public const BOTTOM_SECOND_FROM_RIGHT: CellPosition;

    public const SECOND_FROM_BOTTOM_RIGHT: CellPosition;

    public const THIRD_FROM_BOTTOM_RIGHT: CellPosition;

    public const FOURTH_FROM_BOTTOM_RIGHT: CellPosition;

    public const SECOND_FROM_BOTTOM_SECOND_FROM_RIGHT: CellPosition;

    public const SECOND_FROM_BOTTOM_THIRD_FROM_RIGHT: CellPosition;

    public const SECOND_FROM_BOTTOM_FOURTH_FROM_RIGHT: CellPosition;

    public const BOTTOM_THIRD_FROM_RIGHT: CellPosition;

    public const BOTTOM_FOURTH_FROM_RIGHT: CellPosition;

    public const BOTTOM_SECOND_FROM_LEFT: CellPosition;

    public const SECOND_FROM_BOTTOM_LEFT: CellPosition;

    public const THIRD_FROM_BOTTOM_LEFT: CellPosition;

    public const BOTTOM_LEFT: CellPosition;

    public const SECOND_FROM_BOTTOM_SECOND_FROM_LEFT: CellPosition;

public constructor ();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHBUTTONCELLPOSITIONFACTORY_H
