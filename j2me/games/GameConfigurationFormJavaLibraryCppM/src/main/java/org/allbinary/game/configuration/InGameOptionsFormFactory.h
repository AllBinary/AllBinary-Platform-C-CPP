
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEOPTIONSFORMFACTORY_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEOPTIONSFORMFACTORY_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>

      
#include <org/allbinary/init/Init.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InGameOptionsForm.h"

class InGameOptionsFormFactory
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static InGameOptionsFormFactory getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: CommandForm SINGLETON = CommandForm::getNullCommandForm();

    public: void init(CommandListener commandListener, Init initInterface, std::string title, BasicColor backgrounBasicColor, BasicColor foregroundBasicColor);

    public: CommandForm get();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEOPTIONSFORMFACTORY_H
