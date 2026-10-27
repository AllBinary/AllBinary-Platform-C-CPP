
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_SCORE_SCOREABLEADDONLYFORHUD_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_SCORE_SCOREABLEADDONLYFORHUD_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/score/Scoreable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ScoreHudWidget;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ScoreableAddOnlyForHud: public Scoreable {

    private: ScoreHudWidget* scoreHudWidget;

public: ScoreableAddOnlyForHud(ScoreHudWidget* scoreVectorGraphic);

    public: void removePoints(int32_t points);

    public: void addPoints(int32_t points);

    public: ScoreHudWidget* getScoreHudWidget();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_SCORE_SCOREABLEADDONLYFORHUD_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_SCORE_SCOREABLEADDONLYFORHUD_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_SCORE_SCOREABLEADDONLYFORHUD_H_COMPLETE
        #if __has_include(<org/allbinary/game/score/Scoreable.h>)
#include <org/allbinary/game/score/Scoreable.h>
#endif
#if __has_include("org/allbinary/game/ag/layer/hud/basic/score/ScoreHudWidget.h")
#include "org/allbinary/game/ag/layer/hud/basic/score/ScoreHudWidget.h"
#endif

        #endif
    
