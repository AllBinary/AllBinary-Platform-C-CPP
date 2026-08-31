
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_HUD_LAPINFO_H
        #define ORG_ALLBINARY_GAME_LAYER_HUD_LAPINFO_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LapInfo
            : public Object
         {
        

    public static NULL_LAP_INFO: LapInfo = new LapInfo( -1);

    private: numberOfLaps: int32_t;

    private: totalLaps: int32_t;

public constructor (int32_t totalLaps);

    public add();

    public int32_t getCurrentLap();

    public int32_t getTotalLaps();

    public bool isDone();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_HUD_LAPINFO_H
