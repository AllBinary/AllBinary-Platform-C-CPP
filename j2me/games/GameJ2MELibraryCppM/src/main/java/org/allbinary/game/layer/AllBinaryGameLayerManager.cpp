
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
        



            #include "../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/input/NullPlayerGameInputComposite.h>

      
#include <org/allbinary/game/input/PlayerGameInputCompositeInterface.h>

      
#include <org/allbinary/graphics/ItemColorFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/LayerProcessor.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AllBinaryGameLayerManager: public AllBinaryLayerManager {
        

    private: static NULL_ALLBINARY_LAYER_MANAGER: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static AllBinaryGameLayerManager getNullInstance(){

                        if(AllBinaryGameLayerManager.NULL_ALLBINARY_LAYER_MANAGER == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    AllBinaryGameLayerManager.NULL_ALLBINARY_LAYER_MANAGER= new AllBinaryGameLayerManager(BasicColorFactory.getInstance()!.BLACK, BasicColorFactory.getInstance()!.WHITE, GameInfo.NONE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryGameLayerManager.NULL_ALLBINARY_LAYER_MANAGER as AllBinaryGameLayerManager;
    
}


    public static const ID: Integer = SmallIntegerSingletonFactory.getInstance()!.getAt(22)!;

    private: backgroundBasicColor: BasicColor;

    private: foregroundBasicColor: BasicColor;

    private: gameInfo: GameInfo;

    private: playerGameInputCompositeInterface: PlayerGameInputCompositeInterface = NullPlayerGameInputComposite.NULL_PLAYER_GAME_INPUT_COMPOSITE;

public constructor (BasicColor backgroundBasicColor, BasicColor foregroundBasicColor, GameInfo gameInfo){

            super();
        this.backgroundBasicColor= backgroundBasicColor;
    
this.foregroundBasicColor= foregroundBasicColor;
    

    itemColorFactory: ItemColorFactory = ItemColorFactory.getInstance()!;;
    
itemColorFactory!.INVERT_PAINT= this.backgroundBasicColor!.intValue();
    
itemColorFactory!.PAINT= this.foregroundBasicColor!.intValue();
    
this.gameInfo= gameInfo;
    
}


    public AllBinaryLayerManager getLayerManager(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    public init(){
}


    public BasicColor getBackgroundBasicColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.backgroundBasicColor;
    
}


    public setBackgroundBasicColor(BasicColor backgroundBasicColor){
this.backgroundBasicColor= backgroundBasicColor;
    
ItemColorFactory.getInstance()!.INVERT_PAINT= this.backgroundBasicColor!.intValue();
    
}


    public BasicColor getForegroundBasicColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.foregroundBasicColor;
    
}


    public setForegroundBasicColor(BasicColor foregroundBasicColor){
this.foregroundBasicColor= foregroundBasicColor;
    
ItemColorFactory.getInstance()!.PAINT= this.foregroundBasicColor!.intValue();
    
}


    public GameInfo getGameInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameInfo;
    
}


    public setGameInfo(GameInfo gameInfo){
this.gameInfo= gameInfo;
    
}


    public setLayerProcessorList(BasicArrayList list){

    layerProcessorInterfaceArray: std::vector<LayerProcessor> = new Array(list.size());;
    

    size: int32_t = layerProcessorInterfaceArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
layerProcessorInterfaceArray[index]= list.objectArray[index]! as LayerProcessor;
    
}

this.setLayerProcessorArray(layerProcessorInterfaceArray);
    
}


    public setPlayerGameInputCompositeInterface(PlayerGameInputCompositeInterface playerGameInputCompositeInterface){
this.playerGameInputCompositeInterface= playerGameInputCompositeInterface;
    
}


    public PlayerGameInputCompositeInterface getPlayerGameInputCompositeInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.playerGameInputCompositeInterface;
    
}


};

            

