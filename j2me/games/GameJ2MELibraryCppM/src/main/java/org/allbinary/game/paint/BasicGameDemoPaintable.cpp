
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_BASICGAMEDEMOPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_PAINT_BASICGAMEDEMOPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/paint/BasicGameDemoPaintable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/graphics/paint/StatePaintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

BasicGameDemoPaintable::BasicGameDemoPaintable(Paintable* mainDemoStatePaintable, Paintable* ownershipPaintable, Paintable* helpPaintableInterface) : currentStatePaintable(NullPaintable::getInstance()){
this->mainDemoStatePaintable= mainDemoStatePaintable;
    
this->setCurrentStatePaintable(NullPaintable::getInstance());
    
this->ownershipPaintable= ownershipPaintable;
    
this->helpPaintableInterface= helpPaintableInterface;
    
}


    auto BasicGameDemoPaintable::setState(int32_t state) -> void{

                        if(state == 0)
                        
                                    {
                                    this->setCurrentStatePaintable(this->getMainDemoStatePaintable());
    

                                    }
                                
                             else 
                        if(state == 1)
                        
                                    {
                                    this->setCurrentStatePaintable(this->helpPaintableInterface);
    

                                    }
                                
                        else {
                            this->setCurrentStatePaintable(this->ownershipPaintable);
    

                        }
                            
}


    auto BasicGameDemoPaintable::paint(Graphics* graphics) -> void{
this->getCurrentStatePaintable()->paint(graphics);
    
}


    auto BasicGameDemoPaintable::getHelpPaintableInterface() -> Paintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->helpPaintableInterface;
    
}


    auto BasicGameDemoPaintable::setCurrentStatePaintable(Paintable* currentStatePaintable) -> void{
this->currentStatePaintable= currentStatePaintable;
    
}


    auto BasicGameDemoPaintable::getCurrentStatePaintable() -> Paintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentStatePaintable;
    
}


    auto BasicGameDemoPaintable::getMainDemoStatePaintable() -> Paintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->mainDemoStatePaintable;
    
}




        #endif //ORG_ALLBINARY_GAME_PAINT_BASICGAMEDEMOPAINTABLE_CPP
