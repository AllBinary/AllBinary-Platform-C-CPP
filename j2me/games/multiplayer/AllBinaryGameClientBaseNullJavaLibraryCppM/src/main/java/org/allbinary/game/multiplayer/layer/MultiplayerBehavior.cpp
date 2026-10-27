
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MultiplayerBehavior
            : public Object
         {

    public: static MultiplayerBehavior* NULL_MULTIPLAYER_BEHAVIOR() { static std::unique_ptr<MultiplayerBehavior> value(new MultiplayerBehavior(StringUtil::getInstance()->EMPTY_STRING)); return value.get(); }

protected: MultiplayerBehavior(std::string username){
}


    public: void startTick(){
}


    public: void endTick(){
}


    public: int64_t getApproximateElapsed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


};

            

