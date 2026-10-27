
        /*
                *  
                *  To change this license header, choose License Headers in Project Properties. 
                *  To change this template file, choose Tools | Templates  and open the template in the editor.  
        */
        
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RemoteInfo
            : public Object
         {

    public: static inline const int32_t NEW_PLAYER_ID = 0;

    public: static RemoteInfo* REMOTE_INFO() { static std::unique_ptr<RemoteInfo> value(new RemoteInfo(StringUtil::getInstance()->EMPTY_STRING,  -1,  -1, RemoteInfo::NEW_PLAYER_ID)); return value.get(); }

public: RemoteInfo(std::string username, int32_t actorSessionId, int32_t playerInputId, int32_t id){
}


};

            

