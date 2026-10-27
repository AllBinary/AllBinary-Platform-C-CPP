
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RemoteHighScoresData
            : public virtual Object
         {

    private: static RemoteHighScoresData* SINGLETON_owner();
    private: static RemoteHighScoresData* SINGLETON;

    public: static RemoteHighScoresData* getInstance();


            
    public: RemoteHighScoresData();
        
    public: const std::string HIGH_SCORES = "HIGH_SCORES";

    public: std::string CUSTOMER_USER_NAME = "CUSTOMER_USER_NAME";

    public: std::string DISPLAY_NAME = "DISPLAY_NAME";

    public: std::string SCORE = "SCORE";

    public: std::string GAME_INFO = "GAME_INFO";

    public: std::string GAME_CONFIGURATION = "GAME_CONFIGURATION";

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_REMOTE_REMOTEHIGHSCORESDATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_REMOTE_REMOTEHIGHSCORESDATA_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_REMOTE_REMOTEHIGHSCORESDATA_H_COMPLETE
        
        #endif
    
