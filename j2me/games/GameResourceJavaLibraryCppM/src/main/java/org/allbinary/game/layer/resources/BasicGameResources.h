
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class GameConfigurationCentral;
class LogUtil;
class StringMaker;
class StringUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameGraphicsResourceUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicGameResources
            : public virtual Object
         {

    private: static StringMaker* stringBuffer_owner();
    /*protected*/ public: static StringMaker* stringBuffer;

    /*protected*/ public: LogUtil* logUtil;

    public: std::string RESOURCE;

    public: std::string RESOURCE_DESTROY;

/*protected*/ public: BasicGameResources();

    public: void init(std::string ROOT, std::vector<std::string> SIZE);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void append(std::string ROOT, std::string sizeString);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: std::string getString();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RESOURCES_BASICGAMERESOURCES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_RESOURCES_BASICGAMERESOURCES_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_RESOURCES_BASICGAMERESOURCES_H_COMPLETE
        #if __has_include(<org/allbinary/game/configuration/GameConfigurationCentral.h>)
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>
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
#if __has_include("org/allbinary/game/layer/resources/GameGraphicsResourceUtil.h")
#include "org/allbinary/game/layer/resources/GameGraphicsResourceUtil.h"
#endif

        #endif
    
