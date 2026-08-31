
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
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
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static GameGraphicsResourceUtil getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const SPRITE: string = "_sprite";

    public const QUARTER: string = "_quarter";

    private: name: string = StringUtil.getInstance()!.EMPTY_STRING;

public constructor ();

                //@Throws(Exception.constructor)
            
    string getString();

                //@Throws(Exception.constructor)
            
    public string getStringForFeature(GraphicsFeature graphicsFeature);

    public string getName();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RESOURCES_GAMEGRAPHICSRESOURCEUTIL_H
