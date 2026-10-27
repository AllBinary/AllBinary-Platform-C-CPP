
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Math.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionFactory.h>

      
#include <org/allbinary/math/AngleIncrementInfo.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicDirectionAIHelper
            : public Object
         {

    private: std::string name;

    private: AngleInfo* angleInfo;

public: BasicDirectionAIHelper(std::string name, AngleInfo* angleInfo);

    private: int32_t turnAI(int32_t frame);

    private: int32_t getAIKeyPressed(int32_t frame);

    public: int32_t getAIKeyPressedFromDirection(Direction* geographicMapDirectionData);

    protected: AngleInfo* getAngleInfoP();

    public: std::string getName();

};

            


        #endif //ORG_ALLBINARY_GAME_AI_PATH_BASICDIRECTIONAIHELPER_H
