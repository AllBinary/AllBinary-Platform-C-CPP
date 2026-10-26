
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
        



            #include "java/lang/Object.h"
        
#include <org/allbinary/game/GameAdState.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameAdStateFactory.h"

class BottomLimiter
            : public Object
         {

    private: static BottomLimiter instance() { return BottomLimiter(); }

    public: static BottomLimiter getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BottomLimiter::instance();
    
}


    private: int32_t bottom= 0;

    private: int32_t deltaY= 0;

    private: int32_t lower= 0;

    private: int32_t higher= 0;

private: BottomLimiter(){
}


    public: void init(int32_t lower, int32_t higher){
this->lower= lower;
    
this->higher= higher;
    
}


    public: void update(){

    DisplayInfoSingleton displayInfo = DisplayInfoSingleton::getInstance();;
    

    GameAdState gameAdState = GameAdStateFactory::getInstance().getCurrentInstance();;
    

                        if(gameAdState.isShowingAt())
                        
                                    {
                                    this->deltaY= this->higher;
    

                                    }
                                
                        else {
                            this->deltaY= this->lower;
    

                        }
                            
this->bottom= displayInfo.getLastHeight() -this->deltaY;
    
}


    public: int32_t getDeltaY(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->deltaY;
    
}


    public: int32_t getBottom(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->bottom;
    
}


};

            

