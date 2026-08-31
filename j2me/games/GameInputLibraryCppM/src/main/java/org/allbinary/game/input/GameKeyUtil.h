
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_GAMEKEYUTIL_H
        #define ORG_ALLBINARY_GAME_INPUT_GAMEKEYUTIL_H

            #include "../../../../java/lang/Object.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameKeyUtil
            : public Object
         {
        

    private: static const instance: GameKeyUtil = new GameKeyUtil();

    public static GameKeyUtil getInstance();

    public bool isDirectionKey(int32_t key);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_GAMEKEYUTIL_H
