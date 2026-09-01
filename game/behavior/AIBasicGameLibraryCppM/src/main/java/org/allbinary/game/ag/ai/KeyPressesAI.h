
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

            #include <vector>
        
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

    private: bool on = true;

    protected: std::vector<Integer> keys;

public: KeyPressesAI(Hashtable<any, any> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput);

                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager allBinaryLayerManager);

                //@Throws(Exception.constructor)
            
    public: void toggle();

                //@Throws(Exception.constructor)
            
    public: void disable();

                //@Throws(Exception.constructor)
            
    public: void enable();

    private: void setOn(bool on);

    protected: bool isOn();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_KEYPRESSESAI_H
