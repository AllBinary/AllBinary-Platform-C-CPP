
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
        



            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameInfoData
            : public Object
         {

    private: static GameInfoData instance() { return GameInfoData(); }

    public: static GameInfoData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameInfoData::instance();
    
}


private: GameInfoData(){
}


    public: const std::string GAME_TYPE = "GAME_TYPE";

    public: const std::string GAME_MODE = "GAME_MODE";

    public: const std::string PLAYER_TYPE = "PLAYER_TYPE";

    public: const std::string HIGHEST_LEVEL = "HIGHEST_LEVEL";

    public: const std::string CURRENT_LEVEL = "CURRENT_LEVEL";

    public: const std::string SOFTWARE_INFORMATION = "SOFTWARE_INFORMATION";

};

            

