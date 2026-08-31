
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEPERSISTANCESTRINGS_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEPERSISTANCESTRINGS_H

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GamePersistanceStrings
            : public Object
         {
        

    private: static const instance: GamePersistanceStrings = new GamePersistanceStrings();

    public static GamePersistanceStrings getInstance();

    public const SAVED_GAME_RECORD_ID: string = "_SG";

    public const SAVED_GAME_CONFIGURATION_RECORD_ID: string = "_SGC";

    public const DEFAULT_INPUT_MAPPING_RECORD_ID: string = "_DIM";

    public const SAVED_INPUT_CONFIGURATION_RECORD_ID: string = "_SIC";

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEPERSISTANCESTRINGS_H
