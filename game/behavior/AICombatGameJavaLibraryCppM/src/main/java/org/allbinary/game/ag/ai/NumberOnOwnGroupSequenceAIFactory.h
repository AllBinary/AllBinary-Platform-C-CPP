
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_NUMBERONOWNGROUPSEQUENCEAIFACTORY_H
        #define ORG_ALLBINARY_GAME_AG_AI_NUMBERONOWNGROUPSEQUENCEAIFACTORY_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NumberInSameGroupSequence.h"
#include "NumberOnOwnGroupSequenceAI.h"

class NumberOnOwnGroupSequenceAIFactory
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: ArtificialIntelligenceInterface getInstance(ABHashtable<Object*, Object*> hashtable, std::vector<ArtificialIntelligenceInterface> artificialIntelligenceInterface, AllBinaryLayer ownerLayerInterface, GameInput gameInput);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_NUMBERONOWNGROUPSEQUENCEAIFACTORY_H
