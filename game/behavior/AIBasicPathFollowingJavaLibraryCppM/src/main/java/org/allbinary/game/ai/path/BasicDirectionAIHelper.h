
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
        



        #ifndef ORG_ALLBINARY_GAME_AI_PATH_BASICDIRECTIONAIHELPER_H
        #define ORG_ALLBINARY_GAME_AI_PATH_BASICDIRECTIONAIHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Math.h"
        
            #include "java/lang/Integer.h"
        
class Canvas;
class Direction;
class DirectionFactory;
class AngleIncrementInfo;
class AngleInfo;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicDirectionAIHelper
            : public virtual Object
         {

    private: std::string name;

    private: AngleInfo* angleInfo;

public: BasicDirectionAIHelper(std::string name, AngleInfo* angleInfo);

    private: int32_t turnAI(int32_t frame);

    private: int32_t getAIKeyPressed(int32_t frame);

    public: int32_t getAIKeyPressedFromDirection(Direction* geographicMapDirectionData);

    /*protected*/ public: AngleInfo* getAngleInfoP();

    public: std::string getName();

};

            


        #endif //ORG_ALLBINARY_GAME_AI_PATH_BASICDIRECTIONAIHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AI_PATH_BASICDIRECTIONAIHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AI_PATH_BASICDIRECTIONAIHELPER_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<org/allbinary/direction/Direction.h>)
#include <org/allbinary/direction/Direction.h>
#endif
#if __has_include(<org/allbinary/direction/DirectionFactory.h>)
#include <org/allbinary/direction/DirectionFactory.h>
#endif
#if __has_include(<org/allbinary/math/AngleIncrementInfo.h>)
#include <org/allbinary/math/AngleIncrementInfo.h>
#endif
#if __has_include(<org/allbinary/math/AngleInfo.h>)
#include <org/allbinary/math/AngleInfo.h>
#endif

        #endif
    
