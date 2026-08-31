
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

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/bounds/BoundsVisitorInterface.h>

      
#include <org/allbinary/game/physics/velocity/VelocityInterface.h>

      
#include <org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>

      
#include <org/allbinary/layer/LayerInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ReverseVelocityBoundsVisitor
            : public Object
        : public BoundsVisitorInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    velocityInterface: VelocityInterface;

    private: layerInterface: LayerInterface;

public constructor (LayerInterface layerInterface);

    public int32_t getX();

    public int32_t getY();

    public minX();

    public maxX();

    public minY();

    public maxY();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_REVERSEVELOCITYBOUNDSVISITOR_H
