
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDGAMEPROCESSOR_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDGAMEPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/EndGameProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/game/score/HighScores.h>

      
#include <org/allbinary/game/score/HighScoresHelperBase.h>

      
#include <org/allbinary/game/score/NullHighScoresSingletonFactory.h>

      
#include <org/allbinary/game/state/GameStateFactory.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"


EndGameProcessor::EndGameProcessor(AllBinaryGameCanvas* gameCanvas) : gameStateFactory(GameStateFactory::getInstance()){
this->gameCanvas= gameCanvas;
    
}


                //@Throws(Exception.constructor)
            
    auto EndGameProcessor::process() -> void{

                        if(this->gameCanvas->isHighScoreSubmitted())
                        
                                    {
                                    
                        if(this->gameCanvas->getGameStateTimeHelper()->isElapsedTNT(this->WAIT))
                        
                                    {
                                    
                        if(this->gameCanvas->getGameState() == this->gameStateFactory->SHOW_END_RESULT_GAME_STATE)
                        
                                    {
                                    
    HighScoresHelperBase* highScoresBase = dynamic_cast<HighScoresHelperBase*>(this->gameCanvas->highScoresHelper);;
    

    HighScores* highScores = highScoresBase->getSelectedHighScores();;
    

                        if(highScores != NullHighScoresSingletonFactory::getInstance())
                        
                                    {
                                    highScoresBase->selectHighScores();
    
this->gameCanvas->getRealHighScoresPaintable()->setHighScores(highScores);
    
this->gameCanvas->setGameState(this->gameStateFactory->SHOW_HIGH_SCORE_GAME_STATE);
    
this->gameCanvas->setHighScoresPaintable(this->gameCanvas->getRealHighScoresPaintable());
    

                                    }
                                

                                    }
                                
                             else 
                        if(this->gameCanvas->getGameState() == this->gameStateFactory->SHOW_HIGH_SCORE_GAME_STATE)
                        
                                    {
                                    this->gameCanvas->setGameState(this->gameStateFactory->SHOW_END_RESULT_GAME_STATE);
    
this->gameCanvas->setHighScoresPaintable(NullPaintable::getInstance());
    

                                    }
                                

                                    }
                                

                                    }
                                
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDGAMEPROCESSOR_CPP
