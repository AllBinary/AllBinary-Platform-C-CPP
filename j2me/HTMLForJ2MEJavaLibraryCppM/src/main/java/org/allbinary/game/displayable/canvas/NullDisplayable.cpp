
        /* Generated Code Do Not Modify */
        



#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/canvas/BaseGameStatistics.h>

      
#include <org/allbinary/canvas/GameStatisticsFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //HTMLForJ2ME
class NullDisplayable: public Canvas {
        

    private: static const SINGLETON: NullDisplayable = new NullDisplayable();

    public static NullDisplayable getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullDisplayable.SINGLETON;
    
}


private constructor (){

            super();
        }


    private: const baseGameStatistics: BaseGameStatistics = GameStatisticsFactory.getInstance()!;

    public paint(Graphics graphics){
this.baseGameStatistics!.nextRefresh();
    
}


};

            

