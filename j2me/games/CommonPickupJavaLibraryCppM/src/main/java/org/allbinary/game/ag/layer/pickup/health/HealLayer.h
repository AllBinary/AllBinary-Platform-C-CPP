
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALLAYER_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALLAYER_H

            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/health/HealthInterface.h>

      
#include <org/allbinary/game/health/HealthVisitorInterface.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/view/ViewPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HealLayer: public AllBinaryLayer, public HealthVisitorInterface {

public: HealLayer();

    public: void paint(Graphics graphics);

    public: void visit(HealthInterface healthInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALLAYER_H
