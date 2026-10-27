
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_REVERSEVELOCITYBOUNDSVISITOR_H
        #define ORG_ALLBINARY_GAME_AG_AI_REVERSEVELOCITYBOUNDSVISITOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/bounds/BoundsVisitorInterface.h>
class VelocityInterface;
class VelocityInterfaceCompositeInterface;
class LayerInterface;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ReverseVelocityBoundsVisitor
            : public virtual Object
        , public BoundsVisitorInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: VelocityInterface* velocityInterface;

    private: LayerInterface* layerInterface;

public: ReverseVelocityBoundsVisitor(LayerInterface* layerInterface);

    public: int32_t getX();

    public: int32_t getY();

    public: void minX();

    public: void maxX();

    public: void minY();

    public: void maxY();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_REVERSEVELOCITYBOUNDSVISITOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_AI_REVERSEVELOCITYBOUNDSVISITOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_AI_REVERSEVELOCITYBOUNDSVISITOR_H_COMPLETE
        #if __has_include(<org/allbinary/bounds/BoundsVisitorInterface.h>)
#include <org/allbinary/bounds/BoundsVisitorInterface.h>
#endif
#if __has_include(<org/allbinary/game/physics/velocity/VelocityInterface.h>)
#include <org/allbinary/game/physics/velocity/VelocityInterface.h>
#endif
#if __has_include(<org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>)
#include <org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/layer/LayerInterface.h>)
#include <org/allbinary/layer/LayerInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif

        #endif
    
