
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASINPUTPROCESSORFACTORYINTERFACE_H
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASINPUTPROCESSORFACTORYINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class HighScoresCanvas;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class HighScoresCanvasInputProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HighScoresCanvasInputProcessorFactoryInterface
            : public virtual Object
         {

    public: virtual HighScoresCanvasInputProcessor* getInstance(HighScoresCanvas* highScoresCanvas) = 0;

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASINPUTPROCESSORFACTORYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASINPUTPROCESSORFACTORYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASINPUTPROCESSORFACTORYINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/game/score/displayable/HighScoresCanvas.h>)
#include <org/allbinary/game/score/displayable/HighScoresCanvas.h>
#endif
#if __has_include("org/allbinary/game/score/HighScoresCanvasInputProcessor.h")
#include "org/allbinary/game/score/HighScoresCanvasInputProcessor.h"
#endif

        #endif
    
