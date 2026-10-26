
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
        



#include <org/allbinary/game/score/Scoreable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ScoreHudWidget.h"

class ScoreableAddOnlyForHud: public Scoreable {

    private: ScoreHudWidget scoreHudWidget;

public: ScoreableAddOnlyForHud(ScoreHudWidget scoreVectorGraphic) : Scoreable(0){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->scoreHudWidget= scoreVectorGraphic;
    
this->getScoreHudWidget().set(0);
    
}


    public: void removePoints(int32_t points){
}


    public: void addPoints(int32_t points){
super.addPoints(points);
    
this->getScoreHudWidget().add(points);
    
}


    public: ScoreHudWidget getScoreHudWidget(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scoreHudWidget;
    
}


};

            

