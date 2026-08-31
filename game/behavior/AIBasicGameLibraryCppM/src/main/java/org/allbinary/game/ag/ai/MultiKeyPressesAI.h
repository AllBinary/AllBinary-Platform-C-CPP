
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_MULTIKEYPRESSESAI_H
        #define ORG_ALLBINARY_GAME_AG_AI_MULTIKEYPRESSESAI_H

            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "KeyPressesAI.h"

class MultiKeyPressesAI: public KeyPressesAI {
        

    private: const toggleTimeHelper: TimeDelayHelper = new TimeDelayHelper(600);

    private: const gameTickTimeDelayHelper: GameTickTimeDelayHelper = GameTickTimeDelayHelperFactory.getInstance()!;

public constructor (Hashtable<any, any> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput);

                //@Throws(Exception.constructor)
            
    public processAI(AllBinaryLayerManager allBinaryLayerManager);

                //@Throws(Exception.constructor)
            
    update();

                //@Throws(Exception.constructor)
            
    public toggle();

                //@Throws(Exception.constructor)
            
    public disable();

                //@Throws(Exception.constructor)
            
    public enable();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_MULTIKEYPRESSESAI_H
