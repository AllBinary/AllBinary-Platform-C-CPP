
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_HITPOINTGAMEOBJECT_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_HITPOINTGAMEOBJECT_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/game/MeteredGameObject.h"
#include "org/allbinary/input/automation/module/game/HitPointGameObjectInterface.h"

class HitPointGameObject: public MeteredGameObject, public HitPointGameObjectInterface {

    private: bool damaged = false;

    private: bool closeDeath = false;

    private: const std::string HP_LABEL = "HP: ";

    private: const std::string IS_DAMAGED_LABEL = "isDamaged: ";

    private: const std::string IS_CLOSE_DEATH_LABEL = "isCloseDeath: ";

public: HitPointGameObject(std::vector<BufferedImage*> bufferedImage, int32_t minX, int32_t maxX, int32_t y);

    public: bool isMoreThan(float aFloat);

    public: bool isCloseDeath();

    protected: void setCloseDeath(bool closeDeath);

    public: bool isDamaged();

    public: void setDamaged(bool damaged);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_HITPOINTGAMEOBJECT_H
