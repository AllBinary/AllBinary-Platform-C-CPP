
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *    Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_CAPITAL_EVENT_CAPITALEVENT_H
        #define ORG_ALLBINARY_GAME_LAYER_CAPITAL_EVENT_CAPITALEVENT_H

#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CapitalEvent: public AllBinaryEventObject {
        

    private: value: int32_t= 0;

public constructor (any = {} anyType);

    public string toString();

    public int32_t getValue();

    public setValue(int32_t value);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_CAPITAL_EVENT_CAPITALEVENT_H
