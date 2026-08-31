
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
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/event/ScrollMapEvent.h>

      
#include <org/allbinary/layer/event/ScrollMapEventHandler.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PlayerGameInput.h"
#include "InputFactory.h"
#include "GameInputProcessor.h"
#include "ScrollMapUpGameInputProcessor.h"
#include "ScrollMapDownGameInputProcessor.h"
#include "ScrollMapRightGameInputProcessor.h"
#include "ScrollMapLeftGameInputProcessor.h"
#include "GameInputProcessorUtil.h"

class ScrollMapPlayerGameInput: public PlayerGameInput {
        

    const inputProcessorArray: std::vector<GameInputProcessor> = new Array(InputFactory.getInstance()!.MAX);

    private: const border: int32_t = 150;

    private: const inputList: BasicArrayList;

    const isSingleKeyProcessing: bool = Features.getInstance()!.isFeature(InputFeatureFactory.getInstance()!.SINGLE_KEY_REPEAT_PRESS) || Features.getInstance()!.isFeature(InputFeatureFactory.getInstance()!.SINGLE_KEY_PRESS);

    private: const geographicMapInterface: BasicGeographicMap;

    private: maxBottom: int32_t= 0;

    private: maxRight: int32_t= 0;

public constructor (BasicGeographicMap geographicMapInterface, BasicArrayList list, int32_t playerInputId){
            super(list, new BasicArrayListD(), playerInputId);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.initInputProcessors();
    
this.geographicMapInterface= geographicMapInterface;
    
this.inputList= list;
    
this.init();
    
}


    private: const scrollMapEvent: ScrollMapEvent = new ScrollMapEvent(this);

                //@Throws(Exception.constructor)
            
    move(int32_t dx, int32_t dy){

    terrainTiledLayer: AllBinaryTiledLayer = this.geographicMapInterface!.getAllBinaryTiledLayer()!;;
    
terrainTiledLayer!.moveDXY( -dx,  -dy);
    
this.scrollMapEvent!.setDxDy( -dx,  -dy);
    
ScrollMapEventHandler.getInstance()!.fireEvent(this.scrollMapEvent);
    
}


    public init(){
this.maxBottom= this.getSpecialHeight();
    
this.maxRight= this.getSpecialWidth();
    
}


                //@Throws(Exception.constructor)
            
    public scrollMiddleX(){

    terrainTiledLayer: AllBinaryTiledLayer = this.geographicMapInterface!.getAllBinaryTiledLayer()!;;
    

    displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;;
    
this.move( -terrainTiledLayer!.getXP(), 0);
    

                        if(terrainTiledLayer!.getWidth() < displayInfo!.getLastWidth())
                        
                                    {
                                    
    diffX: int32_t = ((displayInfo!.getLastWidth() -terrainTiledLayer!.getWidth())>>1);;
    
this.move( -diffX, 0);
    

                                    }
                                
                        else {
                            
    diffX: int32_t = ((terrainTiledLayer!.getWidth() -displayInfo!.getLastWidth())>>1);;
    
this.move(diffX, 0);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public scrollY(int32_t anchor){

    terrainTiledLayer: AllBinaryTiledLayer = this.geographicMapInterface!.getAllBinaryTiledLayer()!;;
    

    displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;;
    

                        if(anchor == Graphics.TOP)
                        
                                    {
                                    this.logUtil!.putF("Top", this, "scrollY");
    

                                    }
                                
                             else 
                        if(anchor == Graphics.BOTTOM)
                        
                                    {
                                    this.logUtil!.putF("Bottom", this, "scrollY");
    

    diffY: int32_t = (terrainTiledLayer!.getHeight() -displayInfo!.getLastHeight());;
    
this.move(0, diffY);
    

                                    }
                                
                             else 
                        if(anchor == Graphics.VCENTER)
                        
                                    {
                                    this.logUtil!.putF("Center", this, "scrollY");
    

    diffY: int32_t = (terrainTiledLayer!.getHeight() -displayInfo!.getLastHeight()) /2;;
    
this.move(0, diffY);
    

                                    }
                                
                        else {
                            


                            throw new Exception("No Such Anchor Supported");
                    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    up(){

    y: int32_t = this.geographicMapInterface!.getAllBinaryTiledLayer()!.getYP() -10;;
    

                        if(this.keepOnMapMinY(y))
                        
                                    {
                                    this.move(0,  -10);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    down(){

    y: int32_t =  -this.geographicMapInterface!.getAllBinaryTiledLayer()!.getYP() +10;;
    

                        if(this.keepOnMapMaxY(y))
                        
                                    {
                                    this.move(0, 10);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    right(){

    x: int32_t = this.geographicMapInterface!.getAllBinaryTiledLayer()!.getYP() +10;;
    

                        if(this.keepOnMapMinX(x))
                        
                                    {
                                    this.move(10, 0);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    left(){

    x: int32_t =  -this.geographicMapInterface!.getAllBinaryTiledLayer()!.getYP() -10;;
    

                        if(this.keepOnMapMaxX(x))
                        
                                    {
                                    this.move( -10, 0);
    

                                    }
                                
}


    public initInputProcessors(){
this.inputProcessorArray[Canvas.UP]= new ScrollMapUpGameInputProcessor(this);
    
this.inputProcessorArray[Canvas.DOWN]= new ScrollMapDownGameInputProcessor(this);
    
this.inputProcessorArray[Canvas.KEY_NUM9]= new ScrollMapRightGameInputProcessor(this);
    
this.inputProcessorArray[Canvas.KEY_NUM7]= new ScrollMapLeftGameInputProcessor(this);
    
GameInputProcessorUtil.init(this.inputProcessorArray);
    
}


                //@Throws(Exception.constructor)
            
    public processInputKey(int32_t key){
this.inputProcessorArray[key]!.processEvent(AllBinaryGameLayerManager.getNullInstance(), GameKeyEvent.NONE);
    
}


                //@Throws(Exception.constructor)
            
    public processInput(AllBinaryLayerManager layerManager){

        try {
            
    size: int32_t = this.inputList!.size()!;;
    

    key: int32_t = 0;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    gameKeyEvent: GameKeyEvent = this.inputList!.get(index) as GameKeyEvent;;
    
key= gameKeyEvent!.getKey();
    
this.processInputKey(key);
    
}


                        if(this.isSingleKeyProcessing)
                        
                                    {
                                    this.clear();
    

                                    }
                                
                        else {
                            this.update();
    

                        }
                            

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.gameInputStrings!.PROCESS_INPUT, e);
    
}

}


    int32_t getSpecialHeight(){

    terrainTiledLayer: AllBinaryTiledLayer = this.geographicMapInterface!.getAllBinaryTiledLayer()!;;
    

    displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;;
    

                        if(terrainTiledLayer!.getHeight() > displayInfo!.getLastHeight())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return terrainTiledLayer!.getHeight() -displayInfo!.getLastHeight();
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return displayInfo!.getLastHeight() -terrainTiledLayer!.getHeight() +terrainTiledLayer!.getCellHeight();
    

                        }
                            
}


    int32_t getSpecialWidth(){

    terrainTiledLayer: AllBinaryTiledLayer = this.geographicMapInterface!.getAllBinaryTiledLayer()!;;
    

    displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;;
    

                        if(terrainTiledLayer!.getWidth() > displayInfo!.getLastWidth())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return terrainTiledLayer!.getWidth() -displayInfo!.getLastWidth();
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return displayInfo!.getLastWidth() -terrainTiledLayer!.getWidth() +terrainTiledLayer!.getCellWidth();
    

                        }
                            
}


    public bool keepOnMapMaxY(int32_t newY){

    y: int32_t = this.geographicMapInterface!.getAllBinaryTiledLayer()!.getYP()!;;
    

                        if(y > this.maxBottom +this.border)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


    public bool keepOnMapMinY(int32_t newY){

    y: int32_t = this.geographicMapInterface!.getAllBinaryTiledLayer()!.getYP()!;;
    

                        if(y <  -this.border)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


    public bool keepOnMapMaxX(int32_t newX){

    x: int32_t = this.geographicMapInterface!.getAllBinaryTiledLayer()!.getXP()!;;
    

                        if(x <  -this.maxRight -this.border)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


    public bool keepOnMapMinX(int32_t newX){

    x: int32_t = this.geographicMapInterface!.getAllBinaryTiledLayer()!.getXP()!;;
    

                        if(x > this.border)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


};

            

