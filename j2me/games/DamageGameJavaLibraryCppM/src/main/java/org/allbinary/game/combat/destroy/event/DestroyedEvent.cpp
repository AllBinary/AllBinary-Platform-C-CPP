
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
        



#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/NullGameCanvas.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DestroyedEventHandler.h"

class DestroyedEvent: public AllBinaryEventObject {
        

    private: allBinaryGameCanvas: AllBinaryGameCanvas = NullGameCanvas.getInstance()!;

    private: allBinaryLayerInterface: AllBinaryLayer = AllBinaryLayer.NULL_ALLBINARY_LAYER;

public constructor (AllBinaryGameCanvas combatGameCanvas){
            super(DestroyedEventHandler.getInstance());
                    

                            //For kotlin this is before the body of the constructor.
                    
this.setAllBinaryGameCanvas(combatGameCanvas);
    
}


    public AllBinaryGameCanvas getAllBinaryGameCanvas(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.allBinaryGameCanvas;
    
}


    public AllBinaryLayer getLayerInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.allBinaryLayerInterface;
    
}


    setAllBinaryGameCanvas(AllBinaryGameCanvas allBinaryGameCanvas){
this.allBinaryGameCanvas= allBinaryGameCanvas;
    
}


    public setLayerInterfaceForCircularStaticPool(AllBinaryLayer allBinaryLayerInterface){
this.allBinaryLayerInterface= allBinaryLayerInterface;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("DestroyedEvent: \n");
    
stringBuffer!.append("AllBinaryLayerInterface: ");
    
stringBuffer!.append(this.allBinaryLayerInterface!.toString());
    
stringBuffer!.append("\nAllBinaryGameCanvas: ");
    
stringBuffer!.append(StringUtil.getInstance()!.toString(this.getAllBinaryGameCanvas()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

