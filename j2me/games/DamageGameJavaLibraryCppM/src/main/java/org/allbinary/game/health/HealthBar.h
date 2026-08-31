
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
        



        #ifndef ORG_ALLBINARY_GAME_HEALTH_HEALTHBAR_H
        #define ORG_ALLBINARY_GAME_HEALTH_HEALTHBAR_H

            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HealthListenerInterface.h"
#include "HealthBarAnimation.h"
#include "HealthInterface.h"
#include "Health.h"

class HealthBar: public Paintable: public HealthListenerInterface {
        

    private: const animationInterface: HealthBarAnimation;

    private: const healthInterface: HealthInterface;

    const allbinaryLayer: AllBinaryLayer;

public constructor (AllBinaryLayer layerInterface, Health healthInterface, HealthBarAnimation animationInterface, int32_t direction);

    public onHealthChange();

    public paint(Graphics graphics);

    public paintThreed(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_HEALTH_HEALTHBAR_H
