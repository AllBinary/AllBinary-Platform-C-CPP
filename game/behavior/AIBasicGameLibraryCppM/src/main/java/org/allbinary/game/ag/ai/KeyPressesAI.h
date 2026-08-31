
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_KEYPRESSESAI_H
        #define ORG_ALLBINARY_GAME_AG_AI_KEYPRESSESAI_H

            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class KeyPressesAI: public BasicAI {
        

    private: on: bool = true;

    keys: std::vector<Integer>;

public constructor (Hashtable<any, any> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput);

                //@Throws(Exception.constructor)
            
    public processAI(AllBinaryLayerManager allBinaryLayerManager);

                //@Throws(Exception.constructor)
            
    public toggle();

                //@Throws(Exception.constructor)
            
    public disable();

                //@Throws(Exception.constructor)
            
    public enable();

    setOn(bool on);

    bool isOn();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_KEYPRESSESAI_H
