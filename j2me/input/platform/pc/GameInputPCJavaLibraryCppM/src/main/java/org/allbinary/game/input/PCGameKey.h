
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_PCGAMEKEY_H
        #define ORG_ALLBINARY_GAME_INPUT_PCGAMEKEY_H

#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Input.h"
#include "InputFactory.h"

class PCGameKey: public Input {
        

    public static string getString(int32_t keyCode);

 constructor (int32_t keyCode, string name);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_PCGAMEKEY_H
