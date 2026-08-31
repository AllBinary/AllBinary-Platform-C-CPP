
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

public constructor (){

            super();
        this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CONSTRUCTOR);
    

    touchButtonLocationHelper: TouchButtonLocationHelper = new TouchButtonLocationHelper();;
    

    cellPositionFactory: CellPositionFactory = CellPositionFactory.getInstance()!;;
    
cellPositionFactory!.init(touchButtonLocationHelper!.getTotalColumns(), touchButtonLocationHelper!.getTotalRows());
    
this.TOP_LEFT= cellPositionFactory!.getInstanceColRow(0, 0);
    
this.TOP_RIGHT= cellPositionFactory!.getInstanceColRow(touchButtonLocationHelper!.getTotalColumns() -1, 0);
    
this.BOTTOM_LEFT= cellPositionFactory!.getInstanceColRow(0, touchButtonLocationHelper!.getTotalRows() -1);
    
this.BOTTOM_RIGHT= cellPositionFactory!.getInstanceColRow(touchButtonLocationHelper!.getTotalColumns() -1, touchButtonLocationHelper!.getTotalRows() -1);
    
this.BOTTOM_SECOND_FROM_RIGHT= cellPositionFactory!.getInstanceColRow(touchButtonLocationHelper!.getTotalColumns() -2, touchButtonLocationHelper!.getTotalRows() -1);
    
this.SECOND_FROM_BOTTOM_RIGHT= cellPositionFactory!.getInstanceColRow(touchButtonLocationHelper!.getTotalColumns() -1, touchButtonLocationHelper!.getTotalRows() -2);
    
this.SECOND_FROM_BOTTOM_SECOND_FROM_RIGHT= cellPositionFactory!.getInstanceColRow(touchButtonLocationHelper!.getTotalColumns() -2, touchButtonLocationHelper!.getTotalRows() -2);
    
this.BOTTOM_SECOND_FROM_LEFT= cellPositionFactory!.getInstanceColRow(1, touchButtonLocationHelper!.getTotalRows() -1);
    
this.SECOND_FROM_BOTTOM_LEFT= cellPositionFactory!.getInstanceColRow(0, touchButtonLocationHelper!.getTotalRows() -2);
    
this.SECOND_FROM_BOTTOM_SECOND_FROM_LEFT= cellPositionFactory!.getInstanceColRow(1, touchButtonLocationHelper!.getTotalRows() -2);
    

                        if(touchButtonLocationHelper!.getTotalRows() > 2)
                        
                                    {
                                    this.SECOND_FROM_TOP_LEFT= cellPositionFactory!.getInstanceColRow(0, 1);
    
this.SECOND_FROM_TOP_RIGHT= cellPositionFactory!.getInstanceColRow(touchButtonLocationHelper!.getTotalColumns() -1, 1);
    

                                    }
                                
                        else {
                            this.SECOND_FROM_TOP_LEFT= cellPositionFactory!.NONE;
    
this.SECOND_FROM_TOP_RIGHT= cellPositionFactory!.NONE;
    

                        }
                            

                        if(touchButtonLocationHelper!.getTotalRows() >= 4)
                        
                                    {
                                    this.THIRD_FROM_BOTTOM_RIGHT= cellPositionFactory!.getInstanceColRow(touchButtonLocationHelper!.getTotalColumns() -1, touchButtonLocationHelper!.getTotalRows() -3);
    
this.FOURTH_FROM_BOTTOM_RIGHT= cellPositionFactory!.getInstanceColRow(touchButtonLocationHelper!.getTotalColumns() -1, touchButtonLocationHelper!.getTotalRows() -4);
    
this.THIRD_FROM_BOTTOM_LEFT= cellPositionFactory!.getInstanceColRow(0, touchButtonLocationHelper!.getTotalRows() -3);
    

                                    }
                                
                        else {
                            this.THIRD_FROM_BOTTOM_RIGHT= cellPositionFactory!.NONE;
    
this.FOURTH_FROM_BOTTOM_RIGHT= cellPositionFactory!.NONE;
    
this.THIRD_FROM_BOTTOM_LEFT= cellPositionFactory!.NONE;
    

                        }
                            

                        if(touchButtonLocationHelper!.getTotalColumns() >= 4)
                        
                                    {
                                    this.SECOND_FROM_BOTTOM_THIRD_FROM_RIGHT= cellPositionFactory!.getInstanceColRow(touchButtonLocationHelper!.getTotalColumns() -3, touchButtonLocationHelper!.getTotalRows() -2);
    
this.SECOND_FROM_BOTTOM_FOURTH_FROM_RIGHT= cellPositionFactory!.getInstanceColRow(touchButtonLocationHelper!.getTotalColumns() -4, touchButtonLocationHelper!.getTotalRows() -2);
    
this.BOTTOM_THIRD_FROM_RIGHT= cellPositionFactory!.getInstanceColRow(touchButtonLocationHelper!.getTotalColumns() -3, touchButtonLocationHelper!.getTotalRows() -1);
    
this.BOTTOM_FOURTH_FROM_RIGHT= cellPositionFactory!.getInstanceColRow(touchButtonLocationHelper!.getTotalColumns() -4, touchButtonLocationHelper!.getTotalRows() -1);
    
this.TOP_SECOND_FROM_LEFT= cellPositionFactory!.getInstanceColRow(1, 0);
    
this.TOP_SECOND_FROM_RIGHT= cellPositionFactory!.getInstanceColRow(touchButtonLocationHelper!.getTotalColumns() -2, 0);
    

                                    }
                                
                        else {
                            this.SECOND_FROM_BOTTOM_THIRD_FROM_RIGHT= cellPositionFactory!.NONE;
    
this.SECOND_FROM_BOTTOM_FOURTH_FROM_RIGHT= cellPositionFactory!.NONE;
    
this.BOTTOM_THIRD_FROM_RIGHT= cellPositionFactory!.NONE;
    
this.BOTTOM_FOURTH_FROM_RIGHT= cellPositionFactory!.NONE;
    
this.TOP_SECOND_FROM_LEFT= cellPositionFactory!.NONE;
    
this.TOP_SECOND_FROM_RIGHT= cellPositionFactory!.NONE;
    

                        }
                            
}


};

            

