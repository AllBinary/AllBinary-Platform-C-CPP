
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LIFE_LIFEINTERFACE_H
        #define ORG_ALLBINARY_GAME_AG_LIFE_LIFEINTERFACE_H

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LifeInterface {
        

    int16_t get();

    set(int16_t lives);

    reset();

    add(int16_t lives);

    deaths(int16_t lives);

    int16_t getMaxlives();

    bool isAlive();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LIFE_LIFEINTERFACE_H
