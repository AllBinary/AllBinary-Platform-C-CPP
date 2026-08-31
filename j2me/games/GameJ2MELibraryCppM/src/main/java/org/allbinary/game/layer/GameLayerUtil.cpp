
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
        



            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameLayerUtil
            : public Object
         {
        

    public static bool isOnScreen(AllBinaryLayer layer){

    displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;;
    

    viewPosition: ViewPositionBase = layer.getViewPosition()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameLayerUtil.isInside(viewPosition!.getX(), viewPosition!.getY(), viewPosition!.getX2(), viewPosition!.getY2(), 0, 0, displayInfo!.getLastWidth(), displayInfo!.getLastHeight());;
    
}


    public static bool isInside(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, int32_t rect2X1, int32_t rect2Y1, int32_t rect2X2, int32_t rect2Y2){

                        if(rectX1 > rect2X1 && rectX2 < rect2X2 && rectY1 > rect2Y1 && rectY2 < rect2Y2)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


private constructor (){

            super();
        }


};

            

