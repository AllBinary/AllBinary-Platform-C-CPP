
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLWAITGAMERUNNABLE_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLWAITGAMERUNNABLE_H

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameRunnable.h"

class NullWaitGameRunnable: public GameRunnable {
        

    private: static const instance: GameRunnable = new NullWaitGameRunnable();

    public static GameRunnable getInstance();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLWAITGAMERUNNABLE_H
