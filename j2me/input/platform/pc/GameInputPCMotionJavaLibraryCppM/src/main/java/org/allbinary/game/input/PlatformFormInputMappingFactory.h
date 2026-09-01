
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_PLATFORMFORMINPUTMAPPINGFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_PLATFORMFORMINPUTMAPPINGFACTORY_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>

      
#include <org/allbinary/input/motion/button/BasicTouchInputFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PCKeyFactory.h"
#include "GameKeyFactory.h"

class PlatformFormInputMappingFactory
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static PlatformFormInputMappingFactory getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: InputToGameKeyMapping inputToGameKeyMapping = InputToGameKeyMapping::getNullInstance();

    public: InputToGameKeyMapping getOrCreate();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_PLATFORMFORMINPUTMAPPINGFACTORY_H
