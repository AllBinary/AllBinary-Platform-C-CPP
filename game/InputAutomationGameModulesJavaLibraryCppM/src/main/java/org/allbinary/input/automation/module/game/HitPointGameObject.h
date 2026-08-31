
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

            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MeteredGameObject.h"
#include "HitPointGameObjectInterface.h"

class HitPointGameObject: public MeteredGameObject: public HitPointGameObjectInterface {
        

    private: damaged: bool = false;

    private: closeDeath: bool = false;

    private: const HP_LABEL: string = "HP: ";

    private: const IS_DAMAGED_LABEL: string = "isDamaged: ";

    private: const IS_CLOSE_DEATH_LABEL: string = "isCloseDeath: ";

public constructor (std::vector<BufferedImage> bufferedImage, Integer minX, Integer maxX, Integer y);

    public bool isMoreThan(float aFloat);

    public bool isCloseDeath();

    setCloseDeath(bool closeDeath);

    public bool isDamaged();

    public setDamaged(bool damaged);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_HITPOINTGAMEOBJECT_H
