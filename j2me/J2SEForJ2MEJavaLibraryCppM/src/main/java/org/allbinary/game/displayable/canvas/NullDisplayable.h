
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLDISPLAYABLE_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLDISPLAYABLE_H

#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/canvas/BaseGameStatistics.h>

      
#include <org/allbinary/canvas/GameStatisticsFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //J2SEForJ2ME
class NullDisplayable: public Canvas {

    private: static const NullDisplayable SINGLETON = NullDisplayable();

    public: static NullDisplayable getInstance();

private: NullDisplayable();

    private: const BaseGameStatistics baseGameStatistics = GameStatisticsFactory::getInstance();

    public: void paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLDISPLAYABLE_H
