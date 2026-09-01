
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMEBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMEBEHAVIOR_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/GameTypeFactory.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryGameCanvas.h"

class DemoGameBehavior
            : public Object
         {

    private: static DemoGameBehavior instance() { return DemoGameBehavior(); }

    public: static DemoGameBehavior getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: void init();

    public: void pause(AllBinaryGameCanvas allBinaryGameCanvas);

    public: void unPause(AllBinaryGameCanvas allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public: void updateTouch(AllBinaryGameCanvas allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public: void updateScreenButtonPaintable(AllBinaryGameCanvas allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public: void setGameState(AllBinaryGameCanvas allBinaryGameCanvas);

    public: void removeAllGameKeyInputListeners(AllBinaryGameCanvas allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public: void updateEndGameProcessor(AllBinaryGameCanvas allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public: void buildGame(AllBinaryGameCanvas allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public: void run(AllBinaryGameCanvas allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public: void setHighScore(AbeClientInformationInterface abeClientInformation, AllBinaryGameCanvas allBinaryGameCanvas, std::string name, int64_t score, bool autoSubmit, bool isLast);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMEBEHAVIOR_H
