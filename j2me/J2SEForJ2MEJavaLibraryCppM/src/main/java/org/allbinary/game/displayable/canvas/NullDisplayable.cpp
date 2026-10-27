
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/canvas/BaseGameStatistics.h>

      
#include <org/allbinary/canvas/GameStatisticsFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //J2SEForJ2ME
class NullDisplayable: public Canvas {

    private: static NullDisplayable* SINGLETON() { static std::unique_ptr<NullDisplayable> value(new NullDisplayable()); return value.get(); }

    public: static NullDisplayable* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullDisplayable::SINGLETON();
    
}


private: NullDisplayable(){
}


    private: BaseGameStatistics* baseGameStatistics = GameStatisticsFactory::getInstance();

    public: void paint(Graphics* graphics){
this->baseGameStatistics->nextRefresh();
    
}


};

            

