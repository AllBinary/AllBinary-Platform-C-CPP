
        /*
                *  
                *  To change this license header, choose License Headers in Project Properties. 
                *  To change this template file, choose Tools | Templates  and open the template in the editor.  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_REMOTEINFO_H
        #define ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_REMOTEINFO_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RemoteInfo
            : public virtual Object
         {

    public: static inline const int32_t NEW_PLAYER_ID = 0;

    private: static RemoteInfo* REMOTE_INFO_owner();
    public: static RemoteInfo* REMOTE_INFO;

public: RemoteInfo(std::string username, int32_t actorSessionId, int32_t playerInputId, int32_t id);

};

            


        #endif //ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_REMOTEINFO_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_REMOTEINFO_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_REMOTEINFO_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif

        #endif
    
