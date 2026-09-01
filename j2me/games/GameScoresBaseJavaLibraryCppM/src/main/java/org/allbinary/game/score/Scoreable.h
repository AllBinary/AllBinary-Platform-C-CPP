
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_SCOREABLE_H
        #define ORG_ALLBINARY_GAME_SCORE_SCOREABLE_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ScoreableInterface.h"

class Scoreable
            : public Object
        : public ScoreableInterface {

    public: static Integer ID = SmallIntegerSingletonFactory::getInstance().getAt(3);

    private: int32_t points;

public: Scoreable(int32_t points);

    public: void addPoints(int32_t points);

    public: void removePoints(int32_t points);

    protected: void setPoints(int32_t points);

    public: int32_t getPoints();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_SCOREABLE_H
