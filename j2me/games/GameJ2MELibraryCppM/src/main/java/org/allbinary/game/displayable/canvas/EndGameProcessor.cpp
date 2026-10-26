
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/game/score/HighScores.h>

      
#include <org/allbinary/game/score/HighScoresHelperBase.h>

      
#include <org/allbinary/game/score/NullHighScoresSingletonFactory.h>

      
#include <org/allbinary/game/state/GameStateFactory.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryGameCanvas.h"

class EndGameProcessor: public Processor {

    protected: const GameStateFactory gameStateFactory = GameStateFactory::getInstance();

    private: AllBinaryGameCanvas gameCanvas;

    private: const int64_t WAIT = 5000;

public: EndGameProcessor(AllBinaryGameCanvas gameCanvas){
this->gameCanvas= gameCanvas;
    
}


                //@Throws(Exception.constructor)
            
    public: void process(){

                        if(this->gameCanvas.isHighScoreSubmitted())
                        
                                    {
                                    
                        if(this->gameCanvas.getGameStateTimeHelper().isElapsedTNT(this->WAIT))
                        
                                    {
                                    
                        if(this->gameCanvas.getGameState() == this->gameStateFactory.SHOW_END_RESULT_GAME_STATE)
                        
                                    {
                                    
    HighScoresHelperBase highScoresBase = this->gameCanvas.highScoresHelper;;
    

    HighScores highScores = highScoresBase.getSelectedHighScores();;
    

                        if(highScores != NullHighScoresSingletonFactory::getInstance())
                        
                                    {
                                    highScoresBase.selectHighScores();
    
this->gameCanvas.getRealHighScoresPaintable().setHighScores(highScores);
    
this->gameCanvas.setGameState(this->gameStateFactory.SHOW_HIGH_SCORE_GAME_STATE);
    
this->gameCanvas.setHighScoresPaintable(this->gameCanvas.getRealHighScoresPaintable());
    

                                    }
                                

                                    }
                                
                             else 
                        if(this->gameCanvas.getGameState() == this->gameStateFactory.SHOW_HIGH_SCORE_GAME_STATE)
                        
                                    {
                                    this->gameCanvas.setGameState(this->gameStateFactory.SHOW_END_RESULT_GAME_STATE);
    
this->gameCanvas.setHighScoresPaintable(NullPaintable::getInstance());
    

                                    }
                                

                                    }
                                

                                    }
                                
}


};

            

