
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_PLAYERSTATEUTIL_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_PLAYERSTATEUTIL_H

            #include "../../../../java/lang/Object.h"
        
#include <javax/microedition/media/Player.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PlayerStateUtil
            : public Object
         {
        

    private: static const instance: PlayerStateUtil = new PlayerStateUtil();

    public static PlayerStateUtil getInstance();

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    public const UNREALIZED: string = "UNREALIZED";

    public const REALIZED: string = "REALIZED";

    public const PREFETCHED: string = "PREFETCHED";

    public const STARTED: string = "STARTED";

    public const CLOSED: string = "CLOSED";

    public string convert(int32_t state);

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_PLAYERSTATEUTIL_H
