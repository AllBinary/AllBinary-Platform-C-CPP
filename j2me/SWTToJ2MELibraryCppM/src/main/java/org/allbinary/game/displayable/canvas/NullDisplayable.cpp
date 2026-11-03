
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLDISPLAYABLE_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLDISPLAYABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/NullDisplayable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/canvas/BaseGameStatistics.h>

      
#include <org/allbinary/canvas/GameStatisticsFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //SWTToJ2ME
auto NullDisplayable::SINGLETON_owner() -> NullDisplayable* { static std::unique_ptr<NullDisplayable> value(new NullDisplayable()); return value.get(); }
NullDisplayable* NullDisplayable::SINGLETON = NullDisplayable::SINGLETON_owner();

    auto NullDisplayable::getInstance() -> NullDisplayable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NullDisplayable::SINGLETON;
    
}


NullDisplayable::NullDisplayable() : baseGameStatistics(GameStatisticsFactory::getInstance()){
}


    auto NullDisplayable::paint(Graphics* graphics) -> void{
this->baseGameStatistics->nextRefresh();
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLDISPLAYABLE_CPP
