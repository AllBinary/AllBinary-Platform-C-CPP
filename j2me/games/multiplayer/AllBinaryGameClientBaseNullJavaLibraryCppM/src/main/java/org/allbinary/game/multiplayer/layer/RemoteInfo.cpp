
        /*
                *  
                *  To change this license header, choose License Headers in Project Properties. 
                *  To change this template file, choose Tools | Templates  and open the template in the editor.  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_REMOTEINFO_CPP
        #define ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_REMOTEINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto RemoteInfo::REMOTE_INFO_owner() -> RemoteInfo* { static std::unique_ptr<RemoteInfo> value(new RemoteInfo(StringUtil::getInstance()->EMPTY_STRING,  -1,  -1, RemoteInfo::NEW_PLAYER_ID)); return value.get(); }
RemoteInfo* RemoteInfo::REMOTE_INFO = RemoteInfo::REMOTE_INFO_owner();

RemoteInfo::RemoteInfo(std::string username, int32_t actorSessionId, int32_t playerInputId, int32_t id){
}




        #endif //ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_REMOTEINFO_CPP
