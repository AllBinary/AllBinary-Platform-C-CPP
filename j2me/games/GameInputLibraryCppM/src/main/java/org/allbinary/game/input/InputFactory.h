
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_INPUTFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_INPUTFACTORY_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/Input.h"

class InputFactory
            : public Object
         {

    private: static inline Object* instance = NullUtil::getInstance()->NULL_OBJECT;

    public: static InputFactory* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    public: const std::string KEY_CODE_LABEL = "KeyCode: ";

    public: const std::string DEVICE_ID_LABEL = "DeviceId: ";

    public: const int32_t MAX = SmallIntegerSingletonFactory::getInstance()->getMin();

    protected: const std::vector<Input*> inputIntegerArray = std::vector<Input*>(this->MAX);

    public: Input* NO_INPUT = new Input(0, this->commonStrings->UNKNOWN);

private: InputFactory();

    public: void add(int32_t id, Input* input);

    public: Input* getInstanceById(int32_t id);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_INPUTFACTORY_H
