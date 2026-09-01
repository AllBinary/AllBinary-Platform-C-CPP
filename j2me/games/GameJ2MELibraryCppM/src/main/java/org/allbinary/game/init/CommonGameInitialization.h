
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

            #include <vector>
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/game/resource/ResourceInitialization.h>

      
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseGameInitialization.h"

class CommonGameInitialization: public BaseGameInitialization {

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

protected: CommonGameInitialization(std::vector<ResourceInitialization> resourceInitializationArray, int32_t portion);

                //@Throws(Exception.constructor)
            
    public: void init(AbeClientInformationInterface abeClientInformation, CommandListener commandListener, int32_t level);

                //@Throws(Exception.constructor)
            
    public: void initGame();

};

            


        #endif //ORG_ALLBINARY_GAME_INIT_COMMONGAMEINITIALIZATION_H
