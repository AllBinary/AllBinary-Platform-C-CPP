
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLDISPLAYABLE_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLDISPLAYABLE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/canvas/BaseGameStatistics.h>

      
#include <org/allbinary/canvas/GameStatisticsFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //HTMLForJ2ME
class NullDisplayable: public Canvas {

    private: static NullDisplayable* SINGLETON() { static std::unique_ptr<NullDisplayable> value(new NullDisplayable()); return value.get(); }

    public: static NullDisplayable* getInstance();

private: NullDisplayable();

    private: BaseGameStatistics* baseGameStatistics = GameStatisticsFactory::getInstance();

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLDISPLAYABLE_H
