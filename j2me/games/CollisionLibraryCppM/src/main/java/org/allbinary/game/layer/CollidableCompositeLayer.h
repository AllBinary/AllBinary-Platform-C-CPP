
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_COLLIDABLECOMPOSITELAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_COLLIDABLECOMPOSITELAYER_H

#include <org/allbinary/ai/ArtificialIntelligence.h>

      
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/game/collision/CollidableBaseBehavior.h>

      
#include <org/allbinary/game/collision/CollidableBaseBehaviorFactory.h>

      
#include <org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>

      
#include <org/allbinary/game/collision/CollidableNeverCollideBehaviorFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/RectangleFactory.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryGameLayer.h"

class CollidableCompositeLayer: public AllBinaryGameLayer, public CollidableInterfaceCompositeInterface {

    private: static Object* NULL_COLLIDABLE_COMPOSITE_LAYER = NullUtil::getInstance().NULL_OBJECT;

    public: static CollidableCompositeLayer getNullInstance();

    private: CollidableBaseBehavior collidableInferface = CollidableNeverCollideBehaviorFactory::getInstance().createBehavior();

public: CollidableCompositeLayer(std::string name, Rectangle layerInfo, ViewPositionBase viewPosition, CollidableBaseBehaviorFactory collidableBaseBehaviorFactory);

    public: ArtificialIntelligenceInterface getArtificialIntelligenceInterface();

    public: CollidableBaseBehavior getCollidableInferface();

    public: void setCollidableInferface(CollidableBaseBehavior collidableInferface);

    public: bool implmentsCollidableInterface();

    public: void toStringAppend(StringMaker stringBuffer);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_COLLIDABLECOMPOSITELAYER_H
