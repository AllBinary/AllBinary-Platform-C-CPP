
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTORROTATIONGENERATOR_H
        #define ORG_ALLBINARY_ANIMATION_VECTORROTATIONGENERATOR_H

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
#include <org/allbinary/vector/VectorInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VectorAnimationUtil.h"

class VectorRotationGenerator
            : public Object
         {
        

    private: static const instance: VectorRotationGenerator = new VectorRotationGenerator();

    public static VectorRotationGenerator getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const vectorAnimationUtil: VectorAnimationUtil = VectorAnimationUtil.getInstance()!;

private constructor ();

    public std::vector<std::vector<std::vector<int32_t>>> getInstance(VectorInfo vectorRotationInfo);

    private: const angleFactory: AngleFactory = AngleFactory.getInstance()!;

    public std::vector<std::vector<std::vector<int32_t>>> getInstanceFrames(int32_t width, int32_t height, std::vector<std::vector<int32_t>> points, int32_t frames);

                //@Throws(Exception.constructor)
            
    public BasicArrayList getListAtAngle(int32_t width, int32_t height, BasicArrayList pointBasicArrayList, Angle angle);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTORROTATIONGENERATOR_H
