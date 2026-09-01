
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTORMIRRORGENERATOR_H
        #define ORG_ALLBINARY_ANIMATION_VECTORMIRRORGENERATOR_H

            #include <vector>
        
            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VectorAnimationUtil.h"

class VectorMirrorGenerator
            : public Object
         {

    private: static VectorMirrorGenerator instance() { return VectorMirrorGenerator(); }

    public: static VectorMirrorGenerator getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const VectorAnimationUtil vectorAnimationUtil = VectorAnimationUtil::getInstance();

private: VectorMirrorGenerator();

    public: std::vector<std::vector<std::vector<int32_t>>> getInstance(std::vector<std::vector<std::vector<int32_t>>> points, int32_t width);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList getInstance(BasicArrayList pointBasicArrayList, int32_t width);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTORMIRRORGENERATOR_H
