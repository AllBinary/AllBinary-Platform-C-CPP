
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class ArtificialIntelligence;
class ArtificialIntelligenceInterface;
class CollidableBaseBehavior;
class CollidableBaseBehaviorFactory;
#include <org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>
class CollidableNeverCollideBehaviorFactory;
class Rectangle;
class RectangleFactory;
class ForcedLogUtil;
class StringMaker;
class StringUtil;
class CommonSeps;
class ViewPositionBase;
class NullUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/AllBinaryGameLayer.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CollidableCompositeLayer: public AllBinaryGameLayer, public CollidableInterfaceCompositeInterface {

    private: static Object* NULL_COLLIDABLE_COMPOSITE_LAYER;

    public: static CollidableCompositeLayer* getNullInstance();

    private: CollidableBaseBehavior* collidableInferface;

public: CollidableCompositeLayer(std::string name, Rectangle* layerInfo, ViewPositionBase* viewPosition, CollidableBaseBehaviorFactory* collidableBaseBehaviorFactory);

    public: ArtificialIntelligenceInterface* getArtificialIntelligenceInterface();

    public: CollidableBaseBehavior* getCollidableInferface();

    public: void setCollidableInferface(CollidableBaseBehavior* collidableInferface);

    public: bool implmentsCollidableInterface();

    public: void toStringAppend(StringMaker* stringBuffer);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_COLLIDABLECOMPOSITELAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_COLLIDABLECOMPOSITELAYER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_COLLIDABLECOMPOSITELAYER_H_COMPLETE
        #if __has_include(<org/allbinary/ai/ArtificialIntelligence.h>)
#include <org/allbinary/ai/ArtificialIntelligence.h>
#endif
#if __has_include(<org/allbinary/ai/ArtificialIntelligenceInterface.h>)
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>
#endif
#if __has_include(<org/allbinary/game/collision/CollidableBaseBehavior.h>)
#include <org/allbinary/game/collision/CollidableBaseBehavior.h>
#endif
#if __has_include(<org/allbinary/game/collision/CollidableBaseBehaviorFactory.h>)
#include <org/allbinary/game/collision/CollidableBaseBehaviorFactory.h>
#endif
#if __has_include(<org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>)
#include <org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/game/collision/CollidableNeverCollideBehaviorFactory.h>)
#include <org/allbinary/game/collision/CollidableNeverCollideBehaviorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/graphics/RectangleFactory.h>)
#include <org/allbinary/graphics/RectangleFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/view/ViewPositionBase.h>)
#include <org/allbinary/view/ViewPositionBase.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include("org/allbinary/game/layer/AllBinaryGameLayer.h")
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"
#endif

        #endif
    
