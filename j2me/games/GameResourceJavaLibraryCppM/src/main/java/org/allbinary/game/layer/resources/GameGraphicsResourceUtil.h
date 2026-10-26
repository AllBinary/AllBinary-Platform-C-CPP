
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RESOURCES_GAMEGRAPHICSRESOURCEUTIL_H
        #define ORG_ALLBINARY_GAME_LAYER_RESOURCES_GAMEGRAPHICSRESOURCEUTIL_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GraphicsFeature.h>

      
#include <org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameGraphicsResourceUtil
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static GameGraphicsResourceUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: const std::string SPRITE = "_sprite";

    public: const std::string QUARTER = "_quarter";

    private: std::string name = StringUtil::getInstance().EMPTY_STRING;

public: GameGraphicsResourceUtil();

                //@Throws(Exception.constructor)
            
    private: std::string getString();

                //@Throws(Exception.constructor)
            
    public: std::string getStringForFeature(GraphicsFeature graphicsFeature);

    public: std::string getName();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RESOURCES_GAMEGRAPHICSRESOURCEUTIL_H
