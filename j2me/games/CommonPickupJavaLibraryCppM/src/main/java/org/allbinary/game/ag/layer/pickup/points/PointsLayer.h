
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSLAYER_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSLAYER_H

            #include "../../../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/score/ScoreableInterface.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/view/ViewPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PointsLayer: public AllBinaryLayer {

    private: int32_t points;

public: PointsLayer(int32_t points);

    public: void paint(Graphics graphics);

    public: void visit(ScoreableInterface scoreableInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTSLAYER_H
