
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYERMANAGER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYERMANAGER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
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
        
Object* AllBinaryGameLayerManager::NULL_ALLBINARY_LAYER_MANAGER = NullUtil::getInstance()->NULL_OBJECT;

    auto AllBinaryGameLayerManager::getNullInstance() -> AllBinaryGameLayerManager*{

                        if(AllBinaryGameLayerManager::NULL_ALLBINARY_LAYER_MANAGER == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    AllBinaryGameLayerManager::NULL_ALLBINARY_LAYER_MANAGER= new AllBinaryGameLayerManager(BasicColorFactory::getInstance()->BLACK, BasicColorFactory::getInstance()->WHITE, GameInfo::NONE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<AllBinaryGameLayerManager*>(AllBinaryGameLayerManager::NULL_ALLBINARY_LAYER_MANAGER);
    
}

int32_t AllBinaryGameLayerManager::ID = SmallIntegerSingletonFactory::getInstance()->getAt(22);

AllBinaryGameLayerManager::AllBinaryGameLayerManager(BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor, GameInfo* gameInfo) : playerGameInputCompositeInterface(NullPlayerGameInputComposite::NULL_PLAYER_GAME_INPUT_COMPOSITE){
this->backgroundBasicColor= backgroundBasicColor;
    
this->foregroundBasicColor= foregroundBasicColor;
    

    ItemColorFactory* itemColorFactory = ItemColorFactory::getInstance();;
    
itemColorFactory->INVERT_PAINT= this->backgroundBasicColor->intValue();
    
itemColorFactory->PAINT= this->foregroundBasicColor->intValue();
    
this->gameInfo= gameInfo;
    
}


    auto AllBinaryGameLayerManager::getLayerManager() -> AllBinaryLayerManager*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    auto AllBinaryGameLayerManager::init() -> void{
}


    auto AllBinaryGameLayerManager::getBackgroundBasicColor() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->backgroundBasicColor;
    
}


    auto AllBinaryGameLayerManager::setBackgroundBasicColor(BasicColor* backgroundBasicColor) -> void{
this->backgroundBasicColor= backgroundBasicColor;
    
ItemColorFactory::getInstance()->INVERT_PAINT= this->backgroundBasicColor->intValue();
    
}


    auto AllBinaryGameLayerManager::getForegroundBasicColor() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->foregroundBasicColor;
    
}


    auto AllBinaryGameLayerManager::setForegroundBasicColor(BasicColor* foregroundBasicColor) -> void{
this->foregroundBasicColor= foregroundBasicColor;
    
ItemColorFactory::getInstance()->PAINT= this->foregroundBasicColor->intValue();
    
}


    auto AllBinaryGameLayerManager::getGameInfo() -> GameInfo*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameInfo;
    
}


    auto AllBinaryGameLayerManager::setGameInfo(GameInfo* gameInfo) -> void{
this->gameInfo= gameInfo;
    
}


    auto AllBinaryGameLayerManager::setLayerProcessorList(BasicArrayList* list) -> void{

    std::vector<LayerProcessor*> layerProcessorInterfaceArray = std::vector<LayerProcessor*>(list->size());;
    

    int32_t size = layerProcessorInterfaceArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
layerProcessorInterfaceArray[index]= dynamic_cast<LayerProcessor*>(list->objectArray[index]);
    
}

this->setLayerProcessorArray(layerProcessorInterfaceArray);
    
}


    auto AllBinaryGameLayerManager::setPlayerGameInputCompositeInterface(PlayerGameInputCompositeInterface* playerGameInputCompositeInterface) -> void{
this->playerGameInputCompositeInterface= playerGameInputCompositeInterface;
    
}


    auto AllBinaryGameLayerManager::getPlayerGameInputCompositeInterface() -> PlayerGameInputCompositeInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->playerGameInputCompositeInterface;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYERMANAGER_CPP
