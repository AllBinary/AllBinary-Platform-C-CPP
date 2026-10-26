
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
        



        #ifndef ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_MULTIPLAYERBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_MULTIPLAYERBEHAVIOR_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MultiplayerBehavior
            : public Object
         {

    public: static const MultiplayerBehavior NULL_MULTIPLAYER_BEHAVIOR = MultiplayerBehavior(StringUtil::getInstance().EMPTY_STRING);

protected: MultiplayerBehavior(std::string username);

    public: void startTick();

    public: void endTick();

    public: int64_t getApproximateElapsed();

};

            


        #endif //ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_MULTIPLAYERBEHAVIOR_H
