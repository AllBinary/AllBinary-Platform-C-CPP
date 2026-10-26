
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RESOURCES_BASICGAMERESOURCES_H
        #define ORG_ALLBINARY_GAME_LAYER_RESOURCES_BASICGAMERESOURCES_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameGraphicsResourceUtil.h"

class BasicGameResources
            : public Object
         {

    protected: static const StringMaker stringBuffer = StringMaker();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: std::string RESOURCE = StringUtil::getInstance().EMPTY_STRING;

    public: std::string RESOURCE_DESTROY = StringUtil::getInstance().EMPTY_STRING;

protected: BasicGameResources();

    public: void init(std::string ROOT, std::vector<std::string> SIZE);

                //@Throws(Exception.constructor)
            
    protected: void append(std::string ROOT, std::string sizeString);

                //@Throws(Exception.constructor)
            
    protected: std::string getString();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RESOURCES_BASICGAMERESOURCES_H
