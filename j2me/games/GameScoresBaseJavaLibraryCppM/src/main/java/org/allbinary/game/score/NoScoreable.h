
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_NOSCOREABLE_H
        #define ORG_ALLBINARY_GAME_SCORE_NOSCOREABLE_H

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Scoreable.h"

class NoScoreable: public Scoreable {

    private: static const NoScoreable SINGLETON = NoScoreable();

    public: static NoScoreable getInstance();

private: NoScoreable();

    public: void addPoints(int32_t points);

    public: void removePoints(int32_t points);

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_NOSCOREABLE_H
