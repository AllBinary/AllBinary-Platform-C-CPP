
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameStateFactory.h"
#include "GameState.h"

class RaceGameStateFactory
            : public Object
         {
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static RaceGameStateFactory getInstance(){

                        if(RaceGameStateFactory.instance == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    RaceGameStateFactory.instance= new RaceGameStateFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RaceGameStateFactory.instance as RaceGameStateFactory;
    
}


    public const START_GAME_STATE: GameState = GameStateFactory.getInstance()!.createGameState("START_GAME_STATE")!;

    public const YELLOW_LIGHT_GAME_STATE: GameState = GameStateFactory.getInstance()!.createGameState("YELLOW_LIGHT_GAME_STATE")!;

    public const RED_LIGHT_GAME_STATE: GameState = GameStateFactory.getInstance()!.createGameState("RED_LIGHT_GAME_STATE")!;

};

            

