
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
        



            #include <vector>
        
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

    private: static Object* NULL_ALLBINARY_LAYER_MANAGER = NullUtil::getInstance().NULL_OBJECT;

    public: static AllBinaryGameLayerManager getNullInstance(){

                        if(AllBinaryGameLayerManager::NULL_ALLBINARY_LAYER_MANAGER == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    AllBinaryGameLayerManager::NULL_ALLBINARY_LAYER_MANAGER= AllBinaryGameLayerManager(BasicColorFactory::getInstance().BLACK, BasicColorFactory::getInstance().WHITE, GameInfo::NONE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryGameLayerManager::NULL_ALLBINARY_LAYER_MANAGER as AllBinaryGameLayerManager;
    
}


    public: static const Integer ID = SmallIntegerSingletonFactory::getInstance().getAt(22);

    private: BasicColor backgroundBasicColor;

    private: BasicColor foregroundBasicColor;

    private: GameInfo gameInfo;

    private: PlayerGameInputCompositeInterface playerGameInputCompositeInterface = NullPlayerGameInputComposite::NULL_PLAYER_GAME_INPUT_COMPOSITE;

public: AllBinaryGameLayerManager(BasicColor backgroundBasicColor, BasicColor foregroundBasicColor, GameInfo gameInfo){
this->backgroundBasicColor= backgroundBasicColor;
    
this->foregroundBasicColor= foregroundBasicColor;
    

    ItemColorFactory itemColorFactory = ItemColorFactory::getInstance();;
    
itemColorFactory.INVERT_PAINT= this->backgroundBasicColor.intValue();
    
itemColorFactory.PAINT= this->foregroundBasicColor.intValue();
    
this->gameInfo= gameInfo;
    
}


    public: AllBinaryLayerManager getLayerManager(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return *this;
    
}


    public: void init(){
}


    public: BasicColor getBackgroundBasicColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->backgroundBasicColor;
    
}


    public: void setBackgroundBasicColor(BasicColor backgroundBasicColor){
this->backgroundBasicColor= backgroundBasicColor;
    
ItemColorFactory::getInstance().INVERT_PAINT= this->backgroundBasicColor.intValue();
    
}


    public: BasicColor getForegroundBasicColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->foregroundBasicColor;
    
}


    public: void setForegroundBasicColor(BasicColor foregroundBasicColor){
this->foregroundBasicColor= foregroundBasicColor;
    
ItemColorFactory::getInstance().PAINT= this->foregroundBasicColor.intValue();
    
}


    public: GameInfo getGameInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameInfo;
    
}


    public: void setGameInfo(GameInfo gameInfo){
this->gameInfo= gameInfo;
    
}


    public: void setLayerProcessorList(BasicArrayList list){

    std::vector<LayerProcessor> layerProcessorInterfaceArray = new Array(list.size());;
    

    int32_t size = layerProcessorInterfaceArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
layerProcessorInterfaceArray[index]= list.objectArray[index]! as LayerProcessor;
    
}

this->setLayerProcessorArray(layerProcessorInterfaceArray);
    
}


    public: void setPlayerGameInputCompositeInterface(PlayerGameInputCompositeInterface playerGameInputCompositeInterface){
this->playerGameInputCompositeInterface= playerGameInputCompositeInterface;
    
}


    public: PlayerGameInputCompositeInterface getPlayerGameInputCompositeInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->playerGameInputCompositeInterface;
    
}


};

            

