
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

class NullRTSLayer: public NullPathFindingLayer, public RTSPlayerLayerInterface {

    public: static NullRTSLayer* NULL_RTS_LAYER() { static std::unique_ptr<NullRTSLayer> value(new NullRTSLayer()); return value.get(); }

    public: std::string getName(){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void processInput(AllBinaryLayerManager* layerManager){



                            throw new RuntimeException();
                    
}


    public: void initInputProcessors(){



                            throw new RuntimeException();
                    
}


    public: GameNotificationHud* getGameNotificationHud(){



                            throw new RuntimeException();
                    
}


    public: ScrollSelectionForm* getCurrentScrollSelectionForm(){



                            throw new RuntimeException();
                    
}


    public: void setCurrentScrollSelectionForm(ScrollSelectionForm* currentScrollSelectionForm){



                            throw new RuntimeException();
                    
}


    public: ScrollSelectionForm* getBuildingScrollSelectionForm(){



                            throw new RuntimeException();
                    
}


    public: PlayerGameInput* getPlayerGameInput(){



                            throw new RuntimeException();
                    
}


    public: void onEvent(AllBinaryEventObject* eventObject){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void onDestroyed(DestroyedEvent* destroyedEvent){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void processTick(AllBinaryLayerManager* allBinaryLayerManager){



                            throw new RuntimeException();
                    
}


    public: Capital* getCapital(){



                            throw new RuntimeException();
                    
}


    public: RTSFormInput* getRTSFormInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullRTSFormInputFactory::getInstance();;
    
}


    public: void add(Sound* sound){



                            throw new RuntimeException();
                    
}


    public: PlayerOwnedRTSLayers* getPlayerOwnedRTSLayers(){



                            throw new RuntimeException();
                    
}


    public: bool implmentsArtificialIntelligenceCompositeInterface(){



                            throw new RuntimeException();
                    
}


};

            

