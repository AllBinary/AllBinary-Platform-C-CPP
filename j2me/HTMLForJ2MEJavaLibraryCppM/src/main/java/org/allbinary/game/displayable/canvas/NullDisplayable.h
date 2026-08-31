
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLDISPLAYABLE_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLDISPLAYABLE_H

#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/canvas/BaseGameStatistics.h>

      
#include <org/allbinary/canvas/GameStatisticsFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //HTMLForJ2ME
class NullDisplayable: public Canvas {
        

    private: static const SINGLETON: NullDisplayable = new NullDisplayable();

    public static NullDisplayable getInstance();

private constructor ();

    private: const baseGameStatistics: BaseGameStatistics = GameStatisticsFactory.getInstance()!;

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLDISPLAYABLE_H
