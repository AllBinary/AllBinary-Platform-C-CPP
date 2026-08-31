
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASEGAMEBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASEGAMEBEHAVIOR_H

            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/business/advertisement/GameAdStateFactory.h>

      
#include <org/allbinary/game/GameAdState.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/graphics/opengles/CurrentDisplayableFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DemoGameBehavior.h"
#include "AllBinaryGameCanvas.h"

class BaseGameBehavior: public DemoGameBehavior {
        

    private: static const instanceC: BaseGameBehavior = new BaseGameBehavior();

    public static DemoGameBehavior getInstance();

                //@Throws(Exception.constructor)
            
    public init();

    public pause(AllBinaryGameCanvas allBinaryGameCanvas);

    public unPause(AllBinaryGameCanvas allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public updateTouch(AllBinaryGameCanvas allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public updateScreenButtonPaintable(AllBinaryGameCanvas allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public setGameState(AllBinaryGameCanvas allBinaryGameCanvas);

    public removeAllGameKeyInputListeners(AllBinaryGameCanvas allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public updateEndGameProcessor(AllBinaryGameCanvas allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public buildGame(AllBinaryGameCanvas allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public run(AllBinaryGameCanvas allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public setHighScore(AbeClientInformationInterface abeClientInformation, AllBinaryGameCanvas allBinaryGameCanvas, string name, int64_t score, bool autoSubmit, bool isLast);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASEGAMEBEHAVIOR_H
