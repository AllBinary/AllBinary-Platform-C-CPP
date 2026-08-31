
        /*
                *  
                *  To change this license header, choose License Headers in Project Properties. 
                *  To change this template file, choose Tools | Templates  and open the template in the editor.  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_REMOTEINFO_H
        #define ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_REMOTEINFO_H

            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RemoteInfo
            : public Object
         {
        

    public static const NEW_PLAYER_ID: int32_t = 0;

    public static const REMOTE_INFO: RemoteInfo = new RemoteInfo(StringUtil.getInstance()!.EMPTY_STRING,  -1,  -1, RemoteInfo.NEW_PLAYER_ID);

public constructor (string username, int32_t actorSessionId, int32_t playerInputId, int32_t id);

};

            


        #endif //ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_REMOTEINFO_H
