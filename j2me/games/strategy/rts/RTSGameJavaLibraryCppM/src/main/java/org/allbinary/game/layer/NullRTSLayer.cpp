
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
        



            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
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
        #include "NullPathFindingLayer.h"
#include "RTSPlayerLayerInterface.h"
#include "PlayerOwnedRTSLayers.h"

class NullRTSLayer: public NullPathFindingLayer: public RTSPlayerLayerInterface {
        

    public static const NULL_RTS_LAYER: NullRTSLayer = new NullRTSLayer();

    public string getName(){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public processInput(AllBinaryLayerManager layerManager){



                            throw new RuntimeException();
                    
}


    public initInputProcessors(){



                            throw new RuntimeException();
                    
}


    public GameNotificationHud getGameNotificationHud(){



                            throw new RuntimeException();
                    
}


    public ScrollSelectionForm getCurrentScrollSelectionForm(){



                            throw new RuntimeException();
                    
}


    public setCurrentScrollSelectionForm(ScrollSelectionForm currentScrollSelectionForm){



                            throw new RuntimeException();
                    
}


    public ScrollSelectionForm getBuildingScrollSelectionForm(){



                            throw new RuntimeException();
                    
}


    public PlayerGameInput getPlayerGameInput(){



                            throw new RuntimeException();
                    
}


    public onEvent(AllBinaryEventObject eventObject){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public onDestroyed(DestroyedEvent destroyedEvent){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public processTick(AllBinaryLayerManager allBinaryLayerManager){



                            throw new RuntimeException();
                    
}


    public Capital getCapital(){



                            throw new RuntimeException();
                    
}


    public RTSFormInput getRTSFormInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullRTSFormInputFactory.getInstance();;
    
}


    public add(Sound sound){



                            throw new RuntimeException();
                    
}


    public PlayerOwnedRTSLayers getPlayerOwnedRTSLayers(){



                            throw new RuntimeException();
                    
}


    public bool implmentsArtificialIntelligenceCompositeInterface(){



                            throw new RuntimeException();
                    
}


};

            

