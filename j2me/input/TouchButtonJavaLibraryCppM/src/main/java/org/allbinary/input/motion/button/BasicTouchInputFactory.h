
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHINPUTFACTORY_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHINPUTFACTORY_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButtonInput.h"

class BasicTouchInputFactory
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static BasicTouchInputFactory getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: TouchButtonInput SPECIAL_BUTTON_SEVEN_TESTING_ONLY;

    public: TouchButtonInput SPECIAL_BUTTON_EIGHT_TESTING_ONLY;

    public: TouchButtonInput SPECIAL_BUTTON_SIX;

    public: TouchButtonInput SPECIAL_BUTTON_FIVE;

    public: TouchButtonInput SPECIAL_BUTTON_FOUR;

    public: TouchButtonInput SPECIAL_BUTTON_THREE;

    public: TouchButtonInput SPECIAL_BUTTON_TWO;

    public: TouchButtonInput SPECIAL_BUTTON_ONE;

    public: TouchButtonInput UP;

    public: TouchButtonInput LEFT;

    public: TouchButtonInput RIGHT;

    public: TouchButtonInput DOWN;

    public: TouchButtonInput NONE;

    private: bool initialized = false;

    private: const BasicArrayList list = BasicArrayListD();

private: BasicTouchInputFactory();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void init(InputToGameKeyMapping inputToGameKeyMapping);

    public: void updateAll(InputToGameKeyMapping inputToGameKeyMapping);

    public: void updateAllFromList(BasicArrayList list, InputToGameKeyMapping inputToGameKeyMapping);

    public: BasicArrayList getList();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHINPUTFACTORY_H
