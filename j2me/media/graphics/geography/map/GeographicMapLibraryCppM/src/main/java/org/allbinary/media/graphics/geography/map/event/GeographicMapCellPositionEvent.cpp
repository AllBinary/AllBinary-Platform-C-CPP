
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
        



#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/graphics/CellPositionFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GeographicMapCellPositionEvent: public AllBinaryEventObject {
        

    private: geographicMapCellPosition: CellPosition = CellPositionFactory.getInstance()!.NONE;

public constructor (any = {} anyType, CellPosition geographicMapCellPosition){
            super(anyType);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.geographicMapCellPosition= geographicMapCellPosition;
    
}


    public init(any = {} anyType){
this.setSource(anyType);
    
}


    public setGeographicMapCellPosition(GeographicMapCellPosition geographicMapCellPosition){
this.geographicMapCellPosition= geographicMapCellPosition;
    
}


    public GeographicMapCellPosition getGeographicMapCellPosition(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.geographicMapCellPosition as GeographicMapCellPosition;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("CellPositionEvent: ");
    
stringBuffer!.append("\nGeographicMapCellPosition: ");
    
stringBuffer!.append(StringUtil.getInstance()!.toString(this.getGeographicMapCellPosition()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

