
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
        



#include <javax/microedition/lcdui/Gauge.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameConfiguration.h"

class GameConfigurationGauge: public Gauge {

public: GameConfigurationGauge(GameConfiguration gameConfiguration) : Gauge(gameConfiguration.getName(), gameConfiguration.isModifiable().valueOf(), gameConfiguration.getMaxValue().intValue() -gameConfiguration.getMinValue().intValue(), gameConfiguration.getValue().intValue() -gameConfiguration.getMinValue().intValue()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


};

            

