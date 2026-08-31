
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LIFE_LIFE_H
        #define ORG_ALLBINARY_GAME_AG_LIFE_LIFE_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/RuntimeException.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LifeInterface.h"

class Life
            : public Object
        : public LifeInterface {
        

    public static Life createLife();

    public static const NO_LIFE: Life = Life.createLife()!;

    private: lives: int16_t;

    private: startLives: int16_t;

    private: maxlives: int16_t;

public constructor (int16_t lives, int16_t maxlives);

    public int16_t get();

    public set(int16_t lives);

    public reset();

    public add(int16_t lives);

    public bool isAlive();

    public int16_t getMaxlives();

    bool reachedLimit();

    public deaths(int16_t lives);

    public int16_t getStartLives();

    public setStartLives(int16_t startLives);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LIFE_LIFE_H
