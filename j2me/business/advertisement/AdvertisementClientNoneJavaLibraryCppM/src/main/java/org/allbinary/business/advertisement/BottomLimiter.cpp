
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
        



            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/game/GameAdState.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameAdStateFactory.h"

class BottomLimiter
            : public Object
         {
        

    private: static const instance: BottomLimiter = new BottomLimiter();

    public static BottomLimiter getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BottomLimiter.instance;
    
}


    private: bottom: int32_t= 0;

    private: deltaY: int32_t= 0;

    private: lower: int32_t= 0;

    private: higher: int32_t= 0;

private constructor (){

            super();
        }


    public init(int32_t lower, int32_t higher){
this.lower= lower;
    
this.higher= higher;
    
}


    public update(){

    displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;;
    

    gameAdState: GameAdState = GameAdStateFactory.getInstance()!.getCurrentInstance()!;;
    

                        if(gameAdState!.isShowingAt())
                        
                                    {
                                    this.deltaY= this.higher;
    

                                    }
                                
                        else {
                            this.deltaY= this.lower;
    

                        }
                            
this.bottom= displayInfo!.getLastHeight() -this.deltaY;
    
}


    public int32_t getDeltaY(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.deltaY;
    
}


    public int32_t getBottom(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.bottom;
    
}


};

            

