
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Features;
class GraphicsFeature;
class GraphicsFeatureFactory;
class CanvasStrings;
class OpenGLFeatureUtil;
class NullUtil;
class LogUtil;
class StringMaker;
class StringUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameGraphicsResourceUtil
            : public virtual Object
         {

    private: static Object* instance;

    public: static GameGraphicsResourceUtil* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    public: const std::string SPRITE = "_sprite";

    public: const std::string QUARTER = "_quarter";

    private: std::string name;

public: GameGraphicsResourceUtil();

                //@Throws(Exception.constructor)
            
    private: std::string getString();

                //@Throws(Exception.constructor)
            
    public: std::string getStringForFeature(GraphicsFeature* graphicsFeature);

    public: std::string getName();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RESOURCES_GAMEGRAPHICSRESOURCEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_RESOURCES_GAMEGRAPHICSRESOURCEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_RESOURCES_GAMEGRAPHICSRESOURCEUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GraphicsFeature.h>)
#include <org/allbinary/game/configuration/feature/GraphicsFeature.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/CanvasStrings.h>)
#include <org/allbinary/graphics/displayable/CanvasStrings.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>)
#include <org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
