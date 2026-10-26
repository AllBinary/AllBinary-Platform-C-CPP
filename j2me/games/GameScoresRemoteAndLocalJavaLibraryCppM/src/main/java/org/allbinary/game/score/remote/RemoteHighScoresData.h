
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_REMOTE_REMOTEHIGHSCORESDATA_H
        #define ORG_ALLBINARY_GAME_SCORE_REMOTE_REMOTEHIGHSCORESDATA_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RemoteHighScoresData
            : public Object
         {

    private: static const RemoteHighScoresData SINGLETON = RemoteHighScoresData();

    public: static RemoteHighScoresData getInstance();

    public: const std::string HIGH_SCORES = "HIGH_SCORES";

    public: std::string CUSTOMER_USER_NAME = "CUSTOMER_USER_NAME";

    public: std::string DISPLAY_NAME = "DISPLAY_NAME";

    public: std::string SCORE = "SCORE";

    public: std::string GAME_INFO = "GAME_INFO";

    public: std::string GAME_CONFIGURATION = "GAME_CONFIGURATION";

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_REMOTE_REMOTEHIGHSCORESDATA_H
