
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_NULLRTSLAYER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_NULLRTSLAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/NullRTSLayer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/game/ag/layer/hud/basic/notification/GameNotificationHud.h>

      
#include <org/allbinary/game/combat/destroy/event/DestroyedEvent.h>

      
#include <org/allbinary/game/input/PlayerGameInput.h>

      
#include <org/allbinary/game/input/form/NullRTSFormInputFactory.h>

      
#include <org/allbinary/game/input/form/RTSFormInput.h>

      
#include <org/allbinary/game/layer/capital/Capital.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/NullPathFindingLayer.h"
#include "org/allbinary/game/layer/RTSPlayerLayerInterface.h"
#include "org/allbinary/game/layer/PlayerOwnedRTSLayers.h"


NullRTSLayer::NullRTSLayer() {
        }
        auto NullRTSLayer::NULL_RTS_LAYER_owner() -> NullRTSLayer* { static std::unique_ptr<NullRTSLayer> value(new NullRTSLayer()); return value.get(); }
NullRTSLayer* NullRTSLayer::NULL_RTS_LAYER = NullRTSLayer::NULL_RTS_LAYER_owner();

    auto NullRTSLayer::getName() -> std::string{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto NullRTSLayer::processInput(AllBinaryLayerManager* layerManager) -> void{



                            throw RuntimeException();
                    
}


    auto NullRTSLayer::initInputProcessors() -> void{



                            throw RuntimeException();
                    
}


    auto NullRTSLayer::getGameNotificationHud() -> GameNotificationHud*{



                            throw RuntimeException();
                    
}


    auto NullRTSLayer::getCurrentScrollSelectionForm() -> ScrollSelectionForm*{



                            throw RuntimeException();
                    
}


    auto NullRTSLayer::setCurrentScrollSelectionForm(ScrollSelectionForm* currentScrollSelectionForm) -> void{



                            throw RuntimeException();
                    
}


    auto NullRTSLayer::getBuildingScrollSelectionForm() -> ScrollSelectionForm*{



                            throw RuntimeException();
                    
}


    auto NullRTSLayer::getPlayerGameInput() -> PlayerGameInput*{



                            throw RuntimeException();
                    
}


    auto NullRTSLayer::onEvent(AllBinaryEventObject* eventObject) -> void{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto NullRTSLayer::onDestroyed(DestroyedEvent* destroyedEvent) -> void{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto NullRTSLayer::processTick(AllBinaryLayerManager* allBinaryLayerManager) -> void{



                            throw RuntimeException();
                    
}


    auto NullRTSLayer::getCapital() -> Capital*{



                            throw RuntimeException();
                    
}


    auto NullRTSLayer::getRTSFormInput() -> RTSFormInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullRTSFormInputFactory::getInstance();;
    
}


    auto NullRTSLayer::add(Sound* sound) -> void{



                            throw RuntimeException();
                    
}


    auto NullRTSLayer::getPlayerOwnedRTSLayers() -> PlayerOwnedRTSLayers*{



                            throw RuntimeException();
                    
}


    auto NullRTSLayer::implmentsArtificialIntelligenceCompositeInterface() -> bool{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_NULLRTSLAYER_CPP
