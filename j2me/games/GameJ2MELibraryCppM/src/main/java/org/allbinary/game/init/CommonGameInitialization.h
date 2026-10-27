
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
        



        #ifndef ORG_ALLBINARY_GAME_INIT_COMMONGAMEINITIALIZATION_H
        #define ORG_ALLBINARY_GAME_INIT_COMMONGAMEINITIALIZATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class CommandListener;
class ResourceInitialization;
class ResourceLoadingLevelFactory;
class PointFactory;
class ProgressCanvas;
class ProgressCanvasFactory;
class SmallIntegerSingletonFactory;
class AbeClientInformationInterface;
class AngleFactory;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/init/BaseGameInitialization.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CommonGameInitialization: public BaseGameInitialization {

    /*protected*/ public: CommonStrings* commonStrings;

/*protected*/ public: CommonGameInitialization(std::vector<ResourceInitialization*> resourceInitializationArray, int32_t portion);

                //@Throws(Exception.constructor)
            
    public: void init(AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, int32_t level);

                //@Throws(Exception.constructor)
            
    public: void initGame();

};

            


        #endif //ORG_ALLBINARY_GAME_INIT_COMMONGAMEINITIALIZATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INIT_COMMONGAMEINITIALIZATION_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INIT_COMMONGAMEINITIALIZATION_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<org/allbinary/game/resource/ResourceInitialization.h>)
#include <org/allbinary/game/resource/ResourceInitialization.h>
#endif
#if __has_include(<org/allbinary/game/resource/ResourceLoadingLevelFactory.h>)
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>)
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>
#endif
#if __has_include(<org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>)
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/math/AngleFactory.h>)
#include <org/allbinary/math/AngleFactory.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/game/init/BaseGameInitialization.h")
#include "org/allbinary/game/init/BaseGameInitialization.h"
#endif

        #endif
    
