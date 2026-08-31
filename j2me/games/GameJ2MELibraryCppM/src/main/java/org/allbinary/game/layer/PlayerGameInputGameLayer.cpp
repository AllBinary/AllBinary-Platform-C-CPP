
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/input/PlayerGameInput.h>

      
#include <org/allbinary/game/input/PlayerGameInputCompositeInterface.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/view/StaticViewPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryGameLayer.h"

class PlayerGameInputGameLayer: public AllBinaryGameLayer: public PlayerGameInputCompositeInterface {
        

    private: playerGameInput: PlayerGameInput;

public constructor (int32_t playerInputId){
            super(StringUtil.getInstance()!.EMPTY_STRING, new Rectangle(PointFactory.getInstance()!.ZERO_ZERO, 0, 0), new StaticViewPosition(0, 0, 0));
                    

                            //For kotlin this is before the body of the constructor.
                    
this.playerGameInput= new PlayerGameInput(this.getGameKeyEventList(), new BasicArrayListD(), playerInputId);
    

    canvasStrings: CanvasStrings = CanvasStrings.getInstance()!;;
    
this.logUtil!.putF("Danger Danger Danger: Should Not Be Called Except For Testing Input", this, canvasStrings!.PAINT);
    
}


    public PlayerGameInput getPlayerGameInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.playerGameInput;
    
}


    public initInputProcessors(){
}


                //@Throws(Exception.constructor)
            
    public processInput(AllBinaryLayerManager myManager){
}


    public paint(Graphics graphics){
}


};

            

