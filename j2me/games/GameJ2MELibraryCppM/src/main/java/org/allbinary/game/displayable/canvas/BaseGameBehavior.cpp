
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

    public static DemoGameBehavior getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BaseGameBehavior.instanceC;
    
}


                //@Throws(Exception.constructor)
            
    public init(){

    gameAdState: GameAdState = GameAdStateFactory.getInstance()!.getCurrentInstance()!;;
    
gameAdState!.playingAdState();
    
}


    public pause(AllBinaryGameCanvas allBinaryGameCanvas){

    features: Features = Features.getInstance()!;;
    

                        if(features.isDefault(OpenGLFeatureFactory.getInstance()!.OPENGL_AS_GAME_THREAD))
                        
                                    {
                                    
    currentDisplayableFactory: CurrentDisplayableFactory = CurrentDisplayableFactory.getInstance()!;;
    
currentDisplayableFactory!.setRunnable(allBinaryGameCanvas!.gamePauseRunnable);
    

                                    }
                                
}


    public unPause(AllBinaryGameCanvas allBinaryGameCanvas){

                        if(Features.getInstance()!.isDefault(OpenGLFeatureFactory.getInstance()!.OPENGL_AS_GAME_THREAD))
                        
                                    {
                                    
    currentDisplayableFactory: CurrentDisplayableFactory = CurrentDisplayableFactory.getInstance()!;;
    
currentDisplayableFactory!.setRunnable(allBinaryGameCanvas!.gameRunnable);
    
currentDisplayableFactory!.setDisplayable(allBinaryGameCanvas);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public updateTouch(AllBinaryGameCanvas allBinaryGameCanvas){
allBinaryGameCanvas!.updateTouch2();
    
}


                //@Throws(Exception.constructor)
            
    public updateScreenButtonPaintable(AllBinaryGameCanvas allBinaryGameCanvas){
allBinaryGameCanvas!.updateScreenButtonPaintable2();
    
}


                //@Throws(Exception.constructor)
            
    public setGameState(AllBinaryGameCanvas allBinaryGameCanvas){
allBinaryGameCanvas!.updateGameState();
    
}


    public removeAllGameKeyInputListeners(AllBinaryGameCanvas allBinaryGameCanvas){
allBinaryGameCanvas!.removeAllGameKeyInputListeners2();
    
}


                //@Throws(Exception.constructor)
            
    public updateEndGameProcessor(AllBinaryGameCanvas allBinaryGameCanvas){
allBinaryGameCanvas!.updateEndGameProcessor2();
    
}


                //@Throws(Exception.constructor)
            
    public buildGame(AllBinaryGameCanvas allBinaryGameCanvas){
allBinaryGameCanvas!.buildGame2();
    
}


                //@Throws(Exception.constructor)
            
    public run(AllBinaryGameCanvas allBinaryGameCanvas){
allBinaryGameCanvas!.run2();
    
}


                //@Throws(Exception.constructor)
            
    public setHighScore(AbeClientInformationInterface abeClientInformation, AllBinaryGameCanvas allBinaryGameCanvas, string name, int64_t score, bool autoSubmit, bool isLast){
allBinaryGameCanvas!.setHighScore2(abeClientInformation, name, score, autoSubmit, isLast);
    
}


};

            

