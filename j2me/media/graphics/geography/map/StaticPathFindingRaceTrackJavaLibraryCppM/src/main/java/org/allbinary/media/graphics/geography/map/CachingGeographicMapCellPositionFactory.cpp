
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicGeographicMapCellPositionFactory.h"
#include "BasicGeographicMap.h"
#include "GeographicMapCellPositionFactory.h"
#include "GeographicMapCellPosition.h"

class CachingGeographicMapCellPositionFactory: public BasicGeographicMapCellPositionFactory {
        

protected constructor (BasicGeographicMap geographicMapInterface){
            super(geographicMapInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public GeographicMapCellPosition createInstance(int32_t i_column, int32_t i_row, int32_t width, int32_t height){

    hashtable: Hashtable<any, any> = GeographicMapCellPositionFactory.getHashtable()!;;
    

    cellPositionKey: string = CellPosition.toStringColRow(i_column, i_row)!;;
    

    cellPositionCanBeNull: any = hashtable.get(cellPositionKey);;
    

                        if(cellPositionCanBeNull == 
                                    null
                                )
                        
                                    {
                                    cellPositionCanBeNull= this.geographicMapCellPositionFactoryInterface!.getInstance(this.geographicMapInterface, i_column, i_row, this.getColumns(), this.getRows(), width, height);
    
this.geographicMapCellPositionArray[i_row]![i_column]= cellPositionCanBeNull as GeographicMapCellPosition;
    
hashtable.put(cellPositionKey, cellPositionCanBeNull);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return cellPositionCanBeNull as GeographicMapCellPosition;
    
}


};

            

